#include "webServer.h"


#include "webServer.h"
#include <stdio.h> // For perror

int main(void) {
    int soc = socket(AF_INET, SOCK_STREAM, 0);
    if (soc < 0) {
        perror("Socket creation failed");
        return 1;
    }

    int client_fd;
    char buffer[BUFFER] = {0};
    char *f;
    int opened_fd;

    struct sockaddr_in addr = {
        .sin_family = AF_INET,
        .sin_port = htons(1219), // Port 1219 in network byte order
        .sin_addr.s_addr = INADDR_ANY // Any incoming connection
    };

    if (bind(soc, (struct sockaddr*)&addr, sizeof(addr)) < 0) {
        perror("Bind failed");
        return 1;
    }

    if (listen(soc, 100) < 0) {
        perror("Listen failed");
        return 1;
    }

    client_fd = accept(soc, NULL, NULL);
    if (client_fd < 0) {
        perror("Accept failed");
        return 1;
    }

    ssize_t bytes_received = recv(client_fd, buffer, BUFFER - 1, 0);
    if (bytes_received < 0) {
        perror("Receive failed");
        return 1;
    }
    buffer[bytes_received] = '\0'; // Null-terminate the buffer

    /* Parse the requested file */
    f = buffer + 5; // Skip "GET /"
    char *space = strchr(f, ' ');
    if (space != NULL) {
        *space = '\0';
    }

    opened_fd = open(f, O_RDONLY);
    if (opened_fd < 0) {
        perror("File open failed"); // Corrected error logging
        return 1;
    }

    sendfile(client_fd, opened_fd, NULL, BUFFER);
    close(opened_fd);
    close(client_fd);
    close(soc);
    return 0;
}

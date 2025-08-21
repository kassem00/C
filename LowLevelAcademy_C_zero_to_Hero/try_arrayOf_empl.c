#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define MAX_EMPLOYEE 1000

/**
 * struct employee_t - Struct for employee
 * @id: Employee ID
 * @firstname: First name
 * @lastname: Last name
 * @income: Monthly income
 * @ismanager: 1 if manager, 0 if not
 */
typedef struct employee_t
{
	int id;
	char firstname[30];
	char lastname[20];
	float income;
	bool ismanager;
} ST_employee_t;

/**
 * empl_init - initlize the database
 * @employee_db: pointer to db
 * Return: (-1); in error else the db pointer
 *
 */
ST_employee_t *empl_init(void)
{
	ST_employee_t *employee_db;
	employee_db = calloc(MAX_EMPLOYEE, sizeof(ST_employee_t));
	if (employee_db == NULL)
		return (NULL);
	return (employee_db);
}

int main(void)
{
	ST_employee_t *db;

	db = empl_init();
	if (db == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}

	/* Fill the first employee using pointer arithmetic */
	strcpy((db + 0)->firstname, "kassem");
	strcpy((db + 0)->lastname, "saber");
	(db + 0)->id = 0;
	(db + 0)->income = 5000.0;
	(db + 0)->ismanager = 1;

	/* Print to verify */
	printf("Employee: %s %s, ID: %d, Income: %.2f, Manager: %s\n",
				 (db + 0)->firstname,
				 (db + 0)->lastname,
				 (db + 0)->id,
				 (db + 0)->income,
				 ((db + 0)->ismanager ? "Yes" : "No"));

	free(db);
	return (0);
}

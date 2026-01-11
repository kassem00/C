#include "ins.h"




int main(void){
  int arr[12]={2, 8, 1, 12, 3, 11, 10, 4, 9, 5, 7};
  int x, tmp, l = len(arr);
  

for (int i=1 ; i<= l; i++){
  x = i;
  print_array(arr);
  for (int j = x-1; j>=0 && arr[j] > arr[i];j--){
    tmp = arr[i];
    arr[i] = arr[j];
    arr[j]=tmp;
  }
}
print_array(arr);
  return 0;
}

int len(int *arr){
  int i;
  for (i = 0; arr[i] != '\0'; i++);
return i;
}
void print_array(int *arr){
  int x=len(arr);
  
    printf("{");
  for (int i=0; i<x; i++){
    printf(" %d ", arr[i]);
  }
    printf("}\n");
}

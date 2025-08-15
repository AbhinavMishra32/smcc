#include <stdio.h>

int main(){
  int arr[1000];
  int arr2[1000];

  for(int i=0; i<1000; i++) {
    arr[i] = i;
    arr2[i] = arr[i] + 10;
  }

  printf("%d", arr2[500]);

  return 0;
}


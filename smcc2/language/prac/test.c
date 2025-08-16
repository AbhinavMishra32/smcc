#include <stdio.h>

// This generates xmm (simd avx)
/*int main(){
  int arr[1000];
  int arr2[1000];

  for(int i=0; i<1000; i++) {
    arr[i] = i;
    arr2[i] = arr[i] + 10;
  }

  printf("%d", arr2[500]);

  return 0;
}
*/

int yolo = 12;

int main() {
  int x = 10;
  int k = x + 100;
  int l = 32;
  int m = 23;
  int s = yolo + 234;
  printf("%d", yolo);
  return 0;
}

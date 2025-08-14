#include <stdio.h>

 int monkey(int m) {
    int rrrrrrr = m / (m + 224);
    return rrrrrrr;
}

int main(){
    int x = 4234;
    int s = 23234231;
    int k = x + s;
    k = monkey(k);
    printf("%u", &k);
    return 0;
}
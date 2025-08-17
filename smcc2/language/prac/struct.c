#include <stdio.h>

struct TwoNums {
  int first;
  int second;
};

int adder(struct TwoNums t) {
  int r = t.first + t.second;
  return r;
}

int main() {
  struct TwoNums tn;
  tn.first = 12;
  tn.second = 18;

  int k = adder(tn);
  printf("Result!!!!: %d", k);
}

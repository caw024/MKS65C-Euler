#include <stdio.h>

int main(){
  int sum = 0;
  for (int x = 1; x < 1000; x++){
    if (x % 3 == 0 || x % 5 == 0){
      sum += x;
    }
  }
  printf("%d \n", sum);
  return sum;
}

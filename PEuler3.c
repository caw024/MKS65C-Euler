#include <stdio.h>

int main(){
  int x = 450;
  int s = 2;
  while (x > 1){
    if (x % s == 0){
      x = x / s;
      if (x == 1){
	printf("%d \n", x);
	printf("%d \n", s);
	return s;
      }
      s = 2;
    }
    else{
      s += 1;
    }
  }
  return 0;
}

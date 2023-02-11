#include <stdio.h>

int main(){
  int b = 3; 
  int c = 5;
  int* p1 = &b;
  int* p2 = &c;
	p1++;
	p2--;
	printf("%d\n", *p1);
	printf("%d\n", *p2);
}
#include<stdio.h>
void toh(int n,char A,char B,char C) {
   if(n>0) {
      toh(n-1,A,C,B);
      printf("\n%c to %c",A,C);
	printf("\n");
      toh(n-1,B,A,C);
   }
}
int main() {
   int n=3;
   toh(n,'A','B','C');
}

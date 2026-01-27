#include <stdio.h>

int main(){
  int a, b;
	
 //Prompt of input
 printf("Enter two numbers: ");
 scanf("%d %d",&a, &b);

 //Print comparisons with results
 printf("%d < %d: %s\n",a,b,(a<b)? "True":"False");
 printf("%d <= %d: %s\n",a,b,(a <= b)? "True" : "False");
 printf("%d > %d: %s\n",a,b,(a>b)? "True" : "False");
 printf("%d >= %d: %s\n", a,b, (a>=b)? "True" : "False");
 printf("%d == %d: %s\n", a,b, (a == b)? "True" : "False");
 printf("%d != %d: %s\n", a,b, (a != b) ? "True" :"False");

 return 0;
}
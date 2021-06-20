#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int addition(int a,int b) {
	if((b>0 && (a>INT_MAX-b) || (b<0 || a<INT_MIN-b )) {
			printf("overflow condition");
			return -1;
		}
	return a+b;
}
int subtraction(int a,int b) {
	return a-b;
}
int multiplication(int a,int b) {
	return a*b;
}
int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	int sum=addition(a,b);
	printf("sum is %d", sum);
	int diff=subtraction(a,b);
	printf("difference is %d",diff);
	int mul=multiplication(a,b);
	printf("product is %d",mul);
}

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int addition(int a,int b) {
	return a+b;
}
int subtraction(int a,int b) {
	return a-b;
}
int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	int sum=addition(a,b);
	printf("sum is %d", sum);
	int diff=subtraction(a,b);
	printf("difference is %d",diff);
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>

int main(void) {
	int i,a,b,c,d,e,f;
	scanf("%d",&i);
	a = i % 20;
	b = (i - a) / 20;
	c = a % 10;
	d = (a - c) / 10;
	e = c % 5;
	f = (c - e) / 5;
	
	printf("需要用几张20：%d",b);
	printf("需要用几张10：%d", d);
	printf("需要用几张5：%d", f);
	printf("需要用几张1：%d", e);
}
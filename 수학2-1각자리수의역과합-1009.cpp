//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//int main() {     //유효하지 않은값0을 어떻게 제거??
//	int N;
//	char C[10];
//	int len;
//	int sum = 0;
//	scanf("%s", &C);
//	for(;;)
//	{
//
//		N = atoi(C);
//
//		//중단코드
//		if (N == 0)
//			break;
//		
//		//역순출력
//		len = strlen(C);
//		for (int i = len - 1; i >= 0; i--) {
//			if (C[i] == 0) {
//				continue;
//			}
//			else
//				printf("%c", C[i]);
//		}
//		printf(" ");
//
//		//합
//		for (int i = 0; i < len ; i++) {
//			sum += N % 10;
//			N /= 10;
//}
//		printf("%d\n", sum);
//
//		sum = 0;  //합 초기화
//		scanf("%s", C);
//	}
//	
//
//
//
//
//	return 0;
//}
//
//
//////
//////#include <stdio.h>
//////
//////int main(void)
//////{
//////	int a[10], num = 0, i;
//////	for (i = 0; i < 10; i++) {
//////		scanf("%d", &a[i]);
//////		if (a[i] == 0) break;
//////		num++;
//////	}
//////
//////	for (i = 0; i < num; i++) {
//////		int sum = 0;
//////		while (a[i] != 0) {
//////			if ((sum == 0) && (a[i] % 10 == 0)) a[i] = a[i] / 10;
//////			else {
//////				printf("%d", a[i] % 10);
//////				sum += a[i] % 10;
//////				a[i] = a[i] / 10;
//////			}
//////		}
//////
//////		printf(" %d\n", sum);
//////	}
//////
//////	return 0;
//////}

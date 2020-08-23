//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main() {
//	int D, K,A,B;
//	int numarr[40] = { 0, };
//
//	//피보나치수열 저장
//	numarr[0] = 1; numarr[1] = 1;
//	for (int i =2; i < 40; i++) {
//		numarr[i] = numarr[i - 1] + numarr[i - 2];
//	}
//
//	scanf("%d %d", &D, &K);
//	for (A = 1; A < 100; A++) {
//		for (B = A + 1; B < 100; B++) {
//			if (numarr[D - 3] * A + numarr[D - 2] * B == K)
//			{
//				printf("%d\n%d", A, B);
//				return 0;
//			}
//		}
//	}
//	return 0;
//}
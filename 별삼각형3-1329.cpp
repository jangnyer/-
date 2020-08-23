//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void func(int N) {
//	int H = N / 2;
//	for (int i = 0; i < H + 1; i++) {
//		for (int j = 0; j < i; j++)
//			printf(" ");
//		for (int k = 1; k <= 2 * i + 1; k++)
//			printf("*");
//		printf("\n");
//	}
//	for (int l = 0; l < H; l++) {
//		for (int n = H-l-1; n > 0; n--)
//			printf(" ");
//		for (int m = N-2*l-3; m >= 0; m--)
//			printf("*");
//		printf("\n");
//	}
//}
//int main() {
//	int N;
//	scanf("%d", &N);
//
//	if (N > 100 || N % 2 == 0)
//		printf("INPUT ERROR!");
//	else
//		func(N);
//	return 0;
//}

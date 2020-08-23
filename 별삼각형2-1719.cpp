//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void func1(int N, int M) {
//	for (int i = 0; i < N / 2 + 1; i++) {
//		for (int j = 0; j <= i; j++) {
//			printf("*");
//		}printf("\n");
//	}
//	for (int k = 0; k < N / 2; k++) {
//		for (int l = N/2-k; l >0; l--) {
//			printf("*");
//		}printf("\n");
//	}
//}
//
//void func2(int N, int M) {
//	int H = N / 2;
//	for (int i = 0; i < H+1; i++) {
//		for (int j = H - i; j > 0; j--) 
//			printf(" ");
//		for (int k = i; k >= 0; k--) 
//			printf("*");
//		printf("\n");
//	}
//	for (int n = 0; n < H; n++) {
//		for (int m = n; m >= 0; m--)
//			printf(" ");
//		for (int p = H - n; p > 0; p--)
//			printf("*");
//		printf("\n");
//	}
//
//}
//void func3(int N, int M) {
//	int H = N / 2;
//	for (int i = 0; i < H + 1; i++) {
//		for (int j = 0; j < i; j++)
//			printf(" ");
//		for (int k = N-2*i; k > 0; k --)
//			printf("*");
//		printf("\n");
//	}
//	for (int l = 1; l < H+1; l++) {
//			for (int n = H-l; n > 0; n--)
//				printf(" ");
//			for (int p = 0; p <=2*l; p++) {
//				printf("*");
//			}printf("\n");
//	}
//}
//
//void func4(int N, int M) {
//	int H = N / 2;
//	for (int i = 0; i < H + 1; i++) {
//		for (int j = 0; j < i; j++)
//			printf(" ");
//		for (int k = H - i + 1; k > 0; k--) {
//			printf("*");
//		}printf("\n");
//	}
//	for (int l = 1; l <= H; l++) {
//		for (int m = 0; m < H; m++)
//			printf(" ");
//		for (int n = 0; n <= l; n++)
//			printf("*");
//		printf("\n");
//	}
//}
//int main() {
//	int N, M;
//	scanf("%d %d", &N, &M);
//
//	if (N > 100 || N % 2 == 0)
//		printf("INPUT ERROR!");
//	else if (M == 1) 
//		func1(N, M);	
//	else if (M == 2) 
//		func2(N, M);	
//	else if (M == 3) 
//		func3(N, M);	
//	else if (M == 4) 
//		func4(N, M);
//	else
//		printf("INPUT ERROR!");
//
//	return 0;
//}
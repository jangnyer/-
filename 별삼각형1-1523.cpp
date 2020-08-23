//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//
//int main() {
//	int N, M;
//	scanf("%d %d", &N, &M);
//
//	if (N > 100)
//		printf("INPUT ERROR!\n");
//	else if (M == 1) {
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j <= i; j++) {
//				printf("*");
//			}printf("\n");
//		}
//	}
//	else if (M == 2) {
//		for (int k = 0; k < N; k++) {
//			for (int l = N - k; l > 0; l--) {
//				printf("*");
//			}printf("\n");
//		}
//	}
//
//	else if (M == 3) {
//		for (int n = 0; n < N; n++) {
//			for (int m = N - n - 1; m > 0; m--) {
//				printf(" ");
//			}
//			for (int p = 0; p <= n * 2; p++) {
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	else
//		printf("INPUT ERROR!\n");
//	return 0;
//}

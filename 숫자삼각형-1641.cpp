//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void func1(int N) {
//	int num = 1;
//	int level = 1;
//	for (int i = 0; i < N; i++) {
//		if (i % 2 == 0) {
//			for (int j = 0; j <= i; j++) {
//				printf("%d ", num++);
//
//			}
//		}
//		if (i % 2 == 1) {
//			int num1 = num + 2 * level - 1;
//			num = num1 + 1;
//			for (int k = i; k >= 0; k--) {
//				printf("%d ", num1--);
//			}
//			level++;
//		}
//		printf("\n");
//	}
//}
//void func2(int N) {          //완성
//	int num = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < i; j++) {
//			printf("  ");
//		}
//		for (int k = 2*i+1; k < 2 * N; k++) {
//			printf("%d ", num);
//		}
//		printf("\n");
//		num++;
//	}
//}
//void func3(int N) {      //완성
//	int num = 1;
//	for (int i = 0; i < N / 2 + 1; i++) {
//		for (int j = 0; j <= i; j++) 
//			printf("%d ", num++);
//		printf("\n");
//		num = 1;
//	}
//	for (int k = 0; k < N / 2; k++) {
//		for (int n = N/2-k; n > 0; n--)
//			printf("%d ", num++);
//		printf("\n");
//		num = 1;
//	}
//}
////if (m == 3) {
////    for (i = 0; i < n; i++) {
////        for (j = i; j < n - i; j++) {
////            arr[j][i] = i + 1;
////        }
////    }
////}
//int main() {
//	int N, M;
//	scanf("%d %d", &N, &M);
//
//	if (N > 100 || N % 2 == 0)
//		printf("INPUT ERROR!");
//	else if (M == 1)
//		func1(N);
//	else if (M == 2)
//		func2(N);
//	else if (M == 3)
//		func3(N);
//	else
//		printf("INPUT ERROR!");
//
//
//	return 0;
//}
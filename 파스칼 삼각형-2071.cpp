//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void func1(int N, int M) {       //완성
//	int arr[30][30] = { {1} ,{1,1} };
//
//	for (int i = 2; i < N; i++) {
//		for (int j = 1; j < i; j++) {
//			arr[i][0] = 1;
//			arr[i][i] = 1;
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//
//	for (int k = 0; k < N; k++) {
//		for (int l = 0; l <= k; l++) {
//			printf("%d ", arr[k][l]);
//		}printf("\n");
//	}
//}
//
//void func2(int N, int M) {      //완성
//	int arr[30][30] = { {1},{1,1} };
//	for (int i = 2; i < N; i++) {
//		for (int j = 1; j < i; j++) {
//			arr[i][0] = 1;
//			arr[i][i] = 1;
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//
//	for (int n = N-1; n >= 0; n--) {
//		for (int k = 1; k <= N-n-1; k++) {
//			printf(" ");
//		}
//		for (int m = n; m >= 0; m--) {
//			printf("%d ", arr[n][m]);
//		}printf("\n");
//	}
//}
//void func3(int N, int M) {
//	int arr[30][30] = { {1},{1,1} };
//	for (int i = 2; i < N; i++) {
//		for (int j = 1; j < i; j++) {
//			arr[i][0] = 1;
//			arr[i][i] = 1;
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//
//	for (int q = N-1; q >=0;q--) {
//		for (int k = N-1;k>=q;k--) {
//			printf("%d ", arr[k][q]);
//		}printf("\n");
//	}
//}
//
//int main() {
//	int N, M;
//	scanf("%d %d", &N, &M);
//
//	if (M == 1) 
//		func1(N, M);
//	
//	else if (M == 2) 
//		func2(N, M);
//	
//	else if (M == 3) 
//		func3(N, M);
//	
//	return 0;
//}
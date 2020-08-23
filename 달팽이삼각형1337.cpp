//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main() {
//	int N;
//	scanf("%d", &N);
//	int count = 0;
//	int x=-1, y = -1;
//
//	//while문을써서 채울수도있음
//	int arr[100][100];
//	for (int i = 0; i < N; i++) {
//		for (int j = i; j < N; j++) {
//			if (i % 3 == 0) {
//				x++;
//				y++;
//			}
//			else if (i % 3 == 1)
//				y--;
//			else if (i % 3 == 2)
//				x--;
//
//			arr[x][y] = (count++) % 10;
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j <= i; j++) {
//			printf("%d ", arr[i][j]);
//		}printf("\n");
//	}
//
//
//	return 0;
//}
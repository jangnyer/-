//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main() {          //배열오류인듯.. 
//	int N;
//	int x = 0, y = -1;
//	int count = 1;
//	int arr[100][100];
//
//	scanf("%d", &N);
//
//	for (int i = 0; i < 2*N-1; i++) {
//		for (int j = i; j < N; j++) {
//			if (i % 4 == 0)
//				y++;
//			else if (i % 4 == 1)
//				x++;
//			else if (i % 4 == 2)
//				y--;
//			else if (i % 4 == 3)
//				x--;
//			arr[x][y] = (count++) ;
//		}
//	}
//
//
//
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			printf("%d ", arr[i][j]);
//		}printf("\n");
//	}
//
//	return  0;
//}
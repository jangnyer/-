//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//
//int main() {
//	int barea = 0;
//	int area [100][100]= { 0, };
//	int num,x,y;
//
//	scanf("%d", &num);
//	for (int i = 0; i < num; i++) {
//		scanf("%d %d", &x, &y);
//		
//		for (int j = 0; j < 10; j++) {
//			for (int k = 0; k < 10; k++) {
//				area[j + x][k + y] = 1;
//			}
//		}
//	}
//
//	for (int i = 0; i < 100; i++) {
//		for (int j= 0; j < 100; j++) {
//			if (area[i][j] == 1)
//				barea++;
//		}
//	}
//
//	printf("%d", barea);
//
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int area[101][101] = { 0, };
//int lenarea[101][101] = { 0, };
//
//int main() {              //����� �ȵǴ� ���� ����
//	// ����(�ʱ�ȭ)
//
//	int length = 0;
//	int N,x,y;
//
//	//�Է¹ޱ�
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		scanf("%d %d", &x, &y);
//		for (int j =x; j < x + 10; j++) {
//			for (int k = y; k < y + 10; k++) {
//				area[j][k] = 1;
//			}
//		}
//	}
//	for (int i = 0; i < 100; i++) {
//		for (int j = 0; j < 100; j++) {
//			if (area[i][j] == 1) {
//				;
//			}
//		}
//	}
//
//	printf("%d", length);
//	//�ѷ����ϱ�
//	//
//	//for (int i = 0; i < 100; i++) {
//	//	for (int j = 0; j < 100; j++) {
//	//		if (area[i][j] != area[i][j + 1]) {
//	//			length++; lenarea[i][j] = 1;
//	//		}
//	//		if (area[j][i] != area[j][i + 1]){
//	//			length++;  lenarea[j][i] = 1;
//	//	}
//	//		
//	//	}
//	//}
//// ���
//	//for (int i = 0; i < 100; i++) {
//	//	for (int j = 0; j < 100; j++) {
//	//		printf("%d ", area[i][j]);
//	//	}printf("\n");
//	//}
//	//printf("\n");
//	//for (int i = 0; i < 100; i++) {
//	//	for (int j = 0; j < 100; j++) {
//	//		printf("%d ", lenarea[i][j]);
//	//	}printf("\n");
//	//}
//
//
//
//	return 0;
//}
//
////�̷������� ���ϸ� ��ġ�� �κ��� �ߺ���� �Ǵµ�??
////for (int i = 1; i <= 100; ++i)
////{
////	for (int j = 1; j <= 100; ++j)
////	{
////		if (p[i][j] == 1)
////		{
////			if (p[i + 1][j] == 0)
////				res++;
////			if (p[i][j + 1] == 0)
////				res++;
////			if (p[i - 1][j] == 0)
////				res++;
////			if (p[i][j - 1] == 0)
////				res++;
////		}
////	}
////}
//

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main() {
//	int N;
//	scanf("%d", &N);
//	int arr[100][100] = { 0, };
//
//    int x = 1; // �� - ó������ 1
//    int y = N / 2 + 1; // �� - �ʱⰪ �߾�
//    int i; // �迭�� ������� ä�� �� (for ���� ����� ����)
//    int end = N * N; // �迭�� ä�� ������ ��
//
//    for (i = 1; i <= end; i++)   // �迭�� ä�� �� 1���� end����
//    {
//        arr[x][y] = i; // i�� �迭�� ���� ��ġ�� �ִ´�.
//        if (i % N == 0) x++;  // ���� ������ ���� n�� ����̸� �Ʒ��� �̵�
//        else
//        {
//            x--, y--; // ���� ���� �̵�
//            if (x < 1) x = N; // x�� 0�̸� n����
//            if (y < 1) y = N; // y�� 0�̸� n����
//        }
//    }
//
//    for (int j = 1; j <= N; j++) {
//        for (int k = 1; k <= N; k++) {
//            printf("%d ", arr[j][k]);
//        }printf("\n");
//    }
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main() {
//	int N;
//	scanf("%d", &N);
//	int arr[100][100] = { 0, };
//
//    int x = 1; // 행 - 처음에는 1
//    int y = N / 2 + 1; // 열 - 초기값 중앙
//    int i; // 배열에 순서대로 채울 값 (for 문에 사용할 변수)
//    int end = N * N; // 배열에 채울 마지막 값
//
//    for (i = 1; i <= end; i++)   // 배열에 채울 값 1부터 end까지
//    {
//        arr[x][y] = i; // i를 배열의 현재 위치에 넣는다.
//        if (i % N == 0) x++;  // 만약 현재의 수가 n의 배수이면 아래로 이동
//        else
//        {
//            x--, y--; // 왼쪽 위로 이동
//            if (x < 1) x = N; // x가 0이면 n으로
//            if (y < 1) y = N; // y가 0이면 n으로
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

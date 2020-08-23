//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main() {           //규칙 5번이 적용이 안됨
//	char color[6] = { 0, };
//	int num[6] = { 0, };
//	int score = 0;
//	int intbuffer; char charbuffer;
//	//입력받기
//	for (int i = 0; i < 5; i++) {
//		scanf(" %c", &color[i]);
//		scanf("%d", &num[i]);
//	}
//	//카드숫자대로 정렬하기
//	for (int j = 0; j < 5; j++) {
//		for (int i = 0; i < 4; i++) {
//			if (num[i] > num[i + 1]) {
//				intbuffer = num[i];
//				num[i] = num[i + 1];
//				num[i + 1] = intbuffer;
//
//				charbuffer = color[i];
//				color[i] = color[i + 1];
//				color[i + 1] = charbuffer;
//			}
//		}
//	}
//
//	for (int i = 0; i < 5; i++) {
//		printf("%c %d\n", color[i], num[i]);
//	}
//
//	//점수규칙1
//	if (color[0] == color[1] == color[2] == color[3] == color[4] && num[4] == num[3] + 1 == num[2] + 2 == num[1] + 3 == num[0] + 4)
//	{	score = 900 + num[4];
//	printf("%d", score);
//	return 0;
//}
//
//	//규칙2
//	else if (num[0] == num[1] == num[2] == num[3])
//	{	score = 800 + num[0];
//		printf("%d", score);
//		return 0;
//	}
//	else if (num[4] == num[1] == num[2] == num[3])
//	{	score = 800 + num[1];
//		printf("%d", score);
//		return 0;
//	}
//	//규칙3
//	else if (num[0] == num[1] == num[2] && num[3] == num[4])
//	{	score = 700 + num[0] * 10 + num[3];
//		printf("%d", score);
//		return 0;
//	}
//	else if (num[0] == num[1] && num[2] == num[3] == num[4])
//	{	score = 700 + num[3] * 10 + num[0];
//		printf("%d", score);
//		return 0;
//	}
//
//	//규칙4
//	else if (color[0] == color[1] == color[2] == color[3] == color[4])
//	{	score = 600 + num[4];
//		printf("%d", score);
//		return 0;
//	}
//
//	//규칙5
//	else if (num[4] == num[3] + 1 == num[2] + 2 == num[1] + 3 == num[0] + 4)
//	{	score = 500 + num[4];
//		printf("%d", score);
//		return 0;
//	}
//
//	//규칙6
//	else if (num[0] == num[1] == num[2])
//	{	score = 400 + num[0];
//		printf("%d", score);
//		return 0;
//	}
//	else if (num[1] == num[2] == num[3])
//	{	score = 400 + num[1];
//		printf("%d", score);
//		return 0;
//	}
//	else if (num[2] == num[3] == num[4])
//	{	score = 400 + num[2];
//		printf("%d", score);
//		return 0;
//	}
//
//	//규칙7
//	else if (num[0] == num[1] && num[2] == num[3])
//	{	score = 300 + num[1] + num[3] * 10;
//		printf("%d", score);
//		return 0;
//	}
//	else if (num[0] == num[1] && num[4] == num[3])
//	{	score = 300 + num[1] + num[3] * 10;
//		printf("%d", score);
//		return 0;
//	}
//	else if (num[1] == num[2] && num[3] == num[4])
//	{	score = 300 + num[1] + num[3] * 10;
//		printf("%d", score);
//		return 0;
//	}
//
//	//규칙8
//	else if (num[0] == num[1])
//	{	score = 200 + num[1];
//		printf("%d", score);
//		return 0;
//	}
//	else if (num[1] == num[2] )
//	{	score = 200 + num[1];
//	printf("%d", score);
//	return 0;
//}
//	else if ( num[2] == num[3])
//	{	score = 200 + num[2];
//	printf("%d", score);
//	return 0;
//}
//	else if ( num[4] == num[3])
//		{	score = 200 + num[3];
//	printf("%d", score);
//	return 0;
//}
//
//	//규칙9
//	else {
//		score = 100 + num[4];
//		printf("%d", score);
//		return 0;
//	}
//	//점수 출력하기
//
//}
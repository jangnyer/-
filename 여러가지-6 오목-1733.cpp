#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	//����
	int baduk[20][20] = { 0, };
	int x=0, y=0,win;
	//�ٵϻ�Ȳ�Է¹ޱ�
	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			scanf("%d", &baduk[i][j]);
		}
}
	//�º� ������
	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			if (baduk[i][j] == 1)    //������ �߰�
			{
				if (baduk[i][j + 1] == baduk[i][j + 2] == baduk[i][j + 3] == baduk[i][j + 4] == 1 && baduk[i][j + 5] != 1)
				{
					win = 1;
					x = i; y = j; break;
				}
				else if (baduk[i + 1][j] == baduk[i + 2][j] == baduk[i + 3][j] == baduk[i + 4][j] == 1&& baduk[i+5][j] != 1)
				{	win = 1;		x = i; y = j; break;
			}
				else if (baduk[i + 1][j + 1] == baduk[i + 2][j + 2] == baduk[i + 3][j + 3] == baduk[i + 4][j + 4] == 1&& baduk[i+5][j + 5] != 1)
				{	win = 1;		x = i; y = j; break;
		}
			}
			else if (baduk[i][j] == 2)  //�� �߰�
			{
				if (baduk[i][j + 1] == baduk[i][j + 2] == baduk[i][j + 3] == baduk[i][j + 4] == 2 && baduk[i][j + 5] != 2)
				{	win = 2;		x = i; y = j; break;
				}
				else if (baduk[i + 1][j] == baduk[i + 2][j] == baduk[i + 3][j] == baduk[i + 4][j] == 2 && baduk[i + 5][j] != 2)
				{	win = 2;		x = i; y = j; break;
}
				else if (baduk[i + 1][j + 1] == baduk[i + 2][j + 2] == baduk[i + 3][j + 3] == baduk[i + 4][j + 4] == 2 && baduk[i + 5][j + 5] != 2)
				{	win = 2;		x = i; y = j; break;
				}

			}
			else
				win = 0;

		}
}
	//����ϱ�
	printf("%d\n%d %d", win,x, y);

	return 0;
}
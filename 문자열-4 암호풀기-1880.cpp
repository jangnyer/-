//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//
////��������� �ȉ�
////��ȯ�� ���� �̻�
//
//int main() {
//	char key[27];
//	char alpha[27] = {0, };
//	char lock[81] = { 0, };
//	char lowalpha[81] = { 0, };
//	char num = 97;
//	for (int i = 0; i < 26; i++)
//	{
//		alpha[i] = num;
//		num++;
//	}
//
//
//	scanf("%s\n", key);
//	//������ �ִ� ���ڿ� �Է¹ޱ�(\n���ö����� �Է¹���)
//	//scanf("%[^\n]s", lock);
//	gets_s(lock, 80);
//	int len = strlen(lock);
//
//	//�빮�� �ҹ��ڷ� ��ȯ�ؼ� ����
//	for (int i = 0; i < len ; i++) {
//		if (lock[i] >= 'A' && lock[i] <= 'Z')
//			lowalpha[i] = lock[i] - 'A' + 'a';
//		else if (lock[i] >= 'a' && lock[i] <= 'z')
//			lowalpha[i] = lock[i];
//		else 
//			lowalpha[i] = ' ';
//	}
//
//	for (int i = 0; i < len ; i++) {
//		for(int j=0;j<27;j++){
//			if (lock[i] == ' ') {
//				printf(" "); break;
//			}
//			else if (lock[i] !=' ') {
//				if (lowalpha[i] == alpha[j]) {
//					if (lock[i] >= 'A' && lock[i] <= 'Z')//�빮���϶�
//						printf("%c", key[j]-'a'+'A');
//					else if (lock[i] >= 'a' && lock[i] <= 'z')//�ҹ��� �϶�
//						printf("%c",key[j]);
//				/*	else
//						printf("");*/
//				}
//			}
//		}
//	}
//
//
//	return 0;
//}
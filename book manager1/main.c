#include "list.h"
#include "list1.h"
int main() {
	char ch;
	sqlist l;
	initlist(&l);
	elemtype e;
	int i;
	while (1) {
		system("cls");
		printf("*********************��ӭʹ��ͼ�����ϵͳ************************\n");
		printf("(1)����ͼ����Ϣ\n");
		printf("(2)����ͼ�������в���\n");
		printf("(3)����ָ��λ�ý��в���\n");
		printf("(4)����ͼ����Ϣ��ָ��λ��\n");
		printf("(5)ɾ��ָ��λ�õ�ͼ���¼\n");
		printf("(6)ͳ�Ʊ���ͼ����\n");
		ch=getch();
		switch (ch) {
		case '1': {
			printf("������ͼ�����Ϣ\n");
			printf("���\t����\t����\n");
			scanf("%s", &e.no);
			scanf("%s", &e.name);
			scanf("%s", &e.price);
			printf("���������λ��\n");
			scanf("%d", &i);
			listinsert(&l, i, e);
			listtraverse(l, print);
		};break;

		}
	}
			
}
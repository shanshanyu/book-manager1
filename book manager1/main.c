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
		printf("(1)����ͼ����Ϣ��ָ��λ��\n");
		printf("(2)����ͼ�������в���\n");
		printf("(3)����ָ��λ�ý��в���\n");
		printf("(4)ɾ��ָ��λ�õ�ͼ���¼\n");
		printf("(5)ͳ�Ʊ���ͼ����\n");
		printf("����������");
		ch = getchar();
		printf("\n");
		switch (ch) {
		case '1':
			printf("������š�����������\n");
			scanf("%s", e.no);
			scanf("%s", e.name);
			scanf("%s", e.price);
			printf("�������λ��\n");
			scanf("%d", &i);
			listinsert(&l, i, e);
			printf("�������\n");
			system("pause");break;
		case '2':
			printf("����ͼ����\n");
			scanf("%s", e.name);
			i = locateelem(l, e.name);
			if (i >= 1) printf("ͼ����%dλ��\n", i);
			else printf("û�и�ͼ��\n");
			system("pause");
			break;
		case '3':
			printf("����ͼ��λ��\n");
			scanf("%d", &i);
			if (getelem(l, i, &e) == 1) print(&e);
			else printf("�������\n");
			system("pause");
			break;
		case '4':
			printf("ɾ���ĸ�λ�õ�ͼ��\n");
			scanf("%d", &i);
			if (listdelete(&l, i, &e) == 1) {
				printf("ɾ���ɹ�\n");
				print(&e);
			}
			else printf("ɾ��ʧ��\n");
			system("pause");
			break;
		case '5':
			printf("һ����%d����\n", listlength(l));
			system("pause");
			break;
		default:printf("input error\n");
		}
	}
	destroylist(&l);
}
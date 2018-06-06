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
		printf("*********************欢迎使用图书管理系统************************\n");
		printf("(1)插入图书信息到指定位置\n");
		printf("(2)根据图书名进行查找\n");
		printf("(3)根据指定位置进行查找\n");
		printf("(4)删除指定位置的图书记录\n");
		printf("(5)统计表中图书数\n");
		printf("输入索引：");
		ch = getchar();
		printf("\n");
		switch (ch) {
		case '1':
			printf("输入书号、书名、定价\n");
			scanf("%s", e.no);
			scanf("%s", e.name);
			scanf("%s", e.price);
			printf("输入插入位置\n");
			scanf("%d", &i);
			listinsert(&l, i, e);
			printf("插入完成\n");
			system("pause");break;
		case '2':
			printf("输入图书名\n");
			scanf("%s", e.name);
			i = locateelem(l, e.name);
			if (i >= 1) printf("图书在%d位置\n", i);
			else printf("没有该图书\n");
			system("pause");
			break;
		case '3':
			printf("输入图书位置\n");
			scanf("%d", &i);
			if (getelem(l, i, &e) == 1) print(&e);
			else printf("输入错误\n");
			system("pause");
			break;
		case '4':
			printf("删除哪个位置的图书\n");
			scanf("%d", &i);
			if (listdelete(&l, i, &e) == 1) {
				printf("删除成功\n");
				print(&e);
			}
			else printf("删除失败\n");
			system("pause");
			break;
		case '5':
			printf("一共有%d本书\n", listlength(l));
			system("pause");
			break;
		default:printf("input error\n");
		}
	}
	destroylist(&l);
}
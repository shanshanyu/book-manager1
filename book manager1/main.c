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
		printf("(1)输入图书信息\n");
		printf("(2)根据图书名进行查找\n");
		printf("(3)根据指定位置进行查找\n");
		printf("(4)插入图书信息到指定位置\n");
		printf("(5)删除指定位置的图书记录\n");
		printf("(6)统计表中图书数\n");
		ch=getch();
		switch (ch) {
		case '1': {
			printf("请输入图书的信息\n");
			printf("书号\t书名\t定价\n");
			scanf("%s", &e.no);
			scanf("%s", &e.name);
			scanf("%s", &e.price);
			printf("请输入插入位置\n");
			scanf("%d", &i);
			listinsert(&l, i, e);
			listtraverse(l, print);
		};break;

		}
	}
			
}
#ifndef LIST_H
#define LIST_H
#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define OK 1
#define ERROR 0
#define LIST_INIT_SIZE 10
#define INCREMENT 2
typedef int status;
typedef struct book {
	char no[8];//8λ���
	char name[20];//20λ����
	char price[8];//����
}elemtype;
typedef struct {
	elemtype *elem;
	int length;
	int listsize;
}sqlist;
#endif
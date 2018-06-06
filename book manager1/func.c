#include "list.h"
status initlist(sqlist *l){  //初始化顺序表
	l->elem = malloc(sizeof(elemtype)*LIST_INIT_SIZE);
	if (!l->elem) return ERROR;
	l->length = 0;
	l->listsize = LIST_INIT_SIZE;
	return OK;
}

status destroylist(sqlist *l) {  //销毁顺序表
	free(l->elem);
	l->elem = NULL;
	l->length = 0;
	l->listsize = 0;
	return OK;
}

status listinsert(sqlist *l,int i,elemtype e) {  //顺序表的插入
	elemtype *p, *q, *new;
	if (i<1 || i>l->length + 1) return ERROR;
	if (l->length >= l->listsize) {
		new = realloc(l->elem,sizeof(int)*(l->listsize + INCREMENT));
		if (!new) return ERROR;
		l->elem = new;
		l->listsize += INCREMENT;
	}
	q = l->elem + i - 1;
	for (p = l->elem + l->length-1;q <= p;p--)
		*(p + 1) = *p;
	*q = e;
	l->length++;
	return OK;
}

status listdelete(sqlist *l, int i, elemtype *e) {
	elemtype *p, *q;
	if (i<1 || i>l->length) return ERROR;
	p = l->elem + i - 1;
	*e = *p;
	for (q = p + 1;q <= l->elem + l->length - 1;q++)
		*(q - 1) = *q;
	l->length--;
	return OK;
}

void print(elemtype *p) {
	printf("书号：%s\t", p->no);
	printf("书名：%s\t", p->name);
	printf("定价：%s\n", p->price);
}

status listtraverse(sqlist l,void (*vi)(elemtype *)) {
	int i;
	elemtype *p = l.elem;
	for (i = 1;i <= l.length;i++) {
		vi(p);
		p++;
	}
	return OK;
}

int listlength(sqlist l) {
	return l.length;
}

int locateelem(sqlist l, char *s) {
	elemtype *p = l.elem;
	int i;
	for (i = 1;i <= l.length;i++) {
		if (!strcmp(p->name, s)) return i;
		p++;
	}
	return -1;
}

status getelem(sqlist l, int i, elemtype *e) {
	if (i<1 || i>l.length) return ERROR;
	*e = *(l.elem + i - 1);
	return OK;
}
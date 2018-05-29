#include "list.h"
status initlist(sqlist *l){  //��ʼ��˳���
	l->elem = malloc(sizeof(int)*LIST_INIT_SIZE);
	if (!l->elem) return ERROR;
	l->length = 0;
	l->listsize = LIST_INIT_SIZE;
	return OK;
}

status destroylist(sqlist *l) {  //����˳���
	free(l->elem);
	l->elem = NULL;
	l->length = 0;
	l->listsize = 0;
	return OK;
}

status listinsert(sqlist *l,int i,elemtype e) {  //˳���Ĳ���
	elemtype *p, *q, *new;
	if (i<1 || i>l->length + 1) return ERROR;
	if (l->length >= l->listsize) {
		new = realloc(l->elem,sizeof(int)*(LIST_INIT_SIZE + INCREMENT));
		if (!new) return ERROR;
		l->elem = new;
	}
	q = l->elem + i - 1;
	for (p = l->elem + l->length;q <= p;p--)
		*(p + 1) = *p;
	*q = e;
	l->length++;
	return OK;
}

void print(elemtype *p) {
	printf("��ţ�%s\t", p->no);
	printf("������%s\t", p->name);
	printf("���ۣ�%s\n", p->price);
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
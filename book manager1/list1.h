extern status initlist(sqlist *l);
extern status destroylist(sqlist *l);
extern status listinsert(sqlist *l, int i, elemtype e);
extern status listtraverse(sqlist l, void(*vi)(elemtype *));
extern void print(elemtype *p);
extern int listlength(sqlist l);
extern int locateelem(sqlist l, char *s);
extern status getelem(sqlist l, int i, elemtype *e);
extern status listdelete(sqlist *l, int i, elemtype *e);
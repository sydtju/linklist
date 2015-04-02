//对应于链表反转 cpp
#ifndef LINKLIST_H
#define LINKLIST_H
typedef struct node{
	int data;
	node *next;
}node;
node* reverse(node *linklist);
void display(node *linklist);
node * create_linklist(const unsigned int count);
#endif

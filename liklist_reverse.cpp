#include"linklist.h"
#include<iostream>
using namespace std;
//链表创建
node * create_linklist(const unsigned int count){
	node *temp=NULL;
	node *start=NULL;
	node *rear=NULL;
	node *true_head=NULL;
	unsigned int count_temp=count;
	try{
		temp=new node;
	}
	catch(bad_alloc){
		throw "memory is not enough!";
		return NULL;
	}
	temp->data=-1;
	temp->next=NULL;
	start=temp;
	while(count_temp){
		try{
		rear=new node;
		}
		catch(bad_alloc){
			throw "memory is not enough!";
			return NULL;
		}
		rear->data=count_temp;
		rear->next=NULL;
		start->next=rear;
		start=rear;
		count_temp--;
	}
	true_head=temp->next;
	delete temp;
	return true_head;
}
//链表倒序
node* reverse(node *linklist){
	node* head=linklist;
	node* new_head=NULL;
	node* old_head=NULL;
	node* old_next=NULL;
	new_head=NULL;
	old_head=head;
	if(NULL==linklist||NULL==linklist->next) return NULL;
	old_next=head->next;

	while(old_head){
		old_next=old_next->next;
		old_head->next=new_head;
		new_head=old_head;
		old_head=old_next;
	}
	return new_head;
}
void display(node *linklist){
	node *temp=linklist;

	while(temp){
		cout<<"  "<<temp->data;
		temp=temp->next;
	}
}

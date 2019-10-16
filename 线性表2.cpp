#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LIST_INIT_SIZE 100
#define LISTINCREMENT  10
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

typedef struct Node{
	int    data;          
    Node  *next;
    int length;
    int listsize;
}Node,*LNode;

int Creat_List(LNode &p){
	LNode L=NULL;    //头指针 
	//LNode Head;
	LNode t;         //实时指针 
	L=(Node *)malloc(sizeof(Node));  //头结点 
	L->data=NULL;
	L->next=NULL; 
	t=L;
	int temp;
	printf("请输入一个数:");
	scanf("%d\n",&temp);
	LNode node;
	while(temp!=-1){	
		node=(Node *)malloc(sizeof(Node));
		t->next=node;
		node->data=temp;
		node->next=NULL;
		
		t=node;          //  指向当前节点 
		printf("请输入一个数:");
	    scanf("%d\n",&temp);	
	}
	printf("%d\n",L->data);
	printf("%d\n",t->data);
	return 0;
}

int Print_List(LNode &L){
	LNode p;
	p=L->next;
	printf("%d\n",p->data);
	printf("请输入");
}
int main(){
	LNode L;
	Creat_List(L);
	Print_List(L);
	return 0;
}

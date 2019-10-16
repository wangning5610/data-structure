#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
typedef  struct Node{
	int data;             //数据域 
	struct Node *next;    //指针域 
}Node,*LNode;

void  Creat_List(Node p){
	//头指针 
	LNode L;
	//头节点 
	L=(Node *)malloc(sizeof(Node));  
	L->data=NULL;
	L->next=NULL;
	//L.length=0;
	//L.listsize=LIST_INIT_SIZE;	
  printf("Creat线性表\n");
} 

void insert_List(Node &p,int i,int e){
	//if(i<1||i>L.length+1)  return ERROR;
	LNode q;
	//让q指向链表的头节点 
	q=&p;
	//让q移到插入位置上
	for(int j=0;j<i;j++){
		q=q->next;
	 } 
	//为新插入的元素创建节点 
	LNode s=(LNode)malloc(sizeof(Node));
	//使插入的元素放入新创建的节点 
	s->data=e;
	//使新节点链接上后继节点 
	s->next=q->next;
	//使新节点链接上前继节点
	q->next=s;
	printf("insert线性表\n");
} 
void Printf_List(Node &p,int i){
    LNode q;
	q=&p;
	for(int j=0;j<i;j++){
		q=q->next;
	 } 
	 printf("线性表第%d个元素：%d\n",i,q->data);
	 printf("Printf线性表\n");

}
void Delete_List(Node &p,int i){
	LNode q;
	q=&p;
	for(int j=0;j<i;j++){
		q=q->next;
	 } 
	 free(q);
	  printf("Delete线性表\n");

}
int main(){
	Node A;
	Creat_List(A);
	insert_List(A,0,9);
	insert_List(A,1,8);
	insert_List(A,2,7);
	insert_List(A,3,6);
	insert_List(A,4,5);
	insert_List(A,5,4);
	insert_List(A,6,2);
	int i,n;
	/*while(~scanf("%d",&n)){
	if(n==666)	exit(0.0);
	if(n>7)
		printf("error!!!\n");
	else{
	for(i=0;i<n;i++)
		Printf_List(A,i);
	}
	}*/
	Delete_List(A,0);
	Delete_List(A,1);
	Delete_List(A,2);
	Delete_List(A,3);
	Delete_List(A,4);
	Delete_List(A,5);
	Delete_List(A,6);
	while(~scanf("%d",&n)){
	if(n==666)	exit(0.0);
	if(n>7)
		printf("error!!!\n");
	else{
	for(i=0;i<n;i++)
		Printf_List(A,i);
	}
	}
}

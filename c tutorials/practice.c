/*#include<stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
struct node* newNode,*temp;

void createLL(){
    int choice=1;
    while(choice!=0){
newNode=(struct node*)malloc(sizeof(struct node));
printf("enter data  :");
scanf("%d",&newNode->data);
newNode->next=0;
if(head==0){
    head=temp=newNode;
}else{
    temp->next=newNode;
    temp=newNode;
}
printf("do you want a new node  :");
scanf("%d",&choice);
}
}
void insertAtStart(){
    newNode=(struct node*)malloc(sizeof(struct node));
    printf("enter data you want to insert  :");
    scanf("%d", &newNode->data);
    newNode->next=head;
    head=newNode;
    }
void insertAtEnd(){
    newNode=(struct node*)malloc(sizeof(struct node));
    printf("enter data which you want at insert at the end  :");
    scanf("%d",&newNode->data);
    newNode->next=0;
    temp=head;
    while(temp->next!=0){
        temp=temp->next;
    }temp->next=newNode;
}
void insertAtPos(){
    int pos;
    int i=1;
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->next=0;
    printf("enter the position :");
    scanf("%d",&pos); 
        temp=head;
        while(i<pos){
            temp=temp->next;
            i++;
        }
        printf("enter the data :");
        scanf("%d",&newNode->data);
        newNode->next=temp->next;
        temp->next=newNode;
}
void delFromBegg(){
    if(head==0){
        printf("empty list");
    }
    else{
    temp=head;
    head=head->next;
    free(temp);
}
}
void delFromEnd(){
   struct node* prev;
   temp=head;
   while(temp->next!=0){
    prev=temp;
    temp=temp->next;
   }
   if(temp==head){
    head=0;
    free(temp);
   }
   else{
    prev->next=0;
    free(temp);
   }
}
void delFromPos(){
    int pos;
    int i=1;
    temp=head;
    struct node* nextNode;
    printf("enter the pos");
    scanf("%d",&pos);
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    nextNode=temp->next;
    temp->next=nextNode->next;
    free(nextNode);
}
void getLen(){
    int count=0;
    temp=head;
    while(temp!=0){
        count++;
        temp=temp->next;
    }
    printf("length is %d  \n",count);
}
void reverse(){
    struct node* prevNode,* currNode,*nextNode;
    prevNode=0;
    currNode=nextNode=head;
    while(nextNode!=0){
        nextNode=currNode->next;
        currNode->next=prevNode;
        prevNode=currNode;
        currNode=nextNode;
    }
    head=prevNode;
}
void printLL(){
temp=head;
while(temp!=0){
    printf("%d -> ",temp->data);
    temp=temp->next;
}
printf("NULL \n");
}
int  main()
{
    createLL();
    printLL();
    getLen();
    reverse();
    printLL();
    getchar();
    return 0;
}*/
#include<stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};
int ch=1;
struct node* head,*tail,*newNode,*temp;
// creation of linked list
void createDLL(){
    head=0;
    while(ch!=0){
    newNode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data :");
    scanf("%d",&newNode->data);
    newNode->next=0;
    newNode->prev=0;
    if(head==0){
        head=temp=newNode;
    }
    else{
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
    
    printf(" do you want an newnode :");
    scanf("%d",&ch);
}
}
void insertAtBeg(){
    newNode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data yoou want to insert");
    scanf("%d",&newNode->data);
    head->prev=newNode;
    newNode->next;
    head=newNode;
}
void display(){
    temp=head;
    while(temp!=0){
        printf("%d <=>",temp->data);
        temp=temp->next;
    }
    printf("NULL \n");
}
int main(){
    createDLL();
     display();
     insertAtBeg();
     display();
    getchar();
}



  

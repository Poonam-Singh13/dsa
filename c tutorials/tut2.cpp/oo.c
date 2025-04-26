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
    while(ch){
    newNode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data :");
    scanf("%d",&newNode->data);
    newNode->next=0;
    newNode->prev=0;
    if(head==0){
        head=temp=newNode;
    }
    else{
        temp->next=newNode;
        newNode->prev=temp;
        temp=newNode;
    }
    }
    printf(" do you want an newnode :");
    scanf("%d",&ch);
}
void display(){
    temp=head;
    while(temp!=0){
        printf("%d <=>",temp->data);
        temp=temp->next;
    }
}
int main(){
    void createDLL();
    void display();
    getchar();
}

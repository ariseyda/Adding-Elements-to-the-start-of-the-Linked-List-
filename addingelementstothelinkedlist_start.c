#include<stdio.h>
#include<stdlib.h>

//Adding Elements to the start of the Linked List 

struct node{
	int data;
	struct node* next;
};

struct node* start=NULL;
struct node* temp=NULL;
struct node* q=NULL;

void addStart(int _data){
	
	struct node* addednode=(struct node*)malloc(sizeof(struct node));

	addednode->data=_data;
	addednode->next=start;
	start=addednode;
	
	
	
}

void printNode(){
	
	q=start;
	while(q->next!=NULL){
		printf("%d=>",q->data);
		q=q->next;
	}
	printf("%d",q->data);
	
	
}

int main(){
	
	int addedData;
	
	while(1){
    	printf("\nEnter the value to be added at the start:");
	    scanf("%d",&addedData);
	    addStart(addedData);
	    printNode();
	}
	

	return 0;
}

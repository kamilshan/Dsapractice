#include <stdio.h>
#include <stdlib.h>
 
 
 
 
 void count_of_nodes(struct node *head);
 void adding_node_at_end(struct node *head,int data);
 void printing_linked_list(struct node *head);
 
 struct node {
     int data;
     struct node *link;
     
 }
 int main()
 {
     struct node *head= (struct node *)malloc(sizeof(struct node));
     head->data=55;
     head->link=NULL;
      
      struct node *current =(struct node *)malloc(sizeof(struct node));
      current->data=66;
      current->link=NULL;
      head->link=current;
      
       current =(struct node *)malloc(sizeof(struct node));
       current->data=22;
       current->link= NULL;
       head->link->link=current;
       count_of_nodes(head);
       
       
      return 0;
     
 }
 void count_of_nodes(struct nodes *head){ // traversing function
     int count=0;
     if(head==NULL)
     printf("linked list is empty");
     struct node *ptr=NULL;
     ptr=head;
     while(ptr != NULL){
         count++;
         ptr=ptr->link;
     }
     printf("%d",count);
     
 }
 void adding_node_at_end(struct node *head,int data){ // adding node at the end of the linked list
    struct node *ptr=NULL;
    ptr=head;
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    while(ptr->link != NULL){
        ptr=ptr->link;

    }
    ptr->link=temp;
 }
    void printing_linked_list(struct node *head){ // printing the linked list
        struct node *ptr=NULL;
        ptr=head;
        while(ptr != NULL){
            printf("%d ",ptr->data);
            ptr=ptr->link;
        }
    }
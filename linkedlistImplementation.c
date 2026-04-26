#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

       struct node{
           int data;
           struct node *link;
       }
       int main(){
           struct node *head=NULL;
           head= (struct node *)malloc(sizeof(struct node));
           head->data=77;
           head->link=NULL;
     
       struct note *current=malloc(sizeof(struct node));
       current->data=88;
       current->link=NULL;
       head->link=current;
        
         current=malloc(sizeof(struct node));
         current->data=77;
         current->link=NULL;
         head->link->link=current;
        
         return 0;
         
       
       }
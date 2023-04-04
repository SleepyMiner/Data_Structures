#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
}*head;

void insertinbetween(int pos, int item){
    struct node *temp;
    temp =  malloc(sizeof(struct node));
    temp->data = item;
    temp->next = NULL;
    if(pos == NULL){
        printf("Enter a valid position");
    }
    else{
        struct node *q,*r;
        q = head;
        for(int i = 1; i < pos; i++){
            r = q;
            q = q->next;
        }
        r->next = temp;
        temp->next = q;

    }
}
void insert(int item){
    struct node *temp, *q;
    temp = malloc(sizeof(struct node));
    temp->data = item;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
    }
    else{
            q = head;
        while(q->next != NULL){
            q = q->next;
        }
        q->next = temp;
    }

}

void display(){
    if(head == NULL){
        printf("The list is empty");
    }
    else{
        struct node *q = head;
        while(q != NULL){
            printf("\n%d",q->data);
            q = q->next;
        }
    }
}

void del(){
struct node *q, *r;
if(head == NULL){
    printf("List is empty");
}
else{
    q = head;
    while(q->next != NULL){
        r = q;
        q = q->next;
    }
    r->next = NULL;
    printf("\nThe deleted item is %d",q->data);
    free(q);
    }
}

void delbeg(){
    if(head == NULL){
        printf("The list is empty");
    }
    else{
        head = head->next;
    }
}

void delanyitem(int item){
    if(item == NULL){
        printf("Enter a valid value");
    }
    else if(head == NULL){
        printf("List is empty");
    }
    else if(head->data == item){
            printf("\nThe deleted item is %d",item);
        head = head->next;
    }
    else{
        struct node *q, *r;
        q = head;
        while(q !=  NULL){
               if(q->data == item){
                    r->next = q->next;
                    printf("\nThe deleted item is %d", item);
                    q->next = NULL;
                    free(q);
                    break;
               }
               else{
               r = q;
               q = q->next;
               }
        }
    }

}


int main(){

//insertatbeg(int item);

insert(10);
insert(20);
display();
del();
display();
insert(30);
insert(40);
insertinbetween(2,25);
display();
delbeg();
display();
delanyitem(25);
display();
//printf("\n%d",head->data);

return 0;
}

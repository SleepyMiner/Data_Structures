#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* link;

}*head;
void insert(int item){
    struct Node* temp = malloc(sizeof(struct Node));
    struct Node* q;
    temp->data = item;
    temp->link = NULL;

    if(head == NULL){
        head = temp;
    }
    else{
        q = head;
        while(q->link != NULL){
            q = q->link;
        }
        q->link = temp;

    }
}
void display(){
    struct Node* q;
    if(head == NULL){
        printf("The list is empty");
    }
    else{
        q = head;
        while(q != NULL){
            printf("\n%d",q->data);
            q = q->link;
        }
    }

}
void del(){
    struct Node *q, *r;
    if(head == NULL){
        printf("List is empty");
    }
    else{
        q = head;
        while(q->link !=  NULL){
            r = q;
            q = q->link;
        }
        r->link = NULL;
        printf("\nThe deleted node is %d",q->data);
        free(q);
    }



}
int main(){
insert(10);
display();
insert(20);
display();
insert(30);
display();
del();
display();

return 0;
}

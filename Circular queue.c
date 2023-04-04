#include<stdio.h>
int front = -1;
int rear = -1;
int cqueue[10];
int max = 10;

void cqueue_ins(int item){              //Insertion in circular queue
    if(front == 0 && rear == max-1){
        printf("\nCircular queue is full");
    }
    else{
        if(rear == max - 1){
            rear = -1;
        }
        else if(front == -1){
            front = 0;
        }
        rear++;
        cqueue[rear] = item;
    }
}

void cqueue_del(){                  //Deletion in circular queue
    int d;
    if(front == -1){
        printf("\nCircular queue is empty");
    }
    else if(front == rear){
        front = 0;
    }
    else{
        d = cqueue[front];
        if(front == max-1){
            front = 0;
        }
        else{
            front++;

        }
    }
}

void cqueue_display(){              //Displaying items in circular queue
    int i;

    if(front == -1){
        printf("\nCircular queue is empty");
    }
    else if(front <= rear){
        for(i = front; i <= rear; i++){
            printf("\n%d\t",cqueue[i]);
        }
    }
    else{
        for(i = front; i <= max-1; i++){
            printf("\n%d\t",cqueue[i]);
        }
        for(i = 0; i <= rear; i++){
            printf("\n%d\t",cqueue[i]);
        }
    }
}

int main(){

    //Inserting items
cqueue_ins(10);
cqueue_ins(20);
cqueue_ins(30);
cqueue_ins(40);
cqueue_ins(50);

cqueue_display();

cqueue_del();   //Deleting items
cqueue_del();

cqueue_display();   //Displaying items after deleting

}


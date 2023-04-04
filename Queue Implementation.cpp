#include<stdio.h>
#include<stdlib.h>

int fron = -1;
int rear = -1;
int que[10];
int max = 5;

void input(int item){
    if(rear == max-1){
        printf("Overflow Condition");
        exit(0);
    }
    else if(fron == -1 && rear == -1 ){
        printf("\n%d is inserted into the queue successfully.\n",item);
        fron++;
        rear++;
        que[rear] = item;

    }
    else{
        printf("\n%d is inserted into the queue successfully.\n",item);
        rear++;
        que[rear] = item;
    }
}

void display(){
    for(int i = fron; i <= rear; i++){
        printf("\n%d\t",que[i]);
    }
}

void del(){
    if(fron == -1){
        printf("Underflow Condition");
        exit(0);
    }
    else if(fron == rear){
        printf("\n%d is deleted\n",que[fron]);
        fron = -1;
        rear = -1;
    }
    else{
        printf("\n%d is deleted\n",que[fron]);
        fron++;
    }
}
int main(){
int item, j;

do{
printf("Enter the item:");
scanf("%d",&item);
input(item);
j++;
}while(j < max-1);


display();

del();

display();

return 0;
}

#include<stdio.h>

int length = 4;
int top = -1;
int stack[4];

void ins(int item){
    if(top == length-1){
        printf("\nStack is full");
    }
    else if(top == -1){
        top++;
        stack[top] = item;
    }
    else{
        top++;
        stack[top] = item;

    }
}

void del(){
    if(top == -1){
        printf("\nThe Stack is empty");
    }
    else if(top == 0){
        top = -1;
    }
    else{
        top--;
    }
}

void display(){
    for(int i = top; i >= 0; i--){
        printf("\n%d\t",stack[i]);
    }
}


int main(){
    ins(10);
    ins(30);
    ins(50);
    display();
    printf("\n");
    del();
    del();
    ins(20);
    printf("\n");
    display();
}

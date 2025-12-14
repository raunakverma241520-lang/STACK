#include<stdio.h>
#define MAX_SIZE 5

int stack[MAX_SIZE];
int TOP = -1;

void push(int item){
    if (TOP == MAX_SIZE - 1){
        printf("overflow");
    }
    else{
        stack[++TOP] = item;
        printf("%d item inserted.\n", item);
    }
}

void pop(){
    if (TOP == -1){
        printf("stack is underflow");
    }
    else{
        int item = stack[TOP--];
    }
}

void display(){
    if (TOP == -1){
        printf("stack is empty");
    } else {
        printf("elements in stack:");
        for(int i = 0; i <= TOP; i++){
            printf("%d", stack[i]);
        }
        printf("\n");
    }
}

int main(){
    int choice, item;

    printf("1.push\n 2.pop\n 3.display\n 4.exit\n");

    while(1){
        printf("Enter your choice");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter the item to push");
                scanf("%d", &item);
                push(item);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}

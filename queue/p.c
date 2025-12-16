#include<stdio.h>
#define MAX_SIZE 5
int queue[MAX_SIZE];
int front=-1, rear=-1;

void enqueue(int item){
    if(rear == MAX_SIZE-1){
        printf("OVERFLOW & EXIT");
    }
    else {
        if(front==-1){
            front=0;
        }
        queue[++rear]=item;
        printf("%d,Item inserted.\n",item);
    }
}
void dequeue(){
    int item;
    if(rear==-1){
        printf("underflow & exit\n");

    }
    else{
        item=queue[front];
        if (front==rear){
            front=rear=-1;
       } else {
        front++;
       }
       printf("%dItem Deleted:\n",item);

    }

}
void display(){
    if(front == -1){
        printf("queue is empty.\n");
    }
    else{
        printf("queue elements:");
          for (int i=front; i <= rear; i++) {
            printf("%d", queue[i]);
        }
        printf("\n");
    }
}

int main(){
    int choice , item;
    printf("1.enqueue\n 2.dequeue\n 3.display\n 4Exit\n");
    while(1){
        printf("enter your choice\n");
        scanf("%d",&choice);

        switch(choice){
          case 1:
            printf("Enter the item to insert:");
            scanf("%d",&item);
            enqueue(item);
            break;
          case 2:
            dequeue();
            break;

          case 3:
             display();
             break;

          case 4:
             return 0;

          default:
            printf("invalid choice \n");
    }
}
    return 0;
}

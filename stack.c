#include<stdio.h>
#define SIZE 7

typedef struct Stacks{
    int arr[SIZE];
    int top;
} Stack;

Stack stack;
void Push();
void Pop();
void Display();

int main()
{
    int operation;
    stack.top = -1;

    printf ("Enter one of following operations to perform stack operations :\n");
    printf("\t 1. PUSH\n");
    printf("\t 2. POP\n");
    printf("\t 3. DISPLAY\n");
    printf("\t 4. EXIT\n");
    while(1)
      {
        printf("\nChoose an operation : ");
        scanf("%d", &operation);
        switch (operation)
        {
            case 1:
                Push();
                break;
            case 2:
                Pop();
                break;
            case 3:
                Display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid operation \n");
            }
      }
      return 0;

}

void Push()
{
    int item;
    if(stack.top == SIZE-1)
    {
        printf("Stack is already full can't add more.\n");
    }
    else
    {
        printf ("Enter an element to be pushed : ");
        scanf ("%d", &item);
        stack.top = stack.top + 1;
        stack.arr[stack.top] = item;
    }
}

void Pop()
{
    int popItem;
    if(stack.top  ==  -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        popItem = stack.arr[stack.top];
        stack.top--;
        printf("%d \nPop is successful.\n",popItem);
    }
}
void Display()
{
    int i = 0;
    if(stack.top == -1)
    {
        printf("Stack is Empty.\n");
    }
    else
    {
        printf("Elements :\n");
        printf("%d <--- top",stack.arr[stack.top]);

        for(i = stack.top-1; i >= 0; i--)
        {
            printf("\n%d",stack.arr[i]);
        }
        printf("\n");
    }
}

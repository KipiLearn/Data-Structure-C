#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void append(void);
void AddAtBegin();
int length();
 void display();
struct node
{
    int data;
    struct  node* link;
};
struct node* root = NULL;
int len=0;

int main()
{
   int ch;
   while(1)
   {
        printf("\n---------------------------- \n");
        printf("Linked List Operations : \n");
        printf("press 1 for Append\n");
        printf("Press 2 for addatbegin\n");
        printf("Press 3 for Length\n");
        printf("Press 4 for Display\n");
        printf("Press 5 for Exit\n");
        printf("Choose your option : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                append();
                break;
            case 2:
                AddAtBegin();
                break;
            case 3:
                len=length();
                printf("Lenght : %d",len);
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Enter a correct input\n");
        }
   }

    return 0;
}
void append()
{
    struct node* temp = NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data : \n");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if(root == NULL)
    {
        root = temp;
    }
    else{
        struct node* p =NULL;
        p = root;
        while(p->link != NULL)
        {
            p = p->link;
        }
        p->link = temp;
    }
}
void AddAtBegin()
{

}

int length()
{
    int count = 0;
    struct node* temp = NULL;
    temp = root;
    while(temp != NULL)
    {
        count = count + 1;
        temp = temp->link;
    }
    return count;
}

 void display()
 {
    struct node* temp = NULL;
    temp = root;
    if(root == NULL)
    {
        printf("List is Empty\n");
    }
    else{
        while(temp != NULL)
        {
            printf("%d--->",temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
 }



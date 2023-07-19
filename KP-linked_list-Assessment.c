#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

typedef struct list{
    node *head;
    node *tail;
}list;

list *LinkedList;
list *SortedLinkedList;

list* add(list *linkedList,int ele)
{
    node *temp_node = (node*)malloc(sizeof(node));
    temp_node->data=ele;
    temp_node->next=NULL;
    if(linkedList->head==NULL && linkedList->tail==NULL)
    {
        linkedList->head = temp_node;
        linkedList->tail=temp_node;
        return linkedList;   
    }
    else
    {
        node *ref=linkedList->tail;
        ref->next=temp_node;
        linkedList->tail=temp_node;

    }
}

void PrintLinkedList(list *linkedList)
{
    node *temp_node=linkedList->head;
    while(temp_node!=NULL)
    {
        printf("%d ",temp_node->data);
        temp_node = temp_node->next;
    }
}


void sort(list *linkedList,int size,list* dest_list)
{
    int *array = malloc(size*sizeof(int));
    // Creating temporary array to simplify the Sorting Process
    int iterator1=0,iterator2=0,temporary;
    node *temp_node=linkedList->head;
    while(temp_node!=NULL)
    {
        if(iterator1<size)
        {
            *(array+iterator1)=temp_node->data;
            iterator1++;
        }
        temp_node = temp_node->next;
    }
    for(iterator1=0;iterator1<size;iterator1++)
    {
        for(iterator2=0;iterator2<size-1;iterator2++)
        {
            if(*(array+(iterator2))>*(array+(iterator2+1)))
            {
                temporary = *(array+(iterator2));
                *(array+(iterator2)) = *(array+(iterator2+1));
                *(array+(iterator2+1)) = temporary;
            }
        }
    }
    for(iterator1=0;iterator1<size;iterator1++)
    {
        add(dest_list,*(array+iterator1));
    }
    //printll(srtll);

    // printing Descending order
    printf("In Descending order\n");

    for(iterator2 = size-1;iterator2>=0;iterator2--)
        {
                printf("%d ",*(array+(iterator2)));
        }
    printf("\n");

}

int main()
{
    LinkedList=(list*)malloc(sizeof(list));
    SortedLinkedList = (list*)malloc(sizeof(list));
    LinkedList->head=NULL;
    LinkedList->tail=NULL;
    int size,iterator1,input;
    printf("Enter the number of elements\n");
    scanf("%d",&size);
    printf("Enter the elements\n");
    for(iterator1=0;iterator1<size;iterator1++)
    {
       scanf("%d",&input);
       LinkedList = add(LinkedList,input);
    }
    PrintLinkedList(LinkedList);
    printf("\nSorted list is\n");
    sort(LinkedList,size,SortedLinkedList);
    printf("In Ascending order\n");
    PrintLinkedList(SortedLinkedList);

}
#include<stdio.h>
#include<stdlib.h>
struct node{
            int data;
            struct node * link;
            };
     struct node * top=NULL;
   
void push()
     {
  struct node * newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
       printf("\n NO space available\n");
        return;
      }
newnode-> link=NULL;
printf("\n Enter the element to insert\n");
scanf("%d",&newnode->data);

if(top == NULL){
  top=newnode;
  }
  else{
  newnode ->link=top;
  top=newnode;
  }
  printf("\n %d INSERTED SUCCESFULLY",newnode->data);
  }
  void pop()
  {
  struct node*temp=top;
  
   if(top == NULL){
    printf("\n STACK UNDER FLOW");
    return;
    }
    
   printf("\n %d is popped",temp->data);
   top=temp->link;
   free(temp);
   }
void display()
{
struct node*temp=top;
if(top == NULL){
printf("\n NO ELEMENTS");
return;
}
printf("\n Elements In Stack are:\n");
      while(temp!=NULL){
      printf("%d ",temp ->data);
      temp=temp->link;
      }}
 void peek()
 {
  struct node * temp =top;
  if(top == NULL){
  printf("\n STACK UNDER FLOW");
  return;
  }
  printf("Top Element is %d",temp->data);
  }
  
  void search()
  {
struct node * temp=top;
int key,found=0,pos=1;
if(top ==  NULL){
      printf("\n STACK UNDERFLOW \n");
      return;
      }
printf("\n ENTER THE ELEMENT TO SEARCH\n");
scanf("%d",&key);
  while(temp!=NULL){
  if(temp -> data == key){
  printf("\n %d ELEMENT FOUNDED AT POSITION %d \n",temp-> data,pos);
  found=1;
  }
temp=temp->link;
pos++;
}
if(!found){
printf("\n ELEMENT NOT FOUND");
}
}
void main()
{
int choice;
do{
printf("\n ****STACK****\n");
printf("\n1->Push() \n2->Pop() \n3->Peek() \n4->Display() \n5->Search() \n6 ->Exit");
printf("\n Enter the choice \n");
scanf("%d",&choice);
switch(choice){
 case 1:push();
       break;
 case 2:pop();
       break;
 case 3:peek();
       break;
 case 4:display();
       break;
 case 5:search();
       break;
 case 6:printf("\nEXIT\n");
       break;
 default:printf("Enter a valid Choice");
       break;
     }
}
while(choice!=6);

}      
           
                     

            

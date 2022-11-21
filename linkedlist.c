#include <stdio.h>
#include <stdlib.h>
struct node
 {
  int data; 
  struct node *link;
  }*head;
  void insertEnd(int val)
   {
    struct node *temp,*ptr;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=val;
    temp->link=NULL;
    if (head==NULL)
     {
      head=temp;
     }
    else 
     {
      ptr=head;
      while (ptr->link!=NULL)
       {
        ptr=ptr->link;
        }
        ptr->link=temp;
        temp->data=val;
        temp->link=NULL;
       }
      printf("\n value inserted!!\n");
    }
   void insertBeg(int val)
    {
     struct node *temp;
     temp=(struct node *)malloc(sizeof(struct node));
     if (temp==NULL)
      {
       printf("memory cannot assigned");
       }
      else {
     temp->data=val;
     temp->link=head;
     head=temp;
     printf("\nvalue inserted!\n");
     }
     }
    void insertPosition(int val,int pos)
     {
      struct node *temp,*ptr;
      ptr=head;
      temp=(struct node *)malloc(sizeof(struct node));
      if (temp==NULL)
       {printf("memory cannot assigned");
       }
      else {
       ptr=head;
      while((ptr->data!=pos)&&(ptr->link!=NULL))
       {ptr=ptr->link;
       }
       if (ptr->data==pos)
        {
        temp->link=ptr->link;
        ptr->link=temp;
        printf("\ninserted\n");
       }
       }
       }
      void display() 
      {
       struct node *ptr;
       ptr=head;
       while (ptr->link!=NULL)
        {printf("%d",ptr->data);
         ptr=ptr->link;
         }
         printf("\t\t%d",ptr->data);
        
       }
      int main()
        {int ch;int val;int pos;
         struct node * create(struct node*);
         void insertBeg();
         void insertEnd();
         void insertPosition();
         void display();
         
         while(1) {
         printf("\n1.Insert at the beginning\t2.Insert at the end\t3.insert at a specified position\t4.Display\t5.exit");
          printf("\nEnter your choice\n");
          scanf("%d",&ch);
          
          switch(ch)
           {
            case 1: { 
                    printf("enter the value to be inserted" );
                    scanf("%d",&val);
                    void insertBeg(int val);
                    break;
                    }
            case 2:{  
                    printf("enter the value to be inserted at end\n");
                    scanf("%d",&val);
                   void insertEnd(int val);
                   break;
                   }
            case 3:{
                    printf("enter the value to be inserted ");
                    scanf("%d",&val);
                    printf("enter the positional value after which value is inserted:");
                    scanf("%d",&pos);
                    void insertPosition(int val,int pos);
                    break;
                   }
            case 4: {printf("inserted values:\n");
                      void display();
                     break;
                     }
            case 5: exit(0);
            default : {
            printf("invalid choice");
                      break;}
            }
       }
       }
          
               

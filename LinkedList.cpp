#include <iostream>
#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<string.h>
#include<strings.h>


using namespace std;

struct node
   {
       int data;
       struct node *next;
   }*head,*temp;

string uppercaseit(string s);
void create();
void link(struct node *t);
void print(struct node *u);
void sortlist(struct node *v);


int main()
{
     printf("How many nodes you want in your linked list?\n");
     int x;
     scanf("%d",&x);
     if (x==0)
     {
         puts("No node is added in the linked list\n");
         return 0;
     }
     printf("type all %d values one by one.\n",x);
     create();
     head=temp;
     for(int i=1;i<x;i++)
     {
        create();
        link(head);
     }
     if (head->data==NULL)
     {
       printf("The list is empty");
     }



    else
    {

        for(int i=1;i<=x;i++)
        {
            if(i!=x)
            {
              printf("*********    ");
            }
            else
            {
                printf("*********    \n");
            }

        }

     print(head);
     for(int i=1;i<=x;i++)
        {
            if(i!=x)
            {
              printf("*********    ");
            }
            else
            {
                printf("*********    \n");
            }

        }
    }


 puts("you want to sort your linked list? ");
 puts("(yes/no)");

 //int type;
 //scanf("%d",&type);
 string s;
 cin >>s;
 while(1){

    if(s.compare("yes")==0)
 {

        sortlist(head);

        puts("Here is your sorted list");
        for(int i=1;i<=x;i++)
        {
            if(i!=x)
            {
              printf("*********    ");
            }
            else
            {
                printf("*********    \n");
            }

        }

     print(head);
     for(int i=1;i<=x;i++)
        {
            if(i!=x)
            {
              printf("*********    ");
            }
            else
            {
                printf("*********    \n");
            }

        }

        break;

 }
  else if (s.compare("no")==0)
 {
       puts("have a nice day");
       break;
 }
 else
 {
      puts("invalid input!");
      puts("(yes/no)");
   // scanf("%d",&type);
    cin >>s;
 }

 }




    return 0;
}



void create()
{

   int y;
   scanf("%d",&y);

   temp=(struct node *)malloc(1*sizeof(struct node));
   temp->data=y;
   temp->next=NULL;

}

 void link(struct node *t)
 {
   if (t->next==NULL)
   {
     t->next=temp;
   }
   else
   {
       link(t->next);
   }

 }


 void print(struct node *u)
 {
     if(u->next!=NULL)
     {

     printf("*  %d  *-*--->",u->data);
     }


     else if (u->next==NULL)
       {
           printf("*  %d  *-*NULL\n",u->data);
           return ;
       }

    print(u->next);


 }


 void sortlist(struct node *v)
 {
     struct node *w;
     int temp;
      while(v->next!=NULL)
      {
          w=v->next;
          while(w!=NULL)
          {
              if(v->data>w->data)
              {
                  temp=w->data;
                  w->data=v->data;
                  v->data=temp;
                  w=w->next;
              }
              else
                {
                    w=w->next;
                }
          }
          v=v->next;
      }



 }
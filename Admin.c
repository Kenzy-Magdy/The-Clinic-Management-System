#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Admin.H"
#include"main.H"
#include"User.H"
node* head=NULL;
node* tail=NULL;


    node* create_node(void)
    {
    node* new_node=(node*)malloc(sizeof(node));
    return new_node;
    }
	
    void add_node(node*current)
    {
    int new_id;
    if(head==NULL&&tail==NULL)
    {
    if(current!=NULL)
    {
    head=tail=current;
    head->next=NULL;
    head->prev=NULL;
    }
    }
    else
    {if(current!=NULL)
    {
    tail->next=current;
    current->prev=tail;
    current->next=NULL;
    tail=current;
    }
    }
    printf(" please enter patient name : \n");
	fflush(stdin);
    scanf("%[^\n]",&current->name);
    printf(" please enter patient age : \n");
    fflush(stdin);
	scanf("%d",&current->age);
	printf(" please enter patient gender : \n");
	fflush(stdin);
    scanf("%s",&current->gender);
    printf(" please enter patient ID: \n");
    fflush(stdin);
    scanf("%d",&new_id);
    if(search_id(new_id))
    {
    while(search_id(new_id))
    {
       printf("ID is already found , please enter another ID \n");
           scanf("%d",&new_id);
    }
    }
     current->id=new_id;
	 current->reserved=0;
     printf(" patient record is added successfully \n");
	 printf("---------------------------------------------------------- \n");
    }
	
	
    int search_id(int new_id)
    {
    node*current=head;
    while(current!=NULL)
    {
    if(new_id==current->id)
    return first_value;
    current=current->next;
    }
    return intial_value;
    }
	
	
    node* search_patient(int id_found)
    {
    node*current=head;
    while(current!=NULL)
    {
    if(id_found==current->id&&(current->reserved==0))
    break;
    current=current->next;
    }
    return current;
    }
	
	
	
    void edit(int id_found)
   {
	       
   int options;
   node* current=search_patient(id_found);
   view(id_found);
   printf("1.to edit patient age                 press 1 \n");
   printf("2.to edit patient name                press 2 \n");
   printf("3.to edit patient age and name        press 3 \n");
   printf("4.to edit gender                      press 4 \n");
   printf("---------------------------------------------------------- \n");
   scanf("%d",&options);
   switch(options)
   {
    case first_value: printf(" please enter new age : \n");
    fflush(stdin);
    scanf("%d",&current->age);
    printf(" age is edited successfully \n");
	printf("---------------------------------------------------------- \n");
    break;
    case secound_value: printf(" please enter new name : \n");
    fflush(stdin);
    scanf("%[^\n]",&current->name);
    printf(" name is edited successfully \n");
	printf("---------------------------------------------------------- \n");
    break;
    case third_value:printf(" please enter new age and new name respectively: \n");
    fflush(stdin);
    scanf("%d",&current->age);
    fflush(stdin);
    scanf("%[^\n]",&current->name);
    printf(" age and name are edited successfully \n");
	printf("---------------------------------------------------------- \n");
    break;
	case fourth_value:printf(" please enter new gender: \n");
	fflush(stdin);
    scanf("%s",&current->gender);
	printf(" gender is edited successfully \n");
	printf("---------------------------------------------------------- \n");
	break;
   }
   
   }
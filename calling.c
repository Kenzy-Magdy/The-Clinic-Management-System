# include<stdio.h>
# include<stdlib.h>
#include"Admin.H"
#include"ReservationandCancelation.H"
#include"main.H"
#include"User.H"
#include"calling.H"
extern node* extra;

int past_reservation=intial_value;

void Admin_calling(void)
{
	int y,id_found,i,right_pass;
	
	////Note: Admin password =1234 ////
	
	printf(" please enter password :\n");
    fflush(stdin);
    scanf("%d",&right_pass);
    if(right_pass!=password)
    {
    for(i =iterator;i<final_iteration;i++)
    {
    printf(" Wrong password, please renter password : \n");
    fflush(stdin);
    scanf("%d",&right_pass);
    if(right_pass==password)
    break;
    }
	}
    if(right_pass==password)
    {
    do{
	printf("||||||||||||||||||| Hello Admin ||||||||||||||||||||| \n");	
    printf("1.to add a new patient                 press 1 \n");
    printf("2.to edit patient information          press 2 \n");
	printf("3.to reserve a slot                    press 3 \n");
	printf("4.to cancel reservation                press 4 \n");
	printf("5.to exit from Admin mode              press 5 \n");
	printf("---------------------------------------------------------- \n");
	fflush(stdin);
    scanf("%d",&y);
    printf(" your choice :%d \n",y);
    printf("---------------------------------------------------------- \n");
    switch(y)
    {
    case first_value:add_node(create_node());
    break;
    case secound_value:printf(" please enter patient ID : \n");
    scanf("%d",&id_found);
    if (search_id(id_found))
    {
    edit(id_found);
    }
	else
    {
    printf(" incorrect ID \n");
    while(!search_id(id_found))
    {
	i++;	
    printf(" please renter patient ID : \n");
    scanf("%d",&id_found);
	if(i==2)
		break;
    }
	if(i==2)
	{
	 printf(" the entered ID was incorrect for 3 consecutive times , Good bye \n");	
	}
	else{
    edit(id_found);
	}
    }
    break;
    case third_value:
	{ 
	add__node(create__node());
    past_reservation=first_value;
	add__node(create__node());
	add__node(create__node());
	add__node(create__node());
	add__node(create__node());
	}
	reservation();
	break;
	case fourth_value:
	printf(" please enter patient ID : \n");
	fflush(stdin);
	scanf("%d",&id_found);
    if(extra==NULL)	
	{
		printf("there is no Reservations at all \n");
	}
	else{
	cancellation(id_found);
	}
    break;
	case fifth_value:printf(" Good Bye \n");
    break;
    }
    printf("---------------------------------------------------------- \n");
    }while(y!=fifth_value);
    }
    else
    printf(" the entered password was incorrect for 3 consecutive times , Good bye \n");
    printf("---------------------------------------------------------- \n");
	}	


  void User_calling(void)
  {
	  int y,id_found,i,right_pass;
	 do
	{
	printf("||||||||||||||||||| Hello User ||||||||||||||||||||| \n");	
    printf("1.to view patient record           press 1\n");
    printf("2.to view today's reservations     press 2\n");
	printf("3.to exit from User mode           press 3\n");
	fflush(stdin);
    scanf("%d",&y);
	printf(" your choice :%d \n",y);
    printf("---------------------------------------------------------- \n");
    switch(y)
	{
	case first_value:
    printf(" please enter patient id : \n");
    fflush(stdin);
    scanf("%d",&id_found);
	view(id_found);
	break;
	case secound_value:
	printf(" today's reservations    : \n");
	view_reservations();
	break;	
	}
	}while(y!=third_value);     
  }
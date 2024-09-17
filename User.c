 # include<stdio.h>
 # include<stdlib.h>
 # include"Admin.H"
 # include"User.H"
 # include"ReservationandCancelation.H"
 # include"main.H"
 
 extern node*extra;
 
 void view(int id_found)
 {
	node*current=head;
	
	int found=intial_value;
    while(current!=NULL)
	{
	 if((id_found==current->id)&&(current->reserved==0))
	 {  
        
        printf(" patient's information :    \n");
		printf(" patient's name        : %s \n",current->name);
		printf(" patient's age         : %d \n",current->age);
		printf(" patient's gender      : %s \n",current->gender);
		printf(" patient's id          : %d \n",current->id);
		printf("---------------------------------------------------------- \n");
		found=first_value;
		break;
		  
	 }
		current=current->next;
	}	
     if(!found)
     {
		 printf(" id is not found \n");
		 printf("---------------------------------------------------------- \n");
     }		 
 }
 
 
 void view_reservations(void)
  {
	  node*current=extra;
	  int i=intial_value;
	  while(i<fifth_value)
	  {
		 if(current->reserved)
		 {
			 printf(" from %.2f to %.2f -> patient id : %d \n ",current->start_time,current->end_time,current->id);	 
		 }	
             current=current->next;
             i++;		 
	  }
         printf("---------------------------------------------------------- \n");	   
  }
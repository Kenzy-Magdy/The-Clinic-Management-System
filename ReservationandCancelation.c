  # include<stdio.h>
  # include<stdlib.h>
  # include"Admin.H"
  # include"ReservationandCancelation.H"
  # include"main.H"
  
  node*extra=NULL;
  static int all_reserved=intial_value ;

  node* create__node(void)
 {
    node* new_node=(node*)malloc(sizeof(node));
    return new_node;
 }
 
 
 void add__node(node*current)
 {
    static int j=intial_value ;
	extern int past_reservation;
	if(past_reservation==intial_value)
	{extra=current;}
    float start[slots_num]={SLOT_2PM,SLOT_230PM,SLOT_3PM,SLOT_4PM,SLOT_430PM};
    float end[slots_num ]={END_SLOT_230PM,END_SLOT_3PM,END_SLOT_330PM,END_SLOT_430PM,END_SLOT_5PM};
    if(head==NULL&&tail==NULL)
    {
    if(current!=NULL)
    {
    head=tail=current;
    head->next=NULL;
    head->prev=NULL;
    head->start_time=start[j];
    head->end_time=end[j];
	j++;
	current->reserved=intial_value ;
    }
    }
     else
    {
         if(current!=NULL)
         {
         tail->next=current;
         current->prev=tail;
         current->next=NULL;
         tail=current;
         current->start_time=start[j];
         current->end_time=end[j];
		 j++;
		 current->reserved=intial_value ;
         }
    }
    }
	
	
 void reservation(void)
 {
 node *current=extra;
 int desired,i=intial_value ,num;
 int id_found;
 //static int all_reserved=intial_value ;
   if(all_reserved==fifth_value)
   {
	   printf(" there is no available slots \n");
	   printf("---------------------------------------------------------- \n");
   }
   else
   {   
    printf (" available slots : \n");
   do
   {   
   if(current->reserved)
   {
       current=current->next;
        i++;
       continue;
   }
       printf("from %.2f to %.2f press %d\n",current->start_time,current->end_time,i);
       current=current->next;
       i++;
   }while(i<fifth_value);   
   printf("---------------------------------------------------------- \n");
   printf(" please enter your desired slot: \n");
   fflush(stdin);
   scanf("%d",&desired);
   printf(" please enter patient id \n");
   fflush(stdin);
   scanf("%d",&id_found);
   if(!search_id(id_found))
     {
    printf("  ID is not found \n");
	printf("0.if you want to add patient    press 0 \n");
	printf("1.if you want to exit           press 1 \n");
    printf("---------------------------------------------------------- \n");	
	fflush(stdin);
	scanf("%d",&num);
	switch(num){
		case intial_value : add_node(create_node());
		break;
		case first_value : printf(" Good Bye \n");
		break;	
	}
    }
	 else{
   current=extra;
   i=intial_value ;
   while(current!=NULL)
   { if(i==desired)
   {
       current->id=id_found;
	   current->reserved=first_value ;
	   all_reserved++;
       break;
   }
    i++;
    current=current->next;
   }
    printf(" Reservation is done successfully \n");
   }

  }}
  
  
 void cancellation(int id_found)
 {
	node*current=extra;
	int i=intial_value ;
	int found =0;
	while(i<fifth_value)
	{
	if(current->id==id_found)	
	{
	found=1;
	current->reserved=intial_value ;
	current->id=neg_num;
    all_reserved--;
	printf(" cancellation is done successfully \n");
	}
	current=current->next;
	 i++;	
	}
	if(found==0)
	{
		printf("There is no Reservation with this ID \n ");
	}
 }
#include <stdio.h>
#include <stdlib.h>
#include"main.H"
#include"Admin.H"
#include"calling.H"

    void main(void)
    {   
    ///variables///
    node x;
	int mode;
	do{
	////modes////
	printf("1.Admin mode                  press 1\n");
	printf("2.User mode                   press 2\n");
	printf("3.to exit whole program       press 3\n");
	fflush(stdin);
	scanf("%d",&mode);
    printf(" your choice :%d \n",mode);	
	printf("---------------------------------------------------------- \n");
	switch(mode)
	{ 
	///// Admin mode ///// 
	case mode_admin :
	{
    Admin_calling();
    break;
	}
    ///// User mode /////
    case mode_user  :
	{
	User_calling();
    break;
	} 
    case third_value:
	{
    printf(" Thank you , Good Bye \n");
    printf("---------------------------------------------------------- \n");
    break;	
	}
	}
    }while(mode!=third_value);
	}
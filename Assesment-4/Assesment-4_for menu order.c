#include<stdio.h>
int main()
{
	int select,qua,price,ans;
	char ch,choice;
	
	do{
		printf("--------Menu--------\n1.pizza     price = 180rs/pcs\n2.Burger     price = 100rs/pcs\n3.Dosa     price = 120rs/pcs\n4.Idli     price = 50rs/pcs\n");
	printf("\nPlease Enter Your choose.... : ");
	scanf("%d",&select);
	
	switch(select)
	{
		case 1:
	     	printf("\nYou Have Selected Pizza\nEnter The Quantity : ");
	     	scanf("%d",&qua);
	     	price=180;
	     	ans=qua*price;
	     	printf("Amount : %d",ans);
	     	break;
	    case 2:
	    	printf("\nYou Have Selected Burger\nEnter The Quantity : ");
	    	scanf("%d",&qua);
	     	price=100;
	     	ans=qua*price;
	     	printf("Amount : %d",ans);
	    	break;
	    case 3:
	    	printf("\nYou Have Selected Dosa\nEnter The Quantity : ");
	    	scanf("%d",&qua);
	     	price=120;
	     	ans=qua*price;
	     	printf("Amount : %d",ans);
	    	break;
	    case 4:
	    	printf("\nYou Have Selected Idli\nEnter The Quantity : ");
	    	scanf("%d",&qua);
	     	price=50;
	     	ans=qua*price;
	     	printf("Amount : %d",ans);
	    	break;
	    default:
	    	printf("\nKindly Enter From The Menu-Items\nEnter The Quantity : ");
	}
	printf("\nTotal Amount is = %d",ans);
	printf("\nDo You want Place More Orders ? (y & n) : ");
	scanf("\n%c",&choice);
	}while(choice=='y');
	return 0;
}

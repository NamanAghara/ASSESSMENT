#include<stdio.h>
int main()
{
	int price,choice,q;
	int total = 0;
	char c;
	up :
	printf("---------------MENU---------------");
	printf("\n1). Samosa    price = 20rs/pcs ");
	printf("\n2). Dhosa     price = 50rs/pcs ");
	printf("\n3). Idli      price = 20rs/pcs ");
	printf("\n4). Fries     price = 120rs/pcs ");
	printf("\n5). Pizza     price = 200rs/pcs ");
	printf("\n6). Fanta     price = 30rs/pcs ");
    printf("\nPlease Enter your choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :
			printf("\nYou selected Samosa");
			printf("\nEnter quantity : ");
			scanf("%d",&q);
			printf("\nAmount : %d",q*20);
			total = total+(q*20);
			printf("\ntotal amount is %d",total);
			break;
			
		case 2 :
			printf("\nYou selected Dhosa");
			printf("\nEnter quantity : ");
			scanf("%d",&q);
			printf("\nAmount : %d",q*50);
			total = total+(q*50);
			printf("\ntotal amount is %d",total);
			break;
			
		case 3 :
			printf("\nYou selected Idli");
			printf("\nEnter quantity : ");
			scanf("%d",&q);
			printf("\nAmount : %d",q*20);
			total = total+(q*20);
			printf("\ntotal amount is %d",total);
			break;
			
		case 4 :
			printf("\nYou selected Fries");
			printf("\nEnter quantity : ");
			scanf("%d",&q);
			printf("\nAmount : %d",q*120);
			total = total+(q*120);
			printf("\ntotal amount is %d",total);
			break;
			
		case 5 :
			printf("\nYou selected Pizza");
			printf("\nEnter quantity : ");
			scanf("%d",&q);
			printf("\nAmount : %d",q*200);
			total = total+(q*200);
			printf("\ntotal amount is %d",total);
			break;
			
		case 6 :
			printf("\nYou selected Fanta");
			printf("\nEnter quantity : ");
			scanf("%d",&q);
			printf("\nAmount : %d",q*30);
			total = total+(q*30);
			printf("\ntotal amount is %d",total);
			break;
			
		default :
			printf("\nInvalid input");		
	}
	printf("\ndo you want place more orders? press 'Y' or 'N' : ");
	scanf(" %c",&c);
	if(c=='y'||c=='Y')
	{
		goto up;
	}
	
	return 0;
}

#include<stdio.h>
#include<conio.h>
int b=0;
int seats=200;
struct reserve
{
	char name[200];
	int age[200];
	int seatno[200];
	int seat[200];

}a[200];

void booking(struct reserve a[200]);
void cancellation(struct reserve a[200]); 
void chart(struct reserve a[200]);

int main()
{
	int choice,i;

	for(i=0;i<200;i++)
	
	{
		a[i].seat[i]=0;
	}

	printf("----------WELCOME TO----------\n");
	printf("----->>>>>INDIAN RAILWAY RESERVATION<<<<<-----\n");
	do
	{

		printf("\n1.Booking\n2.Availability Checking\n3.Cancellation\n4.chart\n5.Exit\n");

		printf("Enter Your Choice :");
		scanf("%d",&choice); 	
		switch(choice)
		{
			case 1:
			{
				booking(a);
				break;
			}
			case 2:
			{
				if(seats==0)
				printf("\n\nNo seats Are Available \n\n");
				else
				printf("\n\n\nAvailable Seats is %d\n\n\n",seats);
				break;
			}
			case 3:
			{
			cancellation(a);
			
			break;
			
			}
			case 4:
			{
			chart(a);
			break;
			}

		}

	}
	while(choice<5);

	return 0;
	
	getch();
}
void booking(struct reserve a[200])
{
	int n,aa=0,temp,i;

	printf("\nEnter The Number of Persons :");	
	scanf("%d",&n);

	temp=n;

	b=b+temp;
	for(i=0;i<b;i++)

	{
		while(n>0)
	{
		if(a[i].seat[i]==0)
		{
			printf("\nEnter The Name & Age Of Person %d:\n", aa+1);
			scanf("%s%d",&a[i].name,&a[i].age[i]);
			
			a[i].seat[i]=1;			
			a[i].seatno[i]=i+1;
			aa++;
			n--;
		}

	break;
	}
}

printf("\n........Reserved Successfully.........");
printf("\n\nCheck Your Seat Number From the Chart\n\n\n");
seats=seats-temp;
}

void cancellation(struct reserve a[200])
{

	int cn,cs,i,j;

	printf("\nEnter The Num Of Persons:");

	scanf("%d",&cn);
	for(i=0;i<cn;i++)
	{

		printf("\nEnter The Seat Num of Persons %d ",i+1);
		scanf("%d",&cs);
		for(j=0;j<b;j++)
		{

			if(a[j].seatno[j]=cs)
			{

				a[j].seat[i]=0;

				break;
			}
		}
	}
seats=seats+cn;
printf("\n............Cancelled Successfully.........\n\n");
}

void chart(struct reserve a[200])
{
	int i;

	printf("\n--------");
	printf("\nSeatNo\tName\tAge\n");

	printf("-------------\n");
	for(i=0;i<200;i++)
	{
	if(a[i].seat[i]=1)
		{
			printf("%d\t%s\t%d",a[i].seatno[i],a[i].name,a[i].age[i]);
			printf("\n");

		}
	}
	printf("\n........Thanking You........\n\n\n");
}

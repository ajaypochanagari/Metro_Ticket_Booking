#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int count=0;
int no;

struct node
{
	char data[20],number[11];
	struct node *link;
}*start=NULL,*newnode,*temp,*p;


typedef struct {
	char num[5];
	char name[100];
	int age;
	char number[20];
	int balance;
} card;

void stations();
void green();
void blue();
void red();
void green1();
void blue1();
void red1();
int ajay(int);
void buy();
void morebuy();
void create_card();
void delete_card();
void ajaycash();
void pay_cash();
void pay_card();
void time1();
void colors();


void green()
{
	green1();
	colors();
}
void blue()
{
     blue1();
	 colors();	
}
void red()
{
	red1();
	colors();
}
void green1()
{
	system("color 2");
	printf("\n1.MG Bus\n2.Sultan Bazar\n3.Narayanguda\n4.Chikkadpally\n5.RTC X Roads\n");
	printf("6.Musheerabad\n7.Gandhi Hospital\n8.Secunderabad West\n9.Parade Ground\n");
	printf("10.JBS Parade Ground\n");
	
}
void blue1()
{
	system("color 1");
	printf("\n11.Nagole\n12.Uppal\n13.Stadium\n14.NGRI\n15.Habsiguda\n16.Tarnaka\n");
	printf("17.Mettuguda\n18.Seunderabad East\n19.Paradise\n20.Rasoolpura\n");
	printf("21.Prakash nagar\n22.Begumpet\n23.Ameerpet\n24.Madhura Nagar\n25.Yusfguda\n");
	printf("26.RoadNO -5 Jubille hills\n27.Jubille hills check post\n28.Peddama gudi\n");
	printf("29.Madhapur\n30.Durgam Cheruvu\n31.Hitec City\n");
}
void red1()
{
	system("color 4");
	printf("\n32.LB Nagar\n33.Victoria Memorial\n34.ChaitanyaPuri\n35.Dilsukhnagar\n");
	printf("36.Musarambagh\n37.New market\n38.Malakpet\n39.MG BUS\n40.Osmaina Medical College\n");
	printf("41.Gandhi Bhavan\n42.Nampally\n43.Assembly\n44.Lakdhi-ka-pul\n");
	printf("45.Khairtabad\n46.Irrum manzil\n47.Panja Gutta\n48.Ameerpet\n");
	printf("49.S R Nagar\n50.Esi Hospital\n51.Erragadda\n52.Bharat Nagar\n53.Moosapet\n");
	printf("54.Balanagar\n55.Kukatpally\n56.Kphb colony\n57.JNTU\n58.Miyapur\n");
}

void stations()
{
	int line;
	printf("Enter the Line you want to travel:");
	printf("\n1.Green\n");
	printf("2.Blue\n");
	printf("3.Red\n");
	scanf("%d",&line);
	switch(line)
	{
		case 1:{
			system("cls");
			green();
			break;
		}
		case 2:{
			system("cls");
			blue();
			break;
		}
		case 3:{
			system("cls");
			red();
			break;
		}
		case 0:exit(0);
		default:printf("make correct choice:");
		
		
	}
	
}

void f(){
		newnode=(struct node *)malloc(sizeof(struct node));
		fflush(stdin);
		printf("\n enter name:");
		scanf("%s",newnode->data);
		fflush(stdin);
		printf("\n enter mobile number:");
		scanf("%s",newnode->number);
		newnode->link=NULL;
		if(start==NULL){
			temp=newnode;
			start=newnode;
		}
		else{
			temp->link=newnode;
			temp=newnode;
		}
}
void tra(){
	printf("\n----------------------------------------------------\n");
    printf("               TODAYS TRAVELLERS HISTORY                        \n");
    printf("\n----------------------------------------------------\n");
	
	if(start==NULL){
		printf("\nNo users had came.");
	}
	else{
		p=start;
		while(p!=NULL){
			printf("\n%s - %s\t",p->data,p->number);
			p=p->link;
		}
	}
	printf("\nEnter 1 to go to main\n0 to exit: ");
	int a;
	scanf("%d",&a);
	if(a==0)
		exit(0);
	else
		main();
}

void colors()
{

	printf("would you like to continue(1 or 0):");
	int num;
	scanf("%d",&num);
	if(num==1)
	{
	system("cls");

	main();
	}
	else if(num==0) {
		exit(0);
	}
	else{
		printf("invalid credentials");
	}	
}

void buy()
{
	system("cls");
	int dno,line;
	printf("Enter the line you want to travel:\n1.green\n2.blue\n3.red\n");
	scanf("%d",&line);
	system("cls");
	if(line==1)
	{
	green1();
	
	}
	else if(line==2)
	{
		blue1();
	}
	else if(line==3)
	{
		red1();
	}
	else
	{
		printf("Invalid option:");
		buy();
	}
	printf("Enter source station number: ");
	scanf("%d",&no);
	system("cls");
	system("color f");
	printf("Enter Destination line you need to Travel: "); 
	printf(":\n1.green\n2.blue\n3.red\n");
	scanf("%d",&line);
	system("cls");
	if(line==1)
	{
	green1();
	}
	else if(line==2)
	{
		blue1();
	}
	else if(line==3)
	{
		red1();
	}
	else
	{
		printf("Invalid option:");
		buy();
	}
	
	printf("Enter Destination: ");
	scanf("%d",&dno);
	int dist;
	dist=dno-no;
	if(dist==0)
	{
		buy();
	}
	else
	{
		morebuy(dist);
	}
	
}

void morebuy(int dist)
{
	system("cls");
	system("color f");
  int no;
	printf("Enter no of tickets you want to buy: ");
	scanf("%d",&no);
	
	if(no<=0)
	{
		printf("invalid number");
	}
	else
	{ 
		int cost=0;
		if(dist<0)
		{
			dist=dist*(-1);
		}
		if(dist<=5)
		{
			cost=no*10;
		}
		else if(dist<=10)
		{
			cost=no*20;
		}
		else if(dist<=15)
		{
			cost=no*30;
		}
		else if(dist<=20)
		{
			cost=no*40;
		}
		else if(dist>20)
		{
			cost=no*55;
		}
		while(no){
			f();
			no--;
		}
	
	   ajaycash(cost);
		}
	
	
}

void ajaycash(int cost)
{	
		system("cls");
		printf("Total cost = Rs.%d \n",cost);
		printf("\n Enter yor payement mode:\n");
		printf("1.cash\n2.Card\n");
		int ch;
		scanf("%d",&ch);
		
		if(ch==1)
		{
		 pay_cash();		
		}
		else if(ch==2)
		{
		 pay_card(cost);	
		}
		else
		{
			printf("Invalid");
			ajaycash(cost);
		}
}

void pay_card(int cost) {
	system("cls");
	char key[20];
	int flag=0, loc;
	card pc;
	FILE *f1,*f2;
	f2=fopen("temp.txt","w");
	f1=fopen("ajay.txt","r");
	printf("Enter your card number to pay\n");
	scanf("%s",key);
	
	char s,qwe[10],qw[20];
	int age,num1,bal;
	s=getc(f1);
	while(s!=EOF){
		if(s=='\n'){
			fscanf(f1,"%s",qwe);
			fscanf(f1,"%s",qw);
			fscanf(f1,"%d",&age);
			fscanf(f1,"%d",&num1);
			fscanf(f1,"%d",&bal);
		}
		if(strcmp(qwe,key)==0){
			flag=1;
			if(bal<cost) {
				printf("Insufficient balance! Please pay via cash\n");
				pay_cash();
				break;
			}
			printf("Remaining Balance: %d\n",bal);
			bal-=cost;
			printf("Current Balance: %d\n",bal);
			printf("Payment Successful! Enjoy your trip\n");
			flag=1;
			fprintf(f2,"\n%s\t%s\t%d\t%d\t%d",qwe,qw,age,num1,bal);
			break;
		}	
		fprintf(f2,"\n%s\t%s\t%d\t%d\t%d",qwe,qw,age,num1,bal);
		s=getc(f1);	
	}
	remove("ajay.txt");
	rename("temp.txt","ajay.txt");
	if(flag==0){
		printf("Card not found!\n");
		ajaycash(cost);
	}
	fclose(f1);
	fclose(f2);
	time1();
	printf("\nwould you like to continue(1 or 0):");
	int num;
	scanf("%d",&num);
	if(num==1)
	{
		system("cls");
	
		main();
	}
	else
		exit(0);
}
void pay_cash() {
	
	int tokno;
	printf("Please collect and submit the printed token number at the counter and pay your bill\n");
	tokno=rand();
	printf("Your token number:%d",tokno);
	time1();
	printf("\nwould you like to continue:1 or 0");
	int num;
	scanf("%d",&num);
	if(num==1)
	{
		system("cls");
	
		main();
	}
	else
		exit(0);
}
void create_card() {
	system("cls");
	FILE *f;
	card c;
	char email[20];
	f=fopen("ajay.txt","a");
	printf("Enter your name\n");
	scanf("%s",c.name);
	printf("Enter your age\n");
	scanf("%d",&c.age);
		while(c.age<3){
		printf("Incorrect age! Please enter again\n");
		scanf("%d",&c.age);
	}
	printf("Enter your Phone number\n");
	scanf("%s",c.number);
	c.num[0]=c.name[0];
	c.num[1]=c.name[1];
	c.num[2]=c.number[0];
	c.num[3]=c.number[1];
	fprintf(f,"\n%s\t",c.num);
	printf("Enter the amount you want to recharge\n");
	scanf("%d",&c.balance);
	printf("Enter your email-ID\n");
	scanf("%s",email);
	printf("CARD DETAILS\n");
	printf("Name:	%s\n",c.name);
	printf("Age:	%d\n",c.age);
	printf("Phone No.:	%s\n",c.number);
	printf("Card number:	%s\n",c.num);
	printf("Balance:	%d\n",c.balance);
	if(c.age>=60)
		printf("Type:	Senior Card\n");
	else
		printf("Type:	Normal Card\n");
	printf("Card details successfully sent to your phone number and email");
	fprintf(f,"%s\t%d\t%s\t%d",c.name,c.age,c.number,c.balance);
	fclose(f);
	printf("\nwould you like to contin 1 or 0");
	int num;
	scanf("%d",&num);
	if(num==1)
	{
		system("cls");
		main();
	}
	else
	{
		exit(0);
	}
	getchar();
}

void delete_card() {
	system("cls");
	char key[20];
	int flag=0;
	char cd[5];
	card d;
	FILE *f1,*f2;
	f1=fopen("ajay.txt","r");
	f2=fopen("temp.txt","w");
	printf("Cancellation charges = Rs.5\n");
	printf("Enter the card number to be deleted\n");
	scanf("%s",key);
	char s,qwe[10],qw[20];
	int age,num1,bal,bal1;

	s=getc(f1);
	while(s!=EOF){
		if(s=='\n'){
			fscanf(f1,"%s",qwe);
			fscanf(f1,"%s",qw);
			fscanf(f1,"%d",&age);
			fscanf(f1,"%d",&num1);
			fscanf(f1,"%d",&bal);
		}
		if(strcmp(qwe,key)==0){
			flag=1;
			bal1=bal;
		}	
		else
			fprintf(f2,"\n%s\t%s\t%d\t%d\t%d",qwe,qw,age,num1,bal);
		s=getc(f1);	
	}
	fclose(f1);
	fclose(f2);
	remove("ajay.txt");
	rename("temp.txt","ajay.txt");	
	if(flag==0)
		printf("Card not found!\n");
	else {
		printf("Remaining Balance in the card = Rs.%d\n",bal1);
		bal1-=100;
		printf("Card deleted successfully! Please collect your cash of Rs.%d\n",bal1);
	}
	printf("\nwould you like to contin 1 or 0");
	int num;
	scanf("%d",&num);
	if(num==1)
	{
		system("cls");
		main();
	}
	else
	{
		exit(0);
	}
			
}
void time1()
{
	time_t timeNow;
  	struct tm* time_info;
    char timeStr[sizeof"HH:MM"];
	time(&timeNow);
	timeNow += 60*(5);
    time_info = localtime(&timeNow);
    strftime(timeStr, sizeof(timeStr), "%H:%M", time_info);
    printf("\nThe next train will arrive in : %s\n", timeStr);
}





main()
{   system("cls");
    system("color f");
    printf("\n\t\t\t                     ------------------\n");
    printf("\n\t\t\t        ---------------------------------------------");
    printf("\n\t\t\t        |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  ");
    printf("\n\t\t\t        ---------------------------------------------");
    printf("\n\t\t\t        |                  WELCOME                  |");
    printf("\n\t\t\t        |                     TO                    |");
    printf("\n\t\t\t        |                 HYDERABAD                 |");
    printf("\n\t\t\t        |                   METRO                   |");
    printf("\n\t\t\t        ---------------------------------------------");
    printf("\n\t\t\t        |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  ");
    printf("\n\t\t\t        ---------------------------------------------");
    printf("\n");
    printf("\n\t\t\t                    ------------------\n");
    
  
	printf("\nPlease select the appropriate choice\n");
	printf("\n1.View Metro LineStations\n");
	printf("2 Buy Tickets\n");
	printf("3.Create card\n");
	printf("4.Delete card\n");
	printf("5.Today traveller's history\n");
	printf("0.Exit\n");
	int ch;
	printf("Enter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:{
			stations();
			break;
		}
		case 2:{
			buy();
			break;
		}
		case 3:{
			create_card();
			break;
		}
		case 4:{
			delete_card();
			break;
		}
		case 5:{
			tra();
			break;
		}
		case 0:exit(0);
				break;
		default:printf("Invalid choice\n");
		
	}
}
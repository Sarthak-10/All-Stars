#include"core-1.h"
void main()
{
//cover();
//loading();
//password();
clrscr();
char name[30];
char ch;
char c;
textattr(10);
gotoxy(3,2);
cprintf("****** --- ******");
gotoxy(62,2);
cprintf("****** --- ******");



gotoxy(3,3);
cprintf("-----------------.");
gotoxy(61,3);
cprintf(".-----------------");
gotoxy(35,2);

delay(1000);
cprintf("W");
delay(100);
cprintf("e");
delay(100);
cprintf("l");
delay(100);
cprintf("c");
delay(100);
cprintf("o");
delay(100);
cprintf("m");
delay(100);
cprintf("e");
delay(100);
cprintf(" ");
delay(100);
cprintf("U");
delay(100);
cprintf("s");
delay(100);
cprintf("e");
delay(100);
cprintf("r");
delay(1000);
gotoxy(3,4);
textattr(2);
cprintf("This is your personal software assisstant. To begin with the program, please ");
gotoxy(3,5);
cprintf("enter your name here: ");
gets(name);
cout<<endl;
gotoxy(3,7);delay(500);
cprintf("Hey! ");
cout<<name;
cprintf("...nice to meet you. You are provided with the following assets.");
gotoxy(2,9);
delay(1200);
cprintf(" Enter your desired option number to begin.");
gotoxy(3,11);
delay(1200);
cprintf("Also... You can press (N) letter on your keyboard to quit as soon as you");
gotoxy(3,12);
 // delay(1200);
cprintf("complete your running task.");
A: {
textattr(14);
cout<<endl<<"\n\t\t";
cprintf(">>>1. |  KIDS  |");
cout<<endl<<"\n\t\t";
cprintf(">>>2. |  TEENS |");
cout<<endl<<"\n\t\t";
cprintf(">>>3. | ADULTS |");



    }


do
{
cout<<"\n";
textattr(2);
gotoxy(3,20);
cprintf("Enter your choice :");cin>>ch;
if(ch=='1')
{
clrscr();
char choice;
cout<<"\n";
gotoxy(3,2);
delay(1200);
textattr(2);
cprintf("So, You wanna entertain yourself.Select one of the three options below");
gotoxy(3,3);
cprintf("and have fun.");
textattr(14);
cout<<endl<<"\n\t\t";
cprintf(">>>1. |   Tic Tac Toe  |");
cout<<endl<<"\n\t\t";
cprintf(">>>2. |   Type Master  |");
cout<<endl<<"\n\t\t";
cprintf(">>>3. | IQ and Gk quiz |");
gotoxy(3,12);
cprintf(" Enter your choice : ");cin>>choice;

	if(choice=='1')
	tic_tac_toe();

	else if(choice=='2')
	typemaster();

	else if(choice=='3')
	questionnaire();

}

else if(ch=='2')

{ clrscr();int ch3; textattr(14);
cout<<"\n\t\t";
cprintf(">>>1. | Performance Schema |");
cout<<"\n\n\t\t";
cprintf(">>>2. |    Circlescape     |");
cout<<"\n\n\t\t";
textattr(2);
cprintf("Enter your choice : ");cin>>ch3;
if(ch3==1)
{
char c;
do
{
clrscr();
cout<<"\n\n\t\t\t";
textattr(14);
cprintf(">>>0. | View Record |");
cout<<"\n\n\t\t\t";
cprintf(">>>1. | Create Record |");
cout<<"\n\n\t\t\t";
cprintf(">>>2. | Apend Record |");
cout<<"\n\n\t\t\t";
cprintf(">>>3. | Delete Record |");
cout<<"\n\n\t\t\t";
cprintf(">>>4. | Search Record |");
cout<<"\n\n\t\t\t";
cprintf(">>>5. | Exit |");
int n;                        textattr(2);
gotoxy(5,22);
cprintf("Select your choice : ");cin>>n;
if(n==0)
view1();
else if(n==1)
create1();
else if(n==2)
{append1();
}
else if(n==3)
{del1();
}
else if(n==4)
{search1();
}
else if(n==5)
{exit(0);
}
textattr(2);
cprintf("Do you want to continue ? :");cin>>c;
}while(c=='y');
}
else if(ch3==2)
{ circlescape();
}
}
else if(ch=='3')
{ clrscr();
int occ;textattr(14);
cout<<"\n\t\t";
cprintf(">>>1. | School Administrator |");
cout<<"\n\n\t\t";
cprintf(">>>2. | Doctor |");
cout<<"\n\n\t\t";
cprintf(">>>3. | Shopkeeper |");
textattr(2);
cout<<"\n\n\t\t";
cprintf("Select your occupation : ");cin>>occ;
manage(occ);
}
closegraph();
clrscr();
textattr(2);
cprintf("Do you want to continue ? Yes (y) or No (n)");cin>>c;
delay(2000);
if(c=='n')
break;
else if(c=='y')
goto A;
}while(c=='y');

getch();
}

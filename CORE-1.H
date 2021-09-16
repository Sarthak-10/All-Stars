    #include<fstream.h>
    #include<conio.h>
    #include<string.h>
    #include<process.h>
    #include<dos.h>
    #include<stdlib.h>
    #include<stdio.h>
    #include<graphics.h>

		void cover()
		{

		clrscr();
		gotoxy(1,25);

		textattr(15);
		cprintf("--------------------------------------------------------------------------------"); gotoxy(1,1);    	textattr(15);
		cprintf("--------------------------------------------------------------------------------");

		gotoxy(65,2);
		cprintf("Version : 0.0");

		gotoxy(41,3);
		cprintf("‡і Copyright 2018;All rights reserved.");

		gotoxy(54,4);
		cprintf("Minisoft Productions-2018");

		textattr(5);

		gotoxy(35,10);
		cprintf("ЫЫЫЫЫЫЫЫЫЫЫMini");
		gotoxy(35,11);
		cprintf("ЮЮЮЮЮЮЮЮЮЮ");
		gotoxy(35,12);
		cprintf("ЫЫЫЫЫ*ЫЫЫЫЫ");
		gotoxy(35,13);
		cprintf("ЮЮЮЮЮЮЮЮЮЮ");
		gotoxy(35,14);
		cprintf("ЫЫЫЫЫЫЫЫЫЫЫSoft");





	gotoxy(30,24);
	textattr(11);
	cprintf("Minisoft Corporations");
	gotoxy(30,25);
	cprintf("-_-_-_-_-_-_-_-_-_-_-_");

	textattr(15);
	gotoxy(31,17);
	cprintf("S");delay(50);cprintf("t");delay(50);cprintf("a");delay(50);cprintf("r");delay(50);cprintf("t");delay(50);cprintf("i");delay(50);cprintf("n");delay(50);cprintf("g");
	delay(50);
	cout<<" ";
	delay(50);
	cprintf("P");delay(50);cprintf("r");delay(50);cprintf("o");delay(50);cprintf("g");delay(50);cprintf("r");delay(50);cprintf("a");delay(50);cprintf("m");
	delay(50);


	_setcursortype(_NOCURSOR);


		for (int p1=0;p1<5;p1++)
		{
			 for (int p=47;p<50;p++)
			 {
				  gotoxy(p,17);
				  delay(500);
				  cprintf(".");
			 }

			 gotoxy(47,17);
			 delay(500);
			 cout<<"      ";
		}





			 int locator=18;

			 gotoxy(18,19); textattr(2);

			 for(int counter=0;counter<=98;counter=counter+2)
			 {
				delay(30);

				if(counter==32)
				delay(700);

				cprintf("Ы");

				gotoxy(69,19);
				cout<<counter+2<<"%";

				locator++;
				gotoxy(locator,19);}

			 }

	  void password()
      {
       clrscr();
       char name[30],pass[20],ch,Ch;
       gotoxy(15,7);cout<<"\t*****************************************";
       gotoxy(15,16);cout<<"\t*****************************************";
	 for(int i=0;i<=2;i++)
      {
	gotoxy(15,8);
	cout<<"\tEnter the username:";
	if(i!=0)
	clreol();gets(name);cout<<endl;
	cout<<"\t\tEnter the password:";
	if(i!=0)
	clreol();
       for(int j=0;j<7;j++)
      {
      ch=getch();
      cout<<"*";
      pass[j]=ch;
       }
      pass[j]='\0';
     if(strcmp("cs",name)==0)
     {
     if(strcmp("Sarthak",pass)==0)
     {
     cout<<endl;
     clreol();
     cout<<"\n\t\tSUCCESSFUL LOGIN";clreol();
     delay(500);
     break;
     }
     else
     {
     cout<<endl;
     cout<<"t\tYou have entered wrong username or password.\n\t\tPress any character to continue.";cin>>Ch;
     Ch=getch();
     }
     }
     else
    {
    cout<<endl;
    cout<<"\t\tYou have entered wrong username or password."<<endl;
    cout<<"\t\tNow you have only "<<2-i<<" attempts left.\n\t\tPress any character to continue.";cin>>Ch;
    Ch=getch();
    if(i==2)
    exit(0);
    }
    }
    }

     void circlescape()
    {
     int gdriver=DETECT,gmode;
     initgraph(&gdriver,&gmode,"");
     setbkcolor(BLUE);
     char d;
     gotoxy(15,5);cout<<"\t*****************************************";
     gotoxy(15,22);cout<<"\t*****************************************";
     gotoxy(15,8);
     cout<<"Rules of the game:\n1)You have to use w,a,s,and d to move the circle up,left,down,and right          respectively.";
     cout<<"\n\n2)The objective of the game is to touch all the 5 small circles which will      appear one by one in different locations in the order of your touching them.";
     cout<<"\n\n3)Also do not touch the boundary of the board otherwise your circle will stop    and you will have to press letter 'b' on your keyboard to escape.";
     cout<<"\nSo are you ready to play.Press any key to continue.";d=getch();
     cleardevice();
     gotoxy(1,1);
    char ch;int l;
    int j=200,k=200;

    rectangle(150,150,450,450);
    rectangle(150,150,250,250);
    rectangle(250,250,350,350);
    rectangle(350,350,450,450);

    int x=250;
    int y=250;
    for(int m=0;;m++)
  {

    ch=getch();
    cleardevice();
    rectangle(150,150,450,450);
    rectangle(150,150,250,250);
    rectangle(250,250,350,350);
    rectangle(350,350,450,450);
    circle(x,y,5);
  if(ch=='d'&&j>=150&&j<=450&&k>=150&&k<=450)
{
   j+=5;
   circle(j,k,5);
}
else if(ch=='w'&&k>=150&&k<=450&&j>=150&&j<=450)
{
k-=5;
circle(j,k,5);
}
else if(ch=='s'&&k>=150&&k<=450&&j>=150&&j<=450)
{
k+=5;
circle(j,k,5);
}
else if(ch=='a'&&j>=150&&j<=450&&k>=150&&k<=450)
{
j-=5;
circle(j,k,5);
}
if(ch=='b')
break;

if(m==0)
{x=250;
y=250;

circle(x,y,5);
}
if(j==x&&k==y)
{
if(x==250&&y==250)
{cout<<"You touched the first one now go for the second one.";
circle(350,350,5);
x=350;
y=350;
}
else if(x==350&&y==350)
{cout<<"\nWow,here goes the second one.Now go on for the third one.";
circle(250,350,5);
x=250;
y=350;
}
else if(x==250&&y==350)
{cout<<"\nCongrats,keep going only two more left.";
circle(350,250,5);
x=350;
y=250;
}
else if(x==350&&y==250)
{
cout<<"\nYou are doing extremely well,now touch the last one and win the game.";
circle(400,400,5);
x=400;
y=400;
}
else if(x==400&&y==400)
{
cout<<"\nHurray you won the game.Now press 'b' to exit.";
}
}
}
}



			void loading()
			{
clrscr();
for(int i=0,j=0;i<=80;i++)
{
gotoxy(i/2,1);cout<<"#";
gotoxy(i/2,25);cout<<"#";
gotoxy(80-i/2,1);cout<<"#";
gotoxy(80-i/2,25);cout<<"#";

gotoxy(1,j/2);cout<<"#";
gotoxy(80,j/2);cout<<"#";
gotoxy(1,25-j/2);cout<<"#";
gotoxy(80,25-j/2);cout<<"#";
if(j<=30)
j++;
delay(50);
}

gotoxy(32,12);
char arr[]={'L','O','A','D','I','N','G','\0'};
for(i=0;arr[i]!='\0';i++)
{
cout<<arr[i];
delay(500);
}
gotoxy(40,12);
int k;
for( k=0,j=0;j<=30,k<=100;j+=3,k+=10)
{
cout<<".";
gotoxy(30+j,14);cout<<"#";
gotoxy(60,14);cout<<k<<"%";
delay(500);
gotoxy(41,12);cout<<".";
gotoxy(31+j,14);cout<<"#";
gotoxy(60,14);cout<<k<<"%";
delay(500);
gotoxy(42,12);cout<<".";
gotoxy(32+j,14);cout<<"#";
gotoxy(60,14);cout<<k<<"%";
delay(500);
gotoxy(40,12);
clreol();
}
}
void questionnaire()
{ clrscr();
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"");
 setbkcolor(BLUE);
int ch1,ch2,score=0;
cout<<"This is a questionnaire.You will be asked 5 questions which will eventually test your various abilities.So let us begin.";
cout<<endl<<endl;
cout<<"Q1. What was the name of the person who developed c++(c with classes)?"<<endl;
cout<<endl<<endl;
cout<<"1. James Gosling"<<endl<<"2. C.L. Sholes"<<endl<<"3. Bjarne Stroustrup"<<endl<<"4. Guido Van Rossum";
cout<<endl<<endl;
cout<<"Enter the correct option number:";cin>>ch1;
if (ch1==3)
{cout<<"You have given the correct answer.";
score+=10;
}
else
cout<<"OOPS!This is the wrong answer.The correct answer is option 3.Try the other one.";
delay(5000);
cleardevice();
gotoxy(1,1);
cout<<"Now this is a question which will be testing your hearing ability.";
cout<<endl<<endl;
cout<<"Q2 You will be hearing three sounds each for a duration of 5 seconds.Identify the sound with the highest frequency.";
delay(3000);
sound(2500);
delay(5000);
nosound();
cout<<endl<<"This was the sound with Frequency 1.";
sound(7000);
delay(5000);
nosound();
cout<<endl<<"This was the sound with Frequency 2.";
sound(1000);
delay(5000);
nosound();
cout<<endl<<"This was the sound with Frequency 3.";delay(1500);
cout<<endl<<"Enter the sound number which had the highest frequency:";cin>>ch2;
if (ch2==2)
{
cout<<"You have given the correct answer.";
score+=10;
}
else
cout<<"OOPS!This is the wrong answer.The correct answer is option 2.Try the other one.";
delay(5000);
cleardevice();
gotoxy(1,1);
 setbkcolor(BLUE);
 cout<<"This question will be testing your visual skills as well as your knowledge."<<endl<<endl;
cout<<"Q3. Which of the below colour is mixture of white and red."<<endl<<endl;
char ch;
gotoxy(16,13);cout<<"A:";
setfillstyle(SOLID_FILL, GREEN);
bar(100,130,150,160);
gotoxy(32,13);cout<<"B:";
setfillstyle(SOLID_FILL, LIGHTMAGENTA);
bar(220,130,270,160);
gotoxy(47,13);cout<<"C:";
setfillstyle(SOLID_FILL, RED);
bar(340,130,390,160);
gotoxy(1,15);cout<<"Enter your choice:";cin>>ch;
if(ch=='A')
cout<<"OOPS!This is the wrong answer.The correct answer is option B.Try the other one.";
if(ch=='B')
{
cout<<"You have given the correct answer.";
score+=10;
}
if(ch=='C')
cout<<"OOPS!This is the wrong answer.The correct answer is option B.Try the other one.";
delay(5000);
cleardevice();
gotoxy(1,1);
char a;
cout<<"This question will test your mathematical skills.You are supposed to add the    given set of numbers and enter the result within five seconds.So are you ready.    Press any character to continue.";a=getch();
cout<<"\nQA.What is 5+17+18+8+10 ?"<<endl<<" Choose one of the options given below:-"<<endl<<"1.  57"<<"  2.  58"<<"  3.  48"<<"  4.  47"<<endl;

delay(5000);
cleardevice();
gotoxy(1,1);
int Ch;
cout<<"What is the answer of the question:";cin>>Ch;
if(Ch==2)
{
cout<<"You have given the correct answer.";
score+=10;
}
else if(ch!=2)
cout<<"Oops,This is the incorrect answer.The correct answer is option 2.";
cout<<endl<<endl<<"QB.Now in this question you are supposed to multiply the given numbers within 7 seconds.Press any character to continue.";a=getch();
cout<<"\nWhat is 7*4*2*9*2 ? Select one of the options given below."<<endl<<"A. 1008\tB. 504\tC. 1006\tD. 508";
delay(7000);
cleardevice();
gotoxy(1,1);
char Ch1;
cout<<"What is the answer of the question:";cin>>Ch1;
if(Ch1=='A')
{
cout<<"You have given the correct answer.";
score+=10;
}
else if(Ch1!='A')
cout<<"Sorry,It is the wrong answer,the correct answer is A.";
cout<<endl<<endl<<"QC.Now in this question you are supposed to find the next number in the pattern,and you have just 10 seconds to complete do this problem.";
cout<<"Press any character to continue.";a=getch();
cout<<endl<<"11,14,19,26,35,__ .Select one of the options given below."<<endl<<"A. 46\tB. 47\tC. 56\tD. 57";
delay(10000);
cleardevice();
gotoxy(1,1);
char Ch2;
cout<<"What is the answer of the question:";cin>>Ch2;
if(Ch2=='A')
{
cout<<"You have given the correct answer.";
score+=10;
}
else if(Ch2!='A')
cout<<"Sorry,It is the wrong answer,the correct answer is option 'A'.";
delay(2000);
cleardevice();
gotoxy(1,1);
cout<<"SCORECARD"<<endl<<"Your overall score is:"<<score<<endl;
if(score==60)
{
cout<<"\n\nFrom your score it seeems that you have outstanding General knowledge and have  extremely good sense of hearing along with brilliant mathematical skills."<<endl<<endl;
cout<<"Well Done and Keep working hard.";
}
else if(score<60&&score>=30)
{
cout<<"\n\nFrom your score it seeems that you have average General knowledge and good        mathematical skills.However you can still enhance your skill.";
cout<<endl<<"\nOverall good score but can improve a lot.Better luck for next time.";
}
else if(score<30)
{
cout<<"\n\nAlthough you may not have scored very well but atleast you tried.Better luck for next time.";
cout<<endl<<"\nNice Try but you need to learn a lot.";
}
char s;
cout<<"Press any character to continue.";s=getch();
delay(1000);
}

void tic_tac_toe()
{clrscr();
 int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"");
char ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9;
char arr[]={10,11,12,13,14,15,16,17,18,'\0'};
setbkcolor(RED);
gotoxy(33,10);cout<<"TIC TAC TOE";
gotoxy(40,12);
rectangle(200,200,400,400);
line(200,266,400,266);
line(200,332,400,332);
line(266,200,266,400);
line(332,200,332,400);
gotoxy(29,15);cout<<"1";
gotoxy(37,15);cout<<"2";
gotoxy(46,15);cout<<"3";
gotoxy(29,19);cout<<"4";
gotoxy(37,19);cout<<"5";
gotoxy(46,19);cout<<"6";
gotoxy(29,23);cout<<"7";
gotoxy(37,23);cout<<"8";
gotoxy(46,23);cout<<"9";
int i=0;
int flag=0,flag1=0,flag2=0;
do
{B:
int ch;
gotoxy(55,22);
cout<<"Player 1 its your turn:";
if(flag1==1)
clreol();
if(i!=0)
clreol();
cin>>ch;
if(i==0)
{
arr[0]=ch;
}
else if(i==1)
{
  arr[2]=ch;
}
else if(i==2)
{
arr[4]=ch;
}
else if(i==3)
{
arr[6]=ch;
}
else if(i==4)
{
arr[8]=ch;
}

for(int j=1;arr[j]!='\0';j++)
{
if(arr[j]==arr[j-1])
{cout<<"Invalid move.Enter again\nin valid block.";
goto B;
flag1=1;
}
}

switch(ch)
{
case 1:gotoxy(29,15);cout<<"O";ch1='O'; break;
case 2:gotoxy(37,15);cout<<"O";ch2='O';break;
case 3:gotoxy(46,15);cout<<"O";ch3='O';break;
case 4:gotoxy(29,19);cout<<"O";ch4='O';break;
case 5:gotoxy(37,19);cout<<"O";ch5='O';break;
case 6:gotoxy(46,19);cout<<"O";ch6='O';break;
case 7:gotoxy(29,23);cout<<"O";ch7='O';break;
case 8:gotoxy(37,23);cout<<"O";ch8='O';break;
case 9:gotoxy(46,23);cout<<"O";ch9='O';break;
}
if((ch1==ch2&&ch2==ch3)||(ch4==ch5&&ch5==ch6)||(ch7==ch8&&ch8==ch9)||(ch1==ch5&&ch5==ch9)||(ch3==ch5&&ch5==ch7)||(ch1==ch4&&ch4==ch7)||(ch2==ch5&&ch5==ch8)||(ch3==ch6&&ch6==ch9))
{
flag=1;
goto A;
}
if(i==4)
goto A;
C:
gotoxy(55,24);
cout<<"Player 2 its your turn:";
if(flag2==1)
clreol();
if(i!=0)
clreol();
cin>>ch;
if(i==0)
{
arr[1]=ch;
}
else if(i==1)
{
  arr[3]=ch;
}
else if(i==2)
{
arr[5]=ch;
}
else if(i==3)
{
arr[7]=ch;
}

for( j=1;arr[j]!='\0';j++)
{
if(arr[j]==arr[j-1])
{cout<<"Invalid move.Enter again \nin valid block.";
goto C;
flag2=1;
}
}
switch(ch)
{
case 1:gotoxy(29,15);cout<<"X";ch1='X';break;
case 2:gotoxy(37,15);cout<<"X";ch2='X';break;
case 3:gotoxy(46,15);cout<<"X";ch3='X';break;
case 4:gotoxy(29,19);cout<<"X";ch4='X';break;
case 5:gotoxy(37,19);cout<<"X";ch5='X';break;
case 6:gotoxy(46,19);cout<<"X";ch6='X';break;
case 7:gotoxy(29,23);cout<<"X";ch7='X';break;
case 8:gotoxy(37,23);cout<<"X";ch8='X';break;
case 9:gotoxy(46,23);cout<<"X";ch9='X';break;
}

if((ch1==ch2&&ch2==ch3)||(ch4==ch5&&ch5==ch6)||(ch7==ch8&&ch8==ch9)||(ch1==ch5&&ch5==ch9)||(ch3==ch5&&ch5==ch7)||(ch1==ch4&&ch4==ch7)||(ch2==ch5&&ch5==ch8)||(ch3==ch6&&ch6==ch9))
flag=1;
A:
i++;
if(i==5)
break;
}while(flag==0);
if((ch1==ch2&&ch2==ch3&&ch1=='O')||(ch4==ch5&&ch5==ch6&&ch5=='O')||(ch7==ch8&&ch8==ch9&&ch7=='O')||(ch1==ch5&&ch5==ch9&&ch9=='O')||(ch3==ch5&&ch5==ch7&&ch5=='O')||(ch1==ch4&&ch4==ch7&&ch4=='O')||(ch2==ch5&&ch5==ch8&&ch5=='O')||(ch3==ch6&&ch6==ch9&&ch6=='O'))
{gotoxy(55,25);
cout<<"Player 1 wins.";
}
else if((ch1==ch2&&ch2==ch3&&ch1=='X')||(ch4==ch5&&ch5==ch6&&ch5=='X')||(ch7==ch8&&ch8==ch9&&ch7=='X')||(ch1==ch5&&ch5==ch9&&ch9=='X')||(ch3==ch5&&ch5==ch7&&ch5=='X')||(ch1==ch4&&ch4==ch7&&ch4=='X')||(ch2==ch5&&ch5==ch8&&ch5=='X')||(ch3==ch6&&ch6==ch9&&ch6=='X'))
{gotoxy(55,25);
cout<<"Player 2 wins.";
}
else if(i==5)
{gotoxy(55,25);
cout<<"The game is draw.";
}
delay(2000);
}

void view(int n)
{
char ch;
fstream file;
if(n==1)
file.open("sc_ad.txt",ios::in);
else if(n==2)
file.open("doc.txt",ios::in);
else if(n==3)
file.open("shop.txt",ios::in);
while(!file.eof())
{
file.get(ch);
cout<<ch;
}

file.close();
}

void create(int &n)
{ int prono;
char name[30];
float earn;
char sno[10],id[40],sal[20];
char ch;
fstream file;
if(n==1)
file.open("sc_ad.txt",ios::out);
else if(n==2)
file.open("doc.txt",ios::out);
else if(n==3)
file.open("shop.txt",ios::out);

do
{
if(n==1)
{
strcpy(sno,"admission no.");
strcpy(id,"name");
strcpy(sal,"annual marks");
}
else if(n==2)
{
strcpy(sno,"id");
strcpy(id,"doctor's name");
strcpy(sal,"salary");
}
else if(n==3)
{
strcpy(sno,"item no.");
strcpy(id,"item name");
strcpy(sal,"item price");
}
else cout<<"\nEnter valid output.";

cout<<"\nEnter "<<sno<<":";cin>>prono;
file<<"\n"<<prono<<"\t";
cout<<"\nEnter "<<id<<":";gets(name);
file<<name<<"\t";
cout<<"\nEnter "<<sal<<":";cin>>earn;
file<<earn;
cout<<"\nAdd more data:";
cin>>ch;
}while(ch=='y');

}

void append(int &n)
{ int prono;
char name[30];
float earn;
char sno[10],id[40],sal[20];
char ch;
fstream file;
if(n==1)
file.open("sc_ad.txt",ios::app);
else if(n==2)
file.open("doc.txt",ios::app);
else if(n==3)
file.open("shop.txt",ios::app);

do
{
if(n==1)
{
strcpy(sno,"admission no.");
strcpy(id,"name");
strcpy(sal,"annual marks");
}
else if(n==2)
{
strcpy(sno,"id");
strcpy(id,"doctor's name");
strcpy(sal,"salary");
}
else if(n==3)
{
strcpy(sno,"item no.");
strcpy(id,"item name");
strcpy(sal,"item price");
}
else cout<<"\nEnter valid output.";

cout<<"\nEnter "<<sno<<":";cin>>prono;
file<<"\n"<<prono<<"\t";
cout<<"\nEnter "<<id<<":";gets(name);
file<<name<<"\t";
cout<<"\nEnter "<<sal<<":";cin>>earn;
file<<earn;
cout<<"\nAdd more data:";
cin>>ch;
}while(ch=='y');
}


void search(int &n)
{
int p;
fstream file;
char line[100];
cout<<"Enter the record to search for:";cin>>p;

if(n==1)
file.open("sc_ad.txt",ios::in);
else if(n==2)
file.open("doc.txt",ios::in);
else if(n==3)
file.open("shop.txt",ios::in);


while(!file.eof())
{
file.getline(line,100);
if(line[0]==p)
cout<<line;
}
}

void del(int &n)
{
char ch;
char line[100];
char p;
cout<<"Enter the record to delete:";cin>>p;

ifstream fin;


if(n==1)
fin.open("sc_ad.txt");
else if(n==2)
fin.open("doc.txt");
else if(n==3)
fin.open("shop.txt");


ofstream fout;
fout.open("temp");

while(!fin.eof())
{ fin.getline(line,100);
  if(line[0]!=p)
  {fout<<line<<"\n";
  }
  }
  fin.close();
  fout.close();

if(n==1)
{
remove("sc_ad.txt");
rename("temp","sc_ad.txt");
}
else if(n==2)
{
remove("doc.txt");
rename("temp","doc.txt");
}
else if(n==3)
{
remove("shop.txt");
rename("temp","shop.txt");
}
cout<<"\nfile deleted!";
}

void manage(int &n)
{ char Record[30];
if(n==1)
strcpy(Record,"student's Record");
else if(n==2)
strcpy(Record,"patient's Record");
else if(n==3)
strcpy(Record,"item list");

char c;
do
{ clrscr();
cout<<"\n\n\t\t\t0.View "<<Record;
cout<<"\n\n\t\t\t1.Create "<<Record;
cout<<"\n\t\t\t2.Apend "<<Record;
cout<<"\n\t\t\t3.Delete "<<Record;
cout<<"\n\t\t\t4.Search "<<Record;
cout<<"\n\t\t\t5.Exit";

int q;
cout<<"\nSelect your choice:";cin>>q;
if(q==0)
view(n);
else if(q==1)
create(n);
else if(q==2)
append(n);
else if(q==3)
del(n);
else if(q==4)
search(n);
else if(q==5)
exit(0);

cout<<"Do you want to continue:";cin>>c;
}while(c=='y');

}
	struct marks
		{
			int cl;
			int english;
			int maths;
			int physics;
			int chemistry;
			int compsc;
			char term[10];

		};



		class student
		{
			marks m;

			public:

			void readdata()
			{
				cout<<"Enter your class:";cin>>m.cl;
				cout<<"Enter term(PT1/PT2/PT3/PT4):";gets(m.term);
				cout<<"\nEnter marks of english:";
				cin>>m.english;
				cout<<"\nEnter marks of maths:";
				cin>>m.maths;
				cout<<"\nEnter marks of physics:";
				cin>>m.physics;
				cout<<"\nEnter marks of chemistry:";
				cin>>m.chemistry;
				cout<<"\nEnter marks of computer science:";
				cin>>m.compsc;
			}


			void showdata()
			{
				cout<<"\nCLASS:"<<m.cl;
				cout<<"\n\nTERM:"<<m.term;
				cout<<"\nenglish:";
				cout<<m.english;
				cout<<"\nmaths:";
				cout<<m.maths;
				cout<<"\nphysics:";
				cout<<m.physics;
				cout<<"\nchemistry:";
				cout<<m.chemistry;
				cout<<"\ncomputer science:";
				cout<<m.compsc;

			}

			int retenglish()
			{
				return m.english;
			}

			int retmaths()
			{
				return m.maths;
			}

			int retphysics()
			{
				return m.physics;
			}

			int retchemistry()
			{
				return m.chemistry;
			}

			int retcs()
			{
				return m.compsc;
			}
		       int retclass()
		       {
		       return m.cl;
		       }
		       char* retterm()
		       {
		       return m.term;
		       }

		};



void view1()
{
student s ;
char ch;
fstream file("student.dat",ios::binary|ios::out|ios::in);
while(file.read((char*)&s,sizeof(s)))
{
s.showdata();
}

file.close();
}
	void create1()
	{
		student s1;		char ch;

		fstream file("student.dat",ios::binary|ios::out|ios::in);

		do
		{
		s1.readdata();
		file.write((char*)&s1,sizeof(s1));
		cout<<"\nAdd more data:";
		cin>>ch;
		}
		while(ch=='y');

	}


	void append1()
	{
		student s1;char ch;
		fstream file("student.dat",ios::binary|ios::app);
		s1.readdata();
		file.write((char*)&s1,sizeof(s1));
	}


	void search1()
	{

		fstream file;
		student s2;
char ch;        int clas;
char ter[10];
		cout<<"Enter the class to search for:";
		cin>>clas;
		cout<<"Enter the term to search for:";
		gets(ter);

		file.open("student.dat",ios::binary|ios::in);

		while(file.read((char*)&s2,sizeof(s2)))
		{
			if((clas==s2.retclass())&&(strcmp(s2.retterm(),ter)==0))
			s2.showdata();
		}
	}

		void del1()
		{
			student s3;
char ch;                int cla;
int s;                  char ter[10];
			cout<<"Enter the class to delete from:";
			cin>>cla;
			cout<<"Enter the term to delete :";
			gets(ter);
			ifstream fin("student.dat");
			ofstream fout("temp.dat");

			while(fin.read((char*)&s3,sizeof(s3)))
			{
				if(strcmp(s3.retterm(),ter)!=0)
				fout.write((char*)&s3,sizeof(s3));
			}

			fin.close();
			fout.close();

			remove("student.dat");
			rename("temp.dat","student.dat");
			cout<<"term deleted!";

		}

#include<ctype.h>
#include<string.h>
#include<fstream.h>
#include <graphics.h>
#include <stdlib.h>
#include<iostream.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
struct qa
{ char q[200],ans[4][200];
	char ch[200];}ques;
struct player

 { char password[20],name[10];
	int score;};
struct admin
{
 char aname[20],password[20];
}ad;
void hiscore(player as)
{
 ofstream fout("scoretab.dat",ios::binary|ios::in);
 player we,we1;
 strcpy(we.name,as.name);
 strcpy(we.password,as.password);
 we.score=as.score;
 fout.write((char*)&we,sizeof(we));
 fout.close();
 /*fstream f("scoretab.dat",ios||binary,ios||in,ios||out);
 while(f.read((char*)&we,32))
 {


 }*/
 }


int checkExistence(int A[], int n, int i)
{
	for (int j = 0; j < n && A[j]!= i; j++);
	if (j < n)
		return 1;
	else
		return 0;
}

void deleteElement(int A[], int n, int i)
{
	for (int j = 0; j < n && A[j]!=i; j++);
	for (; j < n - 1; j++)
		A[j] = A[j+1];
	A[n-1] = 0;
}



void main()
{ int gdriver = DETECT,gmode;
int x,y,i;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
setcolor(GREEN);
randomize();
//rect();
for(int i3=40;i3>=1;i3--)
if(i3%4==2)
{setcolor(LIGHTBLUE);
circle(80,400,i3);}
else if(i3%4==1)
{setcolor(LIGHTBLUE);
circle(80,400,i3);}
else if(i3%4==3)
{setcolor(LIGHTBLUE);
circle(80,400,i3);}
else
{setcolor(LIGHTBLUE);
circle(80,400,i3);}
for(int i2=70;i2>=1;i2--)
if(i2%3==2)
{setcolor(LIGHTBLUE);
circle(85,85,i2);}
else if(i2%3==1)

{setcolor(LIGHTBLUE);
circle(85,85,i2);}
else
{setcolor(LIGHTBLUE);
circle(85,85,i2);}
for(int i1=60;i1>=1;i1--)
if(i1%2==1)
{setcolor(BLUE);
circle(510,230,i1);}
else if(i1%2==0)
{setcolor(GREEN);
circle(510,230,i1);}
setbkcolor(BLACK);
getcolor();
setcolor(GREEN);
settextstyle(7,0,5);
outtextxy(160,45,"MATRIX QUIZ");
gotoxy(10,10);
cout<<"   THIS PROGRAM CONSIST OF THE HARDEST QUESTION EVER KNOWN";
gotoxy(29,12);
cout<<"IN THE  WHOLE  WIDE ";
gotoxy(17,14);
cout<<char(221)<<char(219)<<"      "<<char(219)<<char(222);
gotoxy(17,15);
cout<<char(219)<<char(219)<<"      "<<char(219)<<char(219);
gotoxy(17,16);
cout<<char(219)<<char(219)<<"      "<<char(219)<<char(219)<<" "<<char(220)<<char(220)<<char(220)<<char(220)<<char(220)<<char(220)<<char(220)<<" "<<char(220)<<char(220)<<char(220)<<char(220)<<char(220)<<char(220)<<char(220)<<" "<<char(220)<<"      "<<char(220)<<char(220)<<char(220)<<char(220)<<char(220)<<char(220)<<char(220)<<char(220);
gotoxy(17,17);
cout<<char(219)<<char(219)<<"      "<<char(219)<<char(219)<<" "<<char(219)<<char(223)<<"   "<<char(223)<<char(219)<<" "<<char(219)<<"    "<<char(223)<<char(219)<<" "<<char(219)<<"       "<<char(219)<<"    "<<char(223)<<char(219);
gotoxy(17,18);
cout<<char(219)<<char(219)<<"  "<<char(222)<<char(221)<<"  "<<char(219)<<char(219)<<" "<<char(219)<<"     "<<char(219)<<" "<<char(219)<<"    "<<char(220)<<char(219)<<" "<<char(219)<<"       "<<char(219)<<"     "<<char(219);
gotoxy(17,19);
cout<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<"  "<<char(219)<<char(219)<<" "<<char(219)<<"     "<<char(219)<<" "<<char(219)<<char(219)<<char(223)<<char(223)<<char(223)<<char(223)<<char(223)<<" "<<char(219)<<"       "<<char(219)<<"     "<<char(219);
gotoxy(17,20);
cout<<char(219)<<char(219)<<" "<<char(219)<<char(223)<<char(223)<<char(219)<<" "<<char(219)<<char(219)<<" "<<char(219)<<"     "<<char(219)<<" "<<char(219)<<char(223)<<char(219)<<char(220)<<"    "<<char(219)<<"       "<<char(219)<<"     "<<char(219);
gotoxy(17,21);
cout<<char(219)<<char(219)<<char(222)<<char(221)<<"  "<<char(222)<<char(221)<<char(219)<<char(219)<<" "<<char(219)<<"     "<<char(219)<<" "<<char(219)<<"  "<<char(219)<<char(220)<<"   "<<char(219)<<"       "<<char(219)<<"     "<<char(219);
gotoxy(17,22);
cout<<char(222)<<char(219)<<char(219)<<"    "<<char(219)<<char(219)<<char(221)<<" "<<char(219)<<char(219)<<char(220)<<char(220)<<char(220)<<char(219)<<char(219)<<" "<<char(219)<<"   "<<char(223)<<char(219)<<char(220)<<" "<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<" "<<char(220)<<char(219)<<char(220)<<char(220)<<char(220)<<char(220)<<char(219)<<char(219);
	delay(1000);
	cleardevice();
	setcolor(LIGHTBLUE);
	settextstyle(8,0,3);
	player p;
	ofstream fout("playerdetails.dat",ios::binary|ios::app);
	char accpass[20],accname[10];
			setcolor(BLUE);
		settextstyle(4,0,6);
outtextxy(110,35,"MATRIX QUIZ");
		setcolor(LIGHTRED);
		settextstyle(6,0,4);
outtextxy(100,150,"MAIN MENU  ");
		setcolor(MAGENTA);
settextstyle(1,0,2);
outtextxy(170,190,"1 . Admin");
	setcolor(MAGENTA);
settextstyle(1,0,2);
outtextxy(170,220,"2 . Play");
		setcolor(MAGENTA);
settextstyle(1,0,2);
outtextxy(170,250,"3 . Exit");
	 int choice;
			 setcolor(YELLOW);
settextstyle(1,0,2);
outtextxy(170,310,"Enter Your Option ::");
gotoxy(53,21);cin>>choice;
switch(choice)
{
case 1:
		cleardevice();
		settextstyle(3,0,5);
		outtextxy(15,10,"ADMINISTRATOR");
		setcolor(GREEN);
		settextstyle(5,0,3);
		outtextxy(15,64,"Enter Your Name ::");
		gotoxy(30,6);
		gets(ad.aname);
		settextstyle(5,0,3);
		outtextxy(15,97,"Enter The Pass Code ::");
		gotoxy(35,8);
		gets(ad.password);
		if(!strcmpi(ad.aname,"admin")&&!strcmpi(ad.password,"admin"))
		{cleardevice();
		fstream fout1("sportsm.dat",ios::in | ios::out);
		fstream fout2("techmm.dat",ios::in | ios::out);
			settextstyle(6,0,3);
			outtextxy(15,10,"MENU");
			outtextxy(15,64,"DELETION OF QUESTION");
				outtextxy(15,97,"INSERTION OF QUESTION");
			gotoxy(10,10);
			int quest;
			cin>>quest;
	if(quest==1)
	{ char s1;
	do
	{
				cleardevice();
	ifstream file("sportsm.dat", ios::binary );
	int n;
	file.read((char*)&n, sizeof(n));
	int *A = new int[n];

	int nn = n;
	qa x;

	for (int i = 0; i < n; i++)
	{
		cleardevice();
		file.read((char*)&x, sizeof(x));
		outtextxy(15,64,x.q);
		outtextxy(15,97,"Do you want the question ? ");

		char c;
		cin >> c;
		if (c == 'y')
		{A[i] = 1;}
		else
		{A[i] = 0; nn--;}
	}

	getch();

	file.seekg(sizeof(int));

	ofstream fout ("temp.dat");
	fout.write((char*)&nn, sizeof(nn));

	for (i = 0; i < n; i++)
	{
		file.read((char*)&x, sizeof(x));
		if (A[i])
			fout.write((char*)&x, sizeof(x));
	}

	fout.close();
	file.close();

	remove("sportsm.dat");
	rename("temp.dat", "sportsm.dat");
	cleardevice();
	outtextxy(15,64,"Do you want to continue deleting ? ");
	gotoxy(15,5);
	cin>>s1;
	}while(s1=='y'||s1=='Y');
	}
	else if(quest==2)

	{ char s2;
	do
	{
	setcolor(BLUE);
	settextstyle(3,0,5);
	outtextxy(15,10,"ADMINISTRATOR");
	setcolor(GREEN);
	settextstyle(6,0,3);
	outtextxy(5,50,"Enter the question to be uploaded..");
	gotoxy(7,6);gets(ques.q);
	setcolor(YELLOW);
	settextstyle(6,0,3);
	outtextxy(25,100,"Enter The Options");
	setcolor(RED);
	settextstyle(1,0,2);
	outtextxy(29,135,"1 . ");
	gotoxy(10,10);
	gets(ques.ans[0]);
	settextstyle(1,0,2);
	outtextxy(29,168,"2 . ");
	gotoxy(10,12);
	gets(ques.ans[1]);
	settextstyle(1,0,2);
	outtextxy(29,200,"3 . ");
	gotoxy(10,14);
	gets(ques.ans[2]);
	settextstyle(1,0,2);
	outtextxy(29,230,"4 . ");
	gotoxy(10,16);
	gets(ques.ans[3]);
	setcolor(6);
	settextstyle(1,0,2);
	outtextxy(29,295,"Enter The Correct Answer :: ");
	gotoxy(44,20);
	gets(ques.ch);
	char opt;
	settextstyle(1,0,2);
	setcolor(LIGHTRED);
	outtextxy(29,328,"To Which Category You Want To Add This  S/H/T ?");
	gotoxy(76,22);
	cin>>opt;
	if(opt=='s'||opt=='S')
	{
	 int n;
	 fout1.read((char*)&n, sizeof(n));
	 n++;
	 fout1.seekp(0);
	 fout1.write((char*)&n, sizeof(n));
	 fout1.seekp(0, ios::end);
	 fout1.write((char*)&ques,sizeof(ques));

	}
	else if(opt=='T'||opt=='t')
	{
	 int n;
	 fout2.read((char*)&n, sizeof(n));
	 n++;
	 fout2.seekp(0);
	 fout2.write((char*)&n, sizeof(n));
	 fout2.seekp(0, ios::end);
	 fout2.write((char*)&ques,sizeof(ques));

	 }
	settextstyle(1,0,2);
	setcolor(LIGHTGREEN);
		fout1.close();
		fout2.close();
	 cleardevice();
	 outtextxy(15,64,"Do you want to insert more questions ?");
	 gotoxy(15,5);
	}while(s2=='y'||s2=='Y');}
		else
		{
		cleardevice();
		setcolor(RED);
		circle(325,240,85);
		circle(325,240,82);
		circle(325,240,83);
		circle(325,240,84);
		line(390,190,260,290);
		line(391,191,261,291);
		line(392,192,262,292);
		settextstyle(1,0,4);
	 setcolor(WHITE);
	 outtextxy(180,220,"INVALID PASSWORD");
		}
break;
case 2:
cleardevice();
setcolor(RED);
outtextxy(20,30,"ENTER YOUR NAME  :");
gotoxy(39,4);
gets(p.name);
gotoxy(32,5);
fout.write((char*)&p,sizeof(p));
settextstyle(1,0,6);
char c;
do{
setcolor(CYAN);
outtextxy(20,100,"Select Your Category");
setcolor(YELLOW);
settextstyle(8,0,3);
outtextxy(40,170,"S");
setcolor(GREEN);
settextstyle(8,0,3);
outtextxy(57,170,"PORTS");
setcolor(YELLOW);
settextstyle(8,0,3);
outtextxy(220,170,"H");
setcolor(GREEN);
settextstyle(8,0,3);
outtextxy(239,170,"ISTORY");
setcolor(YELLOW);
settextstyle(8,0,3);
outtextxy(360,170,"T");
setcolor(GREEN);
settextstyle(8,0,3);
outtextxy(377,170,"ECHNOLOGY");
setcolor(LIGHTMAGENTA);
settextstyle(8,0,3);
outtextxy(307,370,"Enter Your Option ");
setcolor(WHITE);
settextstyle(3,0,3);
outtextxy(559,370,":: ");
gotoxy(75,25);
char a;
gotoxy(14,67);
			cin>>c;
 if(c!='s'&&c!='S'&&c!='H'&&c!='h'&&c!='t'&&c!='T')
 {
	setcolor(WHITE);
	outtextxy(220,220,"INVALID CODE");
	delay(1000);
cleardevice();
setbkcolor(DARKGRAY);
setcolor(LIGHTBLUE);
setcolor(LIGHTBLUE);
settextstyle(6,0,6);
outtextxy(20,100,"Re-Select The Category");
setcolor(YELLOW);
settextstyle(8,0,3);
outtextxy(40,170,"S");
setcolor(GREEN);
settextstyle(8,0,3);
outtextxy(57,170,"PORTS");
setcolor(YELLOW);
settextstyle(8,0,3);
outtextxy(220,170,"H");
setcolor(GREEN);
settextstyle(8,0,3);
outtextxy(239,170,"ISTORY");
setcolor(YELLOW);
settextstyle(8,0,3);
outtextxy(360,170,"T");
setcolor(GREEN);
settextstyle(8,0,3);
outtextxy(377,170,"ECHNOLOGY");
setcolor(LIGHTMAGENTA);
settextstyle(8,0,3);
outtextxy(307,370,"Enter Your Option ");
setcolor(WHITE);
settextstyle(3,0,3);
outtextxy(559,370,":: ");
gotoxy(75,25);
cin>>c;}


}while(c!='s'&&c!='S'&&c!='H'&&c!='h'&&c!='t'&&c!='T');
	char choice;
	if(strcmp(p.name,"admin")!=0 && strcmp(p.password,"admin")!=0)
	{ //ifstream f1("sportsm.dat",ios::binary);
		//ifstream f2("techm.dat",ios::binary);
		int z=0;
		char a;

	 //gotoxy(14,67);
			//cin>>c;
if(c=='s'||c=='S')
{     ifstream f1("sportsm.dat",ios::binary);
			qa x; int r=0;
			cleardevice();
			int n;
			//cout << n;
			f1.read((char*)&n, sizeof(n));
			f1.close();
			f1.open("sportsm.dat", ios::binary);
			//x = new qa;

			int *A = new int[n];
			for (int i = 0; i < n; i++)
			A[i] = i+1;

			for(i = 0; i < n; i++)
			{
			//int p = A[random(n)];
			//deleteElement(A, n, p);
			cleardevice();
			int pp = i;
			//pp -- ;
			//n --;


			f1.seekg(sizeof(int) + (int)(pp * sizeof(qa)));
			f1.read((char*)&x,sizeof(qa));
			settextstyle(2,0,5);
			outtextxy(23,60,x.q);
			setcolor(WHITE);
			settextstyle(2,0,5);
			outtextxy(70,175,x.ans[0]);
			settextstyle(2,0,5);
			outtextxy(70,205,x.ans[1]);
			settextstyle(2,0,5);
			outtextxy(70,235,x.ans[2]);
			settextstyle(2,0,5);
			outtextxy(70,265,x.ans[3]);
			setcolor(CYAN);
			settextstyle(2,0,5);
			outtextxy(90,308,"Enter Your Option ::");
			gotoxy(45,21);
			 cin>>a;
			 if(a==x.ch[0])
			 { z+=10;r++;}
			 else
			 z-=5;
			 settextstyle(2,0,5);
			 cleardevice();
			 setcolor(GREEN);
		 settextstyle(2,0,5);
		 outtextxy(23,60,x.q);
		 outtextxy(23,175,x.ch);
		 delay(370);
		 }
		 f1.close();
		 cleardevice();
			 setcolor(LIGHTCYAN);
			 settextstyle(6,0,3);
			 outtextxy(45,50,"YOUR SCORE:: "); gotoxy(40,4); cout<<z;
			 outtextxy(45,75,"NUMBER OF RIGHT ANSWERS:: "); gotoxy(50,7); cout<<r;
			 p.score=z;
			 hiscore(p);
			 }

			 else if(c=='t'||c=='T')
			 { ifstream f1("techm.dat",ios::binary);
			qa *x; int r=0;
			cleardevice();
			int n;
			f1.read((char*)&n, sizeof(n));
			x = new qa;

			int *A = new int[n];
			for (int i = 0; i < n; i++)
			A[i] = i+1;

			while (n)
			{
			int p = A[random(n)];
			deleteElement(A, n, p);
			p -- ;
			n --;

			f1.seekg(sizeof(int) + (p) * sizeof(qa));
			f1.read((char*)x,sizeof(qa));
			settextstyle(2,0,5);
			outtextxy(23,60,x->q);
			setcolor(WHITE);
			settextstyle(2,0,5);
			outtextxy(70,175,x->ans[0]);
			settextstyle(2,0,5);
			outtextxy(70,205,x->ans[1]);
			settextstyle(2,0,5);
			outtextxy(70,235,x->ans[2]);
			settextstyle(2,0,5);
			outtextxy(70,265,x->ans[3]);
			setcolor(CYAN);
			settextstyle(2,0,5);
			outtextxy(90,308,"Enter Your Option ::");
			gotoxy(45,21);
			 cin>>a;
			 if(a==x->ch[0])
			 { z+=10;r++;}
			 else
			 z-=5;
			 settextstyle(2,0,5);
			 cleardevice();
			 setcolor(GREEN);
		 settextstyle(2,0,5);
		 outtextxy(23,60,x->q);
		 outtextxy(23,175,x->ch);
		 delay(370);
		 }
		 f1.close();
		 cleardevice();
			 setcolor(LIGHTCYAN);
			 settextstyle(6,0,3);
			 outtextxy(45,50,"YOUR SCORE:: "); gotoxy(40,4); cout<<z;
			 outtextxy(45,75,"NUMBER OF RIGHT ANSWERS:: "); gotoxy(50,7); cout<<r;
			 p.score=z;
			 hiscore(p);
			 }

		 else if(c=='h'||c=='H')
		 { ifstream f1("historym.dat",ios::binary);
			qa *x; int r=0;
			cleardevice();
			int n;
			f1.read((char*)&n, sizeof(n));
			x = new qa;

			int *A = new int[n];
			for (int i = 0; i < n; i++)
			A[i] = i+1;

			while (n)
			{
			int p = A[random(n)];
			deleteElement(A, n, p);
			p -- ;
			n --;

			f1.seekg(sizeof(int) + (p) * sizeof(qa));
			f1.read((char*)x,sizeof(qa));
			settextstyle(2,0,5);
			outtextxy(23,60,x->q);
			setcolor(WHITE);
			settextstyle(2,0,5);
			outtextxy(70,175,x->ans[0]);
			settextstyle(2,0,5);
			outtextxy(70,205,x->ans[1]);
			settextstyle(2,0,5);
			outtextxy(70,235,x->ans[2]);
			settextstyle(2,0,5);
			outtextxy(70,265,x->ans[3]);
			setcolor(CYAN);
			settextstyle(2,0,5);
			outtextxy(90,308,"Enter Your Option ::");
			gotoxy(45,21);
			 cin>>a;
			 if(a==x->ch[0])
			 { z+=10;r++;}
			 else
			 z-=5;
			 settextstyle(2,0,5);
			 cleardevice();
			 setcolor(GREEN);
		 settextstyle(2,0,5);
		 outtextxy(23,60,x->q);
		 outtextxy(23,175,x->ch);
		 delay(370);
		 }
		 f1.close();
		 cleardevice();
			 setcolor(LIGHTCYAN);
			 settextstyle(6,0,3);
			 outtextxy(45,50,"YOUR SCORE:: "); gotoxy(40,4); cout<<z;
			 outtextxy(45,75,"NUMBER OF RIGHT ANSWERS:: "); gotoxy(50,7); cout<<r;
			 p.score=z;
			 hiscore(p);
			 }

		break;
case 3:exit(0);
 }
	 else
		 {
	setcolor(WHITE);
	outtextxy(220,220,"INVALID CODE");
			 delay(1000);
cleardevice();
setbkcolor(DARKGRAY);
setcolor(LIGHTBLUE);

setcolor(WHITE);
settextstyle(6,0,6);
outtextxy(20,100,"Re-Select The Category");
setcolor(YELLOW);
settextstyle(8,0,3);
outtextxy(40,170,"S");
setcolor(GREEN);
settextstyle(8,0,3);
outtextxy(57,170,"PORTS");
setcolor(YELLOW);
settextstyle(8,0,3);
outtextxy(220,170,"H");
setcolor(GREEN);
settextstyle(8,0,3);
outtextxy(239,170,"ISTORY");
setcolor(YELLOW);
settextstyle(8,0,3);
outtextxy(360,170,"T");
setcolor(GREEN);
settextstyle(8,0,3);
outtextxy(377,170,"ECHNOLOGY");
setcolor(LIGHTMAGENTA);
settextstyle(8,0,3);
outtextxy(307,370,"Enter Your Option ");
setcolor(WHITE);
settextstyle(3,0,3);
outtextxy(559,370,":: ");
gotoxy(75,25);
cin>>c;}
}/**/
/*cleardevice();
outtextxy(70,90,"DO YOU WANT TO CONTINUE (Y/y)? ");
gotoxy(50,7); cin>>e; */
}
/*else
	 { cout<<"\nWelcome admin";
		 cout<<"\nDo you want to make any changes ? ";
		 char c; cin>>c;
		 if(c=='Y'||c=='y')
		 { cout<<"\nMenu\n1.Add questions\n2.Delete question\n3.Edit question" ;
			 int ch1;
			 cin>>ch1;}
		 else
		 cout<<"\nBYE ! ";}
		// }while(e=='y'||e=='Y');
*/
getch();
}

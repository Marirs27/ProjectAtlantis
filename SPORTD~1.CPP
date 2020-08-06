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
 { char question[200];
	 char ans[4][200];
	 char ch[200];}*s;

void main()
 {
	 clrscr();
	 int n;
	 s = new qa[n];



	 ofstream fout("sportsm.dat",ios::binary);
	 n = 10;
	 fout.write((char*)&n, sizeof(n));


	 strcpy(s[0].question,"Which is India's oldest football club founded in the year 1889 ?");
	 strcpy(s[0].ans[0] ,"1 . Mohamadean sporting");
	 strcpy(s[0].ans[1],"2 . Mohun Bagan");
	 strcpy(s[0].ans[2],"3 . Salgocar");
	 strcpy(s[0].ans[3],"4 . Mahindra United");
	 strcpy(s[0].ch,"2 . Mohun Bagan");


	 strcpy(s[1].question,"When was the first asian games held in Delhi ? ");
	 strcpy(s[1].ans[0],"1 . 1947");
	 strcpy(s[1].ans[1],"2 . 1951");
	 strcpy(s[1].ans[2],"3 . 1954");
	 strcpy(s[1].ans[3],"4 . 1955");
	 strcpy(s[1].ch,"2 . 1951");

	 strcpy(s[2].question,"Which jumping event hop, step & jump is also known as ? ");
	 strcpy(s[2].ans[0],"1 . Long jump");
	 strcpy(s[2].ans[1],"2 . Double jump");
	 strcpy(s[2].ans[2],"3 . Triple jump");
	 strcpy(s[2].ans[3],"4 . All of these");
	 strcpy(s[2].ch,"2 . Double jump");

	 strcpy(s[3].question," Which chinese port city hosted the 16th Asian games in 2010 ? ");
	 strcpy(s[3].ans[0],"1 . Beijing");
	 strcpy(s[3].ans[1],"2 . Shanghai");
	 strcpy(s[3].ans[2],"3 . Guangzhou");
	 strcpy(s[3].ans[3],"4 . Ningbo");
	 strcpy(s[3].ch,"3 . Guangzhou");

	 strcpy(s[4].question," What is the centre of the dartboard called ? ");
	 strcpy(s[4].ans[0],"1 . Bull's eye");
	 strcpy(s[4].ans[1],"2 . Eagle's eye");
	 strcpy(s[4].ans[2],"3 . Golden eye");
	 strcpy(s[4].ans[3],"4 . London eye");
	 strcpy(s[4].ch,"1 . Bull's eye");

	 strcpy(s[5].question," Who among these is an Indian wresler ?");
	 strcpy(s[5].ans[0],"1 . John cena");
	 strcpy(s[5].ans[1],"2 . Undertaker");
	 strcpy(s[5].ans[2],"3 . Shan Micheal");
	 strcpy(s[5].ans[3],"4 . Khali");
	 strcpy(s[5].ch,"4 . Khali");

	 strcpy(s[6].question,"What is the maximum size of an international football play field ?");
	 strcpy(s[6].ans[0],"1 . 90 m x 60 m");
	 strcpy(s[6].ans[1],"2 . 100 m x 65 m");
	 strcpy(s[6].ans[2],"3 . 110 m x 75 m");
	 strcpy(s[6].ans[3],"4. 125 m x 65 m");
	 strcpy(s[6].ch,"3 . 110 m x 75 m");


	 strcpy(s[7].question,"Which among these is the international governing body for chess ? ");
	 strcpy(s[7].ans[0],"1 . FICE");
	 strcpy(s[7].ans[1],"2 . FIDE");
	 strcpy(s[7].ans[2],"3 . FICA");
	 strcpy(s[7].ans[3],"4 .  FIDA");
	 strcpy(s[7].ch,"1 . FICE");

	 strcpy(s[8].question," What is required to practice skydiving ?");
	 strcpy(s[8].ans[0],"1 . Skates");
	 strcpy(s[8].ans[1],"2 . Diving board ");
	 strcpy(s[8].ans[2],"3 . Parachute");
	 strcpy(s[8].ans[3],"4 . Swimming pool");
	 strcpy(s[8].ch,"3 . Parachute");

	 strcpy(s[9].question,"In which US city are the US open tennis tournaments are played ? ");
	 strcpy(s[9].ans[0],"1 . Washington DC");
	 strcpy(s[9].ans[1],"2 . New york");
	 strcpy(s[9].ans[2],"3 . Los angeles");
	 strcpy(s[9].ans[3],"4 . Los vegas");
	 strcpy(s[9].ch,"2 . New york");

	 //for(int i=0;i<10;i++)
		fout.write((char*)s,sizeof(qa) * n);

	 /*fout.write((char*)&s[0],sizeof(s[0]));
	 fout.write((char*)&s[1],sizeof(s[1]));
	 fout.write((char*)&s[2],sizeof(s[2]));
	 fout.write((char*)&s[3],sizeof(s[3]));
	 fout.write((char*)&s[4],sizeof(s[4]));
	 fout.write((char*)&s[5],sizeof(s[5]));
	 fout.write((char*)&s[6],sizeof(s[6]));
	 fout.write((char*)&s[7],sizeof(s[7]));
	 fout.write((char*)&s[8],sizeof(s[8]));
	 fout.write((char*)&s[9],sizeof(s[9]));*/
	 getch();
	 delete s;
}
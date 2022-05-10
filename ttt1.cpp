#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include <windows.h>
char c[9]={'1','2','3','4','5','6','7','8','9'};
char p1={'X'};
char p2={'O'};
string s1,s2;
void board();
void player1();
void player2();
int ch,op;
int win1();
int win2();

int main()
{
	system("color 3e");
	int n=-1;
	cout<<"\n!!!!!!!!!!!!!!! TIC TAC TOE !!!!!!!!!!!!!!!";
	cout<<"\n\n";
	cout<<"\nPLAYER 1 ENTER YOUR NAME : ";
	cin>>s1;
	cout<<"\nPLAYER 2 ENTER YOUR NAME : ";
	cin>>s2;
	cout<<"\n"<<s1<<" GETS 'X'";
	cout<<"\n"<<s2<<" GETS 'O'";
	do
	{
		board();
		player1();
		if(win1()==1)
		{
			cout<<"\nPLAYER 1 WINS";
			break;
		}
		board();
		player2();
		if(win2()==1)
		{
			cout<<"\nPLAYER 2 WINS";
			break;
		}
    }while(n==-1);
}

void board()
{
	cout<<"\n";
	cout<<"\n"<<c[0]<<"\t"<<c[1]<<"\t"<<c[2];
	cout<<"\n";
	cout<<"\n"<<c[3]<<"\t"<<c[4]<<"\t"<<c[5];
	cout<<"\n";
	cout<<"\n"<<c[6]<<"\t"<<c[7]<<"\t"<<c[8];
	cout<<"\n";
}

void player1()
{ 
    int ch;
    cout<<"\nENTER A NUMBER "<< s1<<" : ";
	cin>>ch;
	switch(ch)
	{
	    case 1:c[0]=p1;break;
	    case 2:c[1]=p1;break;
	    case 3:c[2]=p1;break;
	    case 4:c[3]=p1;break;
    	case 5:c[4]=p1;break;
    	case 6:c[5]=p1;break;
    	case 7:c[6]=p1;break;
    	case 8:c[7]=p1;break;
    	case 9:c[8]=p1;break;
     	default:cout<<"\nPLEASE ENTER A NUMBER BETWEEN 1 AND 9";player1();break;
    }
}

void player2()
{
	int op;
	cout<<"\nENTER A NUMBER "<< s2<<" : ";
	cin>>op;
	switch(op)
	{
	    case 1:c[0]=p2;break;
	    case 2:c[1]=p2;break;
	    case 3:c[2]=p2;break;
	    case 4:c[3]=p2;break;
    	case 5:c[4]=p2;break;
    	case 6:c[5]=p2;break;
    	case 7:c[6]=p2;break;
    	case 8:c[7]=p2;break;
    	case 9:c[8]=p2;break;
     	default:cout<<"\nPLEASE ENTER A NUMBER BETWEEN 1 AND 9";player2();break;
    }
}

int win1()
{	
	if(c[0]=='X' && c[1]=='X' && c[2]=='X')
	{
		return(1);
	}
	else if(c[3]=='X' && c[4]=='X' && c[5]=='X')
	{
		return(1);
	}
	else if(c[6]=='X' && c[7]=='X' && c[8]=='X')
	{
	    return(1);
	}
	else if(c[0]=='X' && c[3]=='X' && c[6]=='X')
	{
		return(1);
	}
	else if(c[1]=='X' && c[4]=='X' && c[7]=='X')
	{
		return(1);
	}
	else if(c[2]=='X' && c[5]=='X' && c[8]=='X')
	{
		return(1);
	}
	else if(c[0]=='X' && c[4]=='X' && c[8]=='X')
	{
		return(1);
	}
	else if(c[2]=='X' && c[4]=='X' && c[6]=='X')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

int win2()
{
	if(c[0]=='O' && c[1]=='O' && c[2]=='O')
	{
		return(1);
	}
	else if(c[3]=='O' && c[4]=='O' && c[5]=='O')
	{
		return(1);
	}
	else if(c[6]=='O' && c[7]=='O' && c[8]=='O')
	{
		return(1);
	}
	else if(c[0]=='O' && c[3]=='O' && c[6]=='O')
	{
		return(1);
	}
	else if(c[1]=='O' && c[4]=='O' && c[7]=='O')
	{
		return(1);
	}
	else if(c[2]=='O' && c[5]=='O' && c[8]=='O')
	{
		return(1);
	}
	else if(c[0]=='O' && c[4]=='O' && c[8]=='O')
	{
	    return(1); 
	}
	else if(c[2]=='O' && c[4]=='O' && c[6]=='O')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}


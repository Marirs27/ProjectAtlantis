#include<iostream.h>
#include<conio.h>
#include<math.h>

void main ()
{
	char ch ;
	do {
	clrscr () ;
	char *graycode ;
	int n ;
	cout << " \n\n\n \t\t\t GRAY CODE " ;
	cout << " \n \t\t\t~~~~~~~~~~~" ;
	cout << " \n \t\t\t ENTER NUMBER : " ;
	cin >> n ;
	graycode = new char [n+1] ;
	graycode[n] = 0 ;
	for ( int i = 0 ; i < n ; i++ )
	{ graycode[i] = '0' ;
	}
	int s = '0'+'1' , flag = 0 ;
	int bc = n-1 , ac = n-1 ;
	for ( int j = 1 ; j <= pow ( 2 , n ) ; j++ )
	{
		if ( n > 2 )
		{ graycode[ac] = s - graycode[ac] ;
			cout << graycode << '\n' ;
		}
		else
		{	cout << graycode << '\n' ;
			graycode[ac] = s - graycode[ac] ;
		}
		if ( ac == bc )
		 ac -- ;
		else if ( flag < 1 )
		{ ac = bc ;
			flag ++ ;
		}
		else
		{ ac = bc-2 ;
			flag = 0 ;
		}
	}
	cout << " \n\n \t\t\t PRESS 'Y' TO RESTART ....... " ;
	cout << " \n \t\t\t YOUR CHOICE : " ;
	cin >> ch ;
 } while ( ch == 'y' || ch == 'Y' ) ;
}



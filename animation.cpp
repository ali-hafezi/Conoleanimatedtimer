
#include "stdafx.h"

#include "iostream"

#include "windows.h"

#include "conio.h"

#include "ctime"

using namespace std;

void gotoxy(int x, int y)

  {
		HANDLE hConsoleOutput;
		COORD dwCursorPosition;
		cout.flush();
		dwCursorPosition.X = x;
		dwCursorPosition.Y = y;
		hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);

  }

void animat()

{//start animat function.

		system("color c0");



	cout<<"\n\n\n\t\tPLEASE MAXIMAZE THIS PAGE TO VIWE WHOLE PAGE.\n\n\n\n\n\n\n";

    system("pause");

	system("color f0");

	    
	    unsigned short number=5;//first int.

		/*in this part we make an animation that show 5 4 3 2 1 this is
		for the first of this program and i shoud notice this that 
		one of the most important think is making number by logical
		instruction.*/


//////////////////////////the first part print number//////////////////////////////////////////

	  while(number>0)


	       {//start while order.

		         system("cls");//remove data on the screen.

		             cout<<"\a";//send a sound in each second.
		

		       unsigned short      s = 45 ;//second int.
		       unsigned short      e = 10 ;//third int.
		       unsigned short length = 15 ;//forth int.
		       unsigned short         top ;//fifth int.
		       unsigned short     campare ;//sixth int.
		       unsigned short           q ;//seventh int.

			//first switch to get the irst positon.
		switch(number)

		{//start first switch order.

		  //3 case's for get the position for numbers "2" "3" "5". 	
		case 5:
		case 3:
		case 2:
		 
		
		     length = 15 ;//the length of numbers.

		     top = 5 ;//5 pulse need for printing those numbers.
		
		     q = 1 ;//seprative part.

		   break ;


		   //this case get position for number 4.
		case 4:

			 s = 25 ;//change the position.
			
			 length = 15 ;//the length of numbers.

			 top = 3 ;//3 pulse need for printing those numbers.
			 
			 q = 2 ;//seprative part.

		   break ;


		  //this case get position for number 1.
		case 1:

			s = 38 ;//change the position.

			top = 1 ;//1 pulse need for printing those numbers.

			q = 3 ;//seprative part.

			length *= 2 ;//the length of numbers.

			break ;

		}//end first switch order.


		           while( top > 0 )

	                     {//start second while order.

		                     campare = top % 2 ;//campare odd and even numbers.

		                          for( short i = 0 ; i < length ; i ++ )

		                               {//start for order

			                               if( q == 1 )//numbers 5,2,3 statement.

			                                  {//start if order.

			                                        if( campare == 0 )//campare odd & even.

				                                      e ++ ;//change position.

			                                        else

				                                      s -- ;//change position.

			                                   }//end if order.

				
			                               if( q == 2 )//number 4 statement.

			                                   {//start if order.

				                                    if( campare == 0 )//campare odd & even.

				                                      s ++ ;//change position.

				                                    else

				                                      e ++ ;//change position.

			                                   }//end if order.


			                               if(q == 3)//number 1 statement.

				                                      e ++ ;
				


//////////////************************the  printing part************************//////////////

                      
 //  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);//color option for font.
			                //find position.
			              gotoxy(s,e);
					Sleep(10);
			              cout<<"......";//print the data on screen.

////////////////////////////////****************************************////////////////////


		                               }//end for order.

		                           top = top - 1 ;//print the next statment.

					//second switch for make the number.
		        switch(number)

		           {//start switch order.

						//number 5 statment
		             case 5:

			           if( top < 4 )//if order.

				          s = 45 ;//change the position.

			       break ;

						//number 5 statment
		             case 4:

		               if( top == 1 )

		                  {//start if order.

			                  e = 10 ;//change the position.

			                  length = length * 2 ;//the length of numbers.

			                  s = 46 ;//change the position.

		                  }//end if order.

		           break ;

						//number 5 statment
		             case 3:

			         s = 45 ;//change the position.

			       break ;

						//number 5 statment
		             case 2:

			         s = 45 ;//change the position.

			           if( top == 2 )//if order.

				           s = s - length ;//number 5 statment

			       break;


		           

		}//end the swicth order




		}//end of second while.

      number = number - 1 ;//next number.

		  Sleep(1000);//time out (sleep CPU for 1 second).


		system("color f0");//color option.

		}//end while order.


///////////////////////////////////////////part two "lighting"//////////////////////////////////


         system("cls");

         cout<<"\a\a";



		
		system("color c1");	
		Sleep(400);//time out.
		
        system("color a1");	
		Sleep(400);//time out.

			
		system("color 94");	
		Sleep(400);	//time out.		

		system("color 68");	
		Sleep(300);//time out.

		system("color 45");	
		Sleep(200);//time out.

		system("color 63");	
		Sleep(100);//time out.


		system("color c5");	
		Sleep(90);//time out.
		
		system("color e4");	
		Sleep(90);//time out.

			
		system("color 25");	
		Sleep(90);//time out.			

		system("color 58");	
		Sleep(90);//time out.

		system("color a6");	
		Sleep(90);//time out.

		system("color 80");	
		Sleep(90);//time out.

		system("color 63");	
		Sleep(80);//time out.


		system("color cf");	
		Sleep(70);//time out.
		
		system("color 36");	
		Sleep(70);//time out.

			
		system("color 94");	
		Sleep(70);//time out.			

		system("color 74");	
		Sleep(70);//time out.

		system("color 08");	
		Sleep(70);//time out.

		system("color 4a");	
		Sleep(70);//time out.


		system("color 34");	
		Sleep(60);//time out.

		system("color a2");	
		Sleep(60);//time out.


		system("color c5");	
		Sleep(60);//time out.
		
		system("color 10");	
		Sleep(50);//time out.

			
		system("color 94");	
		Sleep(50);//time out.			

		system("color 74");	
		Sleep(50);//time out.

		system("color a6");	
		Sleep(50);//time out.

		system("color 63");	
		Sleep(50);//time out.



		system("color f1");	
		Sleep(40);//time out.
		
		system("color a1");	
		Sleep(40);//time out.

			
		system("color f4");	
		Sleep(40);//time out.			

		system("color 68");	
		Sleep(40);//time out.

		system("color f5");	
		Sleep(40);//time out.

		system("color 63");	
		Sleep(40);//time out.


		system("color f5");	
		Sleep(40);//time out.
		
		system("color e4");	
		Sleep(40);//time out.

			
		system("color f5");	
		Sleep(40);//time out.			

		system("color 58");	
		Sleep(40);//time out.

		system("color f6");	
		Sleep(40);//time out.

		system("color 80");	
		Sleep(40);//time out.

		system("color f3");	
		Sleep(40);//time out.


		system("color cf");	
		Sleep(40);//time out.
		
		system("color f6");	
		Sleep(40);//time out.

			
		system("color 94");	
		Sleep(40);//time out.			

		system("color f4");	
		Sleep(40);//time out.

		system("color 08");	
		Sleep(40);//time out.

		system("color fa");	
		Sleep(40);//time out.


		system("color 34");	
		Sleep(40);//time out.

		system("color f2");	
		Sleep(40);//time out.


		system("color c5");	
		Sleep(40);//time out.
		
		system("color f0");	
		Sleep(40);//time out.

			
		system("color 94");	
		Sleep(40);//time out.			

		system("color f4");	
		Sleep(40);//time out.

		system("color a6");	
		Sleep(40);//time out.

		system("color f3");	
		Sleep(40);//time out.



		system("color c1");	
		Sleep(40);//time out.
		
		system("color f1");	
		Sleep(40);//time out.

			
		system("color 94");	
		Sleep(40);//time out.			

		system("color 68");	
		Sleep(40);//time out.

		system("color f5");	
		Sleep(40);//time out.

		system("color 63");	
		Sleep(40);//time out.


		system("color f5");	
		Sleep(40);//time out.
		
		system("color e4");	
		Sleep(40);//time out.

			
		system("color f5");	
		Sleep(40);//time out.			

		system("color 58");	
		Sleep(40);//time out.

		system("color f6");	
		Sleep(40);//time out.

		system("color 80");	
		Sleep(40);//time out.

		system("color f3");	
		Sleep(40);//time out.


		system("color cf");	
		Sleep(40);//time out.
		
		system("color f6");	
		Sleep(40);//time out.

			
		system("color 94");	
		Sleep(40);//time out.			

		system("color f4");	
		Sleep(40);//time out.

		system("color 08");	
		Sleep(40);//time out.

		system("color fa");	
		Sleep(40);//time out.


		system("color 34");	
		Sleep(40);//time out.

		system("color f2");	
		Sleep(40);//time out.


		system("color c5");	
		Sleep(40);//time out.
		
		system("color f0");	
		Sleep(40);//time out.

			
		system("color 94");	
		Sleep(40);	//time out.		

		system("color f4");	
		Sleep(40);//time out.

		system("color a6");	
		Sleep(40);//time out.

		system("color f3");	
		Sleep(40);//time out.

		system("color f1");	
		Sleep(40);//time out.
		
		system("color a1");	
		Sleep(40);//time out.

			
		system("color f4");	
		Sleep(40);//time out.			

		system("color 68");	
		Sleep(40);//time out.

		system("color f5");	
		Sleep(40);//time out.

		system("color 63");	
		Sleep(40);//time out.


		system("color f5");	
		Sleep(40);//time out.
		
		system("color e4");	
		Sleep(40);//time out.

			
		system("color f5");	
		Sleep(40);//time out.			

		system("color 58");	
		Sleep(40);//time out.

		system("color f6");	
		Sleep(40);//time out.

		system("color 80");	
		Sleep(40);//time out.

		system("color f3");	
		Sleep(40);//time out.

	
		system("color cf");	
		Sleep(40);//time out.
		
		system("color f6");	
		Sleep(40);//time out.

			
		system("color 94");	
		Sleep(40);//time out.			

		system("color f4");	
		Sleep(40);//time out.

		system("color 08");	
		Sleep(40);//time out.

		system("color fa");	
		Sleep(40);//time out.


		system("color 34");	
		Sleep(40);//time out.

		system("color f2");	
		Sleep(40);//time out.


		system("color c5");	
		Sleep(40);//time out.
		
		system("color f0");	
		Sleep(40);//time out.

			
		system("color 94");	
		Sleep(40);//time out.			

		system("color f4");	
		Sleep(40);//time out.

		system("color a6");	
		Sleep(40);//time out.

		system("color f3");	
		Sleep(40);//time out.



		system("color c1");	
		Sleep(40);//time out.
		
		system("color f1");	
		Sleep(40);//time out.

			
		system("color 94");	
		Sleep(40);//time out.			

		system("color 68");	
		Sleep(40);//time out.

		system("color f5");	
		Sleep(40);//time out.

		system("color 63");	
		Sleep(40);//time out.


		system("color f5");	
		Sleep(40);//time out.
		
		system("color e4");	
		Sleep(40);//time out.

			
		system("color f5");	
		Sleep(40);//time out.			

		system("color 58");	
		Sleep(40);//time out.

		system("color f6");	
		Sleep(40);//time out.

		system("color 80");	
		Sleep(30);//time out.

		system("color f3");	
		Sleep(30);//time out.


		system("color cf");	
		Sleep(30);//time out.
		
		system("color f6");	
		Sleep(30);//time out.

			
		system("color 94");	
		Sleep(30);//time out.	

		system("color f4");	
		Sleep(30);//time out.

		system("color 08");	
		Sleep(30);//time out.

		system("color fa");	
		Sleep(30);//time out.


		system("color 34");	
		Sleep(30);//time out.

		system("color f2");	
		Sleep(30);//time out.


		system("color c5");	
		Sleep(20);//time out.
		
		system("color f0");	
		Sleep(20);//time out.

			
		system("color 94");	
		Sleep(20);	//time out.		

		system("color f4");	
		Sleep(20);//time out.

		system("color a6");	
		Sleep(20);//time out.

		system("color f3");	
		Sleep(20);//time out.


}//end animat function.


		int main()

		{

			animat();

		}
	#include <iostream.h>
	#include <conio.h>

	int main(){
		int num, total=0, cond = 100;
		 clrscr();
		  do{cout<<"Enter a number=";
		     cin>>num;
		     total+=num;
		     cout<<endl;
		     }while(total <= cond); //you can change the condition (cond) with any number you want.

		     cout<<"Total sum="<<total<<endl<<"Press any key to exit";
	             getch();
		return 0;}
#include<iostream>
#include<stdlib.h> 
#include<time.h>
using namespace std;

int main() {
	int turn=0,pos=0,dice_score=0,dice=0,snake=0,ladders=0;
	bool flag=true;

	
	int snakes[7]={5,12,25,49,65,81,95}; 
	int ladder[9]={8,15,29,36,51,68,75,85,96}; 
	
	do {
		cout<<"Enter 1"<<endl;
		cin>>dice_score;
		
		switch(dice_score)
		{  
			case 1:
				turn++;
				srand(time(NULL));
				dice=rand()%6+1;
				pos=pos+dice;
				for (int i=0;i<7;i++) {
					 if (pos == snakes[i]) {
					 	pos=pos-10;					 
					 	snake++;
					 }
				}     
				 for (int i=0; i<9; i++)
				 {
					 if (pos == ladder[i])
				     	{
					    	pos = pos + 10;					 
					  	 ladders++;
					 }  
				 }  
				 
				 if(pos>=100) {
				 	cout<<"Dice is ="<<dice;
				 	flag=false; 
				 	break;  
				 }    
				 else {
				 	cout<<"Dice has landed at "<<dice;
				 	
				 	cout<<"Position reached "<<pos<<" Now"; 
				 	break; 
				 }
				   default:
				   	cout<<"Wrong Entry"<<endl;
				    break;
				 }   
		}
		               while(flag==true); 
		               
		               
		               cout<<"Congrats, you have reached the end of the game."<<endl;
		               
		               cout<< "Turns taken are "<< turn;
		               
                       cout<<"Times snake had bitten is  "<<snake;
	                   cout<<" Times got ladder is "<<ladders;
			
	}


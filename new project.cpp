// FOOD ORDERING SYSTEM 

//  DEVELOPED BY SHAFAY[GROUP] :-

#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
#include <conio.h> 
#include <fstream>
#include <cstdlib>

using namespace std; 

// STRUCTURE OF ORDER HISTORY TO SAVE ON file :-
struct orderhistory 
{
	string name ;
	int quantity ;
    int ammount ;
} ; 

// STRUCTURE OF ITEMS AND THEIR PRICES :- 
struct item 
{
	string name ;
	int price ; 
};


// MENU FUNCTION :-

void Menu()
{
	cout<< "\n \n  \t\t | [1]  Turkish Chicken Shawarma [150] \n \n " ;
	cout<< "\t\t | [2]  Arban Tarqa Shawarma [300] \n \n " ;
	cout<< "\t\t | [3]  Thai Chicken Chili Noodles [300] \n \n " ;
	cout<< "\t\t | [4]  Thai Beef Chili Noodles [350] \n \n " ; 
	cout<< "\t\t | [5]  Chiecken Shahslik + Rice [500] \n \n " ;
	cout<< "\t\t | [6]  Beef Chili Dry + Rice [600] \n \n " ; 
	cout<< "\t\t | [7]  Chicken Jalfrazi + Rice [450] \n \n " ;
	cout<< "\t\t | [8]  Finger Fish With Sause [400] \n \n " ;
	cout<< "\t\t | [9]  Full Fry Fish [600] \n \n " ;
	cout<< "\t\t | [10] Salt and pepper Ribs [600] \n \n " ;
	cout<< "\t\t | [11] PERI PERI CHICKEN [450] \n \n " ;
	cout<< "\t\t | [12] Chicken Cottage - 6 piece - [500] \n \n " ;
    cout<< "\t\t | [13] Taragon Steak [600]  \n \n  " ;
    cout<< "\t\t | [14] French Onion Steak [500]  \n \n " ;
    cout<< "\t\t | [15] American Steak [550]  \n \n " ;
}
int main ()
{
       
	
	// creating 1 file for input and output :-
    fstream file1 ;

	// saving the names and prices :-
	item iteminfo[15] ;
	//[1]
	iteminfo[0].name = "Turkish Chicken Shawarma" ; iteminfo[0].price = 150 ; 
    //[2]
    iteminfo[1].name = "Arban Tarqa Shawarma" ; iteminfo[1].price = 300 ;
    //[3] 
    iteminfo[2].name = "Thai Chicken Chili Noodles" ; iteminfo[2].price = 300 ;
	//[4]:-
	iteminfo[3].name = "Thai Beef Chili Noodles" ; iteminfo[3].price = 350 ;
	//[5]:-
	iteminfo[4].name = "Chiecken Shahslik + Rice" ; iteminfo[4].price = 500 ;
	//[6]:-
    iteminfo[5].name = "Beef Chili Dry + Rice" ; iteminfo[5].price = 600 ;
	//[7]:-
	iteminfo[6].name = "Chicken Jalfrazi + Rice" ; iteminfo[6].price = 450 ;
	//[8}
	iteminfo[7].name = "Finger Fish With Sause" ; iteminfo[7].price = 400 ;
	//[9]
	iteminfo[8].name = "Full Fry Fish" ; iteminfo[8].price = 600 ;
	//[10]
	iteminfo[9].name = "Salt and pepper Ribs" ; iteminfo[9].price = 600 ;
	//[11]
	iteminfo[10].name = "PERI PERI CHICKEN" ; iteminfo[10].price = 450 ;
	//[12]
	iteminfo[11].name = "Chicken Cottage - 6 piece" ; iteminfo[11].price = 500 ;
	//[12] 
	iteminfo[12].name = "Taragon Steak" ; iteminfo[12].price = 600 ;
	//[13]
	iteminfo[13].name = "French Onion Steak" ; iteminfo[13].price = 500 ;
	//[14]
	iteminfo[14].name = "American Steak" ; iteminfo[14].price = 550 ;
	
	// LOGO :- 
	
	system("color 79"); //changes to aqua blue color
	cout<<"\n\n\n\n\n \t\t\t\t _____               __ ";
	cout<<"\n\t\t\t\t|  ___|__   ___   __| |";
	cout<<"\n\t\t\t\t| |_ / _ \\ / _ \\ / _` |";
	cout<<"\n\t\t\t\t|  _| (_) | (_) | (_| |";
	cout<<"\n\t\t\t\t|_|  \\___/ \\___/ \\__,_|";
	Sleep (1000);
	cout<<"\n\t\t\t  ___          _           _";
	cout<<"\n\t\t\t / _ \\ _ __ __| | ___ _ __(_)_ __   __ _";
	cout<<"\n\t\t\t| | | | '__/ _` |/ _ \\ '__| | '_ \\ / _` |";
	cout<<"\n\t\t\t| |_| | | | (_| |  __/ |  | | | | | (_| |";
	cout<<"\n\t\t\t  ___/|_|  \\__,_|\\___|_|  |_|_| |_|\\_|| |";
	cout<<"\n\t\t\t                                    |___/ ";
	Sleep (1000);
	cout<<"\n\t\t\t                  _";
	cout<<"\n\t\t\t    ___ _   _ ___| |_ ___ _ __ ___";
	cout<<"\n\t\t\t   / __| | | / __| __/ _ \\ '_ ` _ \\ ";
	cout<<"\n\t\t\t   \\__ \\ |_| \\__ \\ ||  __/ | | | | |";
	cout<<"\n\t\t\t   |___/\\__, |___/\\__\\___|_| |_| |_|";
	cout<<"\n\t\t\t        |___/\n\n\n\n\n";
    Sleep (1000) ;
    system("cls") ;
    system("color 74") ;

    // goto function 
    begin :
	
	// login page :-
	cout<< "\n\t\t\t\t USER/ADMIN PAGE \n " ;
    cout<<"_______________________________________________________________________________\n";
	
  
// order history :-
orderhistory order[15] ;

int input ;

cout<< "\t [1] ORDER  " <<endl <<endl <<"\t [2] ADMIN \n \n " <<"\t [3] Close program \n\n  " ;
cout<< "Enter the number u want to log in :- " ;
cin>> input ;

system("cls") ;


if (input==1)
{
	// saving in file permentatly :-
	file1.open("orderhistory.txt" , ios::app) ;
	
	// sleep function for doing work slowly :
	Sleep(400) ;
	cout<< "\n\n \t \t \t     HEllO SIR WELCOME TO \n\n___________________________________(FOOD CAFE)__________________________________\n\n " ;
	cout<< "Enter your name Sir :- " ;
	cin>> order[0].name ;
    
	
	int a = 1 , b = 1;
	
	// saving in file order name :-
	file1<<endl << "\n----------(order Details)---------- :- "  ; 
	
    // begining command (for if user say yes i want to add someting it the cursor returns here :- )
	beginning:
	
	// using for lop for id ;-
	for (;a<=b;a++)
 	{
	 file1<<endl ;
	 file1<<endl << "Order No :- " <<a <<endl <<endl  ;
    }
	file1<< " | Name :- " ;
	file1<< order[0].name <<endl ;
	
    
    Sleep(700)  ;
    
	system("cls") ;
	
	cout<<"\n\n _________________________________(MENU)______________________________________\n\n\n " ;	
	
	
	Menu() ;   

// YEs , No input ;
char yes='y' , no='n' , charinput[15] , addinput[15]  ; 


//ammount saving array :-
int ammount[15] ;

// logout input :-
char logoutinput ;


// input order :-
int orderinput[50] ;


cout<< "\n \t | Enter the Number of item u want to order sir :- " ;
cin>> orderinput[0] ;

// using switch :-

switch (orderinput[0]) 
{
	case 1 : 	
	cout<<endl << "\n \t | Sir tell me Quantity :- " ;
	cin>> order[0].quantity ;
    order[0].ammount = 0 ;
	for (int i = 0 ; i<order[0].quantity ; i++)	
	{
	    order[0].ammount += iteminfo[0].price  ;
	}    
	
	  file1<<" | Quantity :- " <<order[0].quantity <<endl <<" | Item Name :- " <<iteminfo[0].name <<endl <<" | total ammount :- " ;
	  file1<<order[0].ammount   ;
	   
	   system("cls") ;
	   
	   cout<< "\n ________________________________(YOUR BILL IS)_______________________________\n\n\n" ;
	   cout <<"\t || Order Name :- " <<order[0].name  <<endl <<endl ;
	   cout <<"\t || OrderNo :- " <<b ; b++ ; cout<<endl <<endl ;
	   cout <<"\t || Item :- " <<iteminfo[0].name  <<endl <<endl ;  
	   cout <<"\t || Quantity :- " <<order[0].quantity  <<endl <<endl ;
	   cout <<"\t || Ammount :- " <<order[0].ammount  ; cout<<"\n________________________________________________________________________________" ;
	   cout <<endl <<endl   << "\n \t\t (PAY YOUR BILL IN CASH) [CREDIT CARD NOT ACCEPTED]  " <<endl <<endl ;
	   cout <<"\t\t       |YOUR ORDER WILL BE SERVED SOON | " <<endl <<endl <<endl <<"\t\t !!! THANKS FOR CHOSING US (HAVE A NICE DAY) !!! \n\n"  ;
	   
	cout<< endl <<"\n\t\t | Do u want to place another Order [Y/N] :-  " ;
	cin>>charinput[0] ;
	
	// if / else statement :-
	
	if (charinput[0]=='y') 
	{
	order[0].quantity=0 ;
	order[0].ammount=0 ;
	system("cls") ;
	goto beginning ;
    }
    else 
    
	// logout 
	cout<<endl <<setw(5) <<"\n\t\t | Do u want to logout [y/n] :- " ; cin>>logoutinput ;
	if (logoutinput=='y')
	{
	file1.close() ;
	order[0].quantity=0 ;
	order[0].ammount=0 ;
	system("cls") ;
	goto begin ;	
	} 
    else 
    cout<<"\n\n\t\t | Do u want to place another Order [Y] or logout [N] :- " ; cin>>logoutinput  ;
    if (logoutinput=='y')
     {
	order[0].quantity=0 ;
	order[0].ammount=0 ;
	goto beginning ;
	 }
    else 
    {
	order[0].quantity=0 ;
	order[0].ammount=0 ;
	file1.close() ;
	system("cls") ;
	goto begin ;
	}
	break ;
    
    // case 2 :- [user enter 2 :-]
	
	case 2 :
    cout<<endl << "\n \t | Sir tell me Quantity :- " ;
	cin>> order[1].quantity ;
    order[1].ammount = 0 ;
	for (int i = 0 ; i<order[1].quantity ; i++)	
	{
	    order[1].ammount += iteminfo[1].price ;
	}  
	  file1<<" | Quantity :- " <<order[1].quantity <<endl <<" | Item Name :- " <<iteminfo[1].name <<endl <<" | total ammount :- " ;
	  file1<<order[1].ammount   ;
	   
	   system("cls") ;
	   
	   cout<< "\n ________________________________(YOUR BILL IS)_______________________________\n\n\n" ;
	   cout <<"\t || Order Name :- " <<order[0].name  <<endl <<endl ;
	   cout <<"\t || OrderNo :- " <<b ; b++ ; cout<<endl <<endl ;
	   cout <<"\t || Item :- " <<iteminfo[1].name  <<endl <<endl ;  
	   cout <<"\t || Quantity :- " <<order[1].quantity  <<endl <<endl ;
	   cout <<"\t || Ammount :- " <<order[1].ammount  ; cout<<"\n________________________________________________________________________________" ;
	   cout <<endl <<endl   << "\t\t  (PAY YOUR BILL IN CASH) [CREDIT CARD NOT ACCEPTED]  " <<endl <<endl ;
	   cout <<"\t\t       |Your order will be served soon | " <<endl <<endl <<endl <<"\t\t !!! THANKS FOR CHOSING US (HAVE A NICE DAY) !!! \n\n"  ;
	   
	cout<< endl <<"\n\t\t | Do u want something else [Y/N] :-  " ;
	cin>>charinput[0] ; 	
	
	if (charinput[0]=='y')
	{
	order[1].quantity=0 ;
	order[1].ammount=0 ;
	system("cls") ;
	goto beginning ;
	}
	else 
    cout<<endl <<setw(5) <<"\n\t\t | Do u want to logout [y/n] :- " ; cin>>logoutinput ;
	if (logoutinput=='y')
	{
	file1.close() ;
	order[1].quantity=0 ;
	order[1].ammount=0 ;
	system("cls") ;
	goto begin ;	
	} 
	else 
    cout<<"\n\n\t\t | Do u want to place another Order [Y] or logout [N] :- " ; cin>>logoutinput  ;
    if (logoutinput=='y')
     {
	order[1].quantity=0 ;
	order[1].ammount=0 ;
	goto beginning ;
	 }
    else 
    {
	file1.close() ;
	system("cls") ;
	order[1].quantity=0 ;
	order[1].ammount=0 ;
	goto begin ;
	}
    break ;
	// case 3 [user input 3]
	
	case 3 :
    cout<<endl << "\n \t | Sir tell me Quantity :- " ;
	cin>> order[2].quantity ;
    
	order[2].ammount = 0 ;
	
	for (int i = 0 ; i<order[2].quantity ; i++)	
	{
	    order[2].ammount += iteminfo[2].price ;
	}    
	
	   file1<<" | Quantity :- " <<order[2].quantity <<endl <<" | Item Name :- " <<iteminfo[2].name <<endl <<" | total ammount :- " ;
	   file1<<order[2].ammount  ;
	   
	   system("cls") ;
	   
	   cout<< "\n ________________________________(YOUR BILL IS)_______________________________\n\n\n" ;
	   cout <<"\t || Order Name :- " <<order[0].name  <<endl <<endl ;
	   cout <<"\t || OrderNo :- " <<b ; b++ ; cout<<endl <<endl ;
	   cout <<"\t || Item :- " <<iteminfo[2].name  <<endl <<endl ;  
	   cout <<"\t || Quantity :- " <<order[2].quantity  <<endl <<endl ;
	   cout <<"\t || Ammount :- " <<order[2].ammount  ; cout<<"\n________________________________________________________________________________" ;
	   cout <<endl <<endl   << "\n \t\t  (PAY YOUR BILL IN CASH) [CREDIT CARD NOT ACCEPTED]  " <<endl <<endl ;
	   cout <<"\t\t       | Your order will be served soon | " <<endl <<endl <<endl <<"\t\t !!! THANKS FOR CHOSING US (HAVE A NICE DAY) !!! \n\n"  ;
	
  
    cout<< endl <<"\n\t\t | Do u want something else [Y/N] :-  " ;
	cin>>charinput[2] ;
	
	// if / else statement :-
	
	if (charinput[2]=='y') 
	{
        order[2].quantity=0 ;
	    order[2].ammount=0 ;
		system("cls") ;
		goto beginning ;
	} 
    else
    cout<<endl <<setw(5) <<"\n\t\t | Do u want to logout [y/n] :- " ; cin>>logoutinput ;
	if (logoutinput=='y')
	{
	file1.close() ;
	system("cls") ;
	order[2].quantity=0 ;
	order[2].ammount=0 ;
	goto begin ;	
	} 
    else 
    cout<<"\n\n\t\t | Do u want to place another Order [Y] or logout [N] :- " ; cin>>logoutinput  ;
    if (logoutinput=='y')
     {
	order[2].quantity=0 ;
	order[2].ammount=0 ;
	goto beginning ;
	 }
    else 
    {
	file1.close() ;
	order[2].quantity=0 ;
	order[2].ammount=0 ;
	system("cls") ;
	goto begin ;
	}
	break ;
    
	// case 4 [if user input 4 :]
	
	case 4 :
    cout<<endl << "\n \t | Sir tell me Quantity :- " ;
	cin>> order[3].quantity ;
    
    order[3].ammount = 0 ;
	
	for (int i = 0 ; i<order[3].quantity ; i++)	
	{
		
	    order[3].ammount += iteminfo[3].price ;
	}    
	
	file1<<" | Quantity :- " <<order[3].quantity <<endl <<" | Item Name :- " <<iteminfo[3].name <<endl <<" | total ammount :- " ;
	file1<<order[3].ammount  ;
	   
	system("cls") ;
	   
	   cout<< "\n ________________________________(YOUR BILL IS)_______________________________\n\n\n" ;
	   cout <<"\t || Order Name :- " <<order[0].name  <<endl <<endl ;
	   cout <<"\t || OrderNo :- " <<b ; b++ ; cout<<endl <<endl ;
	   cout <<"\t || Item :- " <<iteminfo[3].name  <<endl <<endl ;  
	   cout <<"\t || Quantity :- " <<order[3].quantity  <<endl <<endl ;
	   cout <<"\t || Ammount :- " <<order[3].ammount  ; cout<<"\n________________________________________________________________________________" ;
	   cout <<endl <<endl   << "\n \t\t  (PAY YOUR BILL IN CASH) [CREDIT CARD NOT ACCEPTED]  " <<endl <<endl ;
	   cout <<"\t\t       | Your order will be served soon | " <<endl <<endl <<endl <<"\t\t !!! THANKS FOR CHOSING US (HAVE A NICE DAY) !!! \n\n"  ;
	
	cout<< endl <<"\t\t | Do u want something else [Y/N] :-  " ;
	cin>>charinput[3] ;
	
	// if / else statement :-
	
	if (charinput[3]=='y') 
	{
		order[3].quantity=0 ;
	    order[3].ammount=0 ;
		goto beginning ;
	} 
    else
    cout<<endl <<setw(5) <<"\n\t\t | Do u want to logout [y/n] :- " ; cin>>logoutinput ;
	if (logoutinput=='y')
	{
	file1.close() ;
	order[3].quantity=0 ;
	order[3].ammount=0 ;
	system("cls") ;
	goto begin ;	
	} 
    else 
    cout<<"\n\n\t\t | Do u want to place another Order [Y]  or logout [N] :- " ; cin>>logoutinput  ;
    if (logoutinput=='y')
     {
	order[3].quantity=0 ;
	order[3].ammount=0 ;
	goto beginning ;
	 }
    else 
    {
	order[3].quantity=0 ;
	order[3].ammount=0 ;
	file1.close() ;
	system("cls") ;
	goto begin ;
	}
	break ;
    
    // case 5 [if user enter 5 ] 
	
	case 5 :
    cout<<endl << "\n \t | Sir tell me Quantity :- " ;
	cin>> order[4].quantity ;
    
	order[4].ammount = 0 ;
	
	for (int i = 0 ; i<order[4].quantity ; i++)	
	{
	    order[4].ammount += iteminfo[4].price ;
	}    
	
	   file1<<" | Quantity :- " <<order[4].quantity <<endl <<"Item Name :- " <<iteminfo[4].name <<endl <<"total ammount :- " ;
	   file1<<order[4].ammount  ;
	   
	   system("cls") ;
	   
	   cout<< "\n ________________________________(YOUR BILL IS)_______________________________\n\n\n" ;
	   cout <<"\t || Order Name :- " <<order[0].name  <<endl <<endl ;
	   cout <<"\t || OrderNo :- " <<b ; b++ ; cout<<endl <<endl ;
	   cout <<"\t || Item :- " <<iteminfo[4].name  <<endl <<endl ;  
	   cout <<"\t || Quantity :- " <<order[4].quantity  <<endl <<endl ;
	   cout <<"\t || Ammount :- " <<order[4].ammount  ; cout<<"\n________________________________________________________________________________" ;
	   cout <<endl <<endl   << "\t\t  (PAY YOUR BILL IN CASH) [CREDIT CARD NOT ACCEPTED]  " <<endl <<endl ;
	   cout <<"\t\t       | Your order will be served soon | " <<endl <<endl <<endl <<"\t\t !!! THANKS FOR CHOSING US (HAVE A NICE DAY) !!! \n\n"  ;
	
	cout<< endl <<"\n\t\t | Do u want something else [Y/N] :-  " ;
	cin>>charinput[4] ;
	
	// if / else statement :-
	
	if (charinput[4]=='y') 
	{
		order[4].quantity=0 ;
	    order[4].ammount=0 ;
		a++ ;
	    b++ ;
		goto beginning ;
	} 
	else
    cout<<endl <<setw(5) <<"\n\t\t | Do u want to logout [y/n] :- " ; cin>>logoutinput ;
	if (logoutinput=='y')
	{
	file1.close() ;
	order[4].quantity=0 ;
	order[4].ammount=0 ;
	system("cls") ;
	goto begin ;	
	} 
    else 
    cout<<"\n\n\t\t | Do u want to place another Order [Y]  or  logout [N] :- " ; cin>>logoutinput  ;
    if (logoutinput=='y')
     {
	order[4].quantity=0 ;
	order[4].ammount=0 ;
	goto beginning ;
	 }
    else 
    {
	file1.close() ;
	order[4].quantity=0 ;
	order[4].ammount=0 ;
	system("cls") ;
	goto begin ;
	}
	break ;
    
    // case 6 [if user input 6 ] 
	
	case 6 :
    cout<<endl << "\n \t | Sir tell me Quantity :- " ;
	cin>> order[5].quantity ;
    
	order[5].ammount = 0 ;
	
	for (int i = 0 ; i<order[5].quantity ; i++)	
	{
	    order[5].ammount += iteminfo[5].price ;
	}    
	
	   file1<<" | Quantity :- " <<order[5].quantity <<endl <<" | Item Name :- " <<iteminfo[5].name <<endl <<" | total ammount :- " ;
	   file1<<order[5].ammount  ;
	   
	   system("cls") ;
	   
	     cout<< "\n ________________________________(YOUR BILL IS)_______________________________\n\n\n" ;
	   cout <<"\t || Order Name :- " <<order[0].name  <<endl <<endl ;
	   cout <<"\t || OrderNo :- " <<b ; b++ ; cout<<endl <<endl ;
	   cout <<"\t || Item :- " <<iteminfo[5].name  <<endl <<endl ;  
	   cout <<"\t || Quantity :- " <<order[5].quantity  <<endl <<endl ;
	   cout <<"\t || Ammount :- " <<order[5].ammount  ; cout<<"\n________________________________________________________________________________" ;
	   cout <<endl <<endl   << "\t\t  (PAY YOUR BILL IN CASH) [CREDIT CARD NOT ACCEPTED]  " <<endl <<endl ;
	   cout <<"\t\t       | Your order will be served soon | " <<endl <<endl <<endl <<"\t\t !!! THANKS FOR CHOSING US (HAVE A NICE DAY) !!! \n\n"  ;
	
	cout<< endl <<"\n\t\t | Do u want something else [Y/N] :-  " ;
	cin>>charinput[5] ;
	
	// if / else statement :-
	
	if (charinput[5]=='y') 
	{
		order[5].quantity=0 ;
	    order[5].ammount=0 ;
		goto beginning ;
	} 
	else
    cout<<endl <<setw(5) <<"\n\t\t | Do u want to logout [y/n] :- " ; cin>>logoutinput ;
	if (logoutinput=='y')
	{
	file1.close() ;
	order[5].quantity=0 ;
	order[5].ammount=0 ;
	system("cls") ;
	goto begin ;	
	} 
    else 
    cout<<"\n\n\t\t | Do u want to place another Order [Y]  or  logout [N] :- " ; cin>>logoutinput  ;
    if (logoutinput=='y')
     {
	order[5].quantity=0 ;
	order[5].ammount=0 ;
	goto beginning ;
	 }
    else 
    {
   	file1.close() ;
	order[5].quantity=0 ;
	order[5].ammount=0 ;
	system("cls") ;
	goto begin ;
	}
	break ;
	
    // case7 [if user input 7 ]
    
	case 7 :
    cout<<endl << "\n \t | Sir tell me Quantity :- " ;
	cin>> order[6].quantity ;
    
	order[6].ammount = 0 ;
	
	for (int i = 0 ; i<order[6].quantity ; i++)	
	{
	    order[6].ammount += iteminfo[6].price ;
	}    
	
	   file1<<" | Quantity :- " <<order[6].quantity <<endl <<" | Item Name :- " <<iteminfo[6].name <<endl <<" | total ammount :- " ;
	   file1<<order[6].ammount  ;
	   
	   system("cls") ;
	   
	    cout<< "\n ________________________________(YOUR BILL IS)_______________________________\n\n\n" ;
	   cout <<"\t || Order Name :- " <<order[0].name  <<endl <<endl ;
	   cout <<"\t || OrderNo :- " <<b ; b++ ; cout<<endl <<endl ;
	   cout <<"\t || Item :- " <<iteminfo[6].name  <<endl <<endl ;  
	   cout <<"\t || Quantity :- " <<order[6].quantity  <<endl <<endl ;
	   cout <<"\t || Ammount :- " <<order[6].ammount  ; cout<<"\n________________________________________________________________________________" ;
	   cout <<endl <<endl   << "\t\t  (PAY YOUR BILL IN CASH) [CREDIT CARD NOT ACCEPTED]  " <<endl <<endl ;
	   cout <<"\t\t       | Your order will be served soon | " <<endl <<endl <<endl <<"\t\t !!! THANKS FOR CHOSING US (HAVE A NICE DAY) !!! \n\n"  ;
	
	cout<< endl <<"\n\t\t | Do u want something else [Y/N] :-  " ;
	cin>>charinput[6] ;
	
	// if / else statement :-
	
	if (charinput[6]=='y') 
	{
	order[6].quantity=0 ;
	order[6].ammount=0 ;
		goto beginning ;
	} 
	else
    cout<<endl <<setw(5) <<"\n\t\t | Do u want to logout [y/n] :- " ; cin>>logoutinput ;
	if (logoutinput=='y')
	{
	file1.close() ;
	order[6].quantity=0 ;
	order[6].ammount=0 ;
	system("cls") ;
	goto begin ;	
	} 
    else 
    cout<<"\n\n\t\t | Do u want to place another Order [Y] or logout [N] :- " ; cin>>logoutinput  ;
    if (logoutinput=='y')
     {
	order[6].quantity=0 ;
	order[6].ammount=0 ;
	goto beginning ;
	 }
    else 
    {
	file1.close() ;
	order[6].quantity=0 ;
	order[6].ammount=0 ;
	system("cls") ;
	goto begin ;
	}
	break ;
    
    // case 8 [if user input 8] 
    
	case 8 :
    cout<<endl << "\n \t | Sir tell me Quantity :- " ;
	cin>> order[7].quantity ;
    
	order[7].ammount = 0 ;
	
	for (int i = 0 ; i<order[7].quantity ; i++)	
	{
	    order[7].ammount += iteminfo[7].price ;
    }
	
	   file1<<" | Quantity :- " <<order[7].quantity <<endl <<" | Item Name :- " <<iteminfo[7].name <<endl <<" | total ammount :- " ;
	   file1<<order[7].ammount  ;
	   
	   system("cls") ;
	   
	     cout<< "\n ________________________________(YOUR BILL IS)_______________________________\n\n\n" ;
	   cout <<"\t || Order Name :- " <<order[0].name  <<endl <<endl ;
	   cout <<"\t || OrderNo :- " <<b ; b++ ; cout<<endl <<endl ;
	   cout <<"\t || Item :- " <<iteminfo[7].name  <<endl <<endl ;  
	   cout <<"\t || Quantity :- " <<order[7].quantity  <<endl <<endl ;
	   cout <<"\t || Ammount :- " <<order[7].ammount  ; cout<<"\n________________________________________________________________________________" ;
	   cout <<endl <<endl   << "\t\t  (PAY YOUR BILL IN CASH) [CREDIT CARD NOT ACCEPTED]  " <<endl <<endl ;
	   cout <<"\t\t       | Your order will be served soon | " <<endl <<endl <<endl <<"\t\t !!! THANKS FOR CHOSING US (HAVE A NICE DAY) !!! \n\n"  ;
	
	cout<< endl <<"\n\t\t | Do u want something else [Y/N] :-  " ;
	cin>>charinput[7] ;
	
	// if / else statement :-
	
	if (charinput[7]=='y') 
	{
		order[7].quantity=0 ;
	    order[7].ammount=0 ;
		goto beginning ;
	} 
	else
    cout<<endl <<setw(5) <<"\n\t\t | Do u want to logout [y/n] :- " ; cin>>logoutinput ;
	if (logoutinput=='y')
	{
	file1.close() ;
	order[7].quantity=0 ;
	order[7].ammount=0 ;
	system("cls") ;
	goto begin ;	
	} 
    else 
    cout<<"\n\n \t\t | Do u want to place another Order [Y]  or  logout [N] :- " ; cin>>logoutinput  ;
    if (logoutinput=='y')
     {
	order[7].quantity=0 ;
	order[7].ammount=0 ;
	goto beginning ;
	 }
    else 
    {
	order[7].quantity=0 ;
	order[7].ammount=0 ;
	file1.close() ;
	system("cls") ;
	goto begin ;
	}
	break ;
    
    
	// case 9 [if user input 9 ]
	
	case 9 :
    cout<<endl << "\n \t | Sir tell me Quantity :- " ;
	cin>> order[8].quantity ;
    
	order[8].ammount = 0 ;
	
	for (int i = 0 ; i<order[8].quantity ; i++)	
	{
	    order[8].ammount += iteminfo[8].price ;
	}    
	
	   file1<<" | Quantity :- " <<order[8].quantity <<endl <<" | Item Name :- " <<iteminfo[8].name <<endl <<" | total ammount :- " ;
	   file1<<order[8].ammount  ;
	   
	   system("cls") ;
	    cout<< "\n ________________________________(YOUR BILL IS)_______________________________\n\n\n" ;
	   cout <<"\t || Order Name :- " <<order[0].name  <<endl <<endl ;
	   cout <<"\t || OrderNo :- " <<b ; b++ ; cout<<endl <<endl ;
	   cout <<"\t || Item :- " <<iteminfo[8].name  <<endl <<endl ;  
	   cout <<"\t || Quantity :- " <<order[8].quantity  <<endl <<endl ;
	   cout <<"\t || Ammount :- " <<order[8].ammount  ; cout<<"\n________________________________________________________________________________" ;
	   cout <<endl <<endl   << "\t\t  (PAY YOUR BILL IN CASH) [CREDIT CARD NOT ACCEPTED]  " <<endl <<endl ;
	   cout <<"\t\t       | Your order will be served soon | " <<endl <<endl <<endl <<"\t\t !!! THANKS FOR CHOSING US (HAVE A NICE DAY) !!! \n\n"  ;
	
	cout<< endl <<"\n\t\t | Do u want something else [Y/N] :-  " ;
	cin>>charinput[8] ;
	
	// if / else statement :-
	
	if (charinput[8]=='y') 
	{
		order[8].ammount=0 ;
		order[8].quantity=0 ;
		goto beginning ;
	} 
	else
    cout<<endl <<setw(5) <<"\n\t\t | Do u want to logout [y/n] :- " ; cin>>logoutinput ;
	if (logoutinput=='y')
	{
	order[8].quantity=0 ;
	order[8].ammount=0 ;
	file1.close() ;
	system("cls") ;
	goto begin ;	
	} 
    else 
    cout<<"\n\n \t\t | Do u want to place another Order [Y]  or logout [N] :- " ; cin>>logoutinput  ;
    if (logoutinput=='y')
     {
	order[8].quantity=0 ;
	order[8].ammount=0 ;
	goto beginning ;
	 }
    else 
    {
   	file1.close() ;
	order[8].quantity=0 ;
	order[8].ammount=0 ;
	system("cls") ;
	goto begin ;
	}
	break ; 
    
    // case 10 [ if user input 10] 
	
	case 10 :
    
	cout<<endl << "\n \t | Sir tell me Quantity :- " ;
	cin>> order[9].quantity ;
    
	order[9].ammount = 0 ;
	
	for (int i = 0 ; i<order[9].quantity ; i++)	
	{
	    order[9].ammount += iteminfo[9].price ;
	}    
	
	   file1<<" | Quantity :- " <<order[9].quantity <<endl <<" | Item Name :- " <<iteminfo[9].name <<endl <<" | total ammount :- " ;
	   file1<<order[9].ammount  ;
	   
	   system("cls") ;
	   
	    cout<< "\n ________________________________(YOUR BILL IS)_______________________________\n\n\n" ;
	   cout <<"\t || Order Name :- " <<order[0].name  <<endl <<endl ;
	   cout <<"\t || OrderNo :- " <<b ; b++ ; cout<<endl <<endl ;
	   cout <<"\t || Item :- " <<iteminfo[9].name  <<endl <<endl ;  
	   cout <<"\t || Quantity :- " <<order[9].quantity  <<endl <<endl ;
	   cout <<"\t || Ammount :- " <<order[9].ammount  ; cout<<"\n________________________________________________________________________________" ;
	   cout <<endl <<endl   << "\t\t  (PAY YOUR BILL IN CASH) [CREDIT CARD NOT ACCEPTED]  " <<endl <<endl ;
	   cout <<"\t\t       | Your order will be served soon | " <<endl <<endl <<endl <<"\t\t !!! THANKS FOR CHOSING US (HAVE A NICE DAY) !!! \n\n"  ;
	
	cout<< endl <<"\n\t\t | Do u want something else [Y/N] :-  " ;
	cin>>charinput[9] ;
	
	// if / else statement :-
	
	if (charinput[9]=='y') 
	{
		order[9].ammount=0 ;
		order[9].quantity=0 ;
		goto beginning ;
	} 
	else
    cout<<endl <<setw(5) <<"\n\t\t | Do u want to logout [y/n] :- " ; cin>>logoutinput ;
	if (logoutinput=='y')
	{
	file1.close() ;
	system("cls") ;
	order[9].ammount=0 ;
	order[9].quantity=0 ;
	goto begin ;	
	} 
    else 
    cout<<"\n\n \t\t | Do u want to place another Order [Y]  or  logout [N] :- " ; cin>>logoutinput  ;
    if (logoutinput=='y')
     {
	order[9].quantity=0 ;
	order[9].ammount=0 ;
	goto beginning ;
	 }
    else 
    {
	file1.close() ;
	order[9].ammount=0 ;
	order[9].quantity=0 ;
	system("cls") ;
	goto begin ;
	}
	break ;
	
    // case 11 [if user input 11 ]
    
	case 11 :
    cout<<endl << "\n \t | Sir tell me Quantity :- " ;
	cin>> order[10].quantity ;
    
    order[10].ammount = 0 ;
	for (int i = 0 ; i<order[10].quantity ; i++)	
	{
	    order[10].ammount += iteminfo[10].price ;
	}    
	
	   file1<<" | Quantity :- " <<order[10].quantity <<endl <<" | Item Name :- " <<iteminfo[10].name <<endl <<" | total ammount :- " ;
	   file1<<order[10].ammount  ;
	   
	   system("cls") ;
	   
	     cout<< "\n ________________________________(YOUR BILL IS)_______________________________\n\n\n" ;
	   cout <<"\t || Order Name :- " <<order[0].name  <<endl <<endl ;
	   cout <<"\t || OrderNo :- " <<b ; b++ ; cout<<endl <<endl ;
	   cout <<"\t || Item :- " <<iteminfo[10].name  <<endl <<endl ;  
	   cout <<"\t || Quantity :- " <<order[10].quantity  <<endl <<endl ;
	   cout <<"\t || Ammount :- " <<order[10].ammount  ; cout<<"\n________________________________________________________________________________" ;
	   cout <<endl <<endl   << "\t\t  (PAY YOUR BILL IN CASH) [CREDIT CARD NOT ACCEPTED]  " <<endl <<endl ;
	   cout <<"\t\t       | Your order will be served soon | " <<endl <<endl <<endl <<"\t\t !!! THANKS FOR CHOSING US (HAVE A NICE DAY) !!! \n\n"  ;
	
	cout<< endl <<"\n\t\t | Do u want something else [Y/N] :-  " ;
	cin>>charinput[10] ;
	
	// if / else statement :-
	
	if (charinput[10]=='y') 
	{
		order[10].ammount=0 ;
		order[10].quantity=0 ;
		goto beginning ;
	} 
	else
    cout<<endl <<setw(5) <<"\n\t\t | Do u want to logout [y/n] :- " ; cin>>logoutinput ;
	if (logoutinput=='y')
	{
	file1.close() ;
	order[10].ammount=0 ;
	order[10].quantity=0 ;
	system("cls") ;
	goto begin ;	
	} 
    else 
    cout<<"\n\n \t\t Do u want to place another Order [Y]  or  logout [N] :- " ; cin>>logoutinput  ;
    if (logoutinput=='y')
     {
	order[10].ammount=0 ;
	order[10].quantity=0 ;
	goto beginning ;
	 }
    else 
    {
	file1.close() ;
	system("cls") ;
	order[10].ammount=0 ;
	order[10].quantity=0 ;
	goto begin ;
	}
	break ;
	
	// case 12 [if u input 12]
    
    case 12 :
    cout<<endl << "\n \t | Sir tell me Quantity :- " ;
	cin>> order[11].quantity ;
    
	order[11].ammount = 0 ;
	for (int i = 0 ; i<order[11].quantity ; i++)	
	{
	   order[11].ammount += iteminfo[11].price ;
	}    

	   file1<<" | Quantity :- " <<order[11].quantity <<endl <<" | Item Name :- " <<iteminfo[11].name <<endl <<" | total ammount :- " ;
	   file1<<order[11].ammount  ;
	   
	   system("cls") ;
	   
	    cout<< "\n ________________________________(YOUR BILL IS)_______________________________\n\n\n" ;
	   cout <<"\t || Order Name :- " <<order[0].name  <<endl <<endl ;
	   cout <<"\t || OrderNo :- " <<b ; b++ ; cout<<endl <<endl ;
	   cout <<"\t || Item :- " <<iteminfo[11].name  <<endl <<endl ;  
	   cout <<"\t || Quantity :- " <<order[11].quantity  <<endl <<endl ;
	   cout <<"\t || Ammount :- " <<order[11].ammount  ; cout<<"\n________________________________________________________________________________" ;
	   cout <<endl <<endl   << "\t\t  (PAY YOUR BILL IN CASH) [CREDIT CARD NOT ACCEPTED]  " <<endl <<endl ;
	   cout <<"\t\t       | Your order will be served soon | " <<endl <<endl <<endl <<"\t\t !!! THANKS FOR CHOSING US (HAVE A NICE DAY) !!! \n\n"  ;
	
	cout<< endl <<"\t\t | Do u want something else [Y/N] :-  " ;
	cin>>charinput[11] ;
	
	// if / else statement :-
	
	if (charinput[11]=='y') 
	{
		order[11].ammount=0 ;
		order[11].quantity=0 ;
		goto beginning ;
	} 
	else
    cout<<endl <<setw(5) <<"\n\t\t | Do u want to logout [y/n] :- " ; cin>>logoutinput ;
	if (logoutinput=='y')
	{
	order[11].ammount=0 ;
	order[11].quantity=0 ;
	file1.close() ;
	system("cls") ;
	goto begin ;	
	} 
    else 
    cout<<"\n\n \t\t | Do u want to place another Order [Y]  or  logout [N] :- " ; cin>>logoutinput  ;
    if (logoutinput=='y')
     {
	order[11].ammount=0 ;
	order[11].quantity=0 ;
	goto beginning ;
	 }
    else 
    {
	order[11].quantity=0 ;
	order[11].ammount=0 ;
	file1.close() ;
	system("cls") ;
	goto begin ;
	}
	break ; 
    
    // case 13 [ if user input 13 ]
    
	case 13 :
    cout<<endl << "\n \t | Sir tell me Quantity :- " ;
	cin>> order[12].quantity ;
    
	order[12].ammount = 0 ;
	for (int i = 0 ; i<order[12].quantity ; i++)	
	{
	    order[12].ammount += iteminfo[12].price ;
	}    
	

	   file1<<" | Quantity :- " <<order[12].quantity <<endl <<" | Item Name :- " <<iteminfo[12].name <<endl <<" | total ammount :- " ;
	   file1<<order[12].ammount  ;
	   
	   system("cls") ;
	   
	     cout<< "\n ________________________________(YOUR BILL IS)_______________________________\n\n\n" ;
	   cout <<"\t || Order Name :- " <<order[0].name  <<endl <<endl ;
	   cout <<"\t || OrderNo :- " <<b ; b++ ; cout<<endl <<endl ;
	   cout <<"\t || Item :- " <<iteminfo[12].name  <<endl <<endl ;  
	   cout <<"\t || Quantity :- " <<order[12].quantity  <<endl <<endl ;
	   cout <<"\t || Ammount :- " <<order[12].ammount  ; cout<<"\n________________________________________________________________________________" ;
	   cout <<endl <<endl   << "\t\t  (PAY YOUR BILL IN CASH) [CREDIT CARD NOT ACCEPTED]  " <<endl <<endl ;
	   cout <<"\t\t       | Your order will be served soon | " <<endl <<endl <<endl <<"\t\t !!! THANKS FOR CHOSING US (HAVE A NICE DAY) !!! \n\n"  ;
	
	cout<< endl <<"\t\t | Do u want something else [Y/N] :-  " ;
	cin>>charinput[12] ;
	
	// if / else statement :-
	
	if (charinput[12]=='y') 
	{
		order[12].ammount=0 ;
		order[12].quantity=0 ;
		goto beginning ;
	} 
	else
    cout<<endl <<setw(5) <<"\n\t\t | Do u want to logout [y/n] :- " ; cin>>logoutinput ;
	if (logoutinput=='y')
	{
	file1.close() ;
	order[12].quantity=0 ;
	order[12].ammount=0 ;
	system("cls") ;
	goto begin ;	
	} 
    else 
    cout<<"\n\n \t\t | Do u want to place another Order [Y]  or  logout [N] :- " ; cin>>logoutinput  ;
    if (logoutinput=='y')
     {
	order[12].quantity=0 ;
	order[12].ammount=0 ;
	goto beginning ;
	 }
    else 
    {
	order[12].quantity=0 ;
	order[12].ammount=0 ;
	system("cls") ;
	file1.close() ;
	goto begin ;
	}
	break ;
    
    // case 14 [ if user input 14 ]
    
	case 14 :
    cout<<endl << "\n \t | Sir tell me Quantity :- " ;
	cin>> order[13].quantity ;
    
	order[13].ammount = 0 ;
	
	for (int i = 0 ; i<order[13].quantity ; i++)	
	{
	    order[13].ammount += iteminfo[13].price ;
	}    
	
	   file1<<" | Quantity :- " <<order[13].quantity <<endl <<" | Item Name :- " <<iteminfo[13].name <<endl <<" | total ammount :- " ;
	   file1<<order[13].ammount  ;
	   
	   system("cls") ;
	   
	    cout<< "\n ________________________________(YOUR BILL IS)_______________________________\n\n\n" ;
	   cout <<"\t || Order Name :- " <<order[0].name  <<endl <<endl ;
	   cout <<"\t || OrderNo :- " <<b ; b++ ; cout<<endl <<endl ;
	   cout <<"\t || Item :- " <<iteminfo[13].name  <<endl <<endl ;  
	   cout <<"\t || Quantity :- " <<order[13].quantity  <<endl <<endl ;
	   cout <<"\t || Ammount :- " <<order[13].ammount ; cout<<"\n________________________________________________________________________________" ; ;
	   cout <<endl <<endl   << "\t\t  (PAY YOUR BILL IN CASH) [CREDIT CARD NOT ACCEPTED]  " <<endl <<endl ;
	   cout <<"\t\t       | Your order will be served soon | " <<endl <<endl <<endl <<"\t\t !!! THANKS FOR CHOSING US (HAVE A NICE DAY) !!! \n\n"  ;
	   
	cout<< endl <<"\t\t | Do u want something else [Y/N] :-  " ;
	cin>>charinput[13] ;
	
	// if / else statement :-
	
	if (charinput[13]=='y') 
	{
		order[13].ammount=0 ;
		order[13].quantity = 0 ;
		goto beginning ;
	} 
	else
    	cout<<endl <<setw(5) <<"\n\t\t | Do u want to logout [y/n] :- " ; cin>>logoutinput ;
	if (logoutinput=='y')
	{
	file1.close() ;
	order[13].ammount=0 ;
	order[13].quantity = 0 ;
	system("cls") ;
	goto begin ;	
	} 
    else 
    cout<<"\n\n \t\t | Do u want to place another Order [Y]  or  logout [N] :- " ; cin>>logoutinput   ;
    if (logoutinput=='y')
     {
	order[13].quantity = 0 ;
	order[13].ammount= 0 ;
	goto beginning ;
	
	 }
    else 
    {
	order[13].quantity = 0 ;
	order[13].ammount= 0 ;
	file1.close() ;
	system("cls") ;
	goto begin ;
	}
	
    // case 15 [ if user input 15 ] 
    
	case 15 :
    cout<<endl << "\n \t | Sir tell me Quantity :- " ;
	cin>> order[14].quantity ;
    
	order[14].ammount = 0 ;
	
	for (int i = 0 ; i<order[14].quantity ; i++)	
	{
	    order[14].ammount += iteminfo[14].price ;
	}    
	
	   file1<<" | Quantity :- " <<order[14].quantity <<endl <<" | Item Name :- " <<iteminfo[14].name <<endl <<" | total ammount :- " ;
	   file1<<ammount[14]  ;
	   
	   system("cls") ;
	   
	    cout<< "\n ________________________________(YOUR BILL IS)_______________________________\n\n\n" ;
	   cout <<"\t || Order Name :- " <<order[0].name  <<endl <<endl ;
	   cout <<"\t || OrderNo :- " <<b ; b++ ; cout<<endl <<endl ;
	   cout <<"\t || Item :- " <<iteminfo[14].name  <<endl <<endl ;  
	   cout <<"\t || Quantity :- " <<order[14].quantity  <<endl <<endl ;
	   cout <<"\t || Ammount :- " <<order[14].ammount   ; cout<<"\n________________________________________________________________________________" ;
	   cout <<endl <<endl   << "\t\t  (PAY YOUR BILL IN CASH) [CREDIT CARD NOT ACCEPTED]  " <<endl <<endl ;
	   cout <<"\t\t       | Your order will be served soon | " <<endl <<endl <<endl <<"\t\t !!! THANKS FOR CHOSING US (HAVE A NICE DAY) !!! \n\n"  ;
	
	cout<< endl <<"\t\t | Do u want something else [Y/N] :-  " ;
	cin>>charinput[14] ;
	
	// if / else statement :-
	
	if (charinput[14]=='y') 
	{
		order[14].ammount=0 ;
		order[14].quantity = 0 ;
		goto beginning ;
	} 
	else
	cout<<endl <<setw(5) <<"\n\t\t | Do u want to logout [y/n] :- " ; cin>>logoutinput ;
	if (logoutinput=='y')
	{
	order[14].quantity = 0 ;
	order[14].ammount= 0 ;
	file1.close() ;
	system("cls") ;
	goto begin ;	
	} 
    else 
    cout<<"\n\n \t\t | Do u want to place another Order [Y]  or  logout [N] :- " ; cin>>logoutinput  ;
    if (logoutinput=='y')
     {
	order[14].quantity = 0 ;
	order[14].ammount = 0 ;
	goto beginning ;
	 }
    else 
    {
	order[14].ammount = 0 ;
	order[14].quantity = 0 ;
	file1.close() ;
	system("cls") ;
	goto begin ;
	}
    break ;


}
}
   // for admin :-
   
   else if (input==2)
   { 	
	
	system("cls") ;
	
	// (UNIQUE FEATURE BY SHAFAY)  ADMIN LOGIN PAGE :-
	 
	string adminName ;
    string adminPassword ;
	int loginAttempt = 0 ;	
    
	while (loginAttempt < 5)
    {
        cout<< "\n__________________________(ADMIN LOGIN PAGE)_______________________________ \n\n\n " ;
		
		cout << "\n| \t\t Please Enter Your Name  :- ";
        cin >> adminName;
        cout << "\n| \t\t Please Enter Your Password :- ";
        cin >> adminPassword;

        if (adminName == "shafay" && adminPassword == "bukc")
        {
            cout << "\n\n\n\n \t\t Welcome ADMIN ---SHAFAY--- !\n\n\n\n";
            system("pause") ;
            system("cls") ;
			break;
        }
        else if (adminName == "saad" && adminPassword == "bukc")
        {
            cout << "\n\n\n\n \t\t Welcome [2] ADMIN ----SAAD---- \n\n\n\n";
            system("pause") ;
            system("cls") ;
			break;
        }
         else if (adminName == "arsalan" && adminPassword == "bukc")
        {
            cout << "\n\n\n\n \t\t Welcome [3] ADMIN ----ARSALAN---- \n\n\n\n";
            system("pause") ;
            system("cls") ;
			break;
      	}
		 
		 else if (adminName == "jawad" && adminPassword == "bukc")
        {
            cout << "\n\n\n\n \t\t Welcome [4] ADMIN ----JAWAD---- \n\n\n\n";
            system("pause") ;
            system("cls") ;
			break;
	    }
		
		else
        {
            cout << "\n\n Invalid login attempt. Please try again.[" <<loginAttempt <<"] \n\n " << endl ;
            system("pause") ;
			system("cls") ;
			loginAttempt++;
        }
    }
    if (loginAttempt == 5)
    {
            cout << "Too many login TRIES ! [SORRY] The program will now terminate .";
            system("pause") ;
            exit(0) ;
			return 0;
    }
    goto adminpage  ;
	
	// goto admin page function :
	adminpage:
	system("cls") ;
	
	// taking In input inmteger :-
	int In ;
	
	cout<< "\n__________________________________(ADMIN)____________________________________\n\n" ;
	cout<< "----------- [1] Order History :- \n\n" ;
	cout<< "----------- [2] Delete All Order History :- \n\n" ;
	cout<< "----------- [3] Logout \n\n " ;
	cout<< "Enter the Number :- " ;
	cin>> In ;
	
    if (In==1)
    {
		file1.open("orderhistory.txt" , ios::in) ;
		system("cls") ;
		cout<< "\n________________________ (Order History) ______________________________ \n\n " ;
		cout<< "ORDER HISTORY :- \n\n " ;
		
	// for reading from file :-
	 string line ;
	 
	 // for reading by getline() and printing line by line ;
	 while( getline(file1,line))
	 {
       cout<<"||||||\t" <<line <<endl ;
     }
	   cout<<" ||||||" ;
	   file1.close() ;
	   cout<<endl <<endl ;
		system("pause") ;
		goto adminpage ;
      }
	
	  else if (In==2)
	  {
	   file1.open("orderhistory.txt", ios::out | ios::trunc) ;
	   file1.close() ;
	   cout << "\n\n\n \t       (File content or Order History is Deleted) \n\n " ;
	   system("pause") ;
	   system("cls") ;
	   goto adminpage ;
       }
       
       // admin case 3 :
	  else if (In==3)
	  {
       system("cls") ;
	   goto begin ; 
      }
}
   // for close program :-
   
   else if (input==3)
   {
   	exit(0) ;
   }
}
       //                  BEST         PROJECT     :D  




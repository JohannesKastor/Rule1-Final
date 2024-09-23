#include <iostream>
#include <string>
#include <ctime>
#include <math.h>
#include <random>
#include <cstdlib>


//Sequence, Selection, iteration
//For loop (När vi vet att det ska användas mer än 10 gånger)
//While loop (när vi ska använda några gǻnger)
//Selection är (if and else)
//switch
//Else if
//Indention tutorial

using namespace std;


 int kalas(){   

 cout << "Hi And welcome to Johannes Kastors game of roullete! \n";
 cout << "As a first time playing you are rewarded with 1000kr \n";
 const int iblc = 1000;
 return 0;
//ta a bort om vi inte använder

 }

int main() {

cout << "Hi And welcome to Johannes Kastors game of Roulette! \n";
cout << "";
cout << "As a first time playing you are rewarded with 1000kr \n";
   
//Welcome screen


int blc =1000;
 cout << "Current balance:";
 cout << blc;    
 cout << "\n";                                                                                 
                                                                                              
int ins_blc = 100;
//Insuffient amount to be able to bet

if (blc >= ins_blc)
cout << "Du har tillträckligt för att spela! \n";
 else {
  int trs_money;
  cout << "Sätt in mera pengar för att spela! \n";
  cin >> trs_money; //Tranfer money to balance
  cout << "Du har satt in:" << trs_money;

  
     }


int choice;
bool validchoice = false;

while (!validchoice) {
  std::cout << "Would you like to bet 100/300/500kr?";
  std::cin >> choice;
  
  if (choice == 100 || choice==300 || choice==500)
 {
  validchoice = true;
  std::cout << "You Selected:" << choice <<std::endl;
 }
 
else
{
  std:: cout <<"Invalid choice. Please select again."<< std::endl;
}
//En loop för att se till så att spelaren måste välja rätt summa



}

cout <<"Current Balance is now: ";
cout <<blc - choice << endl;

int numb;
bool validnumb = false;

while (!validnumb) {
  std::cout << "Choose a number beetween 1-36?";
  std::cin >> numb;
   
  if (numb > 0 && numb < 37)

 {
  validnumb = true;
  std::cout << "You Selected:" << numb <<std::endl;
 }
 else
{
  std:: cout <<"Invalid number. Please select again."<< std::endl;
  break;
}}
//en whileloop för att se till så att spelaren väljer ett tillåtet nummber


char color;
bool validcolor = false;

while (!validcolor) {
  std::cout << "Choose black or red (press [B] for black and [R] for red)";
  std::cin >> color;

  if (color == 'b' || color == 'B'|| color == 'r' || color == 'R'  )
 {
  validcolor = true;
  std::cout << "Du valde färgen:" << color <<std::endl;
 }
 
else
{
  std:: cout <<"Invalid choice. Please select again."<< std::endl;
  continue;
}
}

int intcolor;

if (color == 'b' || 'B' )
{
  intcolor = 1;
}
else {
  intcolor = 0;
}

srand(time(0));
int randomNumb = rand() % 36 + 1;
cout << "Random nummer mellan 1-37 blev:   ";
printf("%d", randomNumb);
cout << "\n";

srand(time(0));
int const randomColor = rand() % 2;
if (randomColor == 1)
{
 cout << "Random färg blev röd \n";
 
}

else {
  cout << "Random färg blev svart!";
}



if (randomNumb == numb) 
 {cout << "grattis du har vunnit:  ";
  cout << (choice + (choice * 10)) << endl;
  cout << "Ditt saldo är nu:  ";
  cout << (blc + choice + (choice * 10)) << endl;

 
  }

else {
  cout << "Tyvärr du har vann inte på nummer denna gång!"<< endl;
}

if (randomColor == intcolor)
{
  cout << "Grattis du har vunnit på färg!" << endl;
  cout << (choice + (choice * 2)) << endl;
  cout << "Ditt saldo är nu:  ";
  cout << (blc + choice + (choice * 2)) << endl;

}
else {
  cout << "Tyvärr du vann inte denna gång!" <<endl;
}




 return 0;   }
    
  // End of the main function*/



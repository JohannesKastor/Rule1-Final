#include <iostream>
#include <string>
#include <ctime>
#include <math.h>
#include <random>
#include <cstdlib>
#include <cstdio>
#include <unistd.h>

//Sequence, Selection, iteration
//For loop (När vi vet att det ska användas mer än 10 gånger)
//While loop (när vi ska använda några gǻnger)
//Selection är (if and else)
//switch
//Else if
//Indention tutorial

using namespace std;



int main() {

int blc = 1000;
int ins_blc = 100;
int trs_money;
char want_trs;
char spelaigen;
int choice;
int age;
int numb;
char color;
int intcolor;

cout << "Hi And welcome to.. \n";
cout << 
" ______    __   __  ___      _______         ____  \n"
"|    _ |  |  | |  ||   |    |       |       |    | \n"
"|   | ||  |  | |  ||   |    |    ___| ____   |   | \n"
"|   |_||_ |  |_|  ||   |    |   |___ |____|  |   | \n"
"|    __  ||       ||   |___ |    ___|        |   | \n"
"|   |  | ||       ||       ||   |___         |   | \n"
"|___|  |_||_______||_______||_______|        |___| \n";

cout << "To start playing we have to make sure that you are 18 or above..\n";
cout << "Please enter your age:";
cin  >> age;
cout << endl;

if (age >= 18)

{

//Meddelande om psykiskhälsa kopplat till spelberoende

cout << "The proportion with some degree of gambling problems in the past year is around 4 percent in the Swedish population. \n"
 "130 000 people share a household with someone experiencing gambling problems.\n"
 "If you or someone close to you is struggling with addiction please call +46 208 191 00 \n";
cout << endl;


 cout << "As a first time playing you are rewarded with 1000kr \n";
 cout << "Current balance:      ";
 cout << blc;    
 cout << "\n";        

}

else {

  return 0;
}

                                                                     
do 
{ 

//Nollställande av variabler




//Insuffient amount to be able to bet


if (blc >= ins_blc)
{cout << "Du har tillträckligt för att spela! \n";
cout << endl;
}

 else {
  
  cout << "Du har inte tillräckligt för att spela! \n";
  cout << "Hur mycket vill du sätta in? \n";
  cin >> trs_money; 
  
while (0 >= trs_money && 3000 > trs_money)
{
  cout << "Du har satt in:   " << trs_money;
  blc = blc + trs_money;
  cout <<endl;
  cout << "Du måste välja ett belopp mellan 0-3000 kr";
  }
  
  cout << "Du har satt in:   " << trs_money;
  blc = blc + trs_money;
  cout <<endl;
  

  }




  
     

bool validchoice = false;

while (!validchoice) {
  std::cout << "Would you like to bet 100/300/500kr?";
  std::cin >> choice;
  
  if (choice == 100 && blc >= 100 || choice==300  && blc >= 300 || choice==500 && blc >= 500)
 {
  validchoice = true;
  std::cout << "You have betted:      " << choice <<std::endl;
  blc = blc - choice;
  cout <<"Current Balance:      ";
  cout << blc << endl;
  cout << endl;
 }
 
else
{

std:: cout <<"Invalid bet. Please select again."<< std::endl;
}

//En loop för att se till så att spelaren måste välja rätt summa



}





bool validnumb = false;
while (!validnumb) {
  cout << "Choose a number beetween 1-36?";
  cin >> numb;
   
  if (numb > 0 && numb < 36)

 {
  validnumb = true;
  
 }
 else
{
  std:: cout <<"Invalid number. Please select again."<< std::endl;
  
}}
//en whileloop för att se till så att spelaren väljer ett tillåtet nummber


bool validcolor = false;

while (!validcolor) {
  std::cout << "Choose black or red (press [B] for black and [R] for red)";
  std::cout << endl;
  std::cin >> color;

  if (color == 'b' || color == 'B'|| color == 'r' || color == 'R'  )
 {
  validcolor = true;
 
 }
 
else
{
  std:: cout <<"Invalid choice. Please select again."<< std::endl;
  continue;
}
}


if (color == 'b' || 'B' )
{
  intcolor = 1;
  cout << "Your final selection is " <<choice; cout <<":-  on  "; cout << "Black:    "<< numb;
  
}
else {
  intcolor = 0;
  cout << "Your final selection is " <<choice; cout <<":-  on  "; cout << "Red:    "<< numb;
  
}
    std::cout <<endl;
    std::cout << "Loading super advanced algoritm";
    while (true)
    {   
        sleep(1);
        std::cout << "." << std::flush;
        sleep(1);
        std::cout << "." << std::flush;
        sleep(1);
        std::cout << "." << std::flush;
        sleep(1);
        std::cout << "\b\b\b   \b\b\b" << std::flush;
        break;
    }

srand(time(0));
int randomNumb = rand() % 36 + 1;
cout << "\n";

srand(time(0));
int const randomColor = rand() % 2;
if (randomColor == 1)
{
 cout << "Randomised results were Black:           " <<randomNumb;
 cout <<endl;
 cout <<endl;
 
}

else {
  cout << "Randomised results were Red:            " << randomNumb;
  cout <<endl;
  cout <<endl;
}


if (randomNumb == numb) 
 { blc = blc + choice + (choice * 10);
  cout << "Congratulations you won:  ";
  cout << (choice + (choice * 10)) << endl;
  cout << "Current balance:  ";
  cout << blc << endl;
 

  }

else {
  cout << "Sorry, you didn't get the number right!"<< endl;
  cout <<endl;
}

if (randomColor == intcolor)
{ blc = blc + choice + (choice * 2);
  cout << "Your color was right!!" << endl;
  cout << "You won:   ";
  cout <<  (choice + (choice * 2)) << endl;
  cout << "Ditt saldo är nu:  ";
  cout << blc << endl;
  
}
else {
  cout << "Sorry, you didnt get the color right!" <<endl;
  cout <<endl;
}



cout << "Would you like to play again? \n If Yes press [Y] or [N] for No.";

cin >> spelaigen;


} 

while (spelaigen == 'y' || spelaigen == 'Y');


return 0;   }
    




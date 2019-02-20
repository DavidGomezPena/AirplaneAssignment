//Programmer Name: David Gomez
//Date Made:1/15/19
//Assignment Chapter 8 Exercise 19
//Assignment is about: (Airplane Seating Assignment)| Write a program that can be used to assign seats for a commercial airplane. The airplane has 13 rows, with six seats in each row. Rows 1 and 2 are first class, rows 3 through 7 are business class, and rows 8 through 13 are economy class. Your program must prompt the user to enter the following information
//Including the only neccessary library 
#include <iostream>
using namespace std;
//The Start of the main and only function 
int main() {

  int z = 1;
  char reply;
  //Initalizing the array that is used to print the Row Numbers 
  int rowL[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
   //Initalizing the array that is used to print the seats in a plane
  char seatArray[13][6] = {{'*','*','*','*','*','*'},
  {'*','*','*','*','*','*'},
  {'*','*','*','*','*','*'},
  {'*','*','*','*','*','*'},
  {'*','*','*','*','*','*'},
  {'*','*','*','*','*','*'},{'*','*','*','*','*','*'},
  {'*','*','*','*','*','*'},
  {'*','*','*','*','*','*'},
  {'*','*','*','*','*','*'},
  {'*','*','*','*','*','*'},
  {'*','*','*','*','*','*'},{'*','*','*','*','*','*'}};
  
  while (z == 1){
    cout << "To reserve a seat enter Y/y(Yes), N/n(No):\n";
    cin >> reply;
    if (reply != 'y' && reply != 'Y') {
      return 0;
    }
    char ticketType, seatNum;
    int rowNum, seatInteger;
    cout << "Enter ticket type: F/f (first class);  (B/b) (business class); E/e (economy class): ";
    cin >> ticketType;
    if (ticketType == 'f'||ticketType == 'F' ){
      cout << "\nEnter Row number 1 - 2: ";
      cin >> rowNum;
      cout << "\nEnter seat number A - F: ";
      cin >> seatNum;
    }
    else if (ticketType == 'b'||ticketType == 'B' ){
      cout << "\nEnter Row number 3 - 7: ";
      cin >> rowNum;
      cout << "\nEnter seat number A - F: ";
      cin >> seatNum;
    }
    else if (ticketType == 'E'||ticketType == 'e' ){
      cout << "\nEnter Row number 8 - 13: ";
      cin >> rowNum;
      cout << "\nEnter seat number A - F: ";
      cin >> seatNum;
    }
    else{
      cout << "That isnt a valid ticket type.\n";
    return 0;
    }
    //This part of the code turns the letter that was inputed into an int
    if (seatNum == 'A'){
      seatInteger = 0;
    }
    else if (seatNum == 'B'){
      seatInteger = 1;
    }
    else if (seatNum == 'C'){
      seatInteger = 2;
    }
    else if (seatNum == 'D'){
      seatInteger = 3;
    }
    else if (seatNum == 'E'){
      seatInteger = 4;
    }
    else if (seatNum == 'F'){
      seatInteger = 5;
    }
    //This block of code outputs the seats 
    seatArray[rowNum-1][seatInteger] = 'X';
    cout << "\t   A B C D E F\n";
    for(int i = 0;i <= 12;i++){
      if (i >= 0 && i <= 8){
        cout << "Row  "<< rowL[i] << "  " ;
      }
      else{
        cout << "Row "<< rowL[i] << "  " ;
      }
    
      cout << seatArray[i][0];
      cout << " ";
      cout << seatArray[i][1];
      cout << " ";
      cout << seatArray[i][2];
      cout << "  ";
      cout << seatArray[i][3];
      cout << " ";
      cout << seatArray[i][4];
      cout << " ";
      cout << seatArray[i][5];
      cout << "\n";
      if (i == 12){
        cout << "* -- available seat\n";
        cout << "X -- occupied seat\n\n";

      }
    }
  }
}
 

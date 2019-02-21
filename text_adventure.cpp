/**************************************
** Program: text_adventure.cpp
** Author: Jeremiah Kramer
** Date: 1/19/17
** Description: This program is a text adventure game which allows the user to interact with the program and choose their own path
** Input: The user chooses an answer in response to the prompt the program gives the user
** Output: The program prints the next step in the adventure or a prompt for the user to input a value or it will print the end of the game. It will also ask t** he user if they want to play again
**************************************/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
   int choice;
   int chance;
   char again = 'Y';

   while (again == 'y' || again == 'Y')
   {
   srand(time(NULL));

   chance = rand() %5;

   cout << "Welcome to:  Kramerica: The a-MAZE-ingly exciting text adventure game!" << endl;
   cout << endl;

   cout << "You are located in a rainforest in the infamous land named Kramerica. Win the game by finding your way back home." << endl;
   
   cout << "Enter 1 to go North or Enter 2 to go West: ";
   cin >> choice;
   cout << endl;

   if (choice == 1){
      cout << "You begin walking north and come across a hostile bear. Do you attack or sneak past the bear?" << endl;
      cout << "Enter 1 to Attack or Enter 2 to Sneak: ";
      cin >> choice;
      cout << endl;

      if (choice == 1){
         cout << "You attack the bear. The bear is too ferocious, you die horribly." << endl;
         cout << "End Game." << endl;
}

      else if (choice == 2){
         cout << "You sneaked past the bear successfully. Immediately past the bear is quicksand. Do you jump over sand or cut through forest to bypass sand?"                                                        << endl;
         cout << "Enter 1 to Jump or Enter 2 to Cut: " << endl; 
         cin >> choice;
         cout << endl;

         if (choice == 1){
            cout << "You have amazing athleticism and clear the sand with ease. Next, you come across a crocidille infested river. Do you build a raft to cross the river or swim across the channel?" << endl;
            cout << "Enter 1 to Build or Enter 2 to Swim: " << endl;
            cin >> choice;
            cout << endl;
 
            if (choice == 1){
               cout << "You build a solid raft. You safely cross the river. On the other side of the river is a car. Do you hotwire the car or walk home?" << endl;
               cout << "Enter 1 to Hotwire or Enter 2 to Walk: " << endl;
               cin >> choice;
               cout << endl;

               if (choice == 1){
                  cout << "You attempt to hotwire the car but you forgot you don't know how to hotwire a car. Oops! You are electrocuted." << endl;
                  cout << "End Game." << endl;
}
               else if (choice == 2){
                  cout << "You take the safe route and walk home safely. You WIN!!! Hooray!" << endl;
                  cout << "End Game." << endl;
}
}
            else if (choice == 2){
               cout << "You overestimated your athleticism this time. You are eaten by angry crocs." << endl;
               cout << "End Game." << endl;
}
}
         else if (choice == 2){
            cout << "You cut into the forest when suddenly you fall itno a hidden animal pit. Your legs are broken and no one is near." << endl;
            cout << "End Game." << endl;
}
         
}
}
   else if(choice == 2){
      if (chance <= 2){
         cout << "You are walking west and come across a bridge. Do you cross the bridge or search for another path?" << endl;
         cout << "Enter 1 to Cross or Enter 2 to Search :" << endl;
         cin >> choice;
         cout << endl; 
         
         if (choice == 1){
            cout << "You attempt to cross the bridge but it collapses before you can make it across. You fall to your devastating death." << endl;
            cout << "End Game." << endl;
}
         else if (choice == 2){
            cout << "You search for another path successfully and find vine to swing across the gap. Do you swing across the gap or scale down the gap?"                                                                    << endl;
            cout << "Enter 1 to Swing or Enter 2 to Scale: " << endl;
            cin >> choice;
            cout << endl;
            
            if (choice == 1){
               cout << "You grab on the vine and attempt to swing across the gap. You get halfway then the vine snaps. You fall to your devastating death."                                       << endl;
               cout << "End Game." << endl;
}
            else if (choice == 2){
               cout << "You scale down the gap and suddenly realize many hostile creatures live in the caves on the bottom floor. You are helpless and fall to your devastating death to the creatures." << endl;
               cout << "End Game." << endl;
}
}
}
      if (chance > 2){
                cout << "You died mysteriously" << endl;
                cout << "End Game." << endl;
}
}

   else{
      cout << "error" << endl;
}
   
      cout << "Do you want to play again? (y/n) ";
      cin >> again; 
}   

   return 0;
}

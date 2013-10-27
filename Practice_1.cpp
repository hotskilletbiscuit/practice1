#include <iostream>
#include <string>
using namespace std;
 
int main()
{ 
   string userOption;
   bool primer;
   char letter;
   int credit,yogurt,reward;

   credit = 0;
   reward = 10;
   yogurt = 0;

   primer = true;

   while ( primer )
   {
      cout << "\nGood day, please choose an option: \n\n"
         << "1. 'P' Process a transaction.\n"
         << "2. 'S' Shut down for the day.\n\n";
      cin >> userOption;

      letter = userOption[0];

      if ( toupper (letter) == 'P' )
      {
         if ( credit > 9 )
         {
            cout << "\nYou have " << credit << " points \n"
               <<"Would you like to redeem a free yogurt?";
            cin >> userOption;
            letter = userOption[0];

            if ( toupper (letter) == 'Y' )
            {
               cout << "\nHere you go.\n";
               credit -= reward;
               cout << "\nYou have " << credit << "points left.\n";
               continue;
            }

            else if (toupper (letter) == 'N' )
            {
               cout << "\nHow many units of yogurt would you like to "
                  << "purchase today?";
               cin >> yogurt;
               if ( yogurt < 1 )
               {
                  cout << "\nYou're going to have to "
                     << "buy more than that...";
                  continue;
               }
               else
               {
                  credit += yogurt;
                  cout << "\nyou now have " << credit << "points.\n";
                  continue;
               }
            }

            else
            {
               cout << "\nThat's an invalid choice.\n\n";
               continue;
            }
         }

         else if ( credit < 10 )
         {
            cout << "\nHow many units of yougurt would you like to "
               << "purchase today? ";
            cin >> yogurt;
            if ( yogurt < 1 )
            {
               cout << "\nyou're going to have to buy "
                  << "more than that...";
               continue;
            }
            else
            {
               credit += yogurt;
               cout << "\nyou now have " << credit << " points.\n";
               continue;
            }
         }
      }

      else if (toupper(letter) == 'S' )
      {
         cout << "\nGoodbye!\n";
         primer = false;
         break;
      }

      else
      {
         cout << "\nSorry, that's not a valid command.\n";
         continue;
      }

   }

   return 0;
}

//*-------------------------------------run------------------------------------

Good day, please choose an option:

1. 'P' Process a transaction.
2. 'S' Shut down for the day.

p

How many units of yougurt would you like to purchase today? 5

you now have 5 points.

Good day, please choose an option:

1. 'P' Process a transaction.
2. 'S' Shut down for the day.

p

How many units of yougurt would you like to purchase today? 12

you now have 17 points.

Good day, please choose an option:

1. 'P' Process a transaction.
2. 'S' Shut down for the day.

p

You have 17 points
Would you like to redeem a free yogurt?y

Here you go.

You have 7points left.

Good day, please choose an option:

1. 'P' Process a transaction.
2. 'S' Shut down for the day.

p

How many units of yougurt would you like to purchase today? 4

you now have 11 points.

Good day, please choose an option:

1. 'P' Process a transaction.
2. 'S' Shut down for the day.

p

You have 11 points
Would you like to redeem a free yogurt?n

How many units of yogurt would you like to purchase today?24

you now have 35points.

Good day, please choose an option:

1. 'P' Process a transaction.
2. 'S' Shut down for the day.

p

You have 35 points
Would you like to redeem a free yogurt?n

How many units of yogurt would you like to purchase today?-4

You're going to have to buy more than that...
Good day, please choose an option:

1. 'P' Process a transaction.
2. 'S' Shut down for the day.

f

Sorry, that's not a valid command.

Good day, please choose an option:

1. 'P' Process a transaction.
2. 'S' Shut down for the day.

p

You have 35 points
Would you like to redeem a free yogurt?y

Here you go.

You have 25points left.

Good day, please choose an option:

1. 'P' Process a transaction.
2. 'S' Shut down for the day.

s

Goodbye!
Press any key to continue . . .
//-----------------------------------------------------------------------------
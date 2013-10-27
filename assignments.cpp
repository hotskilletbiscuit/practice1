#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// main client --------------------------------------------------------
int main()
{
   // ingredient #1 constants
   const string INGREDIENT_1_NAME = "Johnnie Walker 1oz.BL (40% ABV)";
   const  int INGREDIENT_1_CALORIES_P100g = 237;  // in calories                 (delete later)
   const  double INGREDIENT_1_SATFAT_P100g = 0.;   // in grams
   const  double INGREDIENT_1_SUGAR_P100g = 0.;   // in grams
   const  double INGREDIENT_1_SODIUM_P100g = 0.;   // in mgs
   const  double INGREDIENT_1_ALCOHOL_P100g = 34.4;   // in grams

   // ingredient #2 constants
   const  string INGREDIENT_2_NAME = "vokda (40% ABV)";
   const  int INGREDIENT_2_CALORIES_P100g = 237;  // in calories                  (delete later)
   const  double INGREDIENT_2_SATFAT_P100g = 0.;   // in grams
   const  double INGREDIENT_2_SUGAR_P100g = 0.;   // in grams
   const  double INGREDIENT_2_SODIUM_P100g = 0.;   // in mgs
   const  double INGREDIENT_2_ALCOHOL_P100g = 34.4;   // in grams

   // ingredient #3 constants
   const  string INGREDIENT_3_NAME = "club soda";
   const  int INGREDIENT_3_CALORIES_P100g = 0;  // in calories                  (delete later)
   const  double INGREDIENT_3_SATFAT_P100g = 0.;   // in grams
   const  double INGREDIENT_3_SUGAR_P100g = 0.;   // in grams
   const  double INGREDIENT_3_SODIUM_P100g = 20.;   // in mgs
   const  double INGREDIENT_3_ALCOHOL_P100g = 0.;   // in grams

      // ingredient #4 constants
   const  string INGREDIENT_4_NAME = "lime juice";
   const  int INGREDIENT_4_CALORIES_P100g = 25;  // in calories                  (delete later)
   const  double INGREDIENT_4_SATFAT_P100g = 0.;   // in grams
   const  double INGREDIENT_4_SUGAR_P100g = 1.65;   // in grams
   const  double INGREDIENT_4_SODIUM_P100g = 2.;   // in mgs
   const  double INGREDIENT_4_ALCOHOL_P100g = 0.;   // in grams

      // ingredient #5 constants
   const  string INGREDIENT_5_NAME = "tequila (40% ABV)";
   const  int INGREDIENT_5_CALORIES_P100g = 237;  // in calories                  (delete later)
   const  double INGREDIENT_5_SATFAT_P100g = 0.;   // in grams
   const  double INGREDIENT_5_SUGAR_P100g = 0.;   // in grams
   const  double INGREDIENT_5_SODIUM_P100g = 0.;   // in mgs
   const  double INGREDIENT_5_ALCOHOL_P100g = 34.4;   // in grams

      // ingredient #6 constants
   const  string INGREDIENT_6_NAME = "sweet and sour mix";
   const  int INGREDIENT_6_CALORIES_P100g = 93;  // in calories                  (delete later)
   const  double INGREDIENT_6_SATFAT_P100g = 0.;   // in grams
   const  double INGREDIENT_6_SUGAR_P100g = 7.4;   // in grams
   const  double INGREDIENT_6_SODIUM_P100g = 0.6;   // in mgs
   const  double INGREDIENT_6_ALCOHOL_P100g = 0.;   // in grams

   const  string INDENT = "   ";

   string recipeName, userInputStr;
   int userInputInt;
   double totcal, totsatfat,totsugar,totsodium,totalcohol;

   // initialize accumlator variables
   totcal = 0;
   totsatfat = 0.;
   totsugar = 0.;
   totsodium = 0.;
   totalcohol = 0.;

   // print menu
   cout << "-------- List of Possible Ingredients --------" << endl;
   cout << INDENT << "Ingredient #1: "
      << INGREDIENT_1_NAME << endl;
   cout << INDENT << "Ingredient #2: "
      << INGREDIENT_2_NAME << endl;
   cout << INDENT << "Ingredient #3: "
      << INGREDIENT_3_NAME << endl;
   cout << INDENT << "Ingredient #4: "
      << INGREDIENT_4_NAME << endl;
   cout << INDENT << "Ingredient #5: "
      << INGREDIENT_5_NAME << endl;
   cout << INDENT << "Ingredient #6: "
      << INGREDIENT_6_NAME << endl << endl;    

   // name of recipe
   cout << "What are you calling this recipe? ";
   getline(cin, recipeName);

   // Ingredient #1 ---------------------------------------------
   cout << "How many grams of " << INGREDIENT_1_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt; 

   // update accumulators
   totcal += userInputInt * (INGREDIENT_1_CALORIES_P100g/100.);
   totsatfat  += userInputInt * (INGREDIENT_1_SATFAT_P100g/100.);
   totsugar  += userInputInt * (INGREDIENT_1_SUGAR_P100g/100.);
   totsodium  += userInputInt * (INGREDIENT_1_SODIUM_P100g/100.);
   totalcohol  += userInputInt * (INGREDIENT_1_ALCOHOL_P100g/100.);

   // Ingredient #2 ---------------------------------------------
   cout << "How many grams of " << INGREDIENT_2_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt; 

   // update accumulators
   totcal += userInputInt * (INGREDIENT_2_CALORIES_P100g/100.);
   totsatfat  += userInputInt * (INGREDIENT_2_SATFAT_P100g/100.);
   totsugar  += userInputInt * (INGREDIENT_2_SUGAR_P100g/100.);
   totsodium  += userInputInt * (INGREDIENT_2_SODIUM_P100g/100.);
   totalcohol  += userInputInt * (INGREDIENT_2_ALCOHOL_P100g/100.);

      // Ingredient #3 ---------------------------------------------
   cout << "How many grams of " << INGREDIENT_3_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt; 

   // update accumulators
   totcal += userInputInt * (INGREDIENT_3_CALORIES_P100g/100.);
   totsatfat  += userInputInt * (INGREDIENT_3_SATFAT_P100g/100.);
   totsugar  += userInputInt * (INGREDIENT_3_SUGAR_P100g/100.);
   totsodium  += userInputInt * (INGREDIENT_3_SODIUM_P100g/100.);
   totalcohol  += userInputInt * (INGREDIENT_3_ALCOHOL_P100g/100.);

      // Ingredient #4 ---------------------------------------------
   cout << "How many grams of " << INGREDIENT_4_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt; 

   // update accumulators
   totcal += userInputInt * (INGREDIENT_4_CALORIES_P100g/100.);
   totsatfat  += userInputInt * (INGREDIENT_4_SATFAT_P100g/100.);
   totsugar  += userInputInt * (INGREDIENT_4_SUGAR_P100g/100.);
   totsodium  += userInputInt * (INGREDIENT_4_SODIUM_P100g/100.);
   totalcohol  += userInputInt * (INGREDIENT_4_ALCOHOL_P100g/100.);

      // Ingredient #5 ---------------------------------------------
   cout << "How many grams of " << INGREDIENT_5_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt; 

   // update accumulators
   totcal += userInputInt * (INGREDIENT_5_CALORIES_P100g/100.);
   totsatfat  += userInputInt * (INGREDIENT_5_SATFAT_P100g/100.);
   totsugar  += userInputInt * (INGREDIENT_5_SUGAR_P100g/100.);
   totsodium  += userInputInt * (INGREDIENT_5_SODIUM_P100g/100.);
   totalcohol  += userInputInt * (INGREDIENT_5_ALCOHOL_P100g/100.);

      // Ingredient #6 ---------------------------------------------
   cout << "How many grams of " << INGREDIENT_6_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt; 

   // update accumulators
   totcal += userInputInt * (INGREDIENT_6_CALORIES_P100g/100.);
   totsatfat  += userInputInt * (INGREDIENT_6_SATFAT_P100g/100.);
   totsugar  += userInputInt * (INGREDIENT_6_SUGAR_P100g/100.);
   totsodium  += userInputInt * (INGREDIENT_6_SODIUM_P100g/100.);
   totalcohol  += userInputInt * (INGREDIENT_6_ALCOHOL_P100g/100.);

   // report results --------------------------------------------------
   cout << "\nNutrition for " << recipeName << "------------" << endl; 
   cout << INDENT << "Calories: " << totcal << endl;
   cout << INDENT << "Total Saturated Fat: " << totsatfat << endl;
   cout << INDENT << "Total Sugar: " << totsugar << endl;
   cout << INDENT << "Total Sodium: " << totsodium << endl;
   cout << INDENT << "Total Alcohol: " << totalcohol << endl;

   return 0;
}
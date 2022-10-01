// MidPointAssigment.cpp : This file contains a code that show the value of each plan knowing what plan the user choose and how many minutes were used

#include <iostream>
// use include <iomanip> to include setprecision to set the number of digits of the result
#include <iomanip>
// using this parameter to avoid using std in the console out
using namespace std;

// declaring function
double totalCost(int Packages, double Minutes);

int main()
{
    //declaring the variables that we are going to ask to the user
    int Package;
    double Minutes;

   


    // Using cout to show the user the different offers that he or she can choose
    cout << "Verizon is offering these three package for you : " << endl;
    cout << "Package 1: For $10.99 per month, 300 minutes are provided \n if you used more than those ones $0.45 cents per minute will be charged " << endl;
    cout << "Package 2: For $20.99 per month, 400 minutes are provided \n if you used more than those ones $0.35 cents per minute will be charged " << endl;
    cout << "Package 3: For $40.99 per month , unlimited minutes are provided." << endl;
    // Asking the user what plan number he or she want to choose 
    cout << "What Plan number are you going to choose? ";
    // Storing the number that he or she put in the variable Package
    cin >> Package;
    // Asking the user how many minutes were used
    cout << "How many minutes were used last month ";
    // Storing the number of minutes used in the variable minutes
    cin >> Minutes;

  // calling the function totalCost to show the total amount that the user has to pay with the conditional of the package and the minutes. 
    cout << setprecision(4) << " Your total amount is $ " << totalCost(Package, Minutes) << endl;


    
}
// initializing the function with the variables that it recieves to work on it
double totalCost(int Package, double Minutes){

    // Declaring the variables that we are going to use in the function 
    double Result;
    double extraPackage1, extraPackage2, package3;
    double package1, package2;

    // Assigning the values of each variables as the cost of the packages and their extra cost per minute
    package1 = 10.99;
    package2 = 20.99;
    extraPackage1 = 0.45 * (Minutes - 300);
    extraPackage2 = 0.45 * (Minutes - 400);
    package3 = 40.99;

    // Using the conditional If to find how much money do the have to pay for each package and the chosen minutes
    if ((Package == 1) && (Minutes <= 300)) {
        Result = package1;
    }
    else {
        if ((Package == 1) && (Minutes > 300)) {
            Result = package1 + extraPackage1;
        }
        else {
            if ((Package == 2) && (Minutes <= 400)) {
                Result = package2;
            }
            else {
                if ((Package == 2) && (Minutes > 400)) {
                    Result = package2 + extraPackage2;
                }
                else {
                    Result = package3;

                }





            }
        }
    }
    // returning Result as the total cost that he or she has to pay
    return Result;
}
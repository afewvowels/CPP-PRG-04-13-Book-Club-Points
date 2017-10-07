//
//  main.cpp
//  PRG-4-13-Book-Club-Points
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Serendipity Booksellers has a book club that awards points to its customers based on
//  the number of books purchased each month. The points are awarded as follows:
//
//  * If a customer purchases 0 books, he or she earns 0 points.
//  * If a customer purchases 1 books, he or she earns 5 points.
//  * If a customer purchases 2 books, he or she earns 15 points.
//  * If a customer purchases 3 books, he or she earns 30 points.
//  * If a customer purchases 4 books or more, he or she earns 60 points.
//
//  Write a program that asks the user to enter the number of books he or she has purchesed
//  this month then displays the number of points awarded.


#include <iostream>

using namespace std;

int main()
{
    int intBooksPurchased,
        intPointsEarned;
    
    cout << "Please enter the number of books\n"
         << "that you purchased this month:\n";
    cin >> intBooksPurchased;
    while(!cin || intBooksPurchased < 0 || intBooksPurchased > 10)
    {
        cout << "Please enter a number of books purchase between 0 and 10:\n";
        cin.clear();
        cin.ignore();
        cin >> intBooksPurchased;
    }
    
    if(intBooksPurchased >= 0 && intBooksPurchased <= 3)
    {
        switch(intBooksPurchased)
        {
            case 0: intPointsEarned = 0;
                cout << "You earned "
                << intPointsEarned
                << " points this month.";
                break;
            case 1: intPointsEarned = 5;
                cout << "You earned "
                << intPointsEarned
                << " points this month.";
                break;
            case 2: intPointsEarned = 15;
                cout << "You earned "
                << intPointsEarned
                << " points this month.";
                break;
            case 3: intPointsEarned = 30;
                cout << "You earned "
                << intPointsEarned
                << " points this month.";
                break;
        }
    }
    else if(intBooksPurchased >= 4)
    {
        intPointsEarned = 60;
        cout << "You earned "
             << intPointsEarned
             << " points this month.";
    }
    else
    {
        cout << "Please enter a valid number of books\n"
             << "purchased this month.";
    }
    
    return 0;
}





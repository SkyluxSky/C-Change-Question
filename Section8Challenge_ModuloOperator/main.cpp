//Section 8 Challenge

/*
 For this program I will be using US dollars and cents.
 Write a program that asks the user to enter the following:
  An interger representing the number of cents
  You may assume the number of cents is greater than or equal to zero
  The program should then display how to provide that change to the user.
  
   In the US:
    * 1 dollar is 100 cents
    * 1 quarter is 25 cents
    * 1 dim is 10 cents
    * 1 nickel is 5 cents
    * 1 penny is 1 cent
 */
 
#include <iostream>

using namespace std;

int main() {
    
    //define conversion values in cents
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    
    int change_amount {}; //asking the user to enter
    
    //Solution 1 - Not using modulo operators:
    
    cout << "Enter and amount in cents: ";
    cin >> change_amount;
    
    //Create a running balance until it becomes zero.
    int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};
    
    balance = dollars = quarters = dimes = nickels = pennies = 0; // resets everything to zero
    
    dollars = change_amount / dollar_value;
    balance = change_amount % dollar_value;
    
    quarters = balance / quarter_value;
    balance %= quarter_value;
    
    dimes = balance / dime_value;
    balance %= dime_value;
    
    nickels = balance / nickel_value;
    balance %= nickel_value;
    
    pennies = balance;
    
    cout << "\nYou can provide  this change as follows: " << endl;
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;
     
    cout << endl;     
    return 0;
}
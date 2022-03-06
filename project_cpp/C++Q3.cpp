/******************************************************************
Suppose you have a Piggie Bank with an initial amount of Rs.50 and you have to add some more amount to it. Create a class 'AddAmount' with a data member named 'amount' with an initial value of Rs. 50. Now make two constructors of this class as follows:
1 - without any parameter - no amount will be added to the Piggie Bank
2 - having a parameter which is the amount that will be added to the Piggie Bank
Create an object of the 'AddAmount' class and display the final amount in the Piggie Bank.
Date : 02-Mar-2022
Abhishek sahu
*******************************************************************/
#include <iostream>
using namespace std;


class AddAmount
{
    private : 
    int amount = 50;

    public :
    AddAmount()
    {

    }

   AddAmount(int a)
    {
        amount = a+amount;
    }

    void displayAmount()
    {
        cout<<amount<<endl;
    }
};

    int main()
    {
        AddAmount a; 
        AddAmount b(10);
        a.displayAmount();
        b.displayAmount();
    return 0;
    }
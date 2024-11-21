/* # include <iostream> //  includes the input and output library    



using namespace std; // Includes the standard library 

 

int f (int *, int *, int *); // Prototype function for int f with 3 non-const int pointers as arguements

 

double f ( double * p1, double * p2, double * p3); // Prototype function declared for double f, with 3 double pointer values as arguments 

 

int main ( )   //Main function 

 

{ 

 

      int a1 = 3, a2 = 10, a3 = -1, a; // Int a1,a2,a3 and a defined

 

     double b1 = 0.3, b2 = -0.7, b3 = 2.1, b; // Double b1, b2, b3, and b defined 

 

     a = f ( & a2, & a3, & a1); // int a value is defined with referencing variables a1, a2, and a3 in the arguemnts of int f

 

     b = f ( & b1, & b3, & b2); // double b is defined wth double f function while referencing b1, b3, b2 in the arguements

 

     cout << "a=" << a << endl; // Prints the string "a=" and value of a

 

     cout << "b=" << b << endl; // Prints the string "b=" and the value of b

 

  }

int f ( int * p1, int * p2, int * p3 ) // arguments of p1, p2, p3, used as pointer variables in function 

 

{ 

 

      if ( *p2 > *p1 )     *p1 = *p2; // pointer p1 is defined upon a conditional statement 

 

      if ( *p3 >  *p1)     *p1 = *p3; // pointer p1 is defined upon another conditional statement 

 

      return *p1; // returns the value of pointer p1

 

} 

 

double f ( double * p1, double * p2, double * p3 ) // double f function is defined 

 

{ 

 

      if ( *p2 < *p1 )     *p1 = *p2; // Pointer p1 is defined upon an conditional statement 

 

      if ( *p3  < *p1)     *p1 = *p3; // Pointre p1 is defined upon another conditional statement 

 

      return *p1; // Return the value of p1 pointer 

 

} 

// output ::
// a=10
// b=-0.7   */


/*
#include <iostream>
using namespace std;


void rotate1(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

void rotate2(int &a, int &b, int &c) {
    int temp = a;
    a = b;
    b = c;
    c = temp;
}

int main() {
    int a = 1, b = 2, c = 3;
    
    cout << "Before rotation:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    rotate1(&a, &b, &c);
    cout << "After rotate1 (using pointers):" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    rotate2(a, b, c);
    cout << "After rotate2 (using references):" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}



// 10/1/2024
#include <iostream>


// Define the structure Date
struct Date {
    int day;
    int month;
    int year;
};

int main() {
    using namespace std;
    Date date1, date2;

    // Takes the first date from the user
    cout << "Enter first date (day month year): ";
    cin >> date1.day >> date1.month >> date1.year;

    // This will take the second date from the user
    cout << "Enter second date (day month year): ";
    cin >> date2.day >> date2.month >> date2.year;

    // Compare the two dates inside the main function
    if (date1.day == date2.day && 
        date1.month == date2.month && 
        date1.year == date2.year) {
        cout << "Dates are equal" << endl;
    } else {
        cout << "Dates are not equal" << endl;
    }

    return 0;
}

*/

#include <iostream>
using namespace std;

class Account {
    private: 
        double balance; 

    public: 
        Account(double initial_balance = 0.0):
        balance (initial_balance) {}

    void deposit(const double &amount); 
    void withdraw(const double &amount);
    double getBalance() const; 

}; 


void Account::deposit(const double &amount){
    if (amount > 0 && amount <= balance) {
        balance -=amount; 
        cout << "Withdrew: $" << amount << endl;
    } else {
        cout << "Invalid or Insufficient funds for withdrawal."<< std::endl;
    }
}

void Account::withdraw(const double &amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount <<endl;
        } else {
            cout << "Invalid or insufficient funds for withdrawal." << endl;
        }
    }

double Account::getBalance() const {
    return balance;
}



int main() {
    Account myAccount(100.0); // Initial balance of $100

    myAccount.deposit(50.0);       // Deposit $50
    myAccount.withdraw(30.0);      // Withdraw $30
    cout << "Balance: $" << myAccount.getBalance() << endl; // Check balance

    return 0;
}
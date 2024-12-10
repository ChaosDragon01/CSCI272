
#include <iostream>
#include <numeric> // For std::gcd  
using namespace std;


class RationalNumber {
private:
    int numerator;
    int denominator;

    void simplify() {
        int gcd = std::gcd(numerator, denominator); // gcd is supposed to be working with standard namespace library
                                                    // How ever it's not working. But using std:: on it makes it work somehow
                                                    // Also std::gcd will not work if you use earlier version instead of c++17 
                                                    // try using std::__gcd
        numerator /= gcd;
        denominator /= gcd;
        // this will help me keep sure the denominator is above 0; 
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

public:
    // this is the construction
    RationalNumber(int num = 0, int den = 1) {
        if (den == 0) {
            throw invalid_argument("Denominator cannot be zero.");
            // Setting is so that denominator is not 0 
            // just here in case of an exception. Since the function in private will correct it in case denominator is 0; 
        }
        numerator = num;
        denominator = den;
        simplify();
    }

    // Overload for addition operator
    RationalNumber operator+(const RationalNumber& rhs) const {
        int num = numerator * rhs.denominator + rhs.numerator * denominator;
        int den = denominator * rhs.denominator;
        return RationalNumber(num, den);
    }

    // Overload for subtraction operator
    RationalNumber operator-(const RationalNumber& rhs) const {
        int num = numerator * rhs.denominator - rhs.numerator * denominator;
        int den = denominator * rhs.denominator;
        return RationalNumber(num, den);
    }

    // Overload multiplication operation 
    RationalNumber operator*(const RationalNumber& rhs) const {
        int num = numerator * rhs.numerator;
        int den = denominator * rhs.denominator;
        return RationalNumber(num, den);
    }

    // Overload division operation
    RationalNumber operator/(const RationalNumber& rhs) const {
        if (rhs.numerator == 0) {
            throw invalid_argument("Division by zero.");
        }
        int num = numerator * rhs.denominator;
        int den = denominator * rhs.numerator;
        return RationalNumber(num, den);
    }

    // Overload operator for equality 
    bool operator==(const RationalNumber& rhs) const {
        return numerator == rhs.numerator && denominator == rhs.denominator;
    }

    // Overload overload operator for inequality 
    bool operator!=(const RationalNumber& rhs) const {
        return !(*this == rhs);
    }

    // Overload less-than operator
    bool operator<(const RationalNumber& rhs) const {
        return numerator * rhs.denominator < rhs.numerator * denominator;
    }

    // Overload less-than-or-equal operator
    bool operator<=(const RationalNumber& rhs) const {
        return *this < rhs || *this == rhs;
    }

    // Overload greater-than operator
    bool operator>(const RationalNumber& rhs) const {
        return !(*this <= rhs);
    }

    // Overload greater-than-or-equal operator
    bool operator>=(const RationalNumber& rhs) const {
        return !(*this < rhs);
    }

    // Overload output operator
    friend ostream& operator<<(ostream& os, const RationalNumber& rn) {
        if (rn.denominator == 1) {
            os << rn.numerator;
        } else {
            os << rn.numerator << '/' << rn.denominator;
        }
        return os;
    }

    // Overload input operator
    friend istream& operator>>(istream& is, RationalNumber& rn) {
        char slash;
        is >> rn.numerator >> slash >> rn.denominator;
        if (rn.denominator == 0) {
            throw invalid_argument("Denominator cannot be zero.");
        }
        rn.simplify();
        return is;
    }
};




int main() {

    int n1, n2, d1, d2; 

    cout << "Input the numerator for the first fraction: "; cin >> n1; 
    cout << "Input the Denominator for the first fraction: "; cin >> d1; 
    cout << "Input the Numerator for the second fraction: "; cin >> n2;
    cout << "Input the Denominator for the first fraction: "; cin >> d2; 

    



    RationalNumber r1(n1, d1);
    RationalNumber r2(n2, d2);


    cout << "R1: " << r1 << "\n";
    cout << "R2: " << r2 << "\n";

    RationalNumber sum = r1 + r2;
    RationalNumber diff = r1 - r2;
    RationalNumber prod = r1 * r2;
    RationalNumber quot = r1 / r2;

    cout << "Sum: " << sum << "\n";
    cout << "Difference: " << diff << "\n";
    cout << "Product: " << prod << "\n";
    cout << "Quotient: " << quot << "\n";

    cout << "R1 == R2: " << (r1 == r2) << "\n";
    cout << "R1 != R2: " << (r1 != r2) << "\n";
    cout << "R1 < R2: " << (r1 < r2) << "\n";
    cout << "R1 <= R2: " << (r1 <= r2) << "\n";
    cout << "R1 > R2: " << (r1 > r2) << "\n";
    cout << "R1 >= R2: " << (r1 >= r2) << "\n";

    return 0;
    exit(0); // this is redundant, I just wanted to try this function I learned
}

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Counter {

    public:
        Counter();
        Counter(int Initialvalue);
        ~Counter(){}

        int getValue() const{return ItsValue;};
        void setValue(int value){ItsValue = value;};
        Counter Add(const Counter&);
        
        
        private:
        int ItsValue;
        };   

        Counter::Counter(int Initialvalue):
            ItsValue(Initialvalue) {}

        Counter::Counter(): ItsValue(0) {}

        Counter Counter::Add(const Counter &rhs){
            return  Counter(ItsValue + rhs.getValue());
        }

        int main(){
            Counter c1(10);
            Counter c2(20);
            Counter c3 = c1.Add(c2);
            cout << c3.getValue();
            return 0;
        }

#include <iostream>
using std::cout, std::endl;
void half(int); // Prototype for the function; 
int main(){
    
    half(100);
    return 0;};
void half(int numbertoHalf){
    do  { 
    cout << numbertoHalf << endl;
    if (numbertoHalf>0){
        numbertoHalf = numbertoHalf/2;
    }
    } while (numbertoHalf>0);
}
/* #include <iostream>
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


*/

#include <iostream> 
using namespace std; 

class Volume{

    private: 
        int length; 
        int bread;
        int height;

    public: 
        Volume(int x, int y, int z): length(x), height(y), bread(z) {
            cout << x*y*z; 
        }


};
    int main(){
        Volume box1(12, 12, 12); 
        return 0;
    }

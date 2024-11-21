#include <iostream> 
#include <string.h>
using namespace std;

    int test(int, int, int); void value(); //prototypes for classwork 9/3/2024  
    void cubebyValue(int); void cubebyValueexecution(); //prototypes for classwork 9/5/2024
    void cubebyReference(int *); void cubebyReferenceExecution(); // prototypes for classwork 9/5/2024 
    void squareReference(int &); void squarePointer(int *); // prototypes for classwork 9/5/2024
    void squareReferenceExe(); void squarePointerExe(); // prototypes for classwork 9/5/2024
    void size_of(); // Classwork 9/12/2024
    void SelectionSort(int*const, const int); // Classwork 9/17/2024 
    void Swap(int* const, int * const); // Classwork 9/17/2024
    void SelectionSortExe();// Classwork 9/17/2024
    void threeInputIntegersSSort(); // Quiz 9/17/2024
    void PointerArray();  // Classwork 9/19/2024
    void FindSumofPrime(); // Quiz for 9/19/2024
    unsigned int sumofprime(int,int); // Quiz for 9/19/2024
    void chararray(); void chararraytwo(); void chararraythree();// Classwork 9/19/2024
    void stringarray(); void print(char * name [], int n); 
    void candidaTe(); // classwork 10/1/2024 
    unsigned long factorial(unsigned int n); 
    unsigned long fibinacci(unsigned int n);     





    struct Candidate {
        char name[20];
        int count; 
    }; // return classwork 10/1/2024




   
    int main(){

     // test case for factorial 
    //  cout << "5!=" << factorial(5) << endl; 
    // works 



    return 0;}


    // After a lot of days now, 10/17/2024

    // fibonacci 

    unsigned long fibonacci (unsigned int n){
        if (n==0||n==1) {
            return n;
        }
        else {
            return fibonacci(n-1) + fibonacci(n-2); 
        }
    }


    // recursion 
    unsigned long factorial (unsigned int n) {
        if (n == 0 || n == 1) 
            {return 1;}
        else {return n * factorial (n-1);} 
    }







    // Happy October, 10/1/2024 Classwork 







    void candidaTe(){
        Candidate leader[3] = {{"John,0"}, {"Mike", 0}, {"Thomas",0}}; 
        char candidate_name[20];
        for (int i = 0; i<10; i++){
            cin >> candidate_name; 
            for (int j = 0; j < 3; j++)
                {
                    if ( strcmp (candidate_name, leader[j].name) == 0)
                    {leader[i].count++;}
                }
        }
        cout << endl; 
//   It's running into an big error
        for (int i=0; i<3; i++)
            cout << leader[i].name <<":"<< leader[i].count <<endl; 
    }




// Classwork 9/24/2024

    void stringarray(){
        char * name []= {"BASIC", "FORTRAN", "C++", "Pascal", "COBOL"};
        int n = 5; 
        print (name, n);
    }

    void print(char * name[],int n)
    {
        for (int i = 0; i < n; i++) 
            cout << name[i]+2 << endl; /// Gottta study this later.!!!!!!
    }




    void chararraythree(){
        char nameOfCourse[35];
    
        // Title MAT272 Object Oriented Programming 
        cout << "Please  enter the course name: "; 
        cin.getline (nameOfCourse, 35, '\n');

        cout << endl; 

        cout << "Course name: " << nameOfCourse;
        cout << endl;     

    }
    void chararraytwo(){
        char nameOfCourse[35];
    
        // Title MAT272 Object Oriented Programming 
        cout << "Please  enter the course name: "; 
        cin >> nameOfCourse;

        cout << endl; 

        cout << "Course name: " << nameOfCourse;
        cout << endl;     

        // This method does not work, See method three for solution 
    }

    void chararray(){
         
        char nameOfCourse[] = "MAT272 Object Oriented Programming";
        // const char * nameOfCourse = "MAT272 Objext Oriented Programming";
        
        // Printing the string  
        for (unsigned int i=0; nameOfCourse[i]!='\0';i++){
            cout << nameOfCourse[i];
           // cout << '\t'; 
        }

        cout << endl;

        // printing the string 
        cout << nameOfCourse;
        cout << endl;
    }


// Classwork 9/19/2024

    // Quiz 

    unsigned int sumofprime(int pinitialization, int psum){
    return psum; // I don't wanna see error messages which is why I put this line
    }

    bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
    }






    void PointerArray(){
        using namespace std;
        int b[]={10, 20, 30, 40};
        int *bPtr =b;

        for (int i=0; i<4; i++){
            cout << "b[" << i << "]:"<< b[i]<< endl;
        }
        for (int i=0;i<4;i++){
            cout << "b[" << i << "]" << bPtr[i] <<endl; 
        } 
        for (int i=0; i<4;i++){
            cout << "(b" << i << ")" << *(b+i) << endl; 
        }


    }
    







// Classwork for 9/17/2024

    void threeInputIntegersSSort(){
        using namespace std; 
        int ax, bx, cx; 
        cout << "Input three integers: ";
        cin >> ax, bx, cx; 
        const int arraySize = 3; 
        int a[arraySize] = {ax, bx, cx}; 
        SelectionSort(a, arraySize); 
        cout << "Data Items in ascending order:\n"; 
        for (int i=0;i<arraySize; i++){
            cout << "\t" << a[i]; 
        }
    } // this does not work 



    void SelectionSortExe(){
        using namespace std; 
        const int arraySize = 5; 
        int a[arraySize] = {24,12,36,5,10}; 
        SelectionSort(a, arraySize); 
        cout << "Data Items in ascending order:\n"; 
        for (int i=0;i<arraySize; i++){
            cout << "\t" << a[i]; 
        }
    }   

    void SelectionSort(int *const array , const int size){

        int smallest;
        for (int i=0;i<size; i++) {
            smallest = i; 

            for (int j=i;j<size;j++){
                if (array[j]<array[smallest]){
                    smallest = j; 
                }
            }
        Swap(&array[i],& array[smallest]);
        }
    }

    void Swap(int * const p1, int * const p2) {
        int temp = * p1;
        *p1 =  *p2; 
        *p2 = temp;  
    }

// Classwork for 9/12/2024

        void size_of(){
            using namespace std; 
            double y = 5.0; 
            int x = 1, size1, size2; 

            size1 = sizeof(y);
            size2 = sizeof(x); 

            cout << "Size of Variable x is : " << size1 << endl;
            cout << "Size of Variable y is : " << size2 << endl; 
            /*
            Size of Variable x is : 8
            Size of Variable y is : 4
            */
    }



// ClassWork for 9/5/2024

        //Quiz
        void prtsdts(){
        // Declare floating-point variables. 
        double number1 = 7.3, number2; // I had to switch them to double since float doesn't work with double
        
        // a) Declare the variable fPtr to be a pointer to an object of type double
        double *fPtr;
        
        // b) Assign the address of variable number1 to pointer variable fPtr
        fPtr = &number1;
        
        // c) Print the value of the object pointed to by fPtr
        std::cout << "Value pointed to by fPtr: " << *fPtr << std::endl;
        
        // d) Assign the value of the object pointed to by fPtr to variable number2
        number2 = *fPtr;
        
        // e) Print the value of number2
        std::cout << "Value of number2: " << number2 << std::endl;
        
        // f) Print the address of number1
        std::cout << "Address of number1: " << &number1 << std::endl;
        
        // g) Print the address stored in fPtr and check if it's the same as number2's address
        std::cout << "Address stored in fPtr: " << fPtr << std::endl;
        }

    void classwork_sep_five(){
        cubebyValueexecution();

        std::cout << std::endl;

        cubebyReferenceExecution();

        std::cout << std::endl; 

        squareReferenceExe();

        std::cout << std::endl; 

        squarePointerExe();
    }
    void squarePointerExe(){
        using namespace std; 
        int a = 2; 
        squarePointer(&a);
        cout << "a: " << a << endl;
    }
    void squarePointer(int * aPtr){
        *aPtr = *aPtr**aPtr; 
    }




    void squareReferenceExe(){
        using namespace std; 
        int a = 2; 
        squareReference(a); 

        cout << "a: "<< a << endl; 
    }
    void squareReference(int & aRef){
        aRef = aRef * aRef; 
    }

    void cubebyReferenceExecution(){
         using namespace std;
        int number = 5; 
        cout << "number: " << number << endl; 
        cubebyReference(& number); 

        cout << "cube: " << number << endl;
    }
    void cubebyReference(int * nPtr){
        *nPtr = *nPtr ** nPtr ** nPtr; 
    }



    void cubebyValueexecution(){
        using namespace std;
        int number = 5; 
        cout << "number: " << number << endl; 
        cubebyValue(number); 

        cout << "cube: " << number << endl; 
    }


    void cubebyValue(int n){
        n = n*n*n;  
    }





// Classwork for 9/3/2024
    
    //quiz 
     
    void value(){
        using namespace std;
        int a, b, c; 
        cout << "Enter 3 values seperated by space: "; 
        cin >> a >> b >> c; 

        int testcall = test(a,b,c);
        if (testcall==1) 
        {
            cout << "True";
        } else {
            cout << "False";
        } 
    }
    int test(int a, int b, int c) {
        int value;
        int sum = a+b; 

        value = (sum==c)? 1 : 0; 
        return value;
    }
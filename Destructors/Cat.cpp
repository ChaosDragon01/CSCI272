#include <iostream> 
using std::cout; 


class Cat
{
private:
    int itsAge; 
public:
    Cat(int initialAge);
    ~Cat();
    void setAge(int age);
    int getAge();
    void Meow(); 
};

Cat::Cat(int initialAge)
{
    setAge(initialAge);
}

Cat::~Cat()
{

}

void Cat::setAge(int age){
    itsAge = age;
}

int Cat::getAge(){
    return itsAge;
}

void Cat::Meow(){
    cout << "Meow\n";
}


int main(int argc, char const *argv[])
{
    Cat Frisky(5);

    Frisky.Meow();


    cout << "Frisky is a cat who is: " << Frisky.getAge() << " years old.\n"; 
    Frisky.Meow();


    Frisky.setAge(7);
    cout << "Now Frisky is: " <<  Frisky.getAge() << " years old.\n";

    return 0;
}

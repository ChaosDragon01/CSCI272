#include <iostream>
#include <ctime>
#include <cstdlib>
#include <thread> 
#include <chrono> 

void move_tortoise(int &);
void move_hare(int &);
void race(int &, int &);




int main(){
    using namespace std; 
    
    srand(time(0)); 

    int tortoise_pos = 1; 
    int hare_pos = 1; 

    cout << "BANG!!!!!\n";
    cout << "AND THEY'RE OFF!!!!!\n";

    while (tortoise_pos < 70 && hare_pos < 70){

        move_tortoise(tortoise_pos);
        move_hare(hare_pos);
        race(tortoise_pos,hare_pos); 
        
        this_thread::sleep_for(chrono::seconds(1)); 

    }

    if (tortoise_pos >= 70 && hare_pos >= 70) {
        cout << "It's a tie!" << endl;
    } else if (tortoise_pos >= 70) {
        cout << "TORTOISE WINS!!! YAY!!!" << endl;
    } else {
        cout << "Hare wins. Boo." << endl;
    }

    return 0; 
}

void move_tortoise(int &position){
    int move = rand()%10 + 1; 

    if (move <= 5) {
        position +=3; 
    } else if (move <= 7){
        position -= 6; 
    } else {
        position += 1; 
    }
    
    if (position < 1 && position == 0) {
        position =1; 
    }
}

void move_hare(int &position){
    int move = rand()%10 + 1; 

    if (move <= 2)
    {
        // Nothing happens Bro is sleeping 
    }
    else if (move<=4)
    {
        position +=9; 
    }
    else if (move==5)
    {
        position -=12; 
    }  
    else if (move<=8)
    {
        position +=1; 
    } 
    else 
    {
        position -=2;
    }
     
    if (position < 1 && position == 0) {
        position =1; 
    }
}



void race(int &tortoisepos, int &harepos) {
    using namespace std; 
    for (int i = 1; i <= 70; ++i){
        if (tortoisepos == i && harepos == i){
            cout << "OUCH!!!"; 
            i+=6; 
        }  else if (i==tortoisepos){
            cout << "T"; 
        } else if (i==harepos){
            cout << "H";
        } else {
            cout <<"-"; 
        }
    }
    cout << endl; 
}

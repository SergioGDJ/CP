#include<bits/stdc++.h>

typedef struct {
    int number_keywords {0};  //member get 0 by default 
    float keyboard_size {0};  //member get 0 by default 

    //function member to print the data members, struct in c++ allows me to do it
    void print(){
        std::cout << number_keywords << "\n";
        std::cout << keyboard_size << "\n";
    }
}Keyboard;

int main(){
    Keyboard array[3];
    array[0] = {34, 0.67};
    array[1] = {634, 1.67};
    array[2] = {4, 7.67};
    array[0].print();
    array[1].print();
    array[2].print();
}










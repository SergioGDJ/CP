#include <iostream>

int howManyTimes(std::string phrase){
    int count=0;
    for(int i=0; i<phrase.length(); i++){
        if(phrase[i] == 'x'){
            count++;
        }
    }
    return count;
}

int main(){
    int x;
    std::cin >> x;
    std::cin.ignore();
    while(x--){
        std::string phrase;
        getline(std::cin, phrase);
        std::cout << howManyTimes(phrase) << std::endl;
    }
}
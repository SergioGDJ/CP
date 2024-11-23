#include<iostream>

int howManyTimes(std::string phrase, int tam){
    if(tam == 0){
        return 0;
    }
    if(tam > 0){
        if(phrase[tam-1] == 'x')
            return 1 + howManyTimes(phrase, tam-1);
        else
            return howManyTimes(phrase, tam-1);
    }
    else return 0;
}

int main(){
    int t;
    std::cin >> t;
    std::cin.ignore();
    while(t--){
        std::string phrase;
        std::getline(std::cin, phrase);
        std::cout << howManyTimes(phrase, phrase.length()) << std::endl;
    }
}
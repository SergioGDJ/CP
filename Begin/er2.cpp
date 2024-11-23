#include<iostream>

int hiTimes(std::string phrase, int tam){
    if(tam <= 2){
        if(phrase[0] == 'h' && phrase[1] == 'i')
            return 1;
        else
            return 0;
    }
    else{
        if(phrase[tam-2] == 'h' && phrase[tam-1] == 'i')
            return 1 + hiTimes(phrase, tam-1);
        else
            return hiTimes(phrase, tam-1);
    }
}

int main(){
    int t;
    std::cin >> t;
    std::cin.ignore();
    while(t--){
        std::string phrase;
        getline(std::cin, phrase);
        std::cout << hiTimes(phrase, phrase.length()) << std::endl;
        // std::cout << phrase << std::endl;
    }
}
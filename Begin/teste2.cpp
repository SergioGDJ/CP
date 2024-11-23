#include<bits/stdc++.h>
int main(){
    std::string myname {"luis felipe souze"};
    std::stringstream nome;
    nome << myname;
    std::stringstream tokenstring;
    std::string token;

    while(nome >> token){
        tokenstring << token;
    }
    std::cout << tokenstring.str();
}
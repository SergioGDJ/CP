#include<iostream>

int sum(int *vet, int tam){
    if(tam == 0) return 0;
    else{
        return vet[tam-1] + sum(vet, tam-1);
    }
}

int main(){
    int t;
    std::cin >> t;
    std::cin.ignore();
    while(t--){
        int tam, *vet;
        std::cin >> tam;
        vet = new int[tam];
        for(int i =0; i<tam; i++)
            std::cin >> vet[i];
        // for(int i =0; i<tam; i++)
        //     std::cout << vet[i] << " ";
        std::cout << sum(vet, tam) << std::endl;
        delete[] vet;
    }
}
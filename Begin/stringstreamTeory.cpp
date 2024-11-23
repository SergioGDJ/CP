#include<bits/stdc++.h>

/*
O que e uma stringstream:   stringstream e uma classe do STL que permite trabalhar com strings como 
se elas fossem streams, ou fluxos. 

por que usar?   Usar stringstream e bem interessante, pensando no apsceto que ela consegue ler uma 
segunda string como se ela fosse um std::cout, ou escrever em uma string como se fosse o std::cin.
dado isso, eu posso escrever numeros inteiros em uma string, como se fosse o sprinf(), e misturar isso
com outros dados. Alem disso, eu posso ler o conteudo dessa stringstream e armazena-lo em uma string
normal. portanto, e bastante util na formatacao de strings.

Um objeto stringstream:     E definido assim: std::stringstream nome_do_objeto;
obs quando a inicializacao: Para inicializar um objeto stringstream, o unico modo e: \
std::stringstream nome_do_objeto(string); em que string e um objeto da classe string. 
da para fazer atribuicao com o operador "=", mas nao da para inicializar com o operador "="

seus metodos:   seja o objeto da classe stringstream obj.
caso eu tente fazer algo como std::cout << obj; eu vou obter um erro, pois obj e uma stringstream. 
eu posso usar um metodo, para converter o objeto obj em string, o metodo se chama str(). ex.:
std::cout obj.str(); vai funcionar. 

Operadores e stringstream: Os operadores, para stringstream, funcionam como nos objetos padroes de 
saida e de entrada de dados. Bom, para armazenar um conteudo de uma string nome num objeto stringstream
chamado key, basta fazer key << nome. perceba que este operador pega o conteudo do operando a direita 
e o escreve no objeto da esquerda. isso acontece tambem com o std::cout << nome. 

>>) serve para pegar conteudo da stringstream, se fosse o cin, ele pegaria conteudo do teclado e escreveria 
no objeto a direita. std::cin >> nome

e importante lembrar que por default, o operador >> nao le espacos em branco, tabulacoes e quebras
de linhas.

*/

//um exemplo de aplicacao: pegar uma string com espacos, e a converter para uma string sem espacos
int main(){
    std::string myname {"luis felipe souze"};
    std::stringstream nome;
    nome << myname;
    std::stringstream tokenstring;
    std::string token;

    while(nome >> token){
        tokenstring << token; //escrevendo cada token(nao tem espaco), na minha stringstream tokenstring
    }
    std::cout << tokenstring.str() << std::endl;  //obtendo a string armazenada na stringstream 


    //Outro exemplo, mais simples de aplicacao:
    std::stringstream ss;
    
    ss << "Ei moco, quanto custa a blusa? " << "custa " << 15 << " reais";
    std::cout << ss.str();
    //Observe o poder de formatacao que eu obtenho.

    
    //outro exemplo:
    int num {50239};
    std::stringstream number;
    number << num;
    std::cout << number.str()[0]; //Eu acabei de transformar esse numero inteiro em uma string
}


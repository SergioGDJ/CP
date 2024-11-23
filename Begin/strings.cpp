#include<bits/stdc++.h>

// int main(){
//     std::string s {"sergio"};
//     std::cout << s << std::endl;
    
//     //other method:
//     std::string alice("aaaaaa");
//     std::cout << alice << std::endl;
    
//     //other method:
//     std::string paisano = "ALOOOOOO";
//     std::cout << paisano << std::endl;
// }




    // C++ Program to demonstrate use of stringstream object

using namespace std;

int main()
{

	string s = " GeeksforGeeks to the Moon ";
	stringstream obj(s);
	// string to store words individually
	string temp;
	// >> operator will read from the stringstream object
	while (obj >> temp) {
		cout << temp ;
	}
	return 0;
}





#include <iostream>
#include <locale>
#include <string>
using std::cout;
using std::string;
int main()
{
    setlocale(LC_ALL, "pt-BR.UTF-8");
    string nome = "mari \n";
    cout << nome;
   nome = " mary ";
   cout << "oir"<<nome<<"linda";
    return 0;
}


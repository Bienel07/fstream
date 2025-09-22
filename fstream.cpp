#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
    fstream arquivo;
    arquivo.open("manus.txt", ios::out| ios::app);
    char opc='s';
    string nome, linha;
    while((opc=='s') or (opc=='S')){
        cout<<"Digite um nome: ";
        cin>>nome;
        arquivo<<nome<<endl;
        cout<<"\nDigitar um novo nome?(s/n)";
        cin>>opc;
        system("clear");
    }
    arquivo.close();
    arquivo.open("manus.txt", ios::in);
    cout<<"Nomes digitados:"<<endl;
    if (arquivo.is_open()){
        cout<<"Arquivo aberto"<<endl;
        while(getline(arquivo, linha )){
            cout<<linha<<endl;
        }
        arquivo.close();

    }else{


        cout<<"Não foi possível abrir arquivo!!"<<endl;
    }

    return 0;
}
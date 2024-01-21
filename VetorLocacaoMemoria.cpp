#include<iostream>

using namespace std;
int main(){
    setlocale(LC_ALL,"portuguese");
    int Tam=0;
    cout<<"Entre com o tamanho do Vetor"<<endl;
    cin>>Tam;
    cout<<endl;
    int*Sequencia=new int[Tam];
    for (int I=0; I<Tam; I++)
    {
        cout<<"entre com o elemento"<<(I+1)<<" do vetor ";
        cin>>Sequencia[I];
        cout<<endl;

    }
cout<<" O vetor entrada é ";
for (int I=0; i<Tam; I++)
{
    cout<<Sequencia[I];
}
    cou<<endl;
    cout<<" Programa será encerrado, o vetor será deletado, e a memória devolvida para a CPU.\n";
    delete Sequencia;

    system("PAUSE");
    return(0);
}
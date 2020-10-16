#include <iostream>

using namespace std;

int main()
{
    char letra;
    int i,j,k,x,N;
    cout<<" ingrese un numero: ";
    cin>>N;
    for( j=1;j<=N;j++)//Numero de veces que se repiten las filas
    {
       letra= 'A';
        for( i=1;i<=j;i++)//Genera las letras
            {
             cout <<letra;
             letra++;
            }
        for( k=N*2;k>=j+1;k--)// Genera los espacios
           {
             cout <<"*";
           }
        for( x=1;x<=j;x++)//Disminuye las letras
            {
               letra--;
               cout <<letra;
            }

      cout<<endl;
     }
    return 0;
}

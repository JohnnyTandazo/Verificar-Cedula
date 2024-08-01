/*
Autor: Tandazo Rojas Johnny
Fecha: 29/07/2024
Algoritmo que verifica el ultimo digito de una cedula
*/
#include<iostream>
using namespace std;
bool VerificarCedula(int x[],int total)
{
    int sumapar=0;
    int sumaimpar=0;
    
  for (int i = 0; i < total-1; i++)
  {
    int num=0;
    //Multiplicacion de posiciones pares por 2
    if (i % 2 == 0)     
    {
     num=x[i]*2;
    
     if (x[i]>=9)    
        num=num-9;
        sumapar+=num;
    }     
    else
    {
        sumaimpar+=x[i];//Se suma las posiciones impares
    }
  }
  int sumt=sumapar+sumaimpar;
  //Aplicamos modulo 10
  int res=sumt%10;
  int Digito_Verificador=10-res;
  //Validamos si el digito coincide con el ultimo numero de la cedula
  if (Digito_Verificador==10)
  {
    Digito_Verificador=0;
    
  }
   if (Digito_Verificador=x[total-1])   
    return true;
    else
    return false;
   
    
  

}
int main()
{
    int ce[]={0,8,5,0,1,4,9,4,2,8};
    int total=sizeof(ce)/sizeof(ce[0]);
    //cout<<endl<<"El tamaño del vector es :"<<total;
    if (VerificarCedula(ce,total))    
        cout<<endl<<"La cedula es correcta ";
        else
        cout<<endl<<"La cedula a no es correcta";
    
    return 0;
}
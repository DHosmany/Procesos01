#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <stdio.h>
#define cel 30
using namespace std;

typedef struct TCliente{
string Nombre;
string telefono;
float saldo;
bool moroso;
}cliente;



cliente Alta(cliente x);
cliente Baja(cliente w, cliente z);
void Impresion(cliente x);
cliente Modificar(cliente x);

int main(int argc, char** argv) {
cliente a[10];
int op, b=0, n=0;
while(true){
system("cls");
cout << "\t\tRegistro Cliente\t\n" << "1.Alta\n2.Baja\n3.Imprimir\n4.Actualizar\n5.Salir\nOpci?: ";
cin >> op;
switch(op){
case 1:
system("cls");
a[n] = Alta(a[n]);
n++;
break;
case 2:
system("cls");
cout << "?ue cliente desea borrar?\n";
for(int j=0;j<n;j++){
cout << "\nNo.Cliente: " << j+1;
Impresion(a[j]);
}
cout << "No. Cliente a borrar:";
cin >> b;
for(int o=b;o<n;o++){
a[b-1]=Baja(a[b],a[b-1]);
}
n--;
break;
case 3:
system("cls");
for(int j=0;j<n;j++){
Impresion(a[j]);
}
system("pause");
break;
case 4:
system("cls");
cout << "Que registro desea modificar?";
for(int j=0;j<n;j++){
cout << "\nNo.Cliente: " << j+1;
Impresion(a[j]);
}
cout << "No. de cliente: ";
cin >> b;
a[b-1]=Modificar(a[b-1]);
break;
case 5:
exit(EXIT_FAILURE);
default:
exit(0);
}
}
}
////////////////////////////////////////////////////////Dar de Alta un Registro//////////////////////////////////////////////////////////////////////////////////
cliente Alta(cliente x){
char resp;
cout << "Ingrese Nombre:\n";
cin >> x.Nombre;
cout << "Ingrese Telefono:\n";
cin >> x.telefono;
cout << "Ingrese Saldo:\n";
cin >> x.saldo;
cout << "?s moroso? Y/N";
cin >> resp; 
if((resp == 'y') || (resp == 'Y')){
x.moroso=true;
}else{
x.moroso=false;
}
return x;
}
///////////////////////////////////////////////////////////////Imprimir Lista//////////////////////////////////////////////////////////////////////////////////
void Impresion(cliente x){
cout << "\nNombre: " << x.Nombre;
cout << "\nSaldo: " << x.saldo;
cout << "\nTelefono: " << x.telefono;
cout << "\nMoroso: ";
if(x.moroso == true){
cout << "Es moroso\n";
}else{
cout << "No es moroso\n";
}
}
//////////////////////////////////////////////////////////////Dar baja en el registro///////////////////////////////////////////////////////////////////////////
cliente Baja(cliente w, cliente z){
z.Nombre=w.Nombre;
z.telefono=w.telefono;
z.saldo=w.saldo;
z.moroso=w.moroso;
return z;
}
//////////////////////////////////////////////////////////////Modificar un registro////////////////////////////////////////////////////////////////////////////
cliente Modificar(cliente x){
int op;
char m;
system("cls");
cout << "Que campo desea modificar?\n1.Nombre\n2.Saldo\n3.Telefono\n4.Moroso\n";
cin >> op;
switch(op){
case 1:
cout << "\nNombre:";
cin >> x.Nombre;
break;
case 2:
cout << "\nSaldo:";
cin >> x.saldo;
break;
case 3:
cout << "\nTelefono:";
cin >> x.telefono;
break;
case 4:
cout << "\nMoroso y/n:";
cin >> m;
if((m=='Y')||(m=='y')){
x.moroso=true;
}else{
x.moroso=false;
}
break;
}
return x;
}

#include<iostream>
#include<windows.h>
#include<exception>
#include "visualizarJogos.h"

using namespace std;

int optInicial;

void menuPrincipal(){
do{
   cout << "Escolha uma opcao:\n1 - para Visualizar Jogos\n2 - Logar\n3 - Cadastrar\nOpcao: " << endl;
      cin >> optInicial;
   if((optInicial!=1) && (optInicial!=2) && (optInicial!=3)){
      cout << "Opcao invalida, tente novamente:\n";
      Sleep(1000);
      system("cls");
   }

}while((optInicial!=1) && (optInicial!=2) && (optInicial!=3));

//optInicial = 1 - Visualizar Jogos
//optInicial = 2 -  Logar
//optInicial = 3 -  Cadastrar

switch(optInicial){
case 1:
   visualizarJogos();
   break;
case 2:
   //logar();
   break;
case 3:
   //cadastrarUsuario();
   break;
default:
   break;
}
}

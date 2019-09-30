#include<iostream>
#include<windows.h>
#include<exception>
#include "visualizarJogos.h"
#include "logar.h"

using namespace std;

int optInicial;

void menuPrincipal(){
do{
   cout << "Escolha uma opcao:\n1 - Logar\n2 - Cadastrar\n3 - para Visualizar Jogos\nOpcao: " << endl;
      cin >> optInicial;
   if((optInicial!=1) && (optInicial!=2) && (optInicial!=3)){
      cout << "Opcao invalida, tente novamente:\n";
      Sleep(1000);
      system("cls");
   }
}while((optInicial!=1) && (optInicial!=2) && (optInicial!=3));

//optInicial = 1 -  Logar
//optInicial = 2 -  Cadastrar
//optInicial = 3 -  Visualizar Jogos

switch(optInicial){
case 1:
   logar();
   break;
case 2:
   //cadastrarUsuario();
   break;
case 3:
   //Visualizar Jogos
   visualizarJogos();
   break;
default:
   break;
}
}

//============================================================================
// Nome       : Trabalho Tecnicas de Programacao 1 - 2/2019
// Autores    : Alexandre Goncalves e Geraldino Antonio da Silva
// Matricula  : 15/0115571 e 13/0112267
// Versao     : V0.1
// Descricao  : Sistema de Jogos
//============================================================================

#include <iostream>
#include "menus.h"
#include <windows.h>
#include <mysql.h>
#include "querySQL.h"
#include "visualizarJogos.h"

using namespace std;

int main(){

//testeCon(); //Função que testa a conexao com o Banco de Dados;

menuPrincipal();

cout << endl;
//


//menuPrincipal();

return 0;
}
















//optInicial = 1 - Visualizar Jogos
//optInicial = 2 -  Logar
//optInicial = 3 -  Cadastrar
/*
switch(optInicial){
   case 1:
      cout << "Jogos Disponiveis:\n";
      cout << "*********************************************************************" << endl;
      cout << "Implementar Funcao para retornar jogos cadastrados no Banco de Dados" << endl;
      cout << "*********************************************************************" << endl;
      break;

   case 2:
      cout << "\nLogar Selecionado\n" << endl;
      cout << "Digite seu Email ou CPF:" << endl;
      cin >> login;
      cout << "\nSenha: \n";
      cin >> senha;
      //Funcaoo que verifica usuario
      //Verificar se email existe e se existir verificar senha se o do usuario
      cout << "*********************************************************************" << endl;
      cout << "Implementar Funcao para verificar se email ou CPF existem e se existir verificar senha se é do usuario" << endl;
      cout << "*********************************************************************" << endl;

      optLogar = 1; /*verificaUsuario();*/
/*
      if(optLogar == 1){
         cout << "Usuario Logado\n";
         UsuarioLogado(login, senha);
      }else{
         cout << "Usuario ou senha Invalidos\n\n";
         //Voltar para menu principal
         //break;
      }


      break;

   case 3:
      cout << "\nCadastro Selecionado\n";
      cout << "Digite seu Email:\n";
      cin >> email;
      cout << endl;
      cout << "Digite seu CPF:\n";
      cin >> cpf;
      cout << endl;
      cout << "Digite uma senha para seu Usuario:\n";
      cin >> senha;
      cout << endl;
   break;

   default:
      break;
}

//     /*



//       break;


//       break;
//     case 3:
//       cout << "Cadastrar Selecionado";


//       break;
//    default:
//       break;
// }

// cout << login << endl;
// cout << senha << endl;


*/



#include<iostream>
#include "querySQL.h"


using namespace std;

int optVisualizarJogo;

//Função que retorna lista de jogos
void visualizarJogos(){
   cout << "Quais tipos de jogos deseja visualizar?\n1 - Local\n2 - Estadual\n3 - Nacional\n4 - Internacional\n5 - Todos\n-> ";
   cin >> optVisualizarJogo;
  switch(optVisualizarJogo){
  case 1:
      makeQuery("SELECT * FROM ESTADIO");
      break;
  case 2:
      makeQuery("SELECT * FROM ESTADIO");
      break;
  case 3:
      makeQuery("SELECT * FROM ESTADIO");
      break;
  case 4:
      makeQuery("SELECT * FROM ESTADIO");
      break;
  case 5:
      makeQuery("SELECT * FROM ESTADIO");
      break;
  default:
   break;

   }
}

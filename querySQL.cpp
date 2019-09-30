#include<iostream>
#include <windows.h>
#include <mysql.h>

using namespace std;

void testeCon(){

   MYSQL *conexao;
   MYSQL_ROW row;
   MYSQL_RES *res;
   conexao = mysql_init(0);
   conexao = mysql_real_connect(conexao, "localhost", "root", "", "bancojogos", 0, NULL, 0);

   cout << conexao << endl;

   if(conexao){
      cout << "Connected" << endl;
      const char *QQQ="SELECT * FROM ESTADIO" ;
      int qstate = mysql_query(conexao, QQQ);
      if(!qstate){
         res = mysql_store_result(conexao);
      }
      while(row=mysql_fetch_row(res)){
         cout << row[0] << "\t";
         cout << row[1] << "\t"<<endl;
      }
   }else{
      cout << "Connect Data Base Failed";
   }
}

void makeQuery(const char *querySQL){
   MYSQL *conexao;
   MYSQL_ROW row;
   MYSQL_RES *res;
   conexao = mysql_init(0);
   conexao = mysql_real_connect(conexao, "localhost", "root", "", "bancojogos", 0, NULL, 0);
   if(conexao){
      int qstate = mysql_query(conexao, querySQL);
      if(!qstate){
         res = mysql_store_result(conexao);
      }
      while(row=mysql_fetch_row(res)){
         cout << row[0] << "\t";
         cout << row[1] << "\t"<<endl;
      }
   }else{
      cout << "Erro ao retornar Query do BD";
   }
}


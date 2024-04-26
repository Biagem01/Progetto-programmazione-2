//
//  main.cpp
//  Progetto
//
//  Created by Biagio Cubisino on 12/07/21.
//

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "Lista.h"
#include "Pila.h"

using namespace std;

void StudentiFile(const string& str, string cont[5])
{
    char delim = ';';
    stringstream ss(str);
    string token;
    int i = 0;
    while (getline(ss, token, delim)) {
        cont[i] = token;
        i++;
        if(i==5) break;
    }
}

 int punto1(const string filename, Lista& ls)
{
    ifstream file;
    string line;
    string buff[5];
Studenti ss;
    file.open(filename);
    int num = 0;
    if(file.is_open())
    {
        while(getline(file, line)){
            StudentiFile(line,buff);
            ss = Studenti(buff[0],buff[1],buff[2],buff[3],stof(buff[4]));
            ls.inserisci(ss);
            num++;
                                }

        file.close();
    }
    else
        cout << "Non posso aprire il file!" << endl;
    return num;
}


void printLista(Lista&ls)
{
Nodo* iter=ls.getTesta();
    
    cout<<"GRUPPO A: "<<endl;
    
     while(iter->valore.getMedia()>=24)
   {
    cout << iter->valore << endl;
    iter = iter->succ;
   }
 
}

int punto2(const string filename, Stack& st)
{
    
   ifstream file;
   string line;
   string buff[5];
Studenti ss;
   file.open(filename);
   int num = 0;
   if(file.is_open())
   {
       while(getline(file, line)){
           StudentiFile(line,buff);
           ss = Studenti(buff[0],buff[1],buff[2],buff[3],stof(buff[4]));
           st.push(ss);
           if(stof(buff[4])<24)
           num++;
           
           
                               }
       

       file.close();
       
   }
   
    else
       cout << "Non posso aprire il file!" << endl;
    return num;
}
void gruppi(Lista& ls,Stack& st,int n){

    Nodo*iter=ls.getTesta();
    int x=1;
    int cont = 2;
    n=punto2("Studenti.txt",st);
    Nodo* a;
    Studenti b1;
    Studenti b2;

  for(int i=0;i<(n/2);i++){
      cont=2;
        b1=st.pop();
        b2=st.pop();

    

        if(b1.getMedia()+b2.getMedia()>=40){

            cout << endl;
            
            cout <<"GRUPPO : " << x <<endl;
            cout << "-->";

            cout<<"("<<b1.getMatricola()<<")\t     "<<b1.getCognome()<<"\t     "<<b1.getNome()<<"     \t Città:  "<<b1.getCitta()<<"     \t Media:  "<<b1.getMedia()<<endl;

            cout<<endl;
            cout<<"-->";

            cout<<"("<<b2.getMatricola()<<")\t     "<<b2.getCognome()<<"\t     "<<b2.getNome()<<"     \t Città:  "<<b2.getCitta()<<"     \t Media:  "<<b2.getMedia()<<endl;

            x++;

            cout<<endl;

            cout<<"La media dei voti totali e' : "<<(b1.getMedia()+b2.getMedia())/2<<endl;
            
            cout<<endl;
            
           cout<<"In questo gruppo fanno parte : 2 Studenti"<<endl;

        }

        else{

            cout << endl;
            
            cout << "GRUPPO : " << x <<endl;
            cout<<"-->";

            cout<<"("<<b1.getMatricola()<<")\t     "<<b1.getCognome()<<"\t     "<<b1.getNome()<<"     \t Città:  "<<b1.getCitta()<<"     \t Media:  "<<b1.getMedia()<<endl;

            cout<<endl;
            
            cout<<"-->";
            
            cout<<"("<<b2.getMatricola()<<")\t     "<<b2.getCognome()<<"\t     "<<b2.getNome()<<"     \t Città:  "<<b2.getCitta()<<"     \t Media:  "<<b2.getMedia()<<endl;

            cout<<endl;
            
            cout<<iter->valore<<endl;

            cout<<"La media dei voti totali e' : "<<(b1.getMedia()+b2.getMedia()+iter->valore.getMedia())/3<<endl;

            x++;
            
            cout<<endl;
            
            cout<<"In questo gruppo fanno parte : 3 Studenti"<<endl;



            a=iter->succ;

            iter=iter->succ;
            
        }

      
      
  }
    
    while(a->succ!=nullptr){

        if(a->succ->succ!=nullptr){

            cout << "GRUPPO : " << x <<endl;

            if(a->valore.getMedia()>=24 && a->succ->valore.getMedia()>=24)
            {
                cout<<a->valore<<endl;
                
                cout<<a->succ->valore<<endl;
                
                cout<<"La media dei voti e' : "<<(a->valore.getMedia()+a->succ->valore.getMedia())/2<<endl;
                
                cout<<endl;
                
                cout<<"In questo gruppo fanno parte : "<<cont<<" Studenti"<<endl;
                
                x++;
                
            }
            else
            {
                cont--;
                b2=st.pop();
                cout<<b2<<endl;
                
                cout<<"La media dei voti e' : "<<b2.getMedia()<<endl;
                
                cout<<endl;
                
                cout<<"In questo gruppo fanno parte : "<<cont<<" Studenti"<<endl;
                return;
            }
            a=a->succ->succ;
            
        }
        
    }
}
int main()
    {
        
    int stampafile;
    Lista listaStudente;
    Stack Pila;
    Studenti ss;
    int stampafile2;
        
        stampafile = punto1("Studenti.txt", listaStudente);
        
        cout<<"---------------CARICO FILE STUDENTI-----------------"<<endl;
        
        cout << endl <<"----------------PRIMO PUNTO--------------------" << endl;
        cout << endl <<"-----------------------------------------------" << endl;
        cout << listaStudente;
        
        
        cout << endl <<"----------------SECONDO PUNTO--------------------" << endl;
        cout << endl <<"-----------------------------------------------" << endl;
    
    printLista(listaStudente);
        
        cout<<endl;
        cout<<"GRUPPO B: "<<endl;
        
    stampafile2=punto2("Studenti.txt", Pila);
        
        cout<<Pila;
        cout<<endl;
        
        cout<<endl<<"----------------STAMPO I GRUPPI CREATI ------------------"<<endl;
        cout << endl <<"--------------------TERZO PUNTO--------------------" << endl;
        cout << endl <<"---------------------------------------------------" << endl;
        cout << endl <<"------------------E QUARTO PUNTO-------------------" << endl;
        cout << endl <<"---------------------------------------------------" << endl;
        
        gruppi(listaStudente,Pila,punto2("Studenti.txt", Pila));
        
        
    }
        
     
       
        

    
        
     
    

   

    


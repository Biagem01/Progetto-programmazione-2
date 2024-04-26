//
//  Studenti.cpp
//  Progetto3
//
//  Created by Biagio Cubisino on 12/07/21.
//

#include "Studenti.h"

#include <iostream>
#include <string>

using namespace std;

ostream& operator<<(ostream& out,const Studenti& ss){
    out << "--> ";
    out<<"("<<ss.matricola<<")\t     "<<ss.cognome<<"\t     "<<ss.nome<<"\t Città:  "<<ss.citta<<"\t media:  "<<ss.media_voti<<endl;
    return out;
}

string Studenti::getCognome()const{return cognome;}
string Studenti::getMatricola()const{return matricola;}
string Studenti::getNome()const{return nome;}
string Studenti::getCitta()const{return citta;}
float Studenti::getMedia()const{return media_voti;}


Studenti::Studenti(){};
Studenti:: Studenti(string _matricola,string _cognome,string _nome, string _citta, float _media_voti):matricola(_matricola),cognome(_cognome),nome(_nome),citta(_citta),media_voti(_media_voti){}

bool Studenti::operator>(const Studenti& ss)const{
    return media_voti>ss.getMedia();
}

bool Studenti::operator==(const Studenti& ss)const{
    return media_voti==ss.getMedia();
}

bool Studenti::operator!=(const Studenti& ss)const{
    return media_voti!=ss.getMedia();
}


bool Studenti::operator<( const Studenti& ss)const{
    return media_voti<ss.getMedia();
}



//
//  Studenti.hpp
//  Progetto3
//
//  Created by Biagio Cubisino on 12/07/21.
//

#ifndef Studenti_h
#define Studenti_h
#include <iostream>
#include <string>

using namespace std;

class Studenti{
private:

  
    string matricola,cognome,nome,citta;
    float media_voti;
    
    
public:
    Studenti();
    Studenti(string _matricola,string _cognome,string _nome, string _citta, float _media_voti);
    
    string getMatricola()const;
    string getCognome()const;
    string getNome()const;
    string getCitta()const;
    float getMedia()const;
    
    bool operator>(const Studenti&)const;
    bool operator==(const Studenti&)const;
    bool operator!=(const Studenti&)const;
    bool operator<(const Studenti&)const;
    
    friend ostream& operator<<(ostream& out, const Studenti& ss);
    
};

#endif /* Studenti_hpp */

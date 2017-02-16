//
// Created by olivier on 17-02-16.
//

#ifndef UNTITLED_ETUDIANT_H
#define UNTITLED_ETUDIANT_H

#include <string>

using namespace std;

class Etudiant {
private:
    string nom;
    int age;
    int no;
    int energie;
    void changerEnergie(int difference);
public:
    Etudiant(string nom, int age, int no); //Constructeur
    void manger();
    void direInformation();
    void courir();
};


#endif //UNTITLED_ETUDIANT_H

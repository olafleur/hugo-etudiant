//
// Created by olivier on 17-02-16.
//

#include <iostream>
#include "Etudiant.h"


void Etudiant::manger() {
    cout << "Je mange" << endl;
    changerEnergie(10);
}

Etudiant::Etudiant(string nom, int age, int no) {
    this->age = age;
    this->nom = nom;
    this->no = no;
    energie = 100;
}

void Etudiant::direInformation() {
    cout << "Bonjour, je m'appelle " + nom + ", j'ai " + to_string(age)
            + " et mon numéro d'étudiant est " + to_string(no) + "\n";
}

void Etudiant::changerEnergie(int difference) {
    energie = energie + difference;
    cout << "Changement d'énergie : " << energie << "\n";
}

void Etudiant::courir() {
    cout << "Je cours" << endl;
    changerEnergie(-10);
}

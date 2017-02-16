#include <iostream>
#include "Etudiant.h"

using namespace std;

int main() {
    Etudiant olivier("Olivier Lafleur", 30, 347817);
    Etudiant hugo("Hugo Lafleur", 28, 123234);

    olivier.manger();
    olivier.direInformation();
    hugo.courir();
    hugo.courir();
    hugo.courir();
    hugo.manger();

    return 0;
}
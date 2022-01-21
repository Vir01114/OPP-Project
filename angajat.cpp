//
// Created by vir on 1/19/2022.
//

#include "angajat.h"
int angajat::count=1;
angajat::angajat(const std::string &numeAngajat, const std::string &functie, int varsta) : numeAngajat(numeAngajat), functie(functie), varsta(varsta), ore_lucru(program()), id(count) {
    count++;
    if (varsta > 65)
        throw(limita_varsta());
}
std::ostream &operator<<(std::ostream &os, const angajat &angajat) {
    os << "nume: " << angajat.numeAngajat << "functie: " << angajat.functie << "varsta: " << angajat.varsta << "ore de lucru:" << angajat.ore_lucru; "\n";
    return os;
}

int angajat::program() {
    if (varsta <= 55)
        ore_lucru = 8;
    else
        ore_lucru =6;
    return ore_lucru;
}

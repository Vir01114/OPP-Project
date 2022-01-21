//
// Created by vir on 1/19/2022.
//

#include "angajat.h"

template <typename T>
int angajat<T>::count=1;
template <typename T>
angajat<T>::angajat(const std::string &numeAngajat, const std::string &functie, int varsta, T salariu) : numeAngajat(numeAngajat), functie(functie), varsta(varsta), salariu(salariu), ore_lucru(program()), id(count) {
    count++;
    if (varsta > 65)
        throw(limita_varsta());
}
template <typename T>
std::ostream &operator<<(std::ostream &os, const angajat<T> &angajat) {
    os << "nume: " << angajat.numeAngajat << "functie: " << angajat.functie << "varsta: " << angajat.varsta<< "salariu:"<<angajat.salariu << "ore de lucru:" << angajat.ore_lucru; "\n";
    return os;
}
template <typename T>
int angajat<T>::program() {
    if (varsta <= 55)
        ore_lucru = 8;
    else
        ore_lucru =6;
    return ore_lucru;
}

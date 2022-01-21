//
// Created by vir on 1/19/2022.
//

#ifndef TEMA_POO_ANGAJAT_H
#define TEMA_POO_ANGAJAT_H
#include <vector>
#include <string>
#include <iostream>
#include "exceptii.h"

template <typename T>
class angajat;

template <typename T>
std::ostream &operator<<(std::ostream &os, const angajat<T> &angajat);

template <typename T>
class angajat {
    std::string numeAngajat;
    std::string functie;
    int varsta;
    T salariu;
    int ore_lucru;
    const int id;
    static int count;
public:
    angajat(const std::string &numeAngajat, const std::string &functie, int varsta, T salariu);

    friend std::ostream &operator<<(std::ostream &, const angajat<T> &);

    ~angajat()=default;
    int program();
};


#endif //TEMA_POO_ANGAJAT_H

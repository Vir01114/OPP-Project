//
// Created by vir on 1/19/2022.
//

#ifndef TEMA_POO_ANGAJAT_H
#define TEMA_POO_ANGAJAT_H
#include <vector>
#include <string>
#include <iostream>
#include "exceptii.h"

class angajat {
    std::string numeAngajat;
    std::string functie;
    int varsta;
    int ore_lucru;
    const int id;
    static int count;
public:
    angajat(const std::string &numeAngajat, const std::string &functie, int varsta);

    friend std::ostream &operator<<(std::ostream &os, const angajat &angajat);

    ~angajat()=default;
    int program();
};


#endif //TEMA_POO_ANGAJAT_H

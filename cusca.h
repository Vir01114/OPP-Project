//
// Created by vir on 1/19/2022.
//

#ifndef TEMA_POO_CUSCA_H
#define TEMA_POO_CUSCA_H
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include "animal.h"
#include "exceptii.h"

class cusca {
    int numar;
    std::string categorie;
    static std::vector<std::shared_ptr<animal>>animale;
public:
    void adauga(animal &a);

    cusca(int numar, const std::string &categorie);

    friend std::ostream &operator<<(std::ostream &os, cusca &cusca);

    ~cusca()=default;
};


#endif //TEMA_POO_CUSCA_H

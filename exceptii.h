//
// Created by vir on 1/21/2022.
//

#ifndef TEMA_POO_EXCEPTII_H
#define TEMA_POO_EXCEPTII_H
#include <stdexcept>


class exceptie: public std::runtime_error {
public:
    exceptie(const std::string &arg);
};
class limita_varsta: public exceptie{
public:
    limita_varsta();
};
class limita_animale: public exceptie{
public:
    limita_animale();
};


#endif //TEMA_POO_EXCEPTII_H

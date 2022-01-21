//
// Created by vir on 1/19/2022.
//

#ifndef TEMA_POO_CAINE_H
#define TEMA_POO_CAINE_H
#include<iostream>
#include "animal.h"
#include "concurs_canin.h"
#include <memory>

class caine: public animal {
    std::string talie;
    std::string dieta;
    std::string tip_blana;
    float hrana;
    std::vector<concurs_canin> concursuri;
public:
    caine(const std::string &numeAnimal, const std::string &specie, const std::string &rasa, int varsta, float greutate,
          const std::string &talie, const std::string &dieta, const std::string &tipBlana, std::vector<concurs_canin> concursuri);
    std::shared_ptr<animal> clone() const override;
    ~caine() override=default;
    float cantitate_hrana() override;
};



#endif //TEMA_POO_CAINE_H

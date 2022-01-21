//
// Created by vir on 1/22/2022.
//

#ifndef TEMA_POO_CONCURS_CANIN_H
#define TEMA_POO_CONCURS_CANIN_H
#include <string>
#include <ostream>

class concurs_canin {
    std::string data_concurs;
    std:: string locatie;
    int premiu;
    int nr_participanti;
    std::string proba;
public:
    concurs_canin(const std::string &dataConcurs, const std::string &locatie, int premiu, int nrParticipanti,
                  const std::string &proba);

    friend std::ostream &operator<<(std::ostream &os, const concurs_canin &canin);

};
class concurs_factory{
public:
    static concurs_canin concurs_perfectpet();
    static concurs_canin concurs_puppest();
};


#endif //TEMA_POO_CONCURS_CANIN_H

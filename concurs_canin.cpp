//
// Created by vir on 1/22/2022.
//

#include "concurs_canin.h"

concurs_canin::concurs_canin(const std::string &dataConcurs, const std::string &locatie, int premiu, int nrParticipanti,
                             const std::string &proba) : data_concurs(dataConcurs), locatie(locatie), premiu(premiu),
                                                         nr_participanti(nrParticipanti), proba(proba) {}

std::ostream &operator<<(std::ostream &os, const concurs_canin &canin) {
    os << "data_concurs: " << canin.data_concurs << " locatie: " << canin.locatie << " premiu: " << canin.premiu
       << " nr_participanti: " << canin.nr_participanti << " proba: " << canin.proba;
    return os;
}

concurs_canin concurs_factory::concurs_perfectpet() {
    return concurs_canin("01/02/2022", "LosAngeles", 1000, 25, "frumusete");
}

concurs_canin concurs_factory::concurs_puppest() {
    return concurs_canin("05/04/2022", "Vaslui", 300, 12, "reflexe");
}

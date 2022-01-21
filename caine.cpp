//
// Created by vir on 1/19/2022.
//

#include "caine.h"

caine::caine(const std::string &numeAnimal, const std::string &specie, const std::string &rasa, int varsta,
             float greutate, const std::string &talie, const std::string &dieta, const std::string &tipBlana, std::vector<concurs_canin> concursuri) : animal(
        numeAnimal, specie, rasa, varsta, greutate), talie(talie), dieta(dieta), tip_blana(tipBlana), concursuri(concursuri), hrana(cantitate_hrana()) {}

std::shared_ptr<animal> caine::clone() const {
    return std::make_shared <caine>(*this);
}

float caine::cantitate_hrana() {
    if (talie == "mare" && dieta == "umeda")
        return 350;
    else if (talie == "medie" && dieta == "umeda")
        return 250;
    else if (talie == "mica" && dieta == "umeda")
        return 150;
    else if (talie == "mare" && dieta == "uscata")
        return 400;
    else if (talie == "medie" && dieta == "uscata")
        return 300;
    else if(talie == "mica" && dieta == "uscata")
        return 200;
}

//
// Created by vir on 1/19/2022.
//

#include "pisica.h"

pisica::pisica(const std::string &numeAnimal, const std::string &specie, const std::string &rasa, int varsta,
               float greutate, bool sterilizare, const std::string &stareSanatate) : animal(numeAnimal, specie, rasa,
                                                                                            varsta, greutate),
                                                                                     sterilizare(sterilizare),
                                                                                     stare_sanatate(stareSanatate), hrana(cantitate_hrana()) {}

std::shared_ptr<animal> pisica::clone() const {
    return std::make_shared <pisica> (*this);
}

float pisica::cantitate_hrana() {
    if (sterilizare == 1 && stare_sanatate == "sanatos")
        return 150;
    else if (sterilizare == 1 && stare_sanatate == "nesanatos")
        return 175.50;
    else if (sterilizare == 0 && stare_sanatate == "sanatos")
        return 135;
    else if (sterilizare == 0 && stare_sanatate == "nesanatos")
        return 155.75;
}




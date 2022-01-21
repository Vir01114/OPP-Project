//
// Created by vir on 1/19/2022.
//

#include "papagal.h"

papagal::papagal(const std::string &numeAnimal, const std::string &specie, const std::string &rasa, int varsta,
                 float greutate, const std::string &penaj, bool vorbeste) : animal(numeAnimal, specie, rasa, varsta,
                                                                                   greutate), penaj(penaj),
                                                                            vorbeste(vorbeste), hrana(cantitate_hrana()) {}

std::shared_ptr<animal> papagal::clone() const {
    return std::make_shared<papagal>(*this);
}

float papagal::cantitate_hrana() {
    if (penaj == "sanatos")
        return 75;
    else if (penaj == "nesanatos")
        return 90;
    return 0;
}

//
// Created by vir on 1/21/2022.
//

#include "exceptii.h"

exceptie::exceptie(const std::string &arg) : runtime_error(arg) {

}

limita_varsta::limita_varsta():exceptie("Limita de varsta este de 65 de ani!") {

}

limita_animale::limita_animale():exceptie("Limita este de 3 animale in cusca!") {

}

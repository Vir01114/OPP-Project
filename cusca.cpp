//
// Created by vir on 1/19/2022.
//

#include "cusca.h"


void cusca::adauga(animal &a){
    animale.push_back(a.clone());
}
cusca::cusca(int numar, const std::string &categorie) : numar(numar), categorie(categorie) {
    if (numar > 3)
        throw(limita_animale());
}
std::ostream &operator<<(std::ostream &os, cusca &cusca) {
    os << "numar: " << cusca.numar << "categorie: " << cusca.categorie; "\n";
    for(const auto &a:cusca::animale)
        os<<a;
    os<<"\n";
    return os;
}






#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include "animal.h"
#include "angajat.h"
#include "cusca.h"
#include "caine.h"
#include "pisica.h"
#include "papagal.h"
#include "concurs_canin.h"

    int main() {
        try{


        /*animal a1{"Rex", "Canis lupus familiaris", "Labrador Retriver", 5, 13.7};
        animal a2{"Bella", "Felis silvestris catus", "British shorthair", 3, 2.7};
        animal a3{"Mira", "Canis lupus familiaris", "Bichon Maltese", 2, 5.5};*/
        concurs_canin d1 = concurs_factory::concurs_puppest();

        caine a1{"Rex", "Canis lupus familiaris", "Labrador Retriver", 5, 13.7, "mare", "uscata", "lunga", {d1}};
        pisica a2{"Bella", "Felis silvestris catus", "British shorthair", 3, 2.7, 1, "sanatos"};
        papagal a3{"Roko", "Psittaciformes", "Ara Ararauna", 5, 1.8, "sanatos", 0};

        angajat<int> b1{"Ronald", "director", 57, 7345};
        angajat<int> b2{"Esteban Julio Ricardo Montoya de la Rosa Ramirez", "ingrijitor", 30, 3789};
        angajat<int> b3("Tugui Iustin", "consultant adoptii", 19, 5897);

        cusca c1{1, "feline"};
        c1.adauga(a2);
        cusca c2{2, "canin"};
        c2.adauga(a1); c2.adauga(a3);}
        catch(std::runtime_error &eroare){
            std::cout<<eroare.what()<< "\n";
        }
        return 0;
    }
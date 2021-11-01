#include <vector>
#include <string>
#include <iostream>

class animal {
    std::string numeAnimal;
    std::string specie;
    std::string rasa;
    int varsta
public:
    animal(const std::string &numeAnimal, const std::string &specie, const std::string &rasa, int varsta) : numeAnimal(numeAnimal), specie(specie), rasa(rasa), varsta(varsta) {}
    animal(const animal &copie) {
        this->numeAnimal = copie.numeAnimal;
        this->specie = copie.specie;
        this->rasa = copie.rasa;
        this->varsta = copie.varsta;
    }
    animal &operator=(const animal &copie) {
        this->numeAnimal = copie.numeAnimal;
        this->specie = copie.specie;
        this->rasa = copie.rasa;
        this->varsta = copie.varsta;
    }
    friend std::ostream &operator<<(std::ostream &os, const animale &animale) {
        os << "numeAnimal: " << animale.numeAnimal<< " specie: " << animale.specie << " rasa: " << animale.rasa << " varsta: " << animale.varsta "\n";
        return os;
    }

    ~animale() {
//        std::cout << "Destructor animale";
    }
};

class angajat {
    std::string numeAngajat;
    std::string functie
    int varsta;
public:
    angajat(const std::string &numeAngajat, const std::string &functie, int varsta) : numeAngajat(numeIngrijitor), functie(functie), varsta(varsta) {}

    friend std::ostream &operator<<(std::ostream &os, const angajat &numeAngajat, const angajat &functie, int varsta) {
        os << "nume: " << angajat.numeAngajat << "functie: " << angajat.functie << "varsta: " << angajat.varsta "\n";
        return os;
    }

    ~angajat() {
//        std::cout << "Destructor angajat";
    }
};

class cusca {
    int numar;
    std::string categorie;
    vector<animal>animale;
public:
    void adauga(animal a){
        animale.push_back(a);
    cusca(int numar, const std::string &categorie) : numar(numar), categorie(categorie){}

    friend std::ostream &operator<<(std::ostream &os, int numar, const cusca &categorie) {
        os << "numar: " << cusca.numar << "categorie: " << cusca.categorie "\n";
        for(const auto &a:cusca.animale)
            os<<a;
        os<<endl;
        return os;
    }

    ~custi() {
//        std::cout << "Destructor cusca";
    }
};

int main() {
    animal a1{"Rex", "Canis lupus familiaris", "Labrador Retriver", 5};
    animal a2{"Bella", "Felis silvestris catus", "British shorthair", 3};
    animal a3{"Mira", "Canis lupus familiaris", "Bichon Maltese", 2};

    angajat b1{"Ronald", "director", 57 };
    angajat b2{"Esteban Julio Ricardo Montoya de la Rosa Ramirez", "ingrijitor", 30};
    angajat b3("Tugui Iustin", "consultant adoptari", 19);

    cusca c1{1, "feline"};
    c1.adauga(a2);
    cusca c2{2, "canin"};
    c2.adauga(a1); c2.adauga(a3);
    return 0;
}

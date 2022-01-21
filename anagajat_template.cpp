//
// Created by vir on 1/21/2022.
//
#include "angajat.cpp"

template class angajat <int>;
template class angajat <float>;

template std::ostream &operator<< <>(std::ostream &, const angajat<int> &);
template std::ostream &operator<< <>(std::ostream &, const angajat<float> &);
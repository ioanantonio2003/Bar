#ifndef UNTITLED2_ALCOLICE_H
#define UNTITLED2_ALCOLICE_H


#include "Bauturi.h"

class Alcolice : public Bauturi {
private:
    int procent_alcool;

public:
    Alcolice();
    Alcolice(const std::string& nume, int pret, int procentAlcool);
    Alcolice(const Alcolice& alcolice);
    Alcolice& operator=(const Alcolice& other);
    virtual ~Alcolice();

    void drink() const override;
    void aroma() const override;
    static int betie(int procent);

    void citire(std::istream& in) override;
    void afisare(std::ostream& out) const override;

    int getProcentAlcool() const;
};


#endif //UNTITLED2_ALCOLICE_H
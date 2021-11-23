#pragma once
#include<iostream>
using namespace std;
class pizza {
    string denumire;
    int cod;
    int grame;
public:
    int pret;
    pizza();
    pizza(string d,int c,int g, int p);
    pizza(const pizza& p);
    void bakePizza(string d,int c,int g, int p);
    void display();
    string getDenumire();
    int getCod();
    int getGrame();
    int getPret();
    int operator+(pizza obj1);  
    pizza& operator=(const pizza& obj2);
};

class meniupizza :public pizza{
    string denumire_bautura;
    int ml;
public:
    meniupizza();
    meniupizza(string d_s,int ml);
    meniupizza(const meniupizza& mp);
    void display();
    meniupizza& operator=(const meniupizza& obj2);
};
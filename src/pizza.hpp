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
    int operator+(pizza obj1);  
    pizza operator=(const pizza& obj2);
};
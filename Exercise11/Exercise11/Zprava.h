#pragma once

#ifndef ZPRAVA_H
#define ZPRAVA_H
#include <iostream>

struct Zprava {
    int id;
    std::string adrZdroj;
    std::string adrCil;
    std::string obsah;

    Zprava();
    Zprava(int id, std::string adrZdroj, std::string adrCil, std::string obsah);
};

#endif // !ZPRAVA_H
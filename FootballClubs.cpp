#include "Header/FootballClubs.h"

#include <iostream>
#include <string>




void GetTeamsWithEuropeanPedigree() {
    std::cout << "Select teams with European Pedigree";
}

const std::string EnglishTeams(std::string name)
{
    if (name == "Liverpool" || name == "liverpool") {
        return "Liverpool";
    }
    else if (name == "Manchester City" || name == "manchester city") {
        return "Manchester City";
    }
    else if (name == "Manchester United" || name == "manchester united") {
        return "Manchester United";
    }
    else if (name == "Chelsea" || name == "chelsea") {
        return "Chelsea";
    }
    else if (name == "Tottenham Hotspur" || name == "tottenham hotspur") {
        return "Tottenham Hotspur";
    }
    else {
        return "Arsenal";
    }
}


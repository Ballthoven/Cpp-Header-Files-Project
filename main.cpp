#include <iostream>
#include "Header/FootballClubs.h"


int main()
   {
     GetTeamsWithEuropeanPedigree();
     std::cout << std::endl;
     std::cout<<"The name of this team is " <<  EnglishTeams("Chelsea");
     std::cin.get();
   }

#include "CAR.h"
#include "ServerA.h"
#include <iostream>

//#pragma once

void printStruct(const std::vector<CAR>& cars)
{
  for (const CAR& carr : cars)
  {
    std::cout << "Mark: " << carr.mark << std::endl;
    std::cout << "Model: " << carr.model << std::endl;
    std::cout << "Colour: " << carr.colour << std::endl;
    std::cout << "Numowners: " << carr.numowners << std::endl;
    std::cout << "Price: " << carr.price << std::endl;
    std::cout << "VIN_number: " << carr.VIN_number << std::endl;
    std::cout << "Year: " << carr.year << std::endl;
    std::cout << "Mileage: " << carr.mileage << std::endl;
    std::cout << "CUI: " << carr.CUI << std::endl << std::endl;
  }
}

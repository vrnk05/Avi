#include "CAR.h"
#include "UserA.h"
#include "ServerA.h"

#include <iostream>

void addPosition (std::vector<CAR>& cars)
{
  CAR car;

  std::cout << "Enter mark: ";
  std::cin >> car.mark;

  std::cout << "Enter model: ";
  std::cin >> car.model;

  std::cout << "Enter colour: ";
  std::cin >> car.colour;

  std::cout << "Enter number of owners: ";
  std::cin >> car.numowners;

  std::cout << "Enter price: ";
  std::cin >> car.price;

  std::cout << "Enter VIN: ";
  std::cin >> car.VIN_number;

  std::cout << "Enter year: ";
  std::cin >> car.year;

  std::cout << "Enter mileage: ";
  std::cin >> car.mileage;

  std::cout << "Enter CUI: ";
  std::cin >> car.CUI;

  cars.push_back(car);
}


#include "ServerA.h"
#include "CAR.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void File(const std::string& FNAME, std::vector<CAR>& cars)
{
  std::ifstream file(FNAME);

  CAR car;

  int length;

  if (!file.is_open())
  {  //входная проверка
    std::cout << "Error 101 - FILE NOT EXIST" << std::endl;
    return;
  }

  file >> length;

  for (int i = 0; i < length; i++)
  {
      file >> car.mark >> car.model >> car.colour >> car.numowners >> car.price >> car.VIN_number >> car.year >> car.mileage >> car.CUI;
      cars.push_back(car);
  }
}
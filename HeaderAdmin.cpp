#include "CAR.h"

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>

void Sort(std::vector<CAR>& cars)
{
  sort(cars.begin(), cars.end(),
  [](const CAR p1, const CAR p2)
  {
    return p1.CUI > p2.CUI;
  });
}

void editPrice (std::vector<CAR>& cars, int index, int new_price)
{
  int old_ptice = cars[index].price;
  cars[index].price = new_price;

  if (new_price > old_ptice)
  {
    cars[index].CUI -= 0.3;
  }
  else if (new_price < old_ptice)
  {
    cars[index].CUI += 0.3;
  }
}

void deletePosition(std::vector<CAR>& cars, int index)
{
  cars.erase(cars.begin() + index);
}
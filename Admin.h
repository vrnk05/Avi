#pragma once

#include "CAR.h"

#include <fstream>
#include <string>
#include <vector>

void Sort(std::vector<CAR>& cars); //сортировка
void printStruct(const std::vector<CAR>& cars);  //функция печати массива
void deletePosition(std::vector<CAR>& cars, int index); //удаление позиции
void addPosition (std::vector<CAR>& cars);//добавление позиции
void editPrice (std::vector<CAR>& cars, int index, int new_price); //изменение стоимости позиции
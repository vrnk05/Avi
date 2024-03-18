#include "CAR.h"
#include "UserA.h"
#include "Guest.h"
#include "Admin.h"
#include "ServerA.h"

#include <string>
#include <vector>
#include <iostream>
#include <fstream>

const std::string FNAME = "A.txt";

int main()
{
    std::vector<CAR> cars;

    std::string status;

    int index = 0;
    int choose = false;
    int new_price = 0;

    File(FNAME, cars);

    std::cout << "Enter your status: ";
    getline(std::cin, status);

    std::cout << "If you are a guest, you can print" << std::endl;
    std::cout << "If you are an user, you can print, sort and add" << std::endl;
    std::cout << "If you are an admin, you can print, sort, delete, edit and add" << std::endl;

    while (true)
  {
    std::cout << "\n";
    std::cout << "1) Exit" << "\n";
    std::cout << "2) Exit with sort" << "\n";
    std::cout << "3) Add" << "\n";
    std::cout << "4) Edit" << "\n";
    std::cout << "5) Delete" << "\n";
    std::cout << "Number of choose: ";

    std::cin >> choose;

    std::cout << "\n";

    if (choose == 1)
    {
      std::cout << "Not sorted!" << "\n";
      Sort(cars);
      std::cout << "Cars: " << "\n" << "\n";
      printStruct(cars);

      return (0);
    }

    else if (choose == 2)
    {
      std::cout << "Sorted cars: " << "\n" << "\n";
      Sort(cars);
      printStruct(cars);

      return (0);
    }

    else if (choose == 3)
   {
      std::cout << "Start to add a car!" << "\n";

      addPosition(cars);
    }

    else if (choose == 4)
    {
      printStruct(cars);

      std::cout << "Index of car: ";
      std::cin >> index;

      std::cout << "New price: ";
      std::cin >> new_price;

      editPrice(cars, index, new_price);
    }

    else if (choose == 5)
    {
      printStruct(cars);

      std::cout << "Index of car: ";
      std::cin >> index;

      deletePosition(cars, index);
    }
  }
}
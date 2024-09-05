#include "Vehicles.h"
#include <iostream>
#include <vector>

int vehicleMain() {
  std::vector<Vehicles> vehicles;

  bool end = false;

  while (!end) {
    Vehicles vehicle;

    std::cout << "Digite a marca do veículo: " << std::endl;
    std::cin >> vehicle.brand;

    std::cout << "Digite o modelo do veículo: " << std::endl;
    std::cin >> vehicle.model;

    std::cout << "Digite a placa do veículo: " << std::endl;
    std::cin >> vehicle.plate;

    vehicles.push_back(vehicle);

    std::cout << "Deseja continuar? (S/N)" << std::endl;
    char answer;
    std::cin >> answer;

    end = (answer == 'N') || (answer == 'n');
  }

  for (const auto &vehicle : vehicles) {
    std::cout << vehicle.brand << " " << vehicle.model << " " << vehicle.plate
              << std::endl;
  }

  return 0;
}
#include "CarRental.h"

CarRental::CarRental() {}

CarRental::CarRental(const Car& e1) {
    z.push_back(e1);
}

CarRental::CarRental(const Car& e1, const Car& e2) {
    z.push_back(e1);
    z.push_back(e2);
}

CarRental::CarRental(int n, Car* arr[]) {
    for (int i = 0; i < n; ++i) {
        z.push_back(*arr[i]);
    }
}

CarRental::CarRental(const std::vector<Car>& cars) : z(cars) {}

CarRental::CarRental(const CarRental& other) : z(other.z) {}

CarRental::CarRental(CarRental&& other) noexcept : z(std::move(other.z)) {}

void CarRental::Add(const Car& car) {
    z.push_back(car);
}

void CarRental::Remove() {
    if (!z.empty()) {
        z.pop_back();
    } else {
        std::cout << "BLAD: Pusto !" << std::endl;
    }
}

void CarRental::Clear() {
    z.clear();
}

void CarRental::Print() const {
    std::cout << "---" << std::endl;
    std::cout << "# Zawartosc/sklad:" << std::endl;
    for (const auto& car : z) {
        car.Print();
    }
    std::cout << "---" << std::endl;
}

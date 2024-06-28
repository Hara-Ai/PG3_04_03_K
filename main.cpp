#include <stdio.h>
#include <iostream>
#include <vector>
#include <memory>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main() {
  
    std::vector<std::unique_ptr<Animal>> animals;
    animals.push_back(std::make_unique<Dog>());
    animals.push_back(std::make_unique<Cat>());

    for (const auto& animal : animals) {
        animal->makeSound();
    }

    return 0;
}
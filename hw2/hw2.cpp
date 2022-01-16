// hw2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
#include "Gardener.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include "Grower.h"
#include "Wholesaler.h"
#include "Florist.h"

int main()
{
    Person* robin = new Person("Robin");
    Person* chris = new Person("Chris");
    Gardener* garett = new Gardener("Garett");
    FlowerArranger* flora = new FlowerArranger("Flora");
    DeliveryPerson* dylan = new DeliveryPerson("Dylan");
    Grower* gray = new Grower("Gray", garett);
    Wholesaler* watson = new Wholesaler("Watson", gray);
    std::vector<std::string> order = { "Roses", "Violets", "Gladiolus" };
    Florist* fred = new Florist("Fred", watson, flora, dylan);

    chris->orderFlowers(fred, robin, order);

    delete fred;
    delete chris;
    delete watson;
    delete garett;
    delete gray;
    delete dylan;
    delete flora;
    delete robin;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

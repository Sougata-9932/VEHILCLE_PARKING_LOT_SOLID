// VEHICLE_PARKING_PROJECT_NEW.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Time.h"
#include"Show_Time.h"
#include"Parking_Spot.h"
#include"Parking_Spot_1D.h"
#include"Vehicle.h"
#include"Car.h"
#include"Wrapper.h"
#include"Admin.h"

int main()
{
    Admin admin;
    admin.set_user();
    Wrapper wrapper(10);
    std::cout << "\n\t\t\t\t\t\t\t-----------------------------------------------";
    std::cout << "\n\t\t\t\t\t\t\t\t\t ADMIN LOGIN : ";
    std::cout << "\n\t\t\t\t\t\t\t-----------------------------------------------\n";
    std::cin.ignore();
    if (wrapper.admin_login(admin) == false)
    {
        std::cout << "CAN'T PROCEED FURTHUR....\n\n";
        return 0;
    }
    while (1)
    {
        system("cls");
        std::cout << "\n\t\t\t\t\t\t\t-----------------------------------------------";
        std::cout << "\n\t\t\t\t\t\t\t\t1) PARK A VEHICLE : ";
        std::cout << "\n\t\t\t\t\t\t\t\t2) UNPARK A VEHICLE : ";
        std::cout << "\n\t\t\t\t\t\t\t\t3) SHOW ALL VEHICLES : ";
        std::cout << "\n\t\t\t\t\t\t\t\t4) YOUR TRANSACTION HISTORY : ";
        std::cout << "\n\t\t\t\t\t\t\t\t5) SHOW VACANT PLACES : ";
        std::cout << "\n\t\t\t\t\t\t\t\t6) SET CHARGES FOR VEHICLES : ";
        std::cout << "\n\t\t\t\t\t\t\t\t6) EXIT ";
        std::cout << "\n\t\t\t\t\t\t\t-----------------------------------------------";
        std::cout << std::endl;
        std::cout << "\nENTER YOUR CHOICE : ";
        int ch; std::cin >> ch;
        switch (ch)
        {
        case 1:
            std::cin.ignore();
            wrapper.park_vehicle();
        case 2:
            std::cin.ignore();
            wrapper.unpark_vehicle();
        case 3:
            std::cin.ignore();
            wrapper.show_all_vehicles();
        case 4:
            std::cin.ignore();
            wrapper.show_transaction_history();
        case 5:
            std::cin.ignore();
            wrapper.show_available_places();
        case 6:
            std::cin.ignore();
            wrapper.set_charges();
        default:
            std::cout << "INVALID CHOICE !......\n";
        }
        std::cout << "TYPE [YES] IF YOU WANT TO CONTINUE ELSE TYPE [NO]\n: ";
        std::string str;
        std::cin >> str;
        if (str == "no" || str == "No" || str == "NO") 
        {
            break;
        }
      }
    return 0;
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

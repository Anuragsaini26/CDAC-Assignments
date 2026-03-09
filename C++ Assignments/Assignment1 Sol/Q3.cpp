#include <iostream>

using namespace std;

class TollBooth {
private:
    int totalVehicles;
    double totalRevenue;

public:
    TollBooth() {
        totalVehicles = 0;
        totalRevenue = 0;
    }

    void reset() {
        totalVehicles = 0;
        totalRevenue = 0;
    }

    void vehiclePayingToll(int vehicleType, double tollAmount) {
        totalVehicles = totalVehicles + 1;
        totalRevenue = totalRevenue + tollAmount;
    }

    int getTotalVehicles() {
        return totalVehicles;
    }

    double getTotalRevenue() {
        return totalRevenue;
    }
};

int main() {
    TollBooth booth;
    int choice;

    do {
        cout << "\n1. Add Standard Car (Rs. 180)" << endl;
        cout << "2. Add Truck (Rs. 300)" << endl;
        cout << "3. Add Bus (Rs. 350)" << endl;
        cout << "4. Display Total Vehicles" << endl;
        cout << "5. Display Total Revenue" << endl;
        cout << "6. Reset Statistics" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            booth.vehiclePayingToll(1, 180.0);
            cout << "Car Added!" << endl;
        } else if (choice == 2) {
            booth.vehiclePayingToll(2, 300.0);
            cout << "Truck Added!" << endl;
        } else if (choice == 3) {
            booth.vehiclePayingToll(3, 350.0);
            cout << "Bus Added!" << endl;
        } else if (choice == 4) {
            cout << "Total Vehicles: " << booth.getTotalVehicles() << endl;
        } else if (choice == 5) {
            cout << "Total Revenue: Rs. " << booth.getTotalRevenue() << endl;
        } else if (choice == 6) {
            booth.reset();
            cout << "Statistics Reset Done!" << endl;
        }

    } while (choice != 7);

    return 0;
}
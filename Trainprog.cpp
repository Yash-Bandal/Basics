#include <iostream>

using namespace std;

class Salesman {
private:
    int trainDistance;
    int carDistance;

public:
    // Constructor to initialize distances
    Salesman(int train = 0, int car = 0) : trainDistance(train), carDistance(car) {}

    // Overloaded + operator to calculate total distance and total allowance
    Salesman operator+(Salesman c)  {
        Salesman result;
        result.trainDistance = trainDistance +c.trainDistance;
        result.carDistance =carDistance+ c.carDistance;
        return result;
    }

    // Calculate and display total distance and total allowance
    void calculateTotalAllowance()  {
        int totalDistance = trainDistance + carDistance;
        int totalAllowance = (trainDistance * 5) + (carDistance * 20);

        cout << "Total Distance Travelled: " << totalDistance << " Km" << endl;
        cout << "Total Allowance Received: Rs. " << totalAllowance << endl;
    }

    // Display details of the trip
    void display() {
        cout << "Train Distance: " << trainDistance << " Km" << endl;
        cout << "Car Distance: " << carDistance << " Km" << endl;
        calculateTotalAllowance();
        cout << endl;
    }
};

int main() {
    // Create Salesman objects for two different trips
    Salesman trip1(100, 25);
    Salesman trip2(50, 15);

    // Display details of each trip
    cout << "Details of Trip 1:" << endl;
    trip1.display();

    cout << "Details of Trip 2:" << endl;
    trip2.display();

    // Calculate the total distance and total allowance for both trips
    Salesman totalTrip = trip1 + trip2;  // Overloaded + operator is called

    // Display details of the total trip
    cout << "Details of Total Trip:" << endl;
    totalTrip.display();

    return 0;
}

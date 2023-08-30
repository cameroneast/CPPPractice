/*
written by Cameron East as a part of Exercise 2-1-3: C++ Functions and Structs
*/
#include <iostream>
#include <cmath>
using namespace std;

//delcare the cartesian coordinate struct
struct CartesianCoordinate {
    float x;
    float y;
};

float calculateDistance(CartesianCoordinate* point1, CartesianCoordinate* point2){
    float distance;

    //calculate distance between the two cartesian points
    distance = sqrtf(powf((point2->x - point1->x), 2) + powf((point2->y - point1->y), 2));

    return distance;
}

int main()
{
    CartesianCoordinate point1;
    CartesianCoordinate point2;

    //prompt the user for points
    cout << "Enter the coordinates for two points.";
    cout << "\nPoint 1 X: ";
    cin >> point1.x;
    cout << "\nPoint 1 Y: ";
    cin >> point1.y;
    cout << "\nPoint2 X: ";
    cin >> point2.x;
    cout << "\nPoint2 Y: ";
    cin >> point2.y;

    //calculate the distance between two points
    float distance = calculateDistance(&point1, &point2);

    //display result to user
    cout << "\nThe distance between the two points is: " << distance << '\n';
    return 0;
}
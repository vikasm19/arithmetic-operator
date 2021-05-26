//Goal Practicing Arithmetic Operator.
//We are writing a program to calculate Volume of a cube,sphere & cone.
// Cube Volume = side^3
// Sphere Volume = (4/3) * pi * radius^3
// Cone Volume = pi * radius^2 * (height/3)

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float cubeSide = 5.4;
    float sphereRadius = 2.33;
    float coneRadius = 7.65;
    float coneHeight = 14;
    float volCube, volSphere, volCone;
    //whatever writtn in pow(x,y) = x^y;
    volCube = std::pow(cubeSide,3);       
    volSphere = (4.0/3.0)*M_PI*std::pow(sphereRadius,3);
    volCone = M_PI*std::pow(coneRadius,2)*(coneHeight/3);
    
    cout<<"Volume of cube: "<<volCube<<"\n";
    cout<<"Volume of Sphere: "<<volSphere<<"\n";
    cout<<"volume of Cone: "<<volCone<<"\n";
    return 0;
}
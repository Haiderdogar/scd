#include <iostream>

class Calculator {

private:
    double num1 ;
    double num2 ;

public:

    Calculator();

    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);
  
};

int main() {
    Calculator myCalculator;

    return 0;
}

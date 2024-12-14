#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Function definition for f(x)
double f(double x) {
    return pow(10, x) + x - 4;
}

// Derivative of f(x), f'(x)
double f_prime(double x) {
    return log(10) * pow(10, x) + 1;
}

// Newton-Raphson Method
void newtonRaphson(double x0, int iterations) {
    cout << "Newton-Raphson Method:\n";
    for (int i = 0; i < iterations; ++i) {
        double fx = f(x0);
        double fpx = f_prime(x0);
        if (fabs(fpx) < 1e-10) {
            cout << "Derivative is too small, stopping iteration." << endl;
            break;
        }
        double x1 = x0 - fx / fpx;
        cout << "Iteration " << i + 1 << ": x = " << x1 << ", f(x) = " << fx << endl;
        x0 = x1;
    }
    cout << endl;
}

// Bisection Method
void bisection(double a, double b, int iterations) {
    cout << "Bisection Method:\n";
    if (f(a) * f(b) >= 0) {
        cout << "The function has the same sign at the endpoints of the interval. Bisection method cannot proceed." << endl;
        return;
    }

    for (int i = 0; i < iterations; ++i) {
        double c = (a + b) / 2; // Midpoint
        cout << "Iteration " << i + 1 << ": c = " << c << ", f(c) = " << f(c) << endl;

        if (fabs(f(c)) < 1e-10) {
            cout << "Root found with sufficient accuracy." << endl;
            break;
        }

        if (f(a) * f(c) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    cout << endl;
}

int main() {
    // Newton-Raphson Method initial guess
    double x0 = 0;
    int iterations = 20;

    // Bisection Method interval
    double a = 0, b = 1;

    // Set output precision
    cout << fixed << setprecision(10);

    int choice;
    do {
        cout << "\nIteration Methods for Solution to Linear equations:\n";
        cout << "1. Newton-Raphson Method\n";
        cout << "2. Bisection Method\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";

        cin >> choice;

        // Check if input is valid
        if (cin.fail()) {
            cin.clear(); // Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a valid number.\n";
            continue; // Restart the loop
        }

        switch (choice) {
        case 1:
            // Perform the Newton-Raphson method
            newtonRaphson(x0, iterations);
            break;

        case 2:
            // Perform the Bisection method
            bisection(a, b, iterations);
            break;

        case 3:
            cout << "Exiting the program.\n";
            break;

        default:
            cout << "Invalid choice. Please select a valid option.\n";
        }

    } while (choice != 3);
    return 0;
}


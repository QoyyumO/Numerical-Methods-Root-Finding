# Numerical Methods for Root Finding

This repository contains implementations of two popular numerical methods for finding roots of equations: the Newton-Raphson method and the Bisection method. The function being analyzed is defined as:

\[ f(x) = 10^x + x - 4 \]

## Methods

### 1. Newton-Raphson Method
The Newton-Raphson method is an iterative root-finding algorithm that uses the function and its derivative to converge to a root. The method is defined by the formula:

\[ x_{n+1} = x_n - \frac{f(x_n)}{f'(x_n)} \]

### 2. Bisection Method
The Bisection method is a bracketing method that repeatedly bisects an interval and selects a subinterval in which a root exists. It requires two initial points \( a \) and \( b \) such that \( f(a) \) and \( f(b) \) have opposite signs.

## Usage

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/Numerical-Methods-Root-Finding.git
   cd Numerical-Methods-Root-Finding
   ```
2. Compile the code
   ```bash
   g++ -o root_finding root_finding.cpp
   ```
3. Run the program:
   ```bash
   ./root_finding
   ```
4. Follow the on-screen prompts to choose between the Newton-Raphson method or the Bisection method.

## Features

- User-friendly interface for selecting the method.
- Iterative output showing the progress of each method.
- Error handling for invalid inputs.

## Requirements

- C++11 or later
- A C++ compiler (e.g., g++, clang++)

## License

This project is licensed under the MIT License 

## Acknowledgments

- Inspired by numerical analysis techniques commonly used in scientific computing.
   

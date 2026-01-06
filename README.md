# Payment System (C++ OOP Example)

This is a simple C++ console-based payment system that demonstrates **Object-Oriented Programming** concepts like **inheritance**, **polymorphism**, and **abstract classes**.

## Features
- Supports three payment methods:
  - Cash
  - Card
  - Wallet
- Uses a base abstract class `Payment`
- Each payment method overrides the `pay()` function
- User selects the payment type at runtime

## OOP Concepts Used
- **Abstraction**  
  `Payment` is an abstract class with a pure virtual function `pay()`.

- **Inheritance**  
  `Cash`, `Card`, and `Wallet` inherit from the `Payment` class.

- **Polymorphism**  
  Each derived class provides its own implementation of `pay()`.

## How the Program Works
1. The user is shown a menu to select a payment method.
2. Based on the choice, the corresponding class object is created.
3. The amount and required details are taken as input.
4. The `pay()` function is called to display payment details.

## Sample Output

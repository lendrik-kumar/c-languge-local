*Credit of drafting this question goes to: ChatGPT*. My contribution is in giving proper prompt only.

*Case Study 1: Smart Traffic Management System*
*Concepts: Virtual Functions, Abstract Base Class, Dynamic Dispatch*
*Problem Statement:* You are designing a Smart Traffic Management System. Different types of vehicles—Car, Bus, and EmergencyVehicle—pass through toll gates. Each vehicle has a function calculateToll() that determines the toll amount based on vehicle type and priority.

-Regular vehicles pay normal tolls.
-Emergency vehicles are exempted from tolls.
-For Buses, toll depends on the number of passengers.
-Create an abstract base class Vehicle with virtual functions calculateToll() and displayInfo().
-Use runtime polymorphism to compute the total toll collected from a mixed array of Vehicle* pointers.

*Question Tasks:*
- Implement the class hierarchy using virtual functions.
- Demonstrate how overriding changes behavior dynamically.
- Show how the system behaves when new vehicle types (like Truck) are added without modifying existing code.
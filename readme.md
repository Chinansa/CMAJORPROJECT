DESCRIPTION
The Two-Wheeler Rental System is a console-based management program written in C programming language. The objective of the system is to allow users to rent a two-wheeler, manage availability, calculate charges, and store customer information in a structured manner. The program is designed using modular coding practices with separate files for:
Main system logic (main.c) Functional implementations (functions.c) Declarations (rental.h)
It also demonstrates program flow, input handling, record management, and decision-making based on user choices.
GETTING STARTED
When the program begins:
Initialization The program loads essential variables such as: Vehicle list → ID, Name, Model, Rent rate, Quantity Customer details → Name, Phone number, Vehicle taken, Duration Rental calculation rules Availability flags
Main Menu Appears The user is shown a menu: Start Rental Return Vehicle View All Vehicles View Customer Records Exit
Starting the Rental Vehicle list appears → user chooses an option Program checks stock User enters details → Name, Phone, Hours/Days Rental cost is calculated If available → rental is confirmed → invoice is shown If unavailable → user is notified
Returning the Vehicle User enters customer name or rental ID Program checks the record If found → return is processed → quantity updated → final amount shown If not found → error message
Program Completion After finishing any action → returns to menu On selecting Exit → Program closes properly

USAGE
This project can be used for:
Learning C Programming Multi-file structure Use of header files Arrays and structures Switch-case menu Input validation
Understanding System Logic Availability tracking Charge calculation Customer record handling
Useful for: Understanding how rental systems work Learning real-life application logic Menu-driven program structure
Enhancing to a Bigger System The logic can be extended to: GUI-based rental systems Online booking portals Payment integrations File/database storage Vehicle maintenance logs

Contributing
Fix bugs and improve code efficiency
Add new vehicle types or rental features
Enhance billing logic or cost calculation
Improve input validation and error handling
Add file handling for saving data permanently
Clean and refactor code for better readability
Add comments and documentation for clarity
Optimize menu flow and user interaction
Introduce new modules like discounts or membership
Add test cases to ensure program reliability

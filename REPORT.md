##### Name: (Write your name here)
##### Date: (Write the date here)

### CODING CHALLENGE #2: REPORT

The program is designed in the interactive mode. On execution, the program will display the introductory remarks on what the user is supposed input. Then the program will ask the user to input the Systolic and Diastolic blood pressures. If the data entered is correct, the program will display the status of the Blood Pressure.

The program is designed to repeat the task until the user opt to exit the program. This permits the user to check multiple blood pressure data without re-running the program.

The program is designed to use minimum checking as far as possible. In fact, the whole program has used on a single nested if ladder statement. This will be reduce execution time of the program drastically. For example, if the Systolic Blood Pressure the user entered is less than the Diastolic Blood Pressure, the program will just display the error message and asks whether to check another blood pressure data. Here, the program will not check the rest of the if-ladder. Similarly, once the condition is true, the if ladder will not unnecessarily check the rest of the if-ladder statement. This design, therefore, greatly reduces the execution time.

Similarly, while checking whether the user wants to repeat the blood pressure check with another set of data, the implementation does not unnecessarily check whether the user the user has entered a ‘y’ or ‘n’ answer. Instead, the check is made in the do-while condition such that the program is repeated when the user enters a ‘y’ or ‘Y’ answer. If any data other than this is entered, the program will stop with a THANKS message.

Improvement Possible: The input error checking with additional if-statement can be implemented. For example, the current implementation can successfully read any integer of floating-point values against the systolic and diastolic blood pressure data, as the corresponding variables are declared as floating-point variables. The program, however, could crash when a character or string data is entered against the systolic and diastolic blood pressure. This problem can be solved by checking the value returned by the scanf() function. As two additional if-statements are needed, this provision is not currently incorporated in the implementation.

# Municipal Financial Management System (MFMS)
Programming in Practice Project A
Group number: 19

## Group Members
| Student              | Student No. | Responsibility      |
| Samuel Hamwatile     | 226145743   | Employee Management |
| Wilhelmine Kandjumbi | 226043460   | Budget Management   |
| Akwenye Petrus       | 226077799   | Supplier Management |
| Hermani Nuuyoma      | 225151782   | Asset Management    |
| Junior Mwedihanga    | 225129019   | Reports             |
| Michael Makeva       | 225073730   | Functions, integration and validation |
| Antonio Kanga        | 226134431   | Testing, documentation and Git coordination |

## Project Description
This Project is about creating a system that helps a municipality manage employees, departmental budgets, suppliers and assets, and produce summary reports. Also having a main Menu for where the user can choose branches they want to manage. 

## System Features
- A main menu with easy/ straight to the point navigation and invalid-choice handling.

- Employee management: To add an employee, display their info, search for an employee, calculate their salary.

- Budget management: Enter budgets and Expenditure, calculate the remaining budget, flag the departments that are over the budget.

- Supplier management: To add suppliers, display their info, search for a supplier.

- Asset register: To add any type of asste, display the assets info, search for a asset.

- Reports: A combination of employee, budget, supplier and asset reports

- Input validation (negative values should not be accepted, no empty names, no invalid numbers or choices.)

##  How to Compile
    gcc -std=c99 -Wall -Wextra -pedantic -o mfms main.c employees.c budget.c suppliers.c assets.c reports.c


## How to Run
    ./mfms          (On Git Bash)
    mfms.exe        (On Command Prompt)

## Project Structure
    main.c                  main menu
    employees.c / .h        employee management
    budget.c / .h           budget management
    suppliers.c / .h        supplier management
    assets.c / .h           asset register
    reports.c / .h          reports

## Responsibilities

| Student1         | Student No. | Responsibility      |
| Samuel Hamwatile | 226145743   | Employee Management |

Samuel Hamwatile was responsible for the Employee Management module
(`employees.c`, `employees.h`). This module allows the user to:

- Add an employee
- Display employee information
- Search for an employee
- Calculate employee salary



| Student2             | Student No. | Responsibility      |
| Wilhelmine Kandjumbi | 226043460   | Budget Management   |

Wilhelmine Kandjumbi was responsible for the Budget Management module
(`budget.c`, `budget.h`). This module allows the user to:

- Enter their Budget
- Enter their Expenditure
- Calculate employee salary
- Tells the user that they are either Within or Over the Budget



| Student3             | Student No. | Responsibility      |
| Akwenye Petrus       | 226077799   | Supplier Management |

Akwenye Petrus was responsible for the Supplier Management module
(`suppliers.c`, `suppliers.h`). This module allows the user to:

- Add a Supplier
- Display the Suppliers information
- Search for a Supplier



| Student4             | Student No. | Responsibility      |
| Hermani Nuuyoma      | 225151782   | Asset Management    |

Hermani Nuuyoma was responsible for the Asset Management module
(`assets.c`, `assets.h`). This module allows the user to:

- Add an Asset
- Display the assets information
- Search for an asset



| Student5             | Student No. | Responsibility      |
| Junior Mwedihanga    | 225129019   | Reports             |

Junior Mwedihanga was responsible for the Reports module
(`reports.c`, `reports.h`). 

This module is the Combination of employee, budget, supplier and asset to create a report for each of them. For employee report it produces:
- Total amount of employees
- Average Salary
- Highest Salary
- Lowest Salary

For budget report:
- Total Allocated budget
- Total Expenditure
- Left-Over / Remaining budget
- Departments that are Overbudget

For supplier report:
- Shows all registered suppliers

For assets report:
- Shows All registered assets



| Student6             | Student No. | Responsibility      |
| Michael Makeva       | 225073730   | Functions, integration and validation |

Michael Makeva was responsible for the  Functions, integration and validations 



| Student7             | Student No. | Responsibility      |
| Antonio Kanga        | 226134431   | Testing, documentation and Git coordination |

Antonio Kanga was responsible for the final testing, documentation and Git coordination. Also the creation of the Main Menu and project skeloton.

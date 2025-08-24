# GPA Calculator

A simple C++ program to calculate the **GPA (Grade Point Average)** for a student based on the number of subjects, credit hours, and grades received.

---

## Features

- Input the number of subjects in the semester.
- Enter the **subject name**, **credit hours**, and **grade** for each subject.
- Converts letter grades (A, A-, B+, etc.) into numeric values.
- Calculates **Quality Points** and total credits.
- Outputs the **GPA** and a summary of all subjects.

---

## How to Use

1. Compile the program using a C++ compiler (e.g., `g++ main.cpp -o gpa_calculator`).
2. Run the program (`./gpa_calculator` on Mac/Linux or `gpa_calculator.exe` on Windows).
3. Follow the prompts:
    - Enter the number of subjects.
    - Enter each subject name.
    - Enter the credit hours for each subject.
    - Enter the grade received (A, A-, B+, etc.).
4. View the GPA and summary.

---

## Grade Conversion

| Letter Grade | Numeric Value |
|--------------|---------------|
| A            | 4.0           |
| A-           | 3.7           |
| B+           | 3.3           |
| B            | 3.0           |
| B-           | 2.7           |
| C+           | 2.3           |
| C            | 2.0           |
| C-           | 1.7           |
| D+           | 1.3           |
| D            | 1.0           |
| F            | Fail          |

> The program stops if an invalid grade or a failing grade is entered.

---

## Example Output

How many subject do you have in this semester? 3
Subject Name: Math
Credits: 3
What is your grade in the subject? A
Subject Name: Physics
Credits: 4
What is your grade in the subject? B+
Subject Name: Programming
Credits: 3
What is your grade in the subject? A-

Result Summary:
Math(3) = 12
Physics(4) = 13.2
Programming(3) = 11.1

Total Points: 36.3
Total Credits: 10
Your GPA: 3.63/4.0

---

## License

This project is licensed under the **MIT License**.

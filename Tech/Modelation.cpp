#include "Modelation.hpp"

void fillStudent(std::vector<std::unique_ptr<Student> > &students, const int &stud_num) {
    std::random_device rng;
    std::minstd_rand gen(rng());
    std::uniform_int_distribution<int> dist(0, 2);


    for (int i = 0; i < stud_num; i++) {
        switch (dist(gen)) {
            case 0:
                students.push_back(std::make_unique<BadStudent>("Student " + std::to_string(i)));

                break;
            case 1:
                students.push_back(std::make_unique<AvgStudent>("Student " + std::to_string(i)));

                break;
            case 2:
                students.push_back(std::make_unique<GoodStudent>("Student " + std::to_string(i)));

                break;
            default:
                std::cerr << "Error in Students generation with rng" << std::endl;
                break;
        }
    }
}

void EquatToStudents(std::vector<std::unique_ptr<Student> > &students, Teacher &teacher) {
    for (auto &student: students) {
        student->setEquat(teacher.giveEquation());
        teacher.addLetterToQ(student->writeLetter());
    }
}

void printMenu() {
    std::cout << "Menu" << std::endl;
    std::cout << "1. Change number of students (Default is 5)" << std::endl;
    std::cout << "2. Create student list" << std::endl;
    std::cout << "3. Send equations to students" << std::endl;
    std::cout << "4. Check student letters" << std::endl;
    std::cout << "5. Show current results" << std::endl;
    std::cout << "6. Instructions" << std::endl;
    std::cout << "0. Exit" << std::endl;
    std::cout << "Your choice: ";
}

void instruction(const int &stud_num) {
    std::cout << "Instructions" << std::endl;
    std::cout << "1. Changes the number of students. Accepts only integers." << std::endl;
    std::cout << "2. Creates a list of students of length " << stud_num << '.' << std::endl;
    std::cout << "3. Sends 1 random equation from the equats.txt for each student. Reusing function on formed student list will replace their equations." << std::endl;
    std::cout << "4. The teacher receives letters with solutions from students and checks them." << std::endl;
    std::cout << "5. Shows the current student performance." << std::endl;
    std::cout << "6. You are reading it" << std::endl;
    std::cout << "0. Exit is exit" << std::endl;
}

void Model::modelation() {
    Teacher teacher;
    teacher.getEquations("equats.txt");
    std::vector<std::unique_ptr<Student> > students;
    int stud_num = 5;
    bool exit_flag = false;

    int choice;
    while (!exit_flag) {
        printMenu();
        std::cin >> choice;
        switch (choice) {
            case 1: {
                std::cout << "Enter student number:";
                std::cin >> stud_num;
                if (stud_num < 1) {
                    std::cerr << "Invalid number of students. Using default" << std::endl;
                    stud_num = 5;
                }
                break;
            }

            case 2: {
                students.clear();
                teacher.clearTabel();
                fillStudent(students, stud_num);
                break;
            }

            case 3: {
                EquatToStudents(students, teacher);
                break;
            }

            case 4: {
                teacher.lettersCheck();
                break;
            }

            case 5: {
                teacher.printTabel();
                break;
            }

            case 6: {
                instruction(stud_num);
                break;
            }

            case 0: {
                exit_flag = true;
                break;
            }

            default: {
                std::cerr << "No position in menu. Try again" << std::endl;
                break;
            }
        }
    }
}

#include <iostream>
#include <string>

class Lecture {
public:
    std::string lecturerName;
    std::string subjectName;
    std::string courseName;
    static int lecturerCount;

    Lecture(const std::string& lecturer, const std::string& subject, const std::string& course) {
        lecturerName = lecturer;
        subjectName = subject;
        courseName = course;
        lecturerCount++;
    }

    void displayDetails() const {
        std::cout << "Lecturer Name: " << lecturerName << std::endl;
        std::cout << "Subject Name: " << subjectName << std::endl;
        std::cout << "Course Name: " << courseName << std::endl;
        std::cout << std::endl;
    }
};

int Lecture::lecturerCount = 0;

int main() {
    Lecture lectures[5];

    lectures[0] = Lecture("Lecturer 1", "Subject 1", "Course A");
    lectures[1] = Lecture("Lecturer 2", "Subject 2", "Course B");
    lectures[2] = Lecture("Lecturer 3", "Subject 3", "Course C");
    lectures[3] = Lecture("Lecturer 4", "Subject 4", "Course D");
    lectures[4] = Lecture("Lecturer 5", "Subject 5", "Course E");

    std::cout << "Total number of lecturers: " << Lecture::lecturerCount << std::endl;

    for (int i = 0; i < 5; ++i) {
        lectures[i].displayDetails();
    }

    return 0;
}

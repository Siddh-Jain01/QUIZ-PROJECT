#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<windows.h>
#include<time.h> // For true random number generation

using namespace std;

struct student {
    char nam[50], rollno[20];
    int marks, random;
};

student st;

// Function to print attractive headers
void printHeader(string subject) {
    system("CLS");
    cout << "\n\n\t\t==================================================\n";
    cout << "\t\t\t      " << subject << " QUIZ TEST\n";
    cout << "\t\t==================================================\n\n";
}

void cppp() {
    int i = 0;
    int arr[7] = {-1, -1, -1, -1, -1, -1, -1}; 
    st.marks = 0;
    char choice;

    while(i < 5) {
    back:   
        st.random = rand() % 7; // Changed to 7 because cases are 0 to 6
        for(int j = 0; j < 7; j++) {
            if(st.random == arr[j]) {
                goto back;
            }
        }
        arr[i] = st.random;
        
        printHeader("C++");
        cout << "\t\tQuestion " << i + 1 << " of 5\n";
        cout << "\t\t--------------------------------------------------\n\n";

        switch(st.random) {
            case 0:
                cout << "  Q) What is a correct syntax to output \"Hello World\" in C++?" << endl;
                cout << "  A. System.out.println(\"Hello world\");" << endl;
                cout << "  B. Console.WriteLine(\"Hello world\");" << endl;
                cout << "  C. print(\"Hello world\");" << endl;
                cout << "  D. cout<<\"Hello world\";" << endl;
                cout << "\n  Your Answer: ";
                choice = getch();
                if(choice == 'D' || choice == 'd') {
                    cout << choice << "\n\n  [+] Correct Answer!" << endl;
                    st.marks++;
                } else {
                    cout << choice << "\n\n  [-] Incorrect Answer! The correct answer is D." << endl;
                }
                break;
            case 1:
                cout << "  Q) Which of the following is called address operator?" << endl;
                cout << "  A. *" << endl;
                cout << "  B. &" << endl;
                cout << "  C. _" << endl;
                cout << "  D. %" << endl;
                cout << "\n  Your Answer: ";
                choice = getch();
                if(choice == 'B' || choice == 'b') {
                    cout << choice << "\n\n  [+] Correct Answer!" << endl;
                    st.marks++;
                } else {
                    cout << choice << "\n\n  [-] Incorrect Answer! The correct answer is B." << endl;
                }
                break;
            case 2:
                cout << "  Q) Which of the following is used for comments in C++?" << endl;
                cout << "  A. // comment" << endl;
                cout << "  B. /* comment */" << endl;
                cout << "  C. Both // and /* */" << endl;
                cout << "  D. // comment */" << endl;
                cout << "\n  Your Answer: ";
                choice = getch();
                if(choice == 'C' || choice == 'c') {
                    cout << choice << "\n\n  [+] Correct Answer!" << endl;
                    st.marks++;
                } else {
                    cout << choice << "\n\n  [-] Incorrect Answer! The correct answer is C." << endl;
                }
                break;
            case 3:
                cout << "  Q) Who created C++?" << endl;
                cout << "  A. Bjarne Stroustrup" << endl;
                cout << "  B. Dennis Ritchie" << endl;
                cout << "  C. Ken Thompson" << endl;
                cout << "  D. Brian Kernighan" << endl;
                cout << "\n  Your Answer: ";
                choice = getch();
                if(choice == 'A' || choice == 'a') {
                    cout << choice << "\n\n  [+] Correct Answer!" << endl;
                    st.marks++;
                } else {
                    cout << choice << "\n\n  [-] Incorrect Answer! The correct answer is A." << endl;
                }
                break;
            case 4:
                cout << "  Q) A language which has the capability to generate new data types is called:" << endl;
                cout << "  A. Extensible" << endl;
                cout << "  B. Overloaded" << endl;
                cout << "  C. Encapsulated" << endl;
                cout << "  D. Reprehensible" << endl;
                cout << "\n  Your Answer: ";
                choice = getch();
                if(choice == 'A' || choice == 'a') {
                    cout << choice << "\n\n  [+] Correct Answer!" << endl;
                    st.marks++;
                } else {
                    cout << choice << "\n\n  [-] Incorrect Answer! The correct answer is A." << endl;
                }
                break;
            case 5:
                cout << "  Q) Which of the following is called insertion/put to operator?" << endl;
                cout << "  A. <" << endl;
                cout << "  B. >" << endl;
                cout << "  C. <<" << endl;
                cout << "  D. >>" << endl;
                cout << "\n  Your Answer: ";
                choice = getch();
                if(choice == 'C' || choice == 'c') {
                    cout << choice << "\n\n  [+] Correct Answer!" << endl;
                    st.marks++;
                } else {
                    cout << choice << "\n\n  [-] Incorrect Answer! The correct answer is C." << endl;
                }
                break;
            case 6:
                cout << "  Q) Which of the following is called extraction/get from operator?" << endl;
                cout << "  A. <" << endl;
                cout << "  B. >" << endl;
                cout << "  C. <<" << endl;
                cout << "  D. >>" << endl;
                cout << "\n  Your Answer: ";
                choice = getch();
                if(choice == 'D' || choice == 'd') {
                    cout << choice << "\n\n  [+] Correct Answer!" << endl;
                    st.marks++;
                } else {
                    cout << choice << "\n\n  [-] Incorrect Answer! The correct answer is D." << endl;
                }
                break;
        }
        Sleep(1500); // Wait for 1.5 seconds so user can read the result
        i++;
    }
}

void java() {
    int i = 0;
    int arr[7] = {-1, -1, -1, -1, -1, -1, -1}; 
    st.marks = 0;
    char choice;

    while(i < 5) {
    back:   
        st.random = rand() % 7;
        for(int j = 0; j < 7; j++) {
            if(st.random == arr[j]) {
                goto back;
            }
        }
        arr[i] = st.random;
        
        printHeader("JAVA");
        cout << "\t\tQuestion " << i + 1 << " of 5\n";
        cout << "\t\t--------------------------------------------------\n\n";

        switch(st.random) {
            case 0:
                cout << "  Q) What is the size of int variable in Java?" << endl;
                cout << "  A. 8 bit" << endl;
                cout << "  B. 16 bit" << endl;
                cout << "  C. 32 bit" << endl;
                cout << "  D. 64 bit" << endl;
                cout << "\n  Your Answer: ";
                choice = getch();
                if(choice == 'C' || choice == 'c') {
                    cout << choice << "\n\n  [+] Correct Answer!" << endl;
                    st.marks++;
                } else {
                    cout << choice << "\n\n  [-] Incorrect Answer! The correct answer is C." << endl;
                }
                break;
            case 1:
                cout << "  Q) Which of the following is not a Java keyword?" << endl;
                cout << "  A. boolean" << endl;
                cout << "  B. string" << endl;
                cout << "  C. public" << endl;
                cout << "  D. void" << endl;
                cout << "\n  Your Answer: ";
                choice = getch();
                if(choice == 'B' || choice == 'b') {
                    cout << choice << "\n\n  [+] Correct Answer!" << endl;
                    st.marks++;
                } else {
                    cout << choice << "\n\n  [-] Incorrect Answer! The correct answer is B." << endl;
                }
                break;
            case 2:
                cout << "  Q) Who invented Java?" << endl;
                cout << "  A. James Gosling" << endl;
                cout << "  B. Dennis Ritchie" << endl;
                cout << "  C. Bjarne Stroustrup" << endl;
                cout << "  D. Tim Berners-Lee" << endl;
                cout << "\n  Your Answer: ";
                choice = getch();
                if(choice == 'A' || choice == 'a') {
                    cout << choice << "\n\n  [+] Correct Answer!" << endl;
                    st.marks++;
                } else {
                    cout << choice << "\n\n  [-] Incorrect Answer! The correct answer is A." << endl;
                }
                break;
            case 3:
                cout << "  Q) What is the extension of Java code files?" << endl;
                cout << "  A. .js" << endl;
                cout << "  B. .txt" << endl;
                cout << "  C. .class" << endl;
                cout << "  D. .java" << endl;
                cout << "\n  Your Answer: ";
                choice = getch();
                if(choice == 'D' || choice == 'd') {
                    cout << choice << "\n\n  [+] Correct Answer!" << endl;
                    st.marks++;
                } else {
                    cout << choice << "\n\n  [-] Incorrect Answer! The correct answer is D." << endl;
                }
                break;
            case 4:
                cout << "  Q) Which of these cannot be used for a variable name in Java?" << endl;
                cout << "  A. identifier" << endl;
                cout << "  B. keyword" << endl;
                cout << "  C. letter" << endl;
                cout << "  D. integer" << endl;
                cout << "\n  Your Answer: ";
                choice = getch();
                if(choice == 'B' || choice == 'b') {
                    cout << choice << "\n\n  [+] Correct Answer!" << endl;
                    st.marks++;
                } else {
                    cout << choice << "\n\n  [-] Incorrect Answer! The correct answer is B." << endl;
                }
                break;
            case 5:
                cout << "  Q) Which concept of C++ is not supported in Java?" << endl;
                cout << "  A. Encapsulation" << endl;
                cout << "  B. Inheritance" << endl;
                cout << "  C. Pointers" << endl;
                cout << "  D. Polymorphism" << endl;
                cout << "\n  Your Answer: ";
                choice = getch();
                if(choice == 'C' || choice == 'c') {
                    cout << choice << "\n\n  [+] Correct Answer!" << endl;
                    st.marks++;
                } else {
                    cout << choice << "\n\n  [-] Incorrect Answer! The correct answer is C." << endl;
                }
                break;
            case 6:
                cout << "  Q) Which method is used to find the length of a string in Java?" << endl;
                cout << "  A. length()" << endl;
                cout << "  B. getSize()" << endl;
                cout << "  C. len()" << endl;
                cout << "  D. size()" << endl;
                cout << "\n  Your Answer: ";
                choice = getch();
                if(choice == 'A' || choice == 'a') {
                    cout << choice << "\n\n  [+] Correct Answer!" << endl;
                    st.marks++;
                } else {
                    cout << choice << "\n\n  [-] Incorrect Answer! The correct answer is A." << endl;
                }
                break;
        }
        Sleep(1500); 
        i++;
    }
}

void html() {
    int i = 0;
    int arr[7] = {-1, -1, -1, -1, -1, -1, -1}; 
    st.marks = 0;
    char choice;

    while(i < 5) {
    back:   
        st.random = rand() % 7;
        for(int j = 0; j < 7; j++) {
            if(st.random == arr[j]) {
                goto back;
            }
        }
        arr[i] = st.random;
        
        printHeader("HTML");
        cout << "\t\tQuestion " << i + 1 << " of 5\n";
        cout << "\t\t--------------------------------------------------\n\n";

        switch(st.random) {
            case 0:
                cout << "  Q) What does HTML stand for?" << endl;
                cout << "  A. Hyper Text Preprocessor" << endl;
                cout << "  B. Hyper Text Markup Language" << endl;
                cout << "  C. Hyper Text Multiple Language" << endl;
                cout << "  D. Hyper Tool Multi Language" << endl;
                cout << "\n  Your Answer: ";
                choice = getch();
                if(choice == 'B' || choice == 'b') {
                    cout << choice << "\n\n  [+] Correct Answer!" << endl;
                    st.marks++;
                } else {
                    cout << choice << "\n\n  [-] Incorrect Answer! The correct answer is B." << endl;
                }
                break;
            case 1:
                cout << "  Q) Choose the correct HTML element for the largest heading:" << endl;
                cout << "  A. <heading>" << endl;
                cout << "  B. <h6>" << endl;
                cout << "  C. <h1>" << endl;
                cout << "  D. <head>" << endl;
                cout << "\n  Your Answer: ";
                choice = getch();
                if(choice == 'C' || choice == 'c') {
                    cout << choice << "\n\n  [+] Correct Answer!" << endl;
                    st.marks++;
                } else {
                    cout << choice << "\n\n  [-] Incorrect Answer! The correct answer is C." << endl;
                }
                break;
            case 2:
                cout << "  Q) What is the correct HTML element for inserting a line break?" << endl;
                cout << "  A. <break>" << endl;
                cout << "  B. <lb>" << endl;
                cout << "  C. <br>" << endl;
                cout << "  D. <line>" << endl;
                cout << "\n  Your Answer: ";
                choice = getch();
                if(choice == 'C' || choice == 'c') {
                    cout << choice << "\n\n  [+] Correct Answer!" << endl;
                    st.marks++;
                } else {
                    cout << choice << "\n\n  [-] Incorrect Answer! The correct answer is C." << endl;
                }
                break;
            case 3:
                cout << "  Q) Which character is used to indicate an end tag in HTML?" << endl;
                cout << "  A. *" << endl;
                cout << "  B. /" << endl;
                cout << "  C. <" << endl;
                cout << "  D. ^" << endl;
                cout << "\n  Your Answer: ";
                choice = getch();
                if(choice == 'B' || choice == 'b') {
                    cout << choice << "\n\n  [+] Correct Answer!" << endl;
                    st.marks++;
                } else {
                    cout << choice << "\n\n  [-] Incorrect Answer! The correct answer is B." << endl;
                }
                break;
            case 4:
                cout << "  Q) How can you make a numbered list?" << endl;
                cout << "  A. <dl>" << endl;
                cout << "  B. <list>" << endl;
                cout << "  C. <ul>" << endl;
                cout << "  D. <ol>" << endl;
                cout << "\n  Your Answer: ";
                choice = getch();
                if(choice == 'D' || choice == 'd') {
                    cout << choice << "\n\n  [+] Correct Answer!" << endl;
                    st.marks++;
                } else {
                    cout << choice << "\n\n  [-] Incorrect Answer! The correct answer is D." << endl;
                }
                break;
            case 5:
                cout << "  Q) Which HTML tag is used to define an internal style sheet?" << endl;
                cout << "  A. <css>" << endl;
                cout << "  B. <style>" << endl;
                cout << "  C. <script>" << endl;
                cout << "  D. <theme>" << endl;
                cout << "\n  Your Answer: ";
                choice = getch();
                if(choice == 'B' || choice == 'b') {
                    cout << choice << "\n\n  [+] Correct Answer!" << endl;
                    st.marks++;
                } else {
                    cout << choice << "\n\n  [-] Incorrect Answer! The correct answer is B." << endl;
                }
                break;
            case 6:
                cout << "  Q) What is the correct HTML for creating a hyperlink?" << endl;
                cout << "  A. <a>http://www.google.com</a>" << endl;
                cout << "  B. <a name=\"http://www.google.com\">Google</a>" << endl;
                cout << "  C. <a href=\"http://www.google.com\">Google</a>" << endl;
                cout << "  D. <a url=\"http://www.google.com\">Google</a>" << endl;
                cout << "\n  Your Answer: ";
                choice = getch();
                if(choice == 'C' || choice == 'c') {
                    cout << choice << "\n\n  [+] Correct Answer!" << endl;
                    st.marks++;
                } else {
                    cout << choice << "\n\n  [-] Incorrect Answer! The correct answer is C." << endl;
                }
                break;
        }
        Sleep(1500); 
        i++;
    }
}

void result() {
    system("CLS");
    cout << "\n\n\t\t==================================================\n";
    cout << "\t\t\t        QUIZ RESULT\n";
    cout << "\t\t==================================================\n\n";
    
    float percentage = 0;
    cout << "\t\t Student Name : " << st.nam << endl;
    cout << "\t\t Roll no      : " << st.rollno << endl;
    cout << "\t\t Marks        : " << st.marks << " out of 5" << endl;
    
    // Calculated based on 5 questions now
    percentage = (100.0 * st.marks) / 5;
    cout << "\t\t Percentage   : " << percentage << "%" << endl;
    
    cout << "\t\t--------------------------------------------------\n";
    if(percentage >= 50) {
        cout << "\t\t Status       : PASS \n";
    } else {
        cout << "\t\t Status       : FAIL \n";
    }
    cout << "\t\t==================================================\n\n";
    system("PAUSE");
}

int main() {
    srand(time(0)); // Seed for true random generation
    char press, select;
    
    do {
        system("CLS");
        cout << "\n\n\t\t==================================================\n";
        cout << "\t\t\t      WELCOME TO QUIZ SYSTEM\n";
        cout << "\t\t==================================================\n\n";
        
        cout << "\t\t Enter name: ";
        cin.ignore(); // clear buffer before taking string input
        cin.getline(st.nam, 50);
        
        cout << "\t\t Enter roll no: ";
        cin.getline(st.rollno, 20);
        
        system("CLS");
        cout << "\n\n\t\t==================================================\n";
        cout << "\t\t\t      SUBJECT SELECTION\n";
        cout << "\t\t==================================================\n\n";
        cout << "\t\t Note: Marks less than 50% will be considered FAIL\n\n";
        cout << "\t\t Select the subject for your quiz:\n\n";
        cout << "\t\t  1) C++\n";
        cout << "\t\t  2) Java\n";
        cout << "\t\t  3) HTML\n\n";
        cout << "\t\t Enter your choice (1/2/3): ";
        select = getch();
        
        switch(select) {
            case '1':
                cppp();
                result();
                break;
            case '2':
                java();
                result();
                break;
            case '3':
                html();
                result();
                break;
            default:
                cout << "\n\n\t\t Invalid input! Please try again." << endl;
                Sleep(1500);
                break;
        }
        
        system("CLS");
        cout << "\n\n\t\t Press 'Y' to play again or any other key to EXIT: ";
        press = getch();
        
    } while(press == 'y' || press == 'Y');
    
    return 0;
}
//Data Structures and Algorithms
// Basic Concepts



// Variables and Data types

/*#include<iostream>
#include<string>

int main() {
	int age = 23;
	float temp = 33.4f;
	char grade = 'A';
	std::string name = "Raghav";
	double pi = 3.14;
	bool is_happy = true;
	
	
	std::cout << "Age: " << age << std::endl;
	std::cout << "Temp: " << temp << std::endl;
	std::cout << "Grade: " << grade << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Pi: " << pi << std::endl;
	std::cout << "Is happy: " << is_happy << std::endl;
	
	
	return 0;
}
*/

// Control Statements or Control Structures
/*
#include<iostream>
using namespace std;

int main() {
	int a, b;
	cout << "enter two numbers: ";
	cin>> a >> b;
	
	int sum = a + b;
	cout << "Sum is: " << sum << endl;
	
	return 0;
}*/


/*#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "enter a num";
	cin >> num;
	
	if (num > 0) {
		cout << "the num is positive";
	}
	else {
		cout << "the num is negative";
	}
	return 0;
}*/


/*#include<iostream>
using namespace std;
int main() {
	int num;
	cout << "enter a num:";
	cin >> num;
	
	if (num % 2 == 0) {
		cout << "The num is even."<< endl;
	} else {
		cout << "The num is odd." << endl;
	}
	return 0;
}*/


/*#include<iostream>
using namespace std;
int main() {
	int marks;
	cout << "enter marks: ";
	cin >> marks;
	
	
	if (marks >= 90) {
		cout << "A grade";
	} else if (marks >= 80) {
		cout << "B grade";
	} else if (marks >= 70) {
		cout << "C grade";
	} else if (marks >= 60) {
	  cout << "D grade";
	} else {
		cout << "Fail";
	}
	return 0;
}*/

#include<iostream>
#include<map>
#include<sstream>
using namespace std;
int convert_to_number(const string &input) {
    map<string, int> words = {{"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5},
                              {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}, {"ten", 10},
                              {"hundred", 100}, {"thousand", 1000}, {"million", 1000000}};
    istringstream stream(input);
    string word;
    int current = 0, result = 0;

    while (stream >> word) {
        for (char &c : word) c = tolower(c);
        if (word == "and") continue;
        int value = words[word];
        current = (value >= 100) ? current * value : current + value;
        if (value >= 1000) result += current, current = 0;
    }
    return result + current;
}

int main() {
	string input1 = "Three hundred million";
	string input2 = "Five hundred thousand";
	
	int num1 = convert_to_number(input1);
	int num2 = convert_to_number(input2);
	
	cout << "value: " << num1 << endl;
	cout << "value: " << num2 << endl;
 }





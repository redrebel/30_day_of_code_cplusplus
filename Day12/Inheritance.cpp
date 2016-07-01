//
// Created by Lee Jeonggeun on 2016. 7. 1..
//
#include <iostream>
#include <vector>

using namespace std;


class Person{
protected:
    string firstName;
    string lastName;
    int id;
public:
    Person(string firstName, string lastName, int identification){
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson(){
        cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
    }

};

class Student :  public Person{
private:
    vector<int> testScores;
public:
    // Write your constructor
    Student(string firstName, string lastName, int identification, vector<int> scores):Person(firstName, lastName, identification){

        this->testScores = scores;
    }
    // Write char calculate()
    string calculate(){
        int sum=0;
        int classNum = testScores.size();
        for(int i=0; i<classNum; i++){
            sum+=testScores[i];
        }
        int cal = sum/classNum;
        string grade;
        if(40 > cal){
            grade = "T";
        }
        else if(40<= cal && cal < 55){
            grade = "D";
        }
        else if(55 <= cal && cal < 70){
            grade = "P";
        }
        else if(70<= cal && cal < 80){
            grade = "A";
        }
        else if(80<= cal && cal < 90){
            grade = "E";
        }
        else if(90 <= cal && cal <= 100){
            grade = "O";
        }
        return grade;
    }
};

int main() {
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for(int i = 0; i < numScores; i++){
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student* s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}
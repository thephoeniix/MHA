#ifndef FUNCIONES_H_
#define FUNCIONES_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

class Hero {
    private:
    std::string name;
    std::string type;
    std::string quirk;
    int power;
    int speed;
    int technique;
    int intelligence;
    int cooperativeness;

    public:
    // Constructor
    Hero(string name, string type, string quirk,
         int power, int speed, int technique, int intelligence, int cooperativeness)
        : name(name), type(type), quirk(quirk),
          power(power), speed(speed), technique(technique),
          intelligence(intelligence), cooperativeness(cooperativeness) {}

    // Method to convert the Hero object to a string
    std::string toString() {
        std::string heroString = "Name: " + name + "\n";
        heroString += "Type: " + type + "\n";
        heroString += "Quirk: " + quirk + "\n";
        heroString += "Power: " + to_string(power) + "\n";
        heroString += "Speed: " + to_string(speed) + "\n";
        heroString += "Technique: " + to_string(technique) + "\n";
        heroString += "Intelligence: " + to_string(intelligence) + "\n";
        heroString += "Cooperativeness: " + to_string(cooperativeness) + "\n";

        return heroString;
    }

    int getSpeed() const {
        return speed;
    }

    string getName() const {
        return name;
    }

 
};

 std::vector<Hero> readHeroesFromFile(const std::string& filename) {
    std::vector<Hero> heroes;
    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cout << "Error: Unable to open file " << filename << std::endl;
        return heroes;
    }

    string line;
    while (std::getline(file, line)) {
        istringstream iss(line);
        string name, type, quirk;
        int power, speed, technique, intelligence, cooperativeness;

        if (!(iss >> name >> type >> quirk >> power >> speed >> technique >> intelligence >> cooperativeness)) {
            cout << "Error: Invalid input in line - " << line << std::endl;
            continue;
        }

        heroes.emplace_back(name, type, quirk, power, speed, technique, intelligence, cooperativeness);
    }

    file.close();
    return heroes;
    
    }
    
vector<Hero> merge(std::vector<Hero>& left, vector<Hero>& right) {
    vector<Hero> result;
    size_t leftIndex = 0, rightIndex = 0;

    while (leftIndex < left.size() && rightIndex < right.size()) {
        if (left[leftIndex].getSpeed() > right[rightIndex].getSpeed()) {
            result.push_back(left[leftIndex]);
            leftIndex++;
        } else {
            result.push_back(right[rightIndex]);
            rightIndex++;
        }
    }

    while (leftIndex < left.size()) {
        result.push_back(left[leftIndex]);
        leftIndex++;
    }

    while (rightIndex < right.size()) {
        result.push_back(right[rightIndex]);
        rightIndex++;
    }

    return result;
}

vector<Hero> mergeSort(vector<Hero>& heroes) {
    if (heroes.size() <= 1) {
        return heroes;
    }

    size_t middle = heroes.size() / 2;
    vector<Hero> left(heroes.begin(), heroes.begin() + middle);
    vector<Hero> right(heroes.begin() + middle, heroes.end());

    left = mergeSort(left);
    right = mergeSort(right);

    return merge(left, right);
}


#endif
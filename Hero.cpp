#ifndef HERO_H_
#define HERO_H

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;


struct Hero {
    std::string name;
    std::string type;
    std::string quirk;
    int power;
    int speed;
    int technique;
    int intelligence;
    int cooperativeness;
    Hero* nextPower;
    Hero* prevPower;
    Hero* nextSpeed;
    Hero* prevSpeed;
    Hero* nextTechnique;
    Hero* prevTechnique;
    Hero* nextCooperativeness;
    Hero* prevCooperativeness;

     Hero* prev;  // pointer to the previous element
    Hero* next;  // pointer to the next element

     // Getter functions
    std::string getName() { return name; }
    std::string getType() { return type; }
    int getPower() { return power; }
    int getSpeed() { return speed; }
    int getTechnique() { return technique; }
    int getCooperativeness() { return cooperativeness; }

    Hero(std::string n, std::string t, std::string q, int p, int s, int tech, int intel, int coop)
        : name(n), type(t), quirk(q), power(p), speed(s), technique(tech), intelligence(intel), cooperativeness(coop),
          nextPower(nullptr), prevPower(nullptr), nextSpeed(nullptr), prevSpeed(nullptr),
          nextTechnique(nullptr), prevTechnique(nullptr), nextCooperativeness(nullptr), prevCooperativeness(nullptr) {}
};

// Define a tree node for sorting heroes by type
struct TreeNode {
    std::string type;
    Hero* hero;
    TreeNode* left;
    TreeNode* right;

    TreeNode(std::string t, Hero* h)
        : type(t), hero(h), left(nullptr), right(nullptr) {}
};

// Function to insert a hero into the tree based on type
TreeNode* insert(TreeNode* root, Hero* hero) {
    if (!root) {
        return new TreeNode(hero->type, hero);
    }

    if (hero->type < root->type) {
        root->left = insert(root->left, hero);
    } else {
        root->right = insert(root->right, hero);
    }

    return root;

    
}

// Function to traverse and display the tree
void displayTree(TreeNode* root) {
    if (!root) return;
    displayTree(root->left);
    std::cout << "Type: " << root->type << ", Name: " << root->hero->name << std::endl;
    displayTree(root->right);
}

class DoublyLinkedList {
public:
    Hero* head;
    Hero* tail;

    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void insert(Hero* hero) {
        if (head == nullptr) {
            head = hero;
            tail = hero;
        } else {
            hero->prev = tail;
            tail->next = hero;
            tail = hero;
        }
    }

    void displayList() {
        Hero* current = head;

        while (current != nullptr) {
            cout << current->name << endl;
            current = current->next;
        }
    }

    void sortByPower() {
        if (head == nullptr || head == tail) {
            return;
        }

        bool sorted = false;
        while (!sorted) {
            sorted = true;
            Hero* current = head;

            while (current->next != nullptr) {
                if (current->power < current->next->power) {
                    swap(current, current->next);
                    sorted = false;
                }
                current = current->next;
            }
        }
    }

    void sortBySpeed() {
        if (head == nullptr || head == tail) {
            return;
        }

        bool sorted = false;
        while (!sorted) {
            sorted = true;
            Hero* current = head;

            while (current->next != nullptr) {
                if (current->speed < current->next->speed) {
                    swap(current, current->next);
                    sorted = false;
                }
                current = current->next;
            }
        }
    }

    void sortByTechnique() {
        if (head == nullptr || head == tail) {
            return;
        }

        bool sorted = false;
        while (!sorted) {
            sorted = true;
            Hero* current = head;

            while (current->next != nullptr) {
                if (current->technique < current->next->technique) {
                    swap(current, current->next);
                    sorted = false;
                }
                current = current->next;
            }
        }
    }

    void sortByIntelligence() {
        if (head == nullptr || head == tail) {
            return;
        }

        bool sorted = false;
        while (!sorted) {
            sorted = true;
            Hero* current = head;

            while (current->next != nullptr) {
                if (current->intelligence < current->next->intelligence) {
                    swap(current, current->next);
                    sorted = false;
                }
                current = current->next;
            }
        }
    }

    void sortByCooperativeness() {
        if (head == nullptr || head == tail) {
            return;
        }

        bool sorted = false;
        while (!sorted) {
            sorted = true;
            Hero* current = head;

            while (current->next != nullptr) {
                if (current->cooperativeness < current->next->cooperativeness) {
                    swap(current, current->next);
                    sorted = false;
                }
                current = current->next;
            }
        }
    }

    void swap(Hero* a, Hero* b) {
        Hero* temp = new Hero("", "", "", 0, 0, 0, 0, 0);
        temp->name = a->name;
        temp->type = a->type;
        temp->quirk = a->quirk;
        temp->power = a->power;
        temp->speed = a->speed;
        temp->technique = a->technique;
        temp->intelligence = a->intelligence;
        temp->cooperativeness = a->cooperativeness;

        a->name = b->name;
        a->type = b->type;
        a->quirk = b->quirk;
        a->power = b->power;
        a->speed = b->speed;
        a->technique = b->technique;
        a->intelligence = b->intelligence;
        a->cooperativeness = b->cooperativeness;

        b->name = temp->name;
        b->type = temp->type;
        b->quirk = temp->quirk;
        b->power = temp->power;
        b->speed = temp->speed;
        b->technique = temp->technique;
        b->intelligence = temp->intelligence;
        b->cooperativeness = temp->cooperativeness;
    }
};

Hero* searchByName(TreeNode* root, const std::string& name) {
    if (root == nullptr || root->hero->name == name) {
        return (root == nullptr) ? nullptr : root->hero;
    }

    if (name < root->hero->name) {
        return searchByName(root->left, name);
    } else {
        return searchByName(root->right, name);
    }
}


#endif
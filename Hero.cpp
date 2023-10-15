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

class LinkedListNode {
public:
    string name;
    string quirk;
    LinkedListNode* prev;
    LinkedListNode* next;

    LinkedListNode(string n, string q) {
        name = n;
        quirk = q;
        prev = nullptr;
        next = nullptr;
    }
};

class DoubleLinkedList {
public:
    LinkedListNode* head;

    DoubleLinkedList() {
        head = nullptr;
    }

    void insert(string name, string quirk) {
        LinkedListNode* newNode = new LinkedListNode(name, quirk);

        if (head == nullptr) {
            head = newNode;
        } else {
            LinkedListNode* current = head;
            
            while (current->next != nullptr) {
                current = current->next;
            }
            
            current->next = newNode;
            newNode->prev = current;
        }
    }

    void sort() {
        if (head == nullptr || head->next == nullptr) {
            return;
        }

        LinkedListNode* current = head;
        LinkedListNode* nextNode = nullptr;
        bool swapped = false;

        do {
            swapped = false;
            current = head;
            
            while (current->next != nullptr) {
                nextNode = current->next;

                if (current->name > nextNode->name) {
                    swap(current, nextNode);
                    swapped = true;
                } else {
                    current = current->next;
                }
            }
        } while (swapped);
    }

    void swap(LinkedListNode* a, LinkedListNode* b) {
        if (a->prev != nullptr) {
            a->prev->next = b;
        } else {
            head = b;
        }

        if (b->next != nullptr) {
            b->next->prev = a;
        }
        
        a->next = b->next;
        b->prev = a->prev;
        
        a->prev = b;
        b->next = a;
    }

    void printList() {
        LinkedListNode* current = head;

        while (current != nullptr) {
            cout << "Name: "<< current->name<<"," <<endl; 
            cout <<"Quirk: " << current->quirk << endl;
            cout << endl;
            current = current->next;
        }
    }

    
};



#endif
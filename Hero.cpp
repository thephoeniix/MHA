#ifndef HERO_H_
#define HERO_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <queue>
using namespace std;

//Hero Structure 
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

    Hero* prev;   //pointer to previous element in the Doubly Linked List
    Hero* next;   //pointer to next element in the Doubly Linked List

     // Getter functions
    std::string getName() { return name; }
    std::string getType() { return type; }
    int getPower() { return power; }
    int getSpeed() { return speed; }
    int getTechnique() { return technique; }
    int getCooperativeness() { return cooperativeness; }

    //Constructor to initialize Hero
    Hero(std::string n, std::string t, std::string q, int p, int s, int tech, int intel, int coop)
        : name(n), type(t), quirk(q), power(p), speed(s), technique(tech), intelligence(intel), cooperativeness(coop),
          nextPower(nullptr), prevPower(nullptr), nextSpeed(nullptr), prevSpeed(nullptr),
          nextTechnique(nullptr), prevTechnique(nullptr), nextCooperativeness(nullptr), prevCooperativeness(nullptr) {}
};

//Define the TreeNode for the Binary Tree 
struct TreeNode {
    std::string type;
    Hero* hero;
    TreeNode* left;
    TreeNode* right;

  //Constructor to initialize the TreeNode
    TreeNode(std::string t, Hero* h)
        : type(t), hero(h), left(nullptr), right(nullptr) {}
};


//Function to insert a Hero into the Binary Tree based on the type
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

//Funtion to display the Binary Tree
void displayTree(TreeNode* root) {
    if (!root) return;
    displayTree(root->left);
    std::cout << "Type: " << root->type << ", Name: " << root->hero->name << std::endl;
    displayTree(root->right);
}


//Define a Doubly Linked List class
class DoublyLinkedList {
public:
    Hero* head;
    Hero* tail;

    void insert(Hero*); //Funtion to insert a hero into the Doubly Linked List
    void displayList(); //Funtion to display the Doubly Linked List
    //Funtion to sort the Doubly Linked List based onn different atributes based on what is asked
    void sortByPower(); 
    void sortBySpeed();
    void sortByTechnique();
    void sortByCooperativeness();
    void sortByIntelligence();
    //Swap function two Hero Object in the Doubly linked List
    void swap(Hero* a, Hero* b);

    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

};
   

    void DoublyLinkedList::insert(Hero* hero) {
        if (head == nullptr) {
            head = hero;
            tail = hero;
        } else {
            hero->prev = tail;
            tail->next = hero;
            tail = hero;
        }
    }

    void DoublyLinkedList::displayList() {
        Hero* current = head;

        while (current != nullptr) {
            cout << current->name << endl;
            current = current->next;
        }
    }

    void DoublyLinkedList::sortByPower() {
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

    void DoublyLinkedList::sortBySpeed() {
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

    void DoublyLinkedList::sortByTechnique() {
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

    void DoublyLinkedList::sortByIntelligence() {
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

    void DoublyLinkedList::sortByCooperativeness() {
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

    void DoublyLinkedList::swap(Hero* a, Hero* b) {
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

//Function to search for a Hero by name using Breadth-First Search  
Hero* searchByName(TreeNode* root, const std::string& name) {
    if (!root) {
        return nullptr;   //If the tree is empty, the Hero is not found
    }

    std::queue<TreeNode*> queue;
    queue.push(root);

    while (!queue.empty()) {
        TreeNode* current = queue.front();
        queue.pop();

        if (current->hero->name == name) {
            return current->hero;   //Hero found
        }

        // Enqueue the left and rigth child for further search
        if (current->left) {
            queue.push(current->left);
        }
        if (current->right) {
            queue.push(current->right);
        }
    }

    return nullptr;  
}

//Function to upload or edit a Hero´s infomation 
void uploadOrEditHero(TreeNode*& typeTree, DoublyLinkedList& dl) {
    int choice;
    cout << "Choose an option:" << endl;
    cout << "1. Upload a new hero" << endl;
    cout << "2. Edit an existing hero" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
            //Upload a new hero
        string name, type, quirk;
        int power, speed, technique, intelligence, cooperativeness;

        cout << "Enter the hero's details:" << endl;
        cout << "Name: (separated by - on compound names) ";
        cin >> name;
        cout << "Type:  ";
        cin >> type;
        cout << "Quirk: ";
        cin >> quirk;
        cout << "Power: (0-5)";
        cin >> power;
        cout << "Speed: (0-5)";
        cin >> speed;
        cout << "Technique: (0-5)";
        cin >> technique;
        cout << "Intelligence: (0-5)";
        cin >> intelligence;
        cout << "Cooperativeness: (0-5)";
        cin >> cooperativeness;

        
        Hero newHero(name, type, quirk, power, speed, technique, intelligence, cooperativeness);

        
        ofstream outFile("mha.txt", ios::app);
        if (outFile.is_open()) {
            outFile << endl << newHero.name << " " << newHero.type << " " << newHero.quirk << " "
                    << newHero.power << " " << newHero.speed << " " << newHero.technique << " "
                    << newHero.intelligence << " " << newHero.cooperativeness;
            outFile.close();
            cout << "New hero uploaded successfully!" << endl;
        } else {
            cerr << "Failed to open the file for writing." << endl;
        }

    } else if (choice == 2) {
            //Edit an existinng Hero 
        string searchName;
        cout << "Enter the name of the hero you want to edit: ";
        cin >> searchName;

        
        Hero* foundHero = searchByName(typeTree, searchName);
        if (foundHero != nullptr) {
            // Prompt the user to update the hero's details
            cout << "Enter updated details for " << foundHero->getName() << ":" << endl;
            cout << "Name: ";
            cin >> foundHero->name;
            cout << "Type: (0-5) ";
            cin >> foundHero->type;
            cout << "Quirk :(0-5) ";
            cin >> foundHero->quirk;
            cout << "Power: (0-5)";
            cin >> foundHero->power;
            cout << "Speed: (0-5)";
            cin >> foundHero->speed;
            cout << "Technique: (0-5)";
            cin >> foundHero->technique;
            cout << "Intelligence: (0-5)";
            cin >> foundHero->intelligence;
            cout << "Cooperativeness: (0-5)";
            cin >> foundHero->cooperativeness;

          
            ofstream outFile("mha.txt");
            if (outFile.is_open()) {
                Hero* current = dl.head;
                while (current != nullptr) {
                    outFile << current->name << " " << current->type << " " << current->quirk << " "
                            << current->power << " " << current->speed << " " << current->technique << " "
                            << current->intelligence << " " << current->cooperativeness << endl;
                    current = current->next;
                }
                outFile.close();
                cout << "Hero details updated successfully!" << endl;
            } else {
                cerr << "Failed to open the file for writing." << endl;
            }
        } else {
            cout << "Hero not found." << endl;
        }
    } else {
        cout << "Invalid choice." << endl;
    }
}



#endif
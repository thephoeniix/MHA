#include "Hero.cpp"
#include <iostream>
#include <vector>
using namespace std;

#define TRUE 1
#define FALSE 0

int main() {

    ifstream inputFile("mha.txt");
    if (!inputFile) {
        std::cerr << "Failed to open the input file." << std::endl;
        return 1;
    }

    Hero* searchByName(TreeNode* root, const std::string& name);
    DoublyLinkedList dl;



    TreeNode* typeTree = nullptr;
    Hero* powerHead = nullptr;
    Hero* powerTail = nullptr;
    Hero* speedHead = nullptr;
    Hero* speedTail = nullptr;
    Hero* techniqueHead = nullptr;
    Hero* techniqueTail = nullptr;
    Hero* cooperativenessHead = nullptr;
    Hero* cooperativenessTail = nullptr;

    std::string line;
    while (std::getline(inputFile, line)) {
        string name, type, quirk;
        int power, speed, technique, intelligence, cooperativeness;

        istringstream iss(line);
        iss >> name >> type >> quirk >> power >> speed >> technique >> intelligence >> cooperativeness;

        Hero* hero = new Hero(name, type, quirk, power, speed, technique, intelligence, cooperativeness);
        
        
        typeTree = insert(typeTree, hero);
         dl.insert(hero);
     }


    
   int option;  
    char repetir = TRUE;

do {
    system("cls");

    
    printf("\n\n\t\t\t------------\n");
    printf("\t\t\t----MENU----\n");
    printf("\t\t\t------------\n");
    printf("\t1. Sorted by type\n");
    printf("\t2. Sorted by power\n");
    printf("\t3. Sorted by speed\n");
    printf("\t4. Sorted by technique\n");
    printf("\t5. Sorted by intelligence\n");
    printf("\t6. Search for a cooperativeness\n");
    printf("\t7. Search for a name\n");
    printf("\t0. Out\n");
    printf("\tpress any key to continue\n");

    printf("\n\tIngrese una opcion: ");
    scanf("%d", &option);

    int num1, num2;
    float res;
    switch (option) {
        case 1:
            cout << "Sorted Heroes by Type:" << std::endl;
            displayTree(typeTree);

            system("pause>nul");
            break;

        case 2:
            cout << "Heroes sorted by power:" << endl;
            dl.sortByPower();
            dl.displayList();

            system("pause>nul");
            break;

        case 3:
           cout << "\nHeroes sorted by speed:" << endl;
           dl.sortBySpeed();
           dl.displayList();

            system("pause>nul");
            break;

        case 4:
            cout << "\nHeroes sorted by technique:" << endl;
            dl.sortByTechnique();
            dl.displayList();

            system("pause>nul");
            break;

        case 5:
             cout << "\nHeroes sorted by intelligence:" << endl;
             dl.sortByIntelligence();
             dl.displayList();

            system("pause>nul");
            break;

        case 6:
            cout << "\nHeroes sorted by cooperativeness:" << endl;
            dl.sortByCooperativeness();
            dl.displayList();

            system("pause>nul");
            break;

        case 7:
            {
                string searchName;
                 cout << "Enter the name of the character: ";
                cin >> searchName;

              Hero* foundHero = searchByName(typeTree, searchName);
             if (foundHero != nullptr) {
            cout << "Character found!" << endl;
            // Display the hero's details here using the foundHero pointer
            cout << "Name: " << foundHero->getName() << endl;
            cout << "Type: " << foundHero->getType() << endl;
            cout << "Power: " << foundHero->getPower() << endl;
            cout << "Speed: " << foundHero->getSpeed() << endl;
            cout << "Technique: " << foundHero->getTechnique() << endl;
            cout << "Cooperativeness: " << foundHero->getCooperativeness() << endl;
        }
        else {
            cout << "Character not found!" << endl;
        }

                system("pause>nul");
                break;
            }

        case 0:
            repetir = FALSE;
            break;
    }
} while (repetir);




    
    return 0;
};







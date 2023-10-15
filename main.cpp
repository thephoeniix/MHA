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

    DoubleLinkedList powerList;
    DoubleLinkedList speedList;
    DoubleLinkedList techniqueList;
    DoubleLinkedList cooperationList;


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

        powerList.insert(name, quirk);
        speedList.insert(name, quirk);
        techniqueList.insert(name, quirk);
        cooperationList.insert(name, quirk);
     }


     int option;
    char repetir = TRUE;
    
    do {
        system("cls");
        
        //MENU
        printf("\n\n\t\t\t------------\n");
        printf("\t\t\t----MENU----\n");
        printf("\t\t\t------------\n");
        printf("\n\t1. Get all heroes\n");
        printf("\t1. Sorted by type\n");
        printf("\t2. Sorted by power\n");
        printf("\t3. Sorted by speed\n");
        printf("\t4. Sorted by technique\n");
        printf("\t5. Sorted by cooperativeness\n");
          printf("\tpress any key to continue\n");

        printf("\t0. SALIR\n");
        
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
                 cout << "\nHeroes sorted by power:" << endl;
                 powerList.sort();
                 powerList.printList();
        
                system("pause>nul");
                break;

            case 3:
                 cout << "\nHeroes sorted by power:" << endl;
                 powerList.sort();
                 powerList.printList();
                
        
                system("pause>nul");
                break;

            case 4:
                 cout << "\nHeroes sorted by speed:" << endl;
                 speedList.sort();
                 speedList.printList(); 
        
                system("pause>nul");
                break;

            case 5:
                cout << "\nHeroes sorted by technique:" << endl;
                 techniqueList.sort();
                 techniqueList.printList();
        
                system("pause>nul");
                break;

                
            case 6:

                 cout << "\nHeroes sorted by cooperativeness:" << endl;
                 cooperationList.sort();
                 cooperationList.printList();

        
                system("pause>nul");
                break;

            
            
            case 0:
            	repetir = FALSE;
            	break;
        }        
    } while (repetir);




    
    return 0;
};

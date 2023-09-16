#include "Hero.cpp"
#include <iostream>
#include <vector>
using namespace std;

#define TRUE 1
#define FALSE 0

int main() {
     // Read heroes from the file
    std::vector<Hero> heroes = readHeroesFromFile("./Heroes.txt");

    int option;
    char repetir = TRUE;
    
    do {
        system("cls");
        
        //MENU
        printf("\n\n\t\t\t------------\n");
        printf("\t\t\t----MENU----\n");
        printf("\t\t\t------------\n");
        printf("\n\t1. Get all heroes\n");
        printf("\t2. Sort by Speed (better to worst)\n");
        printf("\t0. SALIR\n");
        
        printf("\n\tIngrese una opcion: ");
        scanf("%d", &option);
        
        int num1, num2;
		float res;
        switch (option) {
            case 1:
                  // Print information about each hero
                    for (Hero& hero : heroes) {
                        cout << hero.toString() << std::endl;
                    }
                
                system("pause>nul");
                break;
                
            case 2:
                
                     // Sort heroes by speed using merge sort
                    heroes = mergeSort(heroes);

                    // Print names of heroes from best to worst speed
                    cout << "Heroes sorted by speed (best to worst):" << std::endl;
                    for (const Hero& hero : heroes) {
                        cout << hero.getName() << " - Speed: " << hero.getSpeed() << std::endl;
                    }

                system("pause>nul");
                break;
            
            case 0:
            	repetir = FALSE;
            	break;
        }        
    } while (repetir);


   



    return 0;
}


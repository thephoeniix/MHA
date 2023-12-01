# My Hero Academia Hero Database
![image](https://github.com/thephoeniix/MHA/assets/73914621/22cdbf1b-37aa-437c-8bb3-08f86f440991)


This project is based on the popular anime and manga series My Hero Academia. The database enables users to easily sort characters with unique traits. It also allows users to search for heroes by name. Add heroes an even edit new heroes already in the database. 

This repository contains information and characteristics of each character such as name, type (villain, pro-hero, teacher, or student) quirk, power, speed, technique, intelligence, and cooperativeness. 

## Hero Information

- **Name**: Fat-Gum
- **Type**: Pro-Hero
- **Quirk**: Fat Absorption
- **Power**: 5
- **Speed**: 2
- **Technique**: 4
- **Intelligence**: 4
- **Cooperativeness**: 5


 ## SICT0302B: TOMA DECISIONES
 ### SELECCIONA Y USA UNA ESTRUCTURA LINEAL ADEACUADA
 The database is implemented using a linked list to store the heroes. This allows for efficient insertion, deletion, and search operations

  
 ### SELECCIONA UN ALGORITMO DE ORDENAMIENTO ADECUADO
The bubble sort algorithm operates by continuously comparing neighboring elements within the list and exchanging their positions if they are unordered. The bubble sort algorithm is a simple and inefficient sorting algorithm, but it is easy to implement. It is also a good algorithm for sorting small linked lists.
  
  
 ### USA UN ÁRBOL ADECUADO PARA RESOLVER UN PROBLEMA
The database also uses a binary search tree to store the heroes by type. This allows for efficient sorting operations.
The function in where I use BST `Hero.h` in the class of `TreeNode`
 
 
 ## SICT0301B: EVALÚA LOS COMPONENTES
 ### PRESENTA CASOS PRUEBA:
#### _How to use the database_
 To use the database, simply compile and run the main.cpp file. The program will then display a menu with the following options:
   
 1. Sorted by type
 2. Sorted by power
 3. Sorted by speed
 4. Sorted by technique
 5. Sorted by intelligence
 6. Sorted by cooperativeness
 7. Search for a name
 8. Edit or Create New hero 
 9. Out
  
 To select an option, simply enter the corresponding number and press enter.
  
 ##### *Example usage*

To sort the character by type, enter 1 and press enter. The program will then display a list of all character, sorted by type.
  ```
 Sorted Heroes by Type:
 Type: pro-hero, Name: Endeavor
 Type: pro-hero, Name: Hawks
 [...]
 Type: student, Name: Dynamight
 Type: student, Name: Deku
 [...]
 Type: villain, Name: Overhaul
 Type: villain, Name: One-For-All
 [...]

 ```

To sort the character by power, enter 2 and press enter. The program will then display a list of all heroes, character by power.
```
Heroes sorted by power:
Name: Endeavor, Power: 5
Name: Hawks, Power: 5
Name: Fat-Gum, Power: 5
Name: Mirko, Power: 5
Name: All-Might, Power: 5
[...] 

```

To sort the character by speed, enter 3 and press enter. The program will then display a list of all heroes, character by speed.
```
Heroes sorted by speed:
Name: Endeavor, Speed: 5
Name: Hawks, Speed: 5
Name: All-Might, Speed: 5
Name: One-For-All, Speed: 5
Name: Gran-Torino, Speed: 5
[...]

```

To sort the character by technique, enter 4 and press enter. The program will then display a list of all characters, sorted by technique.
```
Heroes sorted by technique:
Name: Endeavor, Technique: 5
Name: Hawks, Technique: 5
Name: All-Might, Technique: 5
Name: One-For-All, Technique: 5
Name: Spiderman, Technique: 5
[...]
```

To sort the character by intelligence, enter 5 and press enter. The program will then display a list of all characters, sorted by intelligence.
```
Heroes sorted by intelligence:
Name: Hawks, Intelligence: 5
Name: All-Might, Intelligence: 5
Name: One-For-All, Intelligence: 5
Name: Spiderman, Intelligence: 5
Name: Overhaul, Intelligence: 5
[...]
```

To sort the character by cooperativeness, enter 6 and press enter. The program will then display a list of all characters, sorted by cooperativeness.
```
Heroes sorted by cooperativeness:
Name: Hawks, Cooperativeness: 5
Name: Spiderman, Cooperativeness: 5
Name: Fat-Gum, Cooperativeness: 5
Name: Deku, Cooperativeness: 5
Name: All-Might, Cooperativeness: 4
[...]

```

To search the character by the name, enter 7 and press enter. The program will then display
```
Enter the name of the character: 
```
So we are looking for *Shoto*
```
Enter the name of the character: *Shoto*
```
The program will then display:
```
Character found!
Name: Shoto
Type: student
Power: 4
Speed: 3
Technique: 4
Cooperativeness: 2
```

If there is no character, then the program will display:
```
Enter the name of the character: Kari
Character not found!
```

To Edit or Create New hero, enter 8 and press enter. The program will then display

```
Choose an option:
1. Upload a new hero
2. Edit an existing hero
Enter your choice: 1

```
To Upload a new hero, enter 1 and press enter. The program will then display

```
Choose an option:
1. Upload a new hero
2. Edit an existing hero
Enter your choice: 1
Enter the hero's details:
Separated by - on compound Name or Quirk ex. Red-Riot, hell-flame
Name: Spiderman

```
Then the user will enter a Name in this case *Spiderman*, and press enter. The program will them display all the next features and the user should fill each. 

```
Separated by - on compound Name or Quirk ex. Red-Riot, hell-flame
Name: Spiderman
villain, pro-hero, teacher, or student
Type:  pro-hero
Quirk: spider-traits
Range 0 being least and 5 being most (0-5)
Power: 3
Speed: 5
Technique: 5
Intelligence: 5
Cooperativeness: 5
New hero uploaded successfully!

```

```
Choose an option:
1. Upload a new hero
2. Edit an existing hero
Enter your choice: 2
```
To Edit an exiting hero, enter 2 and press enter. The program will then display

```
Enter the name of the hero you want to edit: Deku

Hero details before editing:
Name: Deku
Type: student
Quirk: all-for-one
Power: 4
Speed: 4
Technique: 3
Intelligence: 3
Cooperativeness: 4


Enter updated details for Deku:
Separated by - on compound Name or Quirk ex. Red-Riot, hell-flame
Name: 

```
Then the user will enter the new name of the hero in this case *Midoriya*, and press enter. The program will then display all the next features and the user should fill each. 

```
Enter the name of the hero you want to edit: Deku

Hero details before editing:
Name: Deku
Type: student
Quirk: all-for-one
Power: 4
Speed: 4
Technique: 3
Intelligence: 3
Cooperativeness: 4


Enter updated details for Deku:
Separated by - on compound Name or Quirk ex. Red-Riot, hell-flame
Name: Midoriya
villain, pro-hero, teacher, or student
Type: pro-hero
Quirk : all-for-one
Range 0 being least and 5 being most (0-5)
Power: 5
Speed: 5
Technique: 3
Intelligence: 5
Cooperativeness: 5
```

Finally, the program will display what is show next, to confirm the information is saved and the new details of the hero edited. 

```
Hero details updated successfully!

Hero details after editing:
Name: Midoriya
Type: pro-hero
Quirk: all-for-one
Power: 5
Speed: 5
Technique: 3
Intelligence: 5
Cooperativeness: 5
```

Enter 0 and press enter. The program will end.


### ANÁLISIS DE COMPLEJIDAD DEL CODIGO
Sorting a list of heroes uses a time complexity of `O(n log n)` where n represennts the nnumber of heroes. Searching for a hero in a sorted list uses a time complexity of `O(log n)`. 
Overall the code has a **worst case scenario** the time complexity is `O(n log n)`. However, the performance may be more efficient or defficient dependinng on the usage annd input data. For instance,  the list of heroes may be already sorted, annd that would reduce the time complexity to `O (log n)`. 
   
 ### ANÁLISIS DE COMPLEJIDAD DE CADA FUNCIÓN
There are various functions in the code:
- `insert` in the `TreeNode`:
 -If the tree is highly unbalanced it can be O(n), and in the best case is O(log(n))
- `displayTree` function in the `TreeNode`:
 -This function performs an in-order traversal of the binary search tree, so the time complexity is O(n)
-Sorting functions in the `DoubleLinkedList` are `sortByPower`, `sortBySpeed`, `sortByTechnique`, `sortByIntelligence`, `sortByCooperativeness`:
 -These sorting functions use the bubble sort algorithm, which has a time complexity of O(n^2) in the worst case. In the best case, if the list is already sorted, the time complexity is O(n).
- `searchByName` function:
-These function uses Breadth-First-Search.  In the worst case, it needs transverse all nodes, so the complexity is O(n), where n is the number of nodes. 
-In the best case the time complexity is O(1)
-`uploadOrEditHero` funnction:
-These functions imply an input/output of heroes, which is generally a low process in comparison with other functions.  
-If the user uploads a new hero, the time complexity is O(1) as it involves only inserting at the end of the list.  
-If the user edits an existing hero, the time complexity is O(n), where n is the number of heros.


  
## SISCT0303B: IMPLEMENTA ACCIONES CIENTÍFICAS
 ### IMPLEMENTA MECANISMOS PARA CONSULTAR INFORMACIÓN DE LAS ESTRUCTURAS CORRECTAS Y ÚTILES DENTRO DE UN PROGRAMA
 The program has an option in which it searches the character by the name in the list. (option 7). Uses a tree to sort the character by student, teacher, pro-hero or villain (option 1). And Linked List to sort (best-worst) by power, speed, technique, intelligence, cooperativeness. (option 2-6).
 
 ### IMPLEMENtA MECANNISMOS DE LECTURA DE ARCHIVOS CORRECTOS Y ÚTILES DENTRO DE UN PROGRAMA 
 The characters are register in a `mha.txt` in which are read at the beginning of the program. 
 ``` c++
ifstream inputFile("mha.txt");
  if (!inputFile) {
    std::cerr << "Failed to open the input file." << std::endl;
    return 1;
  }
 ```
`mha.txt`
```
Dynamight student explosion 4 4 3 3 1
Deku student all-for-one 4 4 3 3 4
Shoto student half-cold-half-hot 4 3 4 4 2
Uravity student zero-gravity 1 2 4 2 4
Ingenium student engine 3 4 2 3 2
Red-Riot student hardening 3 2 2 2 3
[... Ln 102]

```

The code will get the value for each character separated by spaces.

 ``` c++
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

 ```


  
 ### IMPLEMENTA MECANISMOS DE ESCRITURA DE ESCRITURA DE ARCHIVOS CORRECTOS Y ÚTILES DENNTRO DE UN PROGRAMA

 The characters are register in a `mha.txt` in which are read at the beginning of the program, the new hero will be upload in this same file.

In this function the User will choose to edit an exiting hero or upload a new one. 
  ```c++
void uploadOrEditHero(TreeNode*& typeTree, DoublyLinkedList& dl) {
    int choice;
    cout <<endl;
    cout << "Choose an option:" << endl;
    cout << "1. Upload a new hero" << endl;
    cout << "2. Edit an existing hero" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
```
If the user choose 1, the user will input each feature.

```c++
    if (choice == 1) {
            //Upload a new hero
        string name, type, quirk;
        int power, speed, technique, intelligence, cooperativeness;

        cout << "Enter the hero's details:" << endl;
        cout << "Separated by - on compound Name or Quirk ex. Red-Riot, hell-flame"<< endl;
        cout << "Name: ";
        cin >> name;
        [...]
```

Then create a newHero with the specific attributes of Hero.
```c++
        Hero newHero(name, type, quirk, power, speed, technique, intelligence, cooperativeness);
```

The code will get the value for each character separated by spaces, and save it on `mha.txt`. 

```c++    
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
```

If the user choose 2, the user will edit each feature. The user will input the name of the Hero and using the *searchByName* function will search for the Hero in the list. 

```c++ 

else if (choice == 2) {
        
        string searchName;
        cout <<endl << "Enter the name of the hero you want to edit: ";
        cin >> searchName;
        
        Hero* foundHero = searchByName(typeTree, searchName);
```
When found the hero info, will be display and then the user will update the hero´s details.

```c++
        cout << endl;
        cout << "Hero details before editing:" << endl;
        displayHeroDetails(*foundHero);
        cout << endl;

        if (foundHero != nullptr) {
            // the user to update the hero's details
            cout << endl;
            cout << "Enter updated details for " << foundHero->getName() << ":" << endl;
            cout << endl;
            cout << "Separated by - on compound Name or Quirk ex. Red-Riot, hell-flame"<< endl;
            cout << "Name: ";

```

The code will get the value for the character separated by spaces, and save it on `mha.txt`. 
```c++
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

```
Then it will confirm the update and display the new Hero details or print that failed.

```c++
                cout << endl << "Hero details updated successfully!" << endl;
                cout << endl << "Hero details after editing:" << endl;
                displayHeroDetails(*foundHero);
            } else {
                cerr << "Failed to open the file for writing." << endl;
            }
```

If the Hero doesn´t exist or is annvalid input it will print:

```c++
        } else {
            cout << "Hero not found." << endl;
        }
    } else {
        cout << "Invalid choice." << endl;
    }
```

**You can use this repository to access information about My Hero Academia.**


## Resources

I got the information on a fandom page: 
https://myheroacademia.fandom.com/es/wiki/Categor%C3%ADa:Personajes 


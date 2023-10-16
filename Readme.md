# My Hero Academia Hero Database
![image](https://github.com/thephoeniix/MHA/assets/73914621/22cdbf1b-37aa-437c-8bb3-08f86f440991)


This project is based on the popular anime and manga series My Hero Academia. The database allows users to sort characters with quirks. Then is expected to create missions and send the perfect team based on their strength and weaknesses. It also allows users to search for heroes by name.

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
  The bubble sort algorithm works by repeatedly comparing adjacent elements in the list and swapping them if they are in the wrong order. The bubble sort algorithm is a simple and inefficient sorting algorithm, but it is easy to implement. It is also a good algorithm for sorting small linked lists
  
  
  ### USA UN ÁRBOL ADECUADO PARA RESOLVER UN PROBLEMA
   The database also uses a binary search tree to store the heroes by type. This allows for efficient sorting operations.
   The function in where I use BST `Hero.h` in the class of `TreeNode`
   
  
 ## SICT0301B: EVALÚA LOS COMPONENTES
  ### PRESENTA CASOS PRUEBA
  ### How to use the database
  To use the database, simply compile and run the main.cpp file. The program will then display a menu with the following options:
    
  1. Sorted by type
  2. Sorted by power
  3. Sorted by speed
  4. Sorted by technique
  5. Sorted by intelligence
  6. Sorted by cooperativeness
  7. Search for a name
  8. Out
  
  To select an option, simply enter the corresponding number and press enter.
  
  *Example usage*

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
Endeavor
Hawks
All-Might
One-For-All
Mirko
[...]

```

To sort the character by speed, enter 3 and press enter. The program will then display a list of all heroes, character by speed.
```
Heroes sorted by speed:
Endeavor
Hawks
All-Might
One-For-All
Gran-Torino
[...]

```

To sort the character by technique, enter 4 and press enter. The program will then display a list of all character, sorted by technique.
```
Heroes sorted by technique:
Endeavor
Hawks
All-Might
One-For-All
Edgeshot
[...]

```

To sort the character by intelligence, enter 5 and press enter. The program will then display a list of all character, sorted by intelligence.
```
Heroes sorted by intelligence:
Hawks
All-Might
One-For-All
Overhaul
Endeavor
[...]

```

To sort the character by cooperativeness, enter 6 and press enter. The program will then display a list of all character, sorted by cooperativeness.
```
Heroes sorted by cooperativeness:
Hawks
Fat-Gum
All-Might
Edgeshot
Suneater
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

If there is no characterter, then the program will display:
```
Enter the name of the character: Kari
Character not found!
```


Enter 0 and press enter. The program will end.



    
  ### ANÁLISIS DE COMPLEJIDAD
There are various function in the code:
- `insert` in the `TreeNode`:
  - If the tree is highly unbalanced it can be O(n) ¿, and in the best case is O(log(n))
- `displayTree` functionn in the `TreeNode`:
  - This function performs an in-order traversal of the binary search tree, so the time complexity is O(n)
- Sorting functions in the `DoubleLinkedList` are `sortByPower`, `sortBySpeed`, `sortByTechnique`, `sortByIntelligence`, `sortByCooperativeness`:
  - These sorting functions use the bubble sort algorithm, which has a time complexity of O(n^2) in the worst case.  In the best case, if the list is already sorted, the time complexity is O(n).
- `searchByName` function:
  - if the bst is in the worst case, the tree is unbalanced the complexity of the function will be O(n).
  - if the bst is in the best case, the tree is balanced the complexity of the function will be  O(log(n)).

  
  
## SISCT0303B: IMPLEMENTA ACCIONES CIENTÍFICAS
  ### IMPLEMENTA MECANISMOS PARA CONSULTAR INFORMACIÓN DE LAS ESTRUCTURAS CORRECTAS Y ÚTILES DENTRO DE UN PROGRAMA
  The program has an option in which it search the character by the name in the list. (option 7). Uses a Tree to sort the character by student, teacher, pro-hero or villian (option 1). And Linked List to sort (best-worst) by power, speed, technique, intelligenge, cooperativeness. (option 2-6).
  ### IMPLEMENtA MECANNISMOS DE LECTURA DE ARCHIVOS CORRECTOS Y ÚTILES DENTRO DE UN PROGRAMA 
  The character are register in a `mha.txt` in which are read at the begininng of the program 
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

  *falta implementar*

## Getting Started

You can use this repository to access information about My Hero Academia.


## Resorces

I got the information on a fandom page: 
https://myheroacademia.fandom.com/es/wiki/Categor%C3%ADa:Personajes 


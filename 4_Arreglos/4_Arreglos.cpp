// 4_Arreglos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include "Array.h"
#include "GenericArray.h"
#include "Entity.h"
#include "Character.h"

typedef GenericArray<std::string> StringArray;

int main()
{
    //decirle a windows que quremos que la consola use UTF8
    SetConsoleOutputCP(CP_UTF8);
    std::cout << u8"El niño pingüino 🐧 apuñala a un niño 🦚 XD \x40" << " \n";
    std::cout << u8"Esto es una arroba \x40" << " \n";
    std::cout << "Esto es un kanji \xE9\x9B\xBB" << " \n";
    std::cout << "Esto es un emoji \xF0\x9F\x92\x80" << " \n";

    //imprimir un arreglo de emojis
    std::cout << "Emoji del f09f9200 al f09f92ff \n";
    char emojibytes[5] = "\xF0\x9F\x92\x00";
    std::cout << emojibytes << "\n";
    /*

   std::cout << "Emojis del F09F9200 al F09F92FF\n";
   char bytes[5] = "\xF0\x9F\x92\x80";
   std::cout << bytes << "\n";


   for (int i = 0; i <= 0xF; i++)
   {
       for (int j = 0; j <= 0xF; j++)
       {
           for (int c = 0; c < 5; c++)
           {
               std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(static_cast<unsigned char>(bytes[c]));
           }
           std::cout << "\n";
           bytes[3] += 1;
           std::cout << bytes << "\n";
       }
       std::cout << "\n";
   }

   for (int i = 0; i <= 0xF; i++)
   {
       for (int j = 0; j <= 0xF; j++)
       {
           std::cout << std::hex << bytes << " ";
           bytes[3] += 1;
       }
       std::cout << "\n";
   }

   //seccion: prueba de clase Array
   Array* arreglodegatos = new Array(9);

   std::cout << "size of uint32: " << sizeof(uint32) << "\n";  //debe de ser 4
   puts("Arreglo de uint32");


   const char* gato = "\xf0\x9f\x90\x88";// cat face 0xF0 0x9F 0x90 0x88
   arreglodegatos->Clear();
   arreglodegatos->Set(5, gato   );
   arreglodegatos->Set(6, 65536);
   arreglodegatos->Set(0, "\xF0\x9F\x98\xBC");



   for (int i = 0; i < arreglodegatos->Size(); i++)
   {
       //std::cout << arreglodegatos->Get(i) << "\n";
       std::cout << (*arreglodegatos)[i]  << "\n";
   }

   */

   //inicializar un arreglo vacio de characters
    GenericArray < Character> characters = GenericArray <Character>();

    Character npc1 = Character("Bob el constructor");
    npc1.SetType(Character::EChartype::npc);
    std::cout << npc1.toString() << "\n";
    Character p1 = Character("Hector");
    p1.SetType(Character::EChartype::player);
    std::cout << p1.toString() << "\n";
    Weapon weap = Weapon("Espada", 0, Weapon::melee, 80);
    p1.GiveWeapon(weap);
    p1.GiveWeapon(Weapon("Arco", 10, Weapon::ranged, 30));
    p1.GiveWeapon(Weapon("Olympia", 7, Weapon::ranged, 25));
    puts("Antes de agregar");
    characters.Add(p1);
    characters.Add(npc1);
    puts("Despues de agregar");
    characters.listContents();

    return 0;

}


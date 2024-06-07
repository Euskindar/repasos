/**
 * @file repaso1.cpp
 * @author Julen
 * @version 1.0
*/

// Locura de TABNINE que autocompleta la descripción de las funciones e incluso el texto

#include <iostream>
#include <string>

using namespace std;


/**
 * @brief Main function of the program.
 *
 * This function is the entry point of the program. It performs basic arithmetic operations,
 * and demonstrates the use of variables, data types, and output to the console.
 *
 * @param argc The number of command-line arguments passed to the program.
 * @param argv An array of strings containing the command-line arguments passed to the program.
 * @return An integer representing the exit status of the program. A return value of 0 indicates success.
*/

int main(int argc, char const *argv[])
{
    // Este comentario es para hacer cambios para paracticar comandos de Git

    // IMPORTANTE -> Para salir del editor de mensajes del git, pulsar Esc y poner ":wq" para temrinar de escribir el mensaje

    /* code */

    // Codigo sencillo para practicar bases

    int valor1 = 1; ///< First integer value for the arithmetic operation.
    int valor2 = 0; ///< Second integer value for the arithmetic operation.

    int resultado; ///< Variable to store the result of the arithmetic operation.

    resultado = valor1 + valor2; ///< Performing addition operation on valor1 and valor2.

    // Configurando el debbuger y compilador porque soy mongolito
    string resTxt = "El resultado es = "; ///< Text to be displayed before the result.

    cout << resTxt << resultado << endl; ///< Displaying the result to the console.

    return 0;
}
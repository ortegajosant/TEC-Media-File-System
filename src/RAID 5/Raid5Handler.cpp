//
// Created by ortegajosant on 26/11/18.
//

#include "Raid5Handler.h"

#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

/**
 * Parcea un string a binario
 *
 * @param toBin  Cadena de texto a parcear
 * @return string con el codigo de 0s y 1s que
 *          representan la cadena de entrada en binario
 */
string Raid5Handler::toBinary(string toBin){
    string binary = "";
    char c;
    for (int j = 0; j < toBin.length(); ++j) {
        c = toBin[j];
        for (int i = 7; i >= 0; i--){
            binary += to_string ((c >> i) & 1);
        }
    }
    return binary;
}

/**
 * Convierte una string con 0s y 1s a una letra en codigo
 *      ascii
 * @param numBin string con 0s y 1s que representan un caracter
 *           y con un largo de 8
 * @return numero que representa el caracter en el codigo ascii
 */
int Raid5Handler::toDecimal(string numBin){
    int numDecimal = 0 ;
    for (int i = 0; i < 8; ++i) {
        if(numBin[i] == '1'){
            numDecimal += (int)pow(2,7-i);
        }
    }
    return numDecimal;
}

/**
 *  Aplica xor en tres valores de 0s y 1s
 * @param c1  valor 1
 * @param c2  valor 2
 * @param c3  valor 3
 * @return  char con el resultado de aplicar xor a los 3 valores
 *              puede ser un 0 o 1
 */
char Raid5Handler::aux_xor(char c1, char c2, char c3){
    char result = 0;
    if(c1 == c2){
        result = '0';
    }else{
        result = '1';
    }
    if (c3 == result){
        result = '0';
    }else{
        result = '1';
    }
    return result;
}

// public:
/**
 * Metodo para calcular la paridad de tres cadenas de texto o
 *  para recuperar una cadena
 * @param string1
 * @param string2    Tienen que ser del mismo tamano
 * @param string3
 * @return string con la paridad de los tres cadenas
 */
string Raid5Handler::parity(string string1, string string2, string string3) {
    string bin1 = toBinary(string1);
    string bin2 = toBinary(string2);
    string bin3 = toBinary(string3);
    string parity = "";
    for (int i = 0; i < bin1.length(); ++i) {
        parity += aux_xor (bin1[i], bin2[i], bin3[i]);
    }
    string result = "";
    string temp;
    int ciclos = 0;
    for (int j = 0; j < parity.length()/8; ++j) {
        for (int i = 0; i < 8; ++i) {
            temp += parity[ciclos + i];
        }
        result += char(toDecimal(temp));
        temp = "";
        ciclos += 8;
    }
    return result;
}

//
// Created by ortegajosant on 26/11/18.
//

#ifndef RAID_5_RAID5HANDLER_H
#define RAID_5_RAID5HANDLER_H

#include <string>

using namespace std;

class Raid5Handler {

public:
    string parity(string string1, string string2, string string3);

private:
    char aux_xor(char c1, char c2, char c3);
    int toDecimal(string numBin);
    string toBinary(string toBin);

};


#endif //RAID_5_RAID5HANDLER_H

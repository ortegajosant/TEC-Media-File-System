#include <iostream>
#include <fstream>
#include "src/RAID 5/DiskNode.h"
#include "src/RAID 5/Estructuras/ListaDoble.h"
#include "src/ControllerNode/ControllerServer.h"

string obtenerArchivo(string name) {
    long size;
    ifstream fileMP3;
    fileMP3.open("../videosPrueba/"+ name + ".mp4", ios::binary | ios::in);

    if (fileMP3.is_open()) {
        /// Obtener el largo del archivo
        fileMP3.seekg(0, ios::end);
        size = (long) fileMP3.tellg();
        fileMP3.seekg(0, ios::beg);
        /// Leer el archivo
        char *buffer = new char[size];
        fileMP3.seekg(0, ios::beg);
        fileMP3.read(buffer, size);
        fileMP3.close();
        /// Convierto en String la lectura
        string temp;
        for (int i = 0; i < size; ++i) {
            temp += buffer[i];
        }
        return temp;
    } else {
        cout << "Fichero inexistente" << endl;
    }
    return nullptr;

};


using namespace std;

int main() {
    // Para construir un disco a la hora de instanciarlo
    // le paso la ubicacion esa ubicacion se guarda en TECMFS-Disk
//    DiskNode disco0 = DiskNode("../DiskNodes/Disk0", 122111653);
//    List<string> lista =disco0.readDir();
//    lista.printList();
//    cout << endl;
//    string prueba = disco0.readData("hj");
//    disco0.writeData(prueba, "text.txt");

    ControllerServer server;

    string video = obtenerArchivo("oceano");

    server.saveData(video, "prueba1.txt");

    return 0;
}



////////////////////////////////////////
/// Controller Node ///Contiene  un main de prueba comentado abajo


//int main() {
////    string hola = "holaaaaa)9";
////    string mundo = "mundoaaa%4";
////    string esto = "oooooaaa+/";
////    string paridad  = paraty(hola,mundo,esto);
////    cout << paridad << endl;
////
////    cout << paraty(paridad,hola,esto) << endl;
////    cout << paraty(mundo, esto, paridad);
//
//    cout << "ingrese" << endl;
//
//    string url;
//
//    cin >> url;
//}




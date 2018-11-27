//
// Created by christian on 24/11/18.
//

#ifndef RAID_5_LISTADOBLE_H
#define RAID_5_LISTADOBLE_H

#include <iostream>

using namespace std;

template<class T>
struct nodoD{
    T data;
    nodoD *next;
    nodoD *prev;
};

template <class T>
class List{

    int lenght = 0;
    nodoD<T> * head;

public :
    List(){
        head = nullptr;
    }

    void add(T p_data){
        auto *nuevo = new nodoD<T>;
        nuevo->next = NULL;
        nuevo->data = p_data;
        if (this->head == nullptr){
            head = nuevo;
        }
        else{
            nodoD<T> *tmp;
            tmp = head;
            while(tmp->next != NULL){
                tmp = tmp->next;
            }
            tmp->next = nuevo;
            nuevo->prev = tmp;
        }
        this->lenght ++;
    }

    T getData(int pos){
        auto *tmp = head;
        for(int i = 0; i < pos; i++){
            tmp = tmp->next;
        }
        return tmp->data;
    }

    void printList(){
        auto *tmp = head;
        for(int i = 0; i < this->lenght; i++){
            cout << tmp->data << endl;
            tmp = tmp->next;
        }
    }

    int getLenght(){
        return this->lenght;
    }
};

#endif //RAID_5_LISTADOBLE_H

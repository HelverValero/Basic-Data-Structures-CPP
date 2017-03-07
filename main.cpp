/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: developer
 *
 * Created on 19 March 2016, 9:50 PM
 */

#include <cstdlib>
#include "Node.hpp"
#include "SimpleList.hpp"
#include "SimpleListCursor.hpp"
#include <iostream>

int compare(int a,int b);

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {
    /*
    Node  <int> node(5);
    Node <int>*   node1 = new Node<int>(6);
    
    cout << node.getInfo()<< endl;
    cout << node1->getInfo()<<endl;
    */
    
    SimpleList <int>* simpleList = new SimpleList<int>(); 
    simpleList->add(7);
    simpleList->add(8);
    simpleList->add(9);
    Node <int>* aux = simpleList->getHead();
    while(aux!=0){
        cout << aux->getInfo() << endl;
        aux = aux->getNext();
    }
    
    cout << "cursor..." << endl;
    SimpleListCursor<int>*  simpleListCursor = new SimpleListCursor<int>(simpleList);
    while(!simpleListCursor->isLast()){
        cout << simpleListCursor->getInfo() << endl;
        simpleListCursor->next();
    }
    cout << "lista la lista ..." << endl;

// ----------------------------------- Lista de listas
    SimpleList <SimpleList <int> *> * simpleListOk = new SimpleList<SimpleList <int> *>();
    SimpleList <int>* simpleList1 = new SimpleList<int>(); 
    simpleList1->add(7);
    simpleList1->add(8);
    simpleList1->add(9);
    simpleListOk->add(simpleList1);
    simpleList1 = new SimpleList<int>(); 
    simpleList1->add(1);
    simpleList1->add(2);
    simpleList1->add(3);
    simpleList1->add(4);
    simpleListOk->add(simpleList1);
    simpleList1 = new SimpleList<int>(); 
    simpleList1->add(5);
    simpleList1->add(6);
    simpleListOk->add(simpleList1);
    simpleList1 = new SimpleList<int>(); 
    simpleList1->add(10);
    simpleList1->add(11);
    simpleList1->add(12);
    simpleList1->add(13);
    simpleList1->add(14);
    simpleList1->add(15);
    simpleListOk->add(simpleList1);

    cout << "Lista de listas..." << endl;
    SimpleListCursor<SimpleList <int>*>*  simpleListCursorOk = new SimpleListCursor<SimpleList<int>*>(simpleListOk);
    while(!simpleListCursorOk->isLast()){
        cout << "lista......" << endl;
        SimpleListCursor<int>*  simpleListCursor1 = new SimpleListCursor<int>(simpleListCursorOk->getInfo());
        while(!simpleListCursor1->isLast()){
            cout << "  " << simpleListCursor1->getInfo() << endl;
            simpleListCursor1->next();
        }
        simpleListCursorOk->next();
    }
    int (* fptr)(int,int);
    fptr = compare;
    cout << "el numero 10 "<< (simpleList->search(fptr,10)?" si ":"no") << "esta en la lista"<<endl;
    cout << "el numero 7 "<< (simpleList->search(fptr,7)?" si ":"no") << "esta en la lista"<<endl;
    return 0;
}

int compare(int a,int b){
    return a - b ;
}

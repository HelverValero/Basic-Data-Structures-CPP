/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SimpleList.cpp
 * Author: developer
 * 
 * Created on 19 March 2016, 8:38 PM
 */

#ifndef SIMPLE_LIST_CPP
#define SIMPLE_LIST_CPP

#include "SimpleList.hpp"

template <class T> 
SimpleList<T>::SimpleList() {
    this->head = NULL;
}

template <class T> 
SimpleList<T>::SimpleList(const SimpleList& orig) {
}

template <class T> 
SimpleList<T>::~SimpleList() {
    Node <T> * aux;
    while(this->head!=NULL){
       Node <T> * aux = this->head;
       this->head= this->head->getNext();
       delete(aux);
    }
}

template<class T>
Node <T>* SimpleList<T>::getHead() {
    return this->head;
}

template<class T>
bool SimpleList<T>::isEmpty(){
    return this->head==NULL;
}

template<class T>
void SimpleList<T>::add(T info){
    if (this->head==NULL){
        this->head = new Node<T>(info);
    }
    else {
        Node <T> * aux = this->head;
        while(aux->getNext()!=NULL){
           aux = aux->getNext();
        }
        aux->setNext(new Node<T>(info));
    }
}

template<class T>
void SimpleList<T>::insert(T info){
    if (this->head==NULL){
        this->head = new Node<T>(info);
    }
    else {
        this->head = new Node<T>(info,this->head);
    }
}

template<class T>
bool SimpleList<T>::search(int (*fpointer)(T,T),T info){
    if (this->head==NULL){
        return false;
    }
    else {
        Node <T> * aux = this->head;
        while(aux->getNext()!=NULL){
            if (fpointer(aux->getInfo(),info)==0) { //
                return true;
            }
           aux = aux->getNext();
        }
        return false;
    }
}

#endif /* SIMPLE_LIST_CPP */

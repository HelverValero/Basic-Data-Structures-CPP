/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.cpp
 * Author: developer
 * 
 * Created on 17 March 2016, 9:33 PM
 */


#ifndef NODE_CPP
#define NODE_CPP

#include "Node.hpp"
template <class T> 
Node<T>::Node(T info) {
    this->info = info;
    this->next = NULL;
}

template <class T>
Node<T>::Node(T info, Node<T> next){
    this->info = info;
    this->next = next;
}

template <class T>
Node<T>::Node(const Node& orig) {
}

template <class T>
Node<T>::~Node() {
}

template <class T>
void Node<T>::setInfo(T info){
    this->info = info;
}

template <class T> void Node<T>::setNext(Node <T> * next){
    this->next = next;
}

template <class T>
Node <T>*  Node<T>::getNext(){
    return this->next;
}

template <class T>
T Node<T>::getInfo(){
    return info;
}
#endif /* NODE_CPP */

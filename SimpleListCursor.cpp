/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SimpleListCursor.cpp
 * Author: developer
 * 
 * Created on 19 March 2016, 8:49 PM
 */

#ifndef SIMPLE_LIST_CURSOR_CPP
#define SIMPLE_LIST_CURSOR_CPP
#include "SimpleList.hpp"
#include "SimpleListCursor.hpp"

template <class T> 
SimpleListCursor<T>::SimpleListCursor(SimpleList<T> * simpleList) {
    this->simpleListCursor = simpleList;
    this->cursor = simpleListCursor->getHead();
}

template <class T> 
SimpleListCursor<T>::SimpleListCursor(const SimpleListCursor& orig) {
}

template <class T> 
SimpleListCursor<T>::~SimpleListCursor() {
}

template <class T> 
T SimpleListCursor<T>::getInfo(){
    return this->cursor->getInfo();
}

template <class T> 
void SimpleListCursor<T>::next(){
  this->cursor = this->cursor->getNext();  
}

template <class T> 
void SimpleListCursor<T>::reset(){
  this->cursor = simpleListCursor->head;  
}

template <class T> 
bool SimpleListCursor<T>::isLast(){
  return this->cursor==0;  
}
#endif /* SIMPLE_LIST_CURSOR_CPP */



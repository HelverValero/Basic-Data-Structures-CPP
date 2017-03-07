/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SimpleList.hpp
 * Author: developer
 *
 * Created on 19 March 2016, 8:38 PM
 */

#ifndef SIMPLELIST_HPP
#define SIMPLELIST_HPP
#include "Node.hpp"

template <class T>
class SimpleList {
public:
    SimpleList();
    SimpleList(const SimpleList& orig);
    virtual ~SimpleList();
    void add(T);
    void insert(T);
    Node <T> *getHead();
    void setHead(Node <T>);
    bool isEmpty();
    bool search( int (* ptr)(T,T),T);
private:
    Node <T> * head;
};

#include "SimpleList.cpp"
#endif /* SIMPLELIST_HPP */


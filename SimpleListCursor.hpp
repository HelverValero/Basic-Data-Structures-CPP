/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SimpleListCursor.hpp
 * Author: developer
 *
 * Created on 19 March 2016, 8:49 PM
 */

#ifndef SIMPLELISTCURSOR_HPP
#define SIMPLELISTCURSOR_HPP
#include"SimpleListCursor.hpp"
#include "SimpleList.hpp"
#include "Node.hpp"

template <class T> 
class SimpleListCursor {
public:
    SimpleListCursor(SimpleList<T> *);
    SimpleListCursor(const SimpleListCursor& orig);
    virtual ~SimpleListCursor();
    void reset();
    T getInfo();
    void next();
    bool isLast();
private:
    SimpleList<T> *simpleListCursor;
    Node <T> * cursor;
};

#include "SimpleListCursor.cpp"
#endif /* SIMPLELISTCURSOR_HPP */


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.hpp
 * Author: developer
 *
 * Created on 17 March 2016, 9:33 PM
 */

#ifndef NODE_HPP
#define NODE_HPP
#include <cstdlib>

template <class T> 
class Node{
public:
    Node(T);
    Node(T,Node <T>);
    Node(const Node& orig);
    virtual ~Node();
    void setInfo(T);
    void setNext(Node <T> *);
    Node <T> * getNext();
    T getInfo();
private:
    T info;
    Node <T> * next;
};

#include "Node.cpp"
#endif /* NODE_HPP */


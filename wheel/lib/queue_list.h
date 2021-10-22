//
// Created by mushr on 2021/10/22.
//
#pragma once

template <typename T>
class Node
{
public:
        T value;
        Node<T> * next;
};


template<typename T>
class queue_list
{
private:
    Node<T> * front;
    Node<T> * rear;
    int size;


public:

    queue_list();
    bool enQueue(T e);
    T deQueue();
    T getFront(); // 获取队头元素
    bool isEmpty(); // 队列是否为空
    int getSize();
};


#ifndef QUEUE_LIST_CPP
#define QUEUE_LIST_CPP

#include "../src/queue_list.cpp"
#endif
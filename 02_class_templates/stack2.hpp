//
// Created by zhaojunhe on 2018/9/29.
//
#pragma once

#include <deque>
#include "stack1.hpp"

template<>
class Stack<std::string> {
private:
    std::deque<std::string> elems;
public:
    void push(std::string const &);

    void pop();

    std::string const &top();

    bool empty() const {
        return elems.empty();
    }
};

void Stack<std::string>::push(std::string const &elem) {
    elems.push_back(elem);
}

void Stack<std::string>::pop() {
    assert(!elems.empty());
    elems.pop_back();
}

std::string const &Stack<std::string>::top() {
    assert(!elems.empty());
    elems.back();
}

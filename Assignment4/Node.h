#pragma once
#include <string>

template <typename T>
struct Node {
	Node<T>* next = NULL;
	std::string key;
	T value ;
};

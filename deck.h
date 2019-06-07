#pragma once

#include <iostream>
#include "item.h"

template <typename T>
class Deck
{
private:
	Item<T> *head;
	Item<T> *tail;

public:
	Deck();
	void push_back(T value);
	void push_front(T value);
	void pop_back(T value);
	void pop_front(T value);

	T back();
	T front();

	void clear();

	friend std::ostream& operator << (std::ostream &out, const Deck &d);
};
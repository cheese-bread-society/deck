#pragma once

#include <iostream>
#include "item.h"
#include <stdexcept>

template <typename T>
class Deck
{
private:
	Item<T> *head = NULL;
	Item<T> *tail = NULL;
	int m_count = 0;

public:
	Deck();

	int count();
	bool is_empty();
	void push_back(T value);
	void push_front(T value);
	T pop_back();
	T pop_front();

	T back();
	T front();

	void clear();

	// std::ostream& operator<<(std::ostream &out, Deck const &v);
};

#include "deck.cpp"
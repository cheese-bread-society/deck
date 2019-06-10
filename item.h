#pragma once

template <typename T>
class Item
{
public:
	Item *prev = NULL;
	Item *next = NULL;
	T m_value;

	Item(T value);
};

#include "item.cpp"
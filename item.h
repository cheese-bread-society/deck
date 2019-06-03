#pragma once

template <typename T>
class Item
{
public:
	Item *prev;
	Item *next;
	T m_value;

	Item(T value);
};
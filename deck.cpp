#pragma once
#include "deck.h"

template <typename T>
Deck<T>::Deck()
{
}

template <typename T>
void Deck<T>::push_back(T value)
{
	m_count++;

	if (tail == NULL)
	{
		tail = new Item<T>(value);
		head = tail;
	}
	else
	{
		Item<T> *element = tail;
		tail = new Item<T>(value);

		tail->next = NULL;
		tail->prev = element;

		element->next = tail;
	}
}

template <typename T>
void Deck<T>::push_front(T value)
{
	m_count++;

	if (head == NULL)
	{
		head = new Item<T>(value);
		tail = head;
	}
	else
	{
		Item<T> *element = head;
		head = new Item<T>(value);

		head->prev = NULL;
		head->next = element;

		element->prev = head;
	}
}

template <typename T>
bool Deck<T>::is_empty()
{
	return (tail == NULL && head == NULL);
}

template <typename T>
T Deck<T>::pop_back()
{
	if (is_empty())
	{
		std::runtime_error err("Deck has no element");
		throw err;
	}

	T value = tail->m_value;

	if (tail->prev != NULL)
	{
		Item<T> *element = tail->prev;
		element->next = NULL;

		delete tail;
		tail = element;
	}

	if (tail == head)
	{
		clear();
	}

	m_count--;
	return value;
}

template <typename T>
T Deck<T>::pop_front()
{
	if (is_empty())
	{
		std::runtime_error err("Deck has no elements");
		throw err;
	}

	T value = head->m_value;

	if (head->next != NULL)
	{
		Item<T> *element = head->next;
		element->prev = NULL;

		delete head;
		head = element;
	}

	if (head == tail) {
		clear();
	}

	m_count--;
	return value;
}

template <typename T>
T Deck<T>::back()
{
	return tail->m_value;
}

template <typename T>
T Deck<T>::front()
{
	return head->m_value;
}

template <typename T>
void Deck<T>::clear()
{
	while(1)
	{
		Item<T> *element = head;
		if(element != NULL)
		{
			head = element->next;
			delete element;
		}else
		{
			break;
		}
	}

	head = NULL;
	tail = NULL;
}

template <typename T>
int Deck<T>::count()
{
	return m_count;
}

// template <typename T>
// std::ostream& operator<<(std::ostream &out, Deck<T> const &v)
// {
// }
#ifndef STACK_H
#define STACK_H

#include "ArrayList.h"

template <class E>
class Stack
{
private:
	bool			allowDuplicates;

	ArrayList<E>	list;

public:
	Stack();
	
	bool	doesAllowDuplicates();
	bool	contains(E);
	bool	isEmpty();

	void	push(E const&);
	void	setAllowDuplicates(bool);

	int		size();

	E		pop();
	E		peek();
	E		peek(int);
};

template <class E>
Stack<E>::Stack()
{

}

template <class E>
void Stack<E>::push(E const& element)
{
	list.add(0, element);
}

template <class E>
E Stack<E>::pop()
{
	E element = list.get(0);

	list.remove(0);

	return element;
}

template <class E>
int Stack<E>::size()
{
	return list.size();
}

template <class E>
E Stack<E>::peek()
{
	return peek(0);
}

template <class E>
E Stack<E>::peek(int index)
{
	return list.get(index);
}

template <class E>
bool Stack<E>::doesAllowDuplicates()
{
	return allowDuplicates;
}

template <class E>
void Stack<E>::setAllowDuplicates(bool allow)
{
	allowDuplicates = allow;
}

template <class E>
bool Stack<E>::contains(E element)
{
	return list.contains(element);
}

template <class E>
bool Stack<E>::isEmpty()
{
	return list.size() <= 0;
}

#endif
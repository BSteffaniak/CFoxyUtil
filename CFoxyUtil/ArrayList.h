#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include <vector>

using std::vector;

template <class E>
class ArrayList
{
private:
	vector<E>	list;

public:
	ArrayList();

	bool	contains(E);
	bool	isEmpty();

	void	add(E const&);
	void	add(int, E const&);
	void	set(int, E const&);
	void	remove(int);
	void	removeElement(E);

	int		size();

	E		get(int);
};

template <class E>
ArrayList<E>::ArrayList()
{

}

template <class E>
void ArrayList<E>::add(E const& element)
{
	list.push_back(element);
}

template <class E>
void ArrayList<E>::add(int index, E const& element)
{
	list.insert(list.begin() + index, element);
}

template <class E>
void ArrayList<E>::set(int index, E const& element)
{
	list[index] = element;
}

template <class E>
void ArrayList<E>::remove(int index)
{
	list.erase(list.begin() + index);
}

template <class E>
void ArrayList<E>::removeElement(E element)
{
	for (unsigned int i = 0; i < list.size(); i++)
	{
		E elem = list.at(i);

		if (elem == element)
		{
			remove(i);
		}
	}
}

template <class E>
int ArrayList<E>::size()
{
	return (int)list.size();
}

template <class E>
E ArrayList<E>::get(int index)
{
	return list.at(index);
}

template <class E>
bool ArrayList<E>::contains(E element)
{
	for (unsigned int i = 0; i < list.size(); i++)
	{
		E elem = get(i);

		if (elem == element)
		{
			return true;
		}
	}
}

template <class E>
bool ArrayList<E>::isEmpty()
{
	return list.size() <= 0;
}

#endif
#pragma once
template <typename T>
class Nodo
{
public:
	T value;
	Nodo<T>* next;
	Nodo<T>* prev;

	Nodo() { next = nullptr; prev = nullptr; }
	~Nodo() {};
};


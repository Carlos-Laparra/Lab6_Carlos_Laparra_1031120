#pragma once
#include "Nodo.h"
template <typename T>
class ListaDoblementeEnlazada
{
public:
	Nodo<T>* start;
	Nodo<T>* end;
	int count;

	ListaDoblementeEnlazada() {
		start = nullptr;
		end = nullptr;
		count = 0;
	};

	~ListaDoblementeEnlazada() {};

	bool Vacio() {
		return count == 0;
	}

	void InsertAtEnd(T valor) {
		Nodo<T>* new_node = new Nodo<T>();
		new_node->value = valor;

		if (Vacio()) {
			start = new_node;
			end = new_node;
		}
		else {
			end->next = new_node;
			new_node->prev = end;
			end = new_node;
		}

		count++;
		return;
	}

};


#pragma once
#include <iostream>
#include <string>
using namespace std;

template <class T1, class T2>
class Node {
public:
	T1 key;
	T2 value;
	Node<T1, T2> *parent = nullptr;
	Node<T1, T2> *left = nullptr;
	Node<T1, T2> *right = nullptr;
};



template<class T1, class T2>
class tree_ 
{
	Node<T1, T2> *root;
	//int size;
public:
	int size;
	tree_() {
		root = nullptr;
		size = 0;
	}
	void add(const T1& key, const T2& value) {
		Node<T1, T2> *node = new Node<T1, T2>;
		node->key = key;
		node->value = value;
		Node<T1, T2> *tmp = root;
		Node<T1, T2> *y = nullptr;
		while (tmp != nullptr) {
			y = tmp;
			if (node->key>tmp->key)
				tmp = tmp->right;
			else
				tmp = tmp->left;
		}
		if (y == nullptr) {
			root = node;
			size = 1;
		}
		else {
			node->parent = y;
			if (y->key > node->key)
				y->left = node;
			else
				y->right = node;
			size++;
		}


	}
	void printNode(Node<T1, T2>*node) {
		if (node != nullptr) {
			printNode(node->left);
			cout << node->key << " " << node->value << endl;
			printNode(node->right);
		}
	}
	void print()
	{
		printNode(root);
	}
	T2 search(const T1&key) {
		Node<T1, T2> *tmp = root;
		while (tmp != nullptr && tmp->key != key) {
			if (tmp->key > key)
				tmp = tmp->left;
			else
				tmp = tmp->right;
		}

		if (tmp == nullptr)
			return T2();
		else
			return tmp->value;
	}
	Node<T1, T2> * Min(Node<T1, T2>* Node)
	{
		if (Node != 0)
		{
			while (Node->left != 0)
			{
				Node = Node->left;
			}
		}
		return Node;
	}
	Node<T1, T2> * Max(Node<T1, T2>* Node)
	{
		if (Node != 0)
		{
			while (Node->left != 0)
			{
				Node = Node->left;
			}
		}
		return Node;
	}
	Node<T1, T2> * next(Node<T1, T2> node)
	{
		Node<T1, T2> * y = 0;
		if (node != 0)
		{
			if (node->right != 0)
				return Min(node->right);

			y = node->parent;

			while (y != 0 && node == y->right)
			{
				node = y;
				y = y->parent;
			}
		}
		return y;
	}
	Node<T1, T2> * prev(Node<T1, T2> node)
	{
		Node<T1, T2> * y = 0;
		if (node != 0)
		{
			if (node->left != 0)
				return Max(node->left);

			y = node->parent;

			while (y != 0 && node == y->left)
			{
				node = y;
				y = y->parent;
			}
		}
		return y;
	}
	void del(Node<T1, T2> * z)
	{
		if (z == nullptr)
		{
			Node<T1, T2> * node, *y;
			if (z->left == 0 || z->right == 0)
				y = z;
			else
				y = next(z);

			if (y->left != 0)
				node = y->left;
			else
				node = y->right;
			
			if (node != 0)
				node->parent = y->parent;
			
			if (y->parent == nullptr)
				root = node;
			else if (y == y->parent->left)
				y->parent->left = node;
			else
				y->parent->right = node;
			if (y != z)
			{
				strcpy_s(z->value, y->value);
				z->key = y->key;
			}
			delete y;
		}
		else
		{
			while (root != 0)
			{
				del(root);
			}
		}
	}

};




void main() 
{
	setlocale(0, "");
	tree_<int, string> tree;
	tree.add(100, "СТО");
	tree.add(0, "Ноль");
	tree.add(-30, "минус тридцать");
	tree.add(77, "Семьдесят семь");
	tree.add(101, "Сто один");
	tree.add(25, "Двадцать пять");
	tree.add(9, "Девять");
	tree.add(0, "Ноль");
	tree.print();
	cout << endl;
	tree.del();
	tree.print();
	system("pause");

};
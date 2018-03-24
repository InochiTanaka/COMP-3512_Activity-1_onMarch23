#pragma once
#include <iostream>
#include <queue>

using namespace std;

template <typename T = string>
class Node {

	public:
		T datum;
		Node<T> * LeftChild;
		Node<T> * RightChild;

		Node<T>(T datum) : datum(datum), LeftChild{ nullptr }, RightChild{ nullptr } {}

};

template <typename T = string>
class Tree {

	public:
		Node<T>* root;
		Tree<T>(T datum) 
		{
			root = new Node<T>(datum);
		}

		void add(T datum) {
		Node<T>* newNode = new Node<T>(datum);
		queue<Node<T>*> queue;
		queue.push(root);

		while (!queue.empty()) {

			Node<T>* temp = queue.front();
			queue.pop();

			if (!temp->LeftChild) {
				temp->LeftChild = newNode;
				break;
			}
			else
			{
				queue.push(temp->LeftChild);
			}

			if (!temp->RightChild) {
				temp->RightChild = newNode;
				break;
			}
			else
			{
				queue.push(temp->RightChild);
			}
		}
	}

	void showTree() {
		queue<Node<T>*> queue;
		queue.push(root);

		while (!queue.empty()) {
			Node<T>* temp = queue.front();
			cout << temp->datum.c_str() << endl;
			queue.pop();

			if (!temp->LeftChild) {
			}
			else
				queue.push(temp->LeftChild);

			if (!temp->RightChild) {
			}
			else
				queue.push(temp->RightChild);
		}
	}
};
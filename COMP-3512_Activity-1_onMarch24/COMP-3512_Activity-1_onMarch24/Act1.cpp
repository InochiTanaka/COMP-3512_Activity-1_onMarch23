#include "Act1.hpp"

int main()
{
	Tree<>* tree = new Tree<>(string("0"));

	tree->add("1");

	tree->add("2");

	tree->add("3");

	tree->add("4");

	tree->add("5");

	tree->add("6");

	cout << "Tree by input data is : \n";
	tree->showTree();

	system("pause");
}
#pragma once
#include "Node.h"
#include "Rule.h"
#include <map>
#include <vector>
#include <queue>

class Graph
{

private:
	std::map<std::string, Node> graph;
	std::queue<std::string> DFSTree;

public:
	Graph(void);
	~Graph(void);
	Graph(std::string, std::vector<Rule>);

	void createGraph(std::vector<Rule>);
	void buildDFStree(std::string);
	//void postOrder(std::string);
	void findCycles();
	void sortGraph();
	void makeList();

	/*
	(1) create the depends-on graph, 
	(2) build the depthfirst search tree that is produced for a given query (to initialize the traversal order), 
	(3) find cycles in a graph, 
	(4) topologically sort an acyclic graph (a search tree without back arrows in the project), and 
	(5) create a list, possibly
		with cycles, to direct rule execution.
	*/

};


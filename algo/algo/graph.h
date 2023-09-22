#pragma once
#include<iostream>
#include<string>
#include<unordered_map>
#include<unordered_set>
#include<vector>
#include<queue>
using namespace std;
//this is the same exampleas in the book you may need to modify this function
//or the condition in the breadth-first function if you won't to search for something 
// this is just for illustration
bool isSeller(string name) 
{
	if (name.back() == 'm')
	{
		return true;
	}
	return false;
}
template<class t>
bool breadthFirstSearch(t name, unordered_map<t, vector<t>>graph)
{
	queue<t> searchQueue;
	unordered_set<t> searched;
	for (int i = 0; i < graph[name].size(); i++) 
	{
		searchQueue.push(graph[name][i]);
	}
	while (!searchQueue.empty())
	{
		t person = searchQueue.front();
		searchQueue.pop();
		if (searched.find(person) == searched.end()) 
		{
			if (isSeller(person)) {
				cout << person << " is a mango seller!" << endl;
				return true;
			}
			for (int i = 0; i < graph[person].size(); i++) {
				searchQueue.push(graph[person][i]);
			}
			searched.insert(person);
		}
	}
	return false;
}
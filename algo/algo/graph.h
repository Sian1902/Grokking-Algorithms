#pragma once
#include<iostream>
#include<string>
#include<unordered_map>
#include<unordered_set>
#include<vector>
#include<queue>
using namespace std;

bool isSeller(string name) 
{
	if (name.back() == 'm')
	{
		return true;
	}
	return false;
}
bool breadthFirstSearch(string name, unordered_map<string, vector<string>>graph)
{
	queue<string> searchQueue;
	unordered_set<string> searched;
	for (int i = 0; i < graph[name].size(); i++) 
	{
		searchQueue.push(graph[name][i]);
	}
	while (!searchQueue.empty())
	{
		string person = searchQueue.front();
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
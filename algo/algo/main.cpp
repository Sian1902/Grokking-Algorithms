#include"search.h"
#include"sort.h"
#include"recursion examples.h"
#include"graph.h"

int main() {
    std::unordered_map<std::string, std::vector<std::string>> graph;
    graph.insert({ "you", {"alice", "bob", "claire"} });
    graph.insert({ "bob", {"anuj", "peggy"} });
    graph.insert({ "alice", {"peggy"} });
    graph.insert({ "claire", {"thom", "jonny"} });
    graph.insert({ "anuj", {} });
    graph.insert({ "peggy", {} });
    graph.insert({ "thom", {} });
    graph.insert({ "jonny", {} });

    std::string name = "you";
    bool result = breadthFirstSearch(name, graph);
    cout << "Found mango seller: " << result << endl;
	
}
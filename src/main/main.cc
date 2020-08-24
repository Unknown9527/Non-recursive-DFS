#include "src/lib/solution.h"
#include <iostream>

using namespace std;

void PrintVector(vector<int> & input){
    
    for(int i =0; i < input.size(); i++){
        cout << input[i] <<" ";
    }
    cout << endl;
}

int main()
{
    
    
    map<int, set<int>> vert
    {
        // {0,{1,2,5}},
        // {1,{0,4}},
        // {2,{0,1,3}},
        // {3,{2,6}},
        // {4,{1}},
        // {5,{0}},
        // {6,{3}}

 
        {0,{1,2,5}},
        {1,{0,3}},
        {2,{0,4}},
        {3,{1,6}},
        {4,{2}},
        {5,{0}},
        {6,{3}}


        // {1,{2,3}},
        // {2,{1,3,4,5}},
        // {3,{1,2,4}},
        // {3,{2,3,4}}

    };
    Graph solution(vert);
    vector<int> result0 = solution.DFS(0,solution.v_);

    PrintVector(result0);
    
    return EXIT_SUCCESS;
}

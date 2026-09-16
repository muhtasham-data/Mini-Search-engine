#pragma once
#include<vector>
#include<fstream>
using std::string,std::vector,std::ofstream,std::ifstream;
struct engine{
    struct data{
        int count;
        string query,filename;
    };
    ofstream o;ifstream i;
    vector<data>db;
    void search(string filename);
};
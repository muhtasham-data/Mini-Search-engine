#pragma once
#include<vector>
#include<fstream>
#include<algorithm>
#include<sstream>
#include<cctype>
using std::string,std::vector,std::ofstream,std::ifstream;
struct engine{
    struct data{
        int count;
        string query;
        data(string a,int b):query(a),count(b){}
    };
    int count;string query,filename,dataa,dataq;
    ofstream o;ifstream i;
    vector<data>db;
    void getquery();
    void search(string filename);
    void output();
    string cleanWord(const string& input);
};
extern engine master;
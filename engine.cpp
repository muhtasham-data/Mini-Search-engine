#include"engine.hpp"
#include<iostream>
using std::cout,std::cin,std::getline;engine master;
void engine::getquery(){
    cout<<"Enter your Query: ";
    getline(cin,query1);
    o.open("data/query");
    o<<query1;
    o.close();
}
string engine::cleanWord(const string& input) {
    string result = "";
    for (char ch : input) {
        if (!ispunct(static_cast<unsigned char>(ch))) {
            result += tolower(static_cast<unsigned char>(ch));
        }
    }
    return result;
}
void engine::search(string filename){
    int count=0;
    string filepath="data/"+filename;
    i.clear();
    i.open("data/query");
    while(i>>dataq){
        string data1=cleanWord(dataq);
        ifstream n(filepath);
        while (n>>dataa){
            string data2=cleanWord(dataa);
            if(data1==data2){
                count++;
            }
        }
        n.close();
    }
    i.close();
    db.emplace_back(filename,count);
}
void engine::output(){
    std::sort(db.begin(),db.end(),[](const auto &a,const auto &b){return a.count>b.count;});
    for(const auto &x:db){
        cout<<"In "<<x.query<<": "<<x.count<<"\n";
    }
}   
void engine::manager(){
    while (true)
    {
        cout<<"=================================================\n";
        cout<<"Mini Search engine | You can exit by entering q\n";
        cout<<"=================================================\n";
        master.getquery();
        if(query1=="q"||query1=="Q"){
            return;
        }
        cout<<"==============================\n";
        cout<<"\tOutput OR Results\n";
        cout<<"==============================\n";
        master.search("doc1.txt");
        master.search("doc2.txt");
        master.search("doc3.txt");
        master.output();
    }
}
int main(){
    master.manager(); 
}
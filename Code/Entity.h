#pragma once
#include<unordered_map>
#include<bits/stdc++.h>
#define MAXASCII 256
namespace Entity
{
    using namespace std;
    typedef unsigned long long ull;  
    //the xml handling class
    class XmlParser {
    public:
        vector<myPair<int, int>>errors;
        stack< myPair< myPair< string, int >, myPair< int, int > > > tagStack;  //{tag name, line index} and {start index,end index}
        vector<vector<myPair<int, int>>> colors;
        multiset<string> tagSet;
        vector<User> users;
        string json;
        string xml;
        string xmlCommpressed;
        string xmlFormatted;
        vector<string>lines;
        string reformatted;
        int freq[MAXASCII] = { 0 };
        priority_queue<Node*, vector<Node*>, compare>pq;
        vector<myPair<string, string>> pairs;
        void setXml(string& xml);
        string getData(string& xml, int& counter);
        void checkStack();
        string trimLine(string input);
        string getTagFrame(string& xml, int& pointer);
        void deleteNewLines();
        void extractData();
        void printJson();
        void correctTag(string tagName);
        void toLines();
        void fillColors();
        string getTagName(string tag);
        static string getSpace(int numOfSpaces);
    };
}
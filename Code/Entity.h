#pragma once
#include<bits/stdc++.h>
#define MAXASCII 256
namespace Entity
{
    using namespace std;
    typedef unsigned long long ull;  
    //the xml handling class
    class XmlParser {
    public:
        class Follower {
        public:
            string id;
            vector<string> idVector;
            void clear();
            void setFollower();
            void printInXml(string& xmlFormatted);
        };
        template<class T, class U>
        class myPair {
        public:
            T first;
            U second;
            myPair(T first, U second);
            myPair();
            void setPairValues(T first, U second);
        };
        class Post {
        public:
            vector<int>postOrder;
            string s = "";

            myPair<int, string> body = createPair(-1, s);
            myPair<int, vector<string>> topics = createPair(-1, vector<string>{});

            vector<myPair<int, string>> bodyVector;
            vector<myPair<int, vector<string>>> topicsVector;

            void clear();
            void setPost();
            void printInXml(string& xmlFormatted);
        private:
            void getOrder();
        };
        class User {
        private:
            void getOrder();
        public:
            vector<int> userOrder;
            string s = "";

            myPair<int, string> id = createPair(-1, s);
            myPair<int, string> name = createPair(-1, s);
            myPair<int, vector<Post>> posts = createPair(-1, vector<Post>{});
            myPair<int, vector<Follower>> followers = createPair(-1, vector<Follower>{});

            vector<myPair<int, string>>idVector;
            vector<myPair<int, string>>nameVector;
            vector<myPair<int, vector<Post>>> postsVector;
            vector<myPair<int, vector<Follower>>> followersVector;
            void clear();
            void printInJson(string& json);
            void setUser();
            void printInXml(string& xmlFormatted);
        };
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
        template<class T, class U>
        static myPair<T, U> createPair(T first, U second);
        template<class T>
        static void setField(myPair<int, T>& target, vector< myPair<int, T> >& list);
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
        vector<string> splitter(string s, int size);
        Node* huffman();
        Node* TreeMaker(int freq[]);
        void leafCoding(Node* tree, string code);
        static bool compareByLength(const myPair<string,string>& a, const myPair<string,string>& b);
        void sortingTree();
        string EncryptData(int freq[], string data);
        string encode(string data);
        string decode(string data);
    };
}
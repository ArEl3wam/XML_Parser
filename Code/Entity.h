#pragma once
#include<bits/stdc++.h>
#define MAXASCII 256
#define XML_FORMAT 0
#define JSON_FORMAT 1
#define PRIMITIVE 2
#define ARRAY 3
#define OBJECT 4
#define  ILLUSION -1
namespace Entity
{
    using namespace std;
    typedef unsigned long long ull;
    //the xml handling class
    class XmlParser {
    public:
        class TagNode {
        public:
            //data fields
            string name;
            string value;
            int type;
            bool isArrayElement;
            vector<TagNode*> children;
            TagNode* parent;
            //constructor
            TagNode(string name, string value = "", int type = PRIMITIVE, bool isArrayElement = 0);
            void setName(string name);
            void setValue(string value);
            void setParent(TagNode* parent);
            void addChild(TagNode* child);
            string getName();
            string getValue();
            TagNode* getParent();
            void setType(int type);
            int getType();
            vector<TagNode*> getChildren();
        };
        class SetNode {
        public:
            string data;
            SetNode* left;
            SetNode* right;
            SetNode(string data);
            string getData();
        };
        class TagTree {
            //data field
            TagNode* currentNode;
            void deleteNodes(TagNode* root);
            void printInOrder(TagNode* root, int format, string& output, int lvl = 0, bool isFinalElement = 1);
        public:
            TagNode* chain;
            void setTypes(TagNode* root);
            TagTree();
            ~TagTree();
            void constructTree(vector<string>& lines);
            void printInOrder(int format, string& output);
        };
        class MultiSet {
            SetNode* chain;
            SetNode* getMin(SetNode* root);
            SetNode* insert(string data, SetNode* root);
            SetNode* lower_bound(string data, SetNode* root);
            int count(string data, SetNode* root);
            SetNode* erase(string data, SetNode* dataPointer, SetNode* root);
            void deleteNodes(SetNode* root);
        public:
            MultiSet();
            ~MultiSet();
            void insert(string data);
            SetNode* lower_bound(string data);
            int count(string data);
            void erase(SetNode* dataPointer);
        };
        class Follower {
        public:
            string id;
            vector<string> idVector;
            void clear();
            void setFollower();
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
        };
        class User {
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
            void setUser();
        };
        class Node
        {
        public:
            Node* left, * right;
            string c;
            int freq;
            Node(int freq, string c, Node* left, Node* right);
            ~Node();
        };
        struct compare
        {
            bool operator()(const Node* l, const Node* r) const;
        };
        vector<myPair<int, int>>errors;
        stack<myPair<myPair<string, int>, myPair< int, int>>> tagStack;  //{tag name, line index} and {start index,end index}
        vector<vector<myPair<int, int>>> colors;
        MultiSet* tagSet;
        vector<User> users;
        string json;
        string xml;
        string xmlCommpressed;
        string xmlFormatted;
        vector<string>lines;
        string reformatted;
        string temp;
        public: TagTree* tagTree;
        int freq[MAXASCII] = { 0 };
        priority_queue<Node*, vector<Node*>, compare>pq;
        vector<myPair<string, string>> pairs;
        void setXml(string& xml);
        template<class T, class U>
        static myPair<T, U> createPair(T first, U second);
        template<class T>
        static void setField(myPair<int, T>& target, vector< myPair<int, T> >& list);
        bool isStartTag(string tag);
        void checkErrors();
        string getData(string& xml, int& counter);
        void checkStack();
        string trimLine(string input);
        string getTagFrame(string& xml, int& pointer);
        void deleteNewLines();
        void extractData();
        void printJson();
        void checkErrors(string xml);
        void correctTag(string tagName);
        void toLines();
        void correctXml();
        void recreateXml();
        void fillColors();
        void getXmlFormatted();
        static string getTagName(string tag);
        static string getSpace(int numOfSpaces);
        vector<string> splitter(string s, int size);
        string BiToHex(string s);
        string HexToBi(string s);
        Node* huffman();
        Node* TreeMaker(int freq[]);
        void leafCoding(Node* tree, string code);
        static bool compareByLength(const myPair<string, string>& a, const myPair<string, string>& b);
        void sortingTree();
        string EncryptData(int freq[], string data);
        string encode(string data);
        string decode(string data);
        static bool isSubString(string target, string base);
        static bool isNumber(string number);
        static int isItemFound(int item, vector<int>& itemVec);
        static bool compareUsers(User user1, User user2);
        string searchPosts(string keyWord);
        string getMutualFollowers(string ID1, string ID2);
        string recommendPeople(string id);
        string doNetworkAnalysis();
    };
}
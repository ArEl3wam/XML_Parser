#pragma once
#include"Entity.h"
using namespace std;
ref class ManagedXmlParser
{
private:
	shared_ptr<Entity::XmlParser>* ptr;
	shared_ptr<Entity::XmlParser> GetPtr() { return *ptr; }
public:
	ManagedXmlParser(shared_ptr<Entity::XmlParser>& wrapper):ptr(new shared_ptr<Entity::XmlParser>(wrapper))
	{

	}
};


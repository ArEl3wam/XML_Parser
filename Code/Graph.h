#pragma once
#include <msclr\marshal_cppstd.h>
using namespace System::Diagnostics;
using namespace System::IO;
using namespace System;
using namespace msclr::interop;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Text;
ref class Graph
{
	String^ path;
	String^ data;
public: Graph()
{
	path = Environment::CurrentDirectory;
	//path = Environment::GetFolderPath(Environment::SpecialFolder::DesktopDirectory);
}
private: Void generateDot(String^ pathdot, String^ pathpng)
{
	//StreamWriter^ strm = File::CreateText(pathdot);
	//strm->Flush();
	//strm->Close();
	System::IO::File::WriteAllText(pathdot, data->ToString());
	String^ esrdot = "\"" + pathdot + "\"";
	String^ esrpng = "\"" + pathpng + "\"";
	auto command = String::Format("Data\\dot.exe -Tpng " + esrdot + " -o " + esrpng);
	auto procStart = gcnew ProcessStartInfo("cmd", "/C" + command);
	//procStart->CreateNoWindow = false;
	//procStart->UseShellExecute = true;
	//procStart->WindowStyle = ProcessWindowStyle::Hidden;
	auto proc = gcnew Process();
	proc->StartInfo = procStart;
	proc->StartInfo->WindowStyle = ProcessWindowStyle::Hidden;
	proc->Start();
	proc->WaitForExit();
	File::Delete(pathdot);
}
public: Void makeGraph(String^ text)
{
	String^ pathdot = path + "\\image.dt";
	String^ pathpng = path + "\\graph.png";
	data = "digraph G { \nsize = \"5!\"\n" + text + "}";
	this->generateDot(pathdot, pathpng);
}
public: Void openGraph()
{
	if (File::Exists(path + "\\graph.png"))
	{
		MessageBox::Show("Graph saved in " + Environment::CurrentDirectory, "Operation Successful", MessageBoxButtons::OK, MessageBoxIcon::None);
		try
		{
			Process::Start(path + "\\graph.png");
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Data->ToString(), "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else
	{
		MessageBox::Show("An error occured. Please try again or grant administrator permissions", "Error", MessageBoxButtons::OK, MessageBoxIcon::None);
	}
}
};
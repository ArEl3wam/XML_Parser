#pragma once
#include <msclr\marshal_cppstd.h>
#include "Entity.h"
using namespace std;
namespace XMLGui {
	extern Entity::XmlParser parser;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SingleInput
	/// </summary>
	public ref class SingleInput : public System::Windows::Forms::Form
	{
	public:
		SingleInput(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SingleInput()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ Input;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ ok;
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Input = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ok = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Input
			// 
			this->Input->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->Input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Input->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Input->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->Input->Location = System::Drawing::Point(12, 77);
			this->Input->Name = L"Input";
			this->Input->Size = System::Drawing::Size(667, 42);
			this->Input->TabIndex = 3;
			this->Input->Text = L"";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->label1->Location = System::Drawing::Point(211, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(269, 36);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Enter Word(s)";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ok
			// 
			this->ok->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->ok->FlatAppearance->BorderSize = 0;
			this->ok->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ok->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ok->ForeColor = System::Drawing::Color::White;
			this->ok->Location = System::Drawing::Point(95, 139);
			this->ok->Name = L"ok";
			this->ok->Size = System::Drawing::Size(150, 30);
			this->ok->TabIndex = 7;
			this->ok->Text = L"SEARCH";
			this->ok->UseVisualStyleBackColor = false;
			this->ok->Click += gcnew System::EventHandler(this, &SingleInput::ok_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(443, 139);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 30);
			this->button1->TabIndex = 8;
			this->button1->Text = L"BACK";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SingleInput::button1_Click);
			// 
			// SingleInput
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(691, 181);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ok);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Input);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SingleInput";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SingleInput";
			this->Load += gcnew System::EventHandler(this, &SingleInput::SingleInput_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SingleInput::SingleInput_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SingleInput::SingleInput_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &SingleInput::SingleInput_MouseUp);
			this->ResumeLayout(false);

		}
#pragma endregion
	private:void MarshalString(String^ s, wstring& os) {
		using namespace Runtime::InteropServices;
		const wchar_t* chars =
			(const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
	private: System::Void ok_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!Input->Text->Length)
		{
			MessageBox::Show("Input is empty", "Please enter text in input field", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		string x = msclr::interop::marshal_as<std::string>(Input->Text);
		x.erase(std::remove(x.begin(), x.end(), '\n'), x.end());
		parser.temp = parser.searchPosts(x);
		this->Close();
	}
	private: bool dragging;
	private: Point offset;
	private: System::Void SingleInput_Load(System::Object^ sender, System::EventArgs^ e) {
		this->dragging = false;
	}
	private: System::Void SingleInput_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->dragging = true;
		this->offset = Point(e->X, e->Y);
	}
	private: System::Void SingleInput_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (this->dragging)
		{
			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - this->offset.X,
				currentScreenPos.Y - this->offset.Y);
		}
	}
	private: System::Void SingleInput_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->dragging = false;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}

#pragma once
#include "Entity.h"
#include <msclr\marshal_cppstd.h>
namespace XMLGui {
	extern Entity::XmlParser parser;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Mutual
	/// </summary>
	public ref class Mutual : public System::Windows::Forms::Form
	{
	public:
		Mutual(void)
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
		~Mutual()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ok;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ Input1;
	private: System::Windows::Forms::RichTextBox^ Input2;
	private: System::Windows::Forms::Label^ label2;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ok = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Input1 = (gcnew System::Windows::Forms::RichTextBox());
			this->Input2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
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
			this->ok->Location = System::Drawing::Point(271, 133);
			this->ok->Name = L"ok";
			this->ok->Size = System::Drawing::Size(150, 30);
			this->ok->TabIndex = 10;
			this->ok->Text = L"Find";
			this->ok->UseVisualStyleBackColor = false;
			this->ok->Click += gcnew System::EventHandler(this, &Mutual::ok_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->label1->Location = System::Drawing::Point(12, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(312, 36);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Enter ID 1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Input1
			// 
			this->Input1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->Input1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Input1->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Input1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->Input1->Location = System::Drawing::Point(12, 71);
			this->Input1->Name = L"Input1";
			this->Input1->Size = System::Drawing::Size(312, 42);
			this->Input1->TabIndex = 8;
			this->Input1->Text = L"";
			// 
			// Input2
			// 
			this->Input2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->Input2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Input2->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Input2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->Input2->Location = System::Drawing::Point(344, 71);
			this->Input2->Name = L"Input2";
			this->Input2->Size = System::Drawing::Size(335, 42);
			this->Input2->TabIndex = 11;
			this->Input2->Text = L"";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->label2->Location = System::Drawing::Point(355, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(312, 36);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Enter ID 2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Mutual
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(691, 181);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Input2);
			this->Controls->Add(this->ok);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Input1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Mutual";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Mutual";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ok_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Input1->Text->Length && Input2->Text->Length)
		{
			parser.temp = parser.getMutualFollowers(msclr::interop::marshal_as<std::string>(Input1->Text), msclr::interop::marshal_as<std::string>(Input2->Text));
			this->Hide();
			return;
		}
		MessageBox::Show("Input is empty", "Please enter text in both input fields", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
};
}

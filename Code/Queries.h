#pragma once
//#include "Saver.h"
#include "SingleInput.h"
#include "Entity.h"
#include "Mutual.h"
#include <msclr\marshal_cppstd.h>

namespace XMLGui {
	extern Entity::XmlParser parser;
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	/// <summary>
	/// Summary for Queries
	/// </summary>
	public ref class Queries : public System::Windows::Forms::Form
	{
	public:
		Queries()
		{
			InitializeComponent();
		}
		//Queries(shared_ptr<Entity::XmlParser> j)
		//{
		//	InitializeComponent();
		//	parser = *j;
		//}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Queries()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ mutual;
	private: System::Windows::Forms::Button^ suggest;
	private: System::Windows::Forms::Button^ search;



	private: System::Windows::Forms::Button^ active;

	private: System::Windows::Forms::RichTextBox^ Output;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ back;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Queries::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->back = (gcnew System::Windows::Forms::Button());
			this->search = (gcnew System::Windows::Forms::Button());
			this->active = (gcnew System::Windows::Forms::Button());
			this->suggest = (gcnew System::Windows::Forms::Button());
			this->mutual = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Output = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->panel1->Controls->Add(this->back);
			this->panel1->Controls->Add(this->search);
			this->panel1->Controls->Add(this->active);
			this->panel1->Controls->Add(this->suggest);
			this->panel1->Controls->Add(this->mutual);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(267, 390);
			this->panel1->TabIndex = 0;
			// 
			// back
			// 
			this->back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->back->FlatAppearance->BorderSize = 0;
			this->back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->back->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back->ForeColor = System::Drawing::Color::White;
			this->back->Location = System::Drawing::Point(18, 345);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(231, 30);
			this->back->TabIndex = 6;
			this->back->Text = L"BACK";
			this->back->UseVisualStyleBackColor = false;
			this->back->Click += gcnew System::EventHandler(this, &Queries::back_Click);
			// 
			// search
			// 
			this->search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->search->FlatAppearance->BorderSize = 0;
			this->search->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->search->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search->ForeColor = System::Drawing::Color::White;
			this->search->Location = System::Drawing::Point(18, 298);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(231, 30);
			this->search->TabIndex = 5;
			this->search->Text = L"POST SEARCH";
			this->search->UseVisualStyleBackColor = false;
			this->search->Click += gcnew System::EventHandler(this, &Queries::search_Click);
			// 
			// active
			// 
			this->active->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->active->FlatAppearance->BorderSize = 0;
			this->active->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->active->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->active->ForeColor = System::Drawing::Color::White;
			this->active->Location = System::Drawing::Point(18, 251);
			this->active->Name = L"active";
			this->active->Size = System::Drawing::Size(231, 30);
			this->active->TabIndex = 4;
			this->active->Text = L"MOST ACTIVE";
			this->active->UseVisualStyleBackColor = false;
			this->active->Click += gcnew System::EventHandler(this, &Queries::active_Click);
			// 
			// suggest
			// 
			this->suggest->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->suggest->FlatAppearance->BorderSize = 0;
			this->suggest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->suggest->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->suggest->ForeColor = System::Drawing::Color::White;
			this->suggest->Location = System::Drawing::Point(18, 204);
			this->suggest->Name = L"suggest";
			this->suggest->Size = System::Drawing::Size(231, 30);
			this->suggest->TabIndex = 3;
			this->suggest->Text = L"SUGGEST FOLLOWERS";
			this->suggest->UseVisualStyleBackColor = false;
			this->suggest->Click += gcnew System::EventHandler(this, &Queries::suggest_Click);
			// 
			// mutual
			// 
			this->mutual->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->mutual->FlatAppearance->BorderSize = 0;
			this->mutual->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mutual->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mutual->ForeColor = System::Drawing::Color::White;
			this->mutual->Location = System::Drawing::Point(18, 157);
			this->mutual->Name = L"mutual";
			this->mutual->Size = System::Drawing::Size(231, 30);
			this->mutual->TabIndex = 2;
			this->mutual->Text = L"MUTUAL FOLLOWERS";
			this->mutual->UseVisualStyleBackColor = false;
			this->mutual->Click += gcnew System::EventHandler(this, &Queries::mutual_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(267, 144);
			this->panel2->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(267, 144);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Output
			// 
			this->Output->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->Output->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Output->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Output->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->Output->Location = System::Drawing::Point(275, 49);
			this->Output->Name = L"Output";
			this->Output->ReadOnly = true;
			this->Output->Size = System::Drawing::Size(388, 329);
			this->Output->TabIndex = 4;
			this->Output->Text = L"";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->label3->Location = System::Drawing::Point(394, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 36);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Output";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Queries
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(673, 390);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Output);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Queries";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"XMLParser";
			this->Load += gcnew System::EventHandler(this, &Queries::Queries_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Queries::Queries_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Queries::Queries_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Queries::Queries_MouseUp);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: bool dragging;
	private: Point offset;
	private: System::Void Queries_Load(System::Object^ sender, System::EventArgs^ e) {
		this->dragging = false;
	}
	private: System::Void Queries_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->dragging = true;
		this->offset = Point(e->X, e->Y);
	}
	private: System::Void Queries_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (this->dragging)
		{
			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - this->offset.X,
				currentScreenPos.Y - this->offset.Y);
		}
	}
	private: System::Void Queries_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->dragging = false;
	}
	private: System::Void mutual_Click(System::Object^ sender, System::EventArgs^ e) {
		Mutual^ m = gcnew Mutual();
		m->ShowDialog();
		Output->Text = marshal_as<String^>(parser.temp);
	}

	private: System::Void suggest_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ data;
		for (auto user : parser.users)
		{
			data = data + "For User " + marshal_as<String^>(user.id.second) + ": ";
			data = data + marshal_as<String^>(parser.recommendPeople(user.id.second)) + "\n\n";
		}
		Output->Text = data;
	}
	private: System::Void active_Click(System::Object^ sender, System::EventArgs^ e) {
		Output->Text = marshal_as<String^>(parser.doNetworkAnalysis());
	}
	private: System::Void search_Click(System::Object^ sender, System::EventArgs^ e) {
		SingleInput^ si = gcnew SingleInput();
		si->ShowDialog();
		Output->Text = marshal_as<String^>(parser.temp);
	}
	private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
#pragma once
#include"Entity.h"
#include"Queries.h"
#include"ManagedXmlParser.h"
#include"Graph.h"
#include <msclr\marshal_cppstd.h>
#include"CustomMessageBox.h"
using namespace System::Diagnostics;
using namespace Entity;
using namespace System::IO;
namespace XMLGui {
	XmlParser parser;
	using namespace System;
	using namespace msclr::interop;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ browse;
	private: System::Windows::Forms::RichTextBox^ Input;
	private: System::Windows::Forms::Button^ decompress;
	private: System::Windows::Forms::Button^ compress;
	private: System::Windows::Forms::Button^ beautify;
	private: System::Windows::Forms::Button^ json;
	private: System::Windows::Forms::Button^ saveas;
	private: System::Windows::Forms::Button^ save;
	private: System::Windows::Forms::Button^ correct;
	private: System::Windows::Forms::Button^ validate;
	private: System::Windows::Forms::RichTextBox^ Output;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Button^ Visualize;
	private: System::Windows::Forms::Button^ analysis;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->decompress = (gcnew System::Windows::Forms::Button());
			this->compress = (gcnew System::Windows::Forms::Button());
			this->beautify = (gcnew System::Windows::Forms::Button());
			this->json = (gcnew System::Windows::Forms::Button());
			this->saveas = (gcnew System::Windows::Forms::Button());
			this->save = (gcnew System::Windows::Forms::Button());
			this->correct = (gcnew System::Windows::Forms::Button());
			this->validate = (gcnew System::Windows::Forms::Button());
			this->browse = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Input = (gcnew System::Windows::Forms::RichTextBox());
			this->Output = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Visualize = (gcnew System::Windows::Forms::Button());
			this->analysis = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->panel1->Controls->Add(this->exit);
			this->panel1->Controls->Add(this->decompress);
			this->panel1->Controls->Add(this->compress);
			this->panel1->Controls->Add(this->beautify);
			this->panel1->Controls->Add(this->json);
			this->panel1->Controls->Add(this->saveas);
			this->panel1->Controls->Add(this->save);
			this->panel1->Controls->Add(this->correct);
			this->panel1->Controls->Add(this->validate);
			this->panel1->Controls->Add(this->browse);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(186, 729);
			this->panel1->TabIndex = 0;
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->exit->FlatAppearance->BorderSize = 0;
			this->exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit->ForeColor = System::Drawing::Color::White;
			this->exit->Location = System::Drawing::Point(18, 682);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(150, 30);
			this->exit->TabIndex = 10;
			this->exit->Text = L"EXIT";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &MainForm::exit_Click);
			// 
			// decompress
			// 
			this->decompress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->decompress->FlatAppearance->BorderSize = 0;
			this->decompress->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->decompress->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->decompress->ForeColor = System::Drawing::Color::White;
			this->decompress->Location = System::Drawing::Point(18, 635);
			this->decompress->Name = L"decompress";
			this->decompress->Size = System::Drawing::Size(150, 30);
			this->decompress->TabIndex = 9;
			this->decompress->Text = L"DECOMPRESS";
			this->decompress->UseVisualStyleBackColor = false;
			this->decompress->Click += gcnew System::EventHandler(this, &MainForm::decompress_Click);
			// 
			// compress
			// 
			this->compress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->compress->FlatAppearance->BorderSize = 0;
			this->compress->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->compress->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->compress->ForeColor = System::Drawing::Color::White;
			this->compress->Location = System::Drawing::Point(18, 588);
			this->compress->Name = L"compress";
			this->compress->Size = System::Drawing::Size(150, 30);
			this->compress->TabIndex = 8;
			this->compress->Text = L"COMPRESS";
			this->compress->UseVisualStyleBackColor = false;
			this->compress->Click += gcnew System::EventHandler(this, &MainForm::compress_Click);
			// 
			// beautify
			// 
			this->beautify->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->beautify->FlatAppearance->BorderSize = 0;
			this->beautify->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->beautify->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->beautify->ForeColor = System::Drawing::Color::White;
			this->beautify->Location = System::Drawing::Point(18, 444);
			this->beautify->Name = L"beautify";
			this->beautify->Size = System::Drawing::Size(150, 30);
			this->beautify->TabIndex = 7;
			this->beautify->Text = L"BEAUTIFY";
			this->beautify->UseVisualStyleBackColor = false;
			this->beautify->Click += gcnew System::EventHandler(this, &MainForm::beautify_Click);
			// 
			// json
			// 
			this->json->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->json->FlatAppearance->BorderSize = 0;
			this->json->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->json->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->json->ForeColor = System::Drawing::Color::White;
			this->json->Location = System::Drawing::Point(18, 397);
			this->json->Name = L"json";
			this->json->Size = System::Drawing::Size(150, 30);
			this->json->TabIndex = 6;
			this->json->Text = L"JSON";
			this->json->UseVisualStyleBackColor = false;
			this->json->Click += gcnew System::EventHandler(this, &MainForm::json_Click);
			// 
			// saveas
			// 
			this->saveas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->saveas->FlatAppearance->BorderSize = 0;
			this->saveas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveas->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveas->ForeColor = System::Drawing::Color::White;
			this->saveas->Location = System::Drawing::Point(18, 348);
			this->saveas->Name = L"saveas";
			this->saveas->Size = System::Drawing::Size(150, 30);
			this->saveas->TabIndex = 5;
			this->saveas->Text = L"SAVE AS";
			this->saveas->UseVisualStyleBackColor = false;
			this->saveas->Click += gcnew System::EventHandler(this, &MainForm::saveas_Click);
			// 
			// save
			// 
			this->save->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->save->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->save->FlatAppearance->BorderSize = 0;
			this->save->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->save->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save->ForeColor = System::Drawing::Color::White;
			this->save->Location = System::Drawing::Point(18, 300);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(150, 30);
			this->save->TabIndex = 4;
			this->save->Text = L"SAVE";
			this->save->UseVisualStyleBackColor = false;
			this->save->Click += gcnew System::EventHandler(this, &MainForm::save_Click);
			// 
			// correct
			// 
			this->correct->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->correct->FlatAppearance->BorderSize = 0;
			this->correct->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->correct->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->correct->ForeColor = System::Drawing::Color::White;
			this->correct->Location = System::Drawing::Point(18, 252);
			this->correct->Name = L"correct";
			this->correct->Size = System::Drawing::Size(150, 30);
			this->correct->TabIndex = 3;
			this->correct->Text = L"CORRECT";
			this->correct->UseVisualStyleBackColor = false;
			this->correct->Click += gcnew System::EventHandler(this, &MainForm::correct_Click);
			// 
			// validate
			// 
			this->validate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->validate->FlatAppearance->BorderSize = 0;
			this->validate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->validate->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->validate->ForeColor = System::Drawing::Color::White;
			this->validate->Location = System::Drawing::Point(18, 204);
			this->validate->Name = L"validate";
			this->validate->Size = System::Drawing::Size(150, 30);
			this->validate->TabIndex = 2;
			this->validate->Text = L"VALIDATE";
			this->validate->UseVisualStyleBackColor = false;
			this->validate->Click += gcnew System::EventHandler(this, &MainForm::validate_Click);
			// 
			// browse
			// 
			this->browse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->browse->FlatAppearance->BorderSize = 0;
			this->browse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->browse->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->browse->ForeColor = System::Drawing::Color::White;
			this->browse->Location = System::Drawing::Point(18, 157);
			this->browse->Name = L"browse";
			this->browse->Size = System::Drawing::Size(150, 30);
			this->browse->TabIndex = 1;
			this->browse->Text = L"BROWSE";
			this->browse->UseVisualStyleBackColor = false;
			this->browse->Click += gcnew System::EventHandler(this, &MainForm::browse_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(186, 144);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
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
			this->Input->Location = System::Drawing::Point(192, 49);
			this->Input->Name = L"Input";
			this->Input->Size = System::Drawing::Size(370, 663);
			this->Input->TabIndex = 2;
			this->Input->Text = L"";
			this->Input->TextChanged += gcnew System::EventHandler(this, &MainForm::Input_TextChanged);
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
			this->Output->Location = System::Drawing::Point(569, 49);
			this->Output->Name = L"Output";
			this->Output->ReadOnly = true;
			this->Output->Size = System::Drawing::Size(370, 663);
			this->Output->TabIndex = 3;
			this->Output->Text = L"";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->label1->Location = System::Drawing::Point(327, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 36);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Input";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->label3->Location = System::Drawing::Point(694, 8);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 36);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Output";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Visualize
			// 
			this->Visualize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->Visualize->FlatAppearance->BorderSize = 0;
			this->Visualize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Visualize->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Visualize->ForeColor = System::Drawing::Color::White;
			this->Visualize->Location = System::Drawing::Point(18, 492);
			this->Visualize->Name = L"Visualize";
			this->Visualize->Size = System::Drawing::Size(150, 30);
			this->Visualize->TabIndex = 11;
			this->Visualize->Text = L"VISUALIZE";
			this->Visualize->UseVisualStyleBackColor = false;
			this->Visualize->Click += gcnew System::EventHandler(this, &MainForm::Visualize_Click);
			// 
			// analysis
			// 
			this->analysis->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->analysis->FlatAppearance->BorderSize = 0;
			this->analysis->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->analysis->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->analysis->ForeColor = System::Drawing::Color::White;
			this->analysis->Location = System::Drawing::Point(18, 541);
			this->analysis->Name = L"analysis";
			this->analysis->Size = System::Drawing::Size(150, 30);
			this->analysis->TabIndex = 12;
			this->analysis->Text = L"ANALYSIS";
			this->analysis->UseVisualStyleBackColor = false;
			this->analysis->Click += gcnew System::EventHandler(this, &MainForm::analysis_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(951, 729);
			this->Controls->Add(this->analysis);
			this->Controls->Add(this->Visualize);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Output);
			this->Controls->Add(this->Input);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"XMLParser";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseUp);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: bool dragging;
	private: Point offset;
	private: Color defColor;
	private: String^ strfilename;
	public: int choice = 0;
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->dragging = false;
		defColor = Input->ForeColor;
	}

	private: System::Void MainForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->dragging = true;
		this->offset = Point(e->X, e->Y);
	}
	private: System::Void MainForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (this->dragging)
		{
			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - this->offset.X,
				currentScreenPos.Y - this->offset.Y);
		}
	}
	private: System::Void MainForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->dragging = false;
	}
	private: System::Void browse_Click(System::Object^ sender, System::EventArgs^ e) {
		Stream^ myStream;
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
		openFileDialog->InitialDirectory = "c:\\";
		openFileDialog->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog->FilterIndex = 2;
		openFileDialog->RestoreDirectory = true;
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if ((myStream = openFileDialog->OpenFile()) != nullptr)
			{
				strfilename = openFileDialog->FileName;
				String^ Readfile = File::ReadAllText(strfilename);
				parser.setXml(msclr::interop::marshal_as<std::string>(Readfile));
				Input->Text = marshal_as<String^>(parser.xml);
				myStream->Close();
			}
		}
		delete openFileDialog;
	}
	private: System::Void validate_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Input->Text == "")
		{
			MessageBox::Show("Input is empty", "Please enter text in input field", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		if (!Input->Text->EndsWith(">") && !Input->Text->StartsWith("<"))
		{
			MessageBox::Show("Please enter XML file in input field", "Input is not XML file", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		Input->SelectAll();
		Input->SelectionColor = defColor;
		parser.setXml(msclr::interop::marshal_as<std::string>(Input->Text));
		parser.checkErrors();
		if (parser.errors.empty())
		{
			MessageBox::Show("0 Errors found!", "Input is valid", MessageBoxButtons::OK, MessageBoxIcon::None);
			return;
		}
		for (auto x : parser.errors)
		{
			Input->Select(x.first, x.second - x.first + 1);
			Input->SelectionColor = Color::Red;
		}
		MessageBox::Show(parser.errors.size().ToString() + " Error(s) found\nInvalid Text is highlighted", "Input is invalid", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	private: System::Void correct_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Input->Text == "")
		{
			MessageBox::Show("Input is empty", "Please enter text in input field", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		if (!Input->Text->EndsWith(">") && !Input->Text->StartsWith("<"))
		{
			MessageBox::Show("Please enter XML file in input field", "Input is not XML file", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		parser.setXml(msclr::interop::marshal_as<std::string>(Input->Text));
		parser.checkErrors();
		if (parser.errors.empty())
		{
			MessageBox::Show("0 Errors found!", "Input is valid", MessageBoxButtons::OK, MessageBoxIcon::None);
			return;
		}
		parser.correctXml();
		Input->Text = marshal_as<String^>(parser.xmlFormatted);
		MessageBox::Show(parser.errors.size().ToString() + " Errors found and corrected", "Input is corrected", MessageBoxButtons::OK, MessageBoxIcon::None);
	}
	private: System::Void save_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			System::IO::File::WriteAllText(strfilename, Input->Text);
		}
		catch (Exception^ ex)
		{
			if (ex->Message != "Value cannot be null.\r\nParameter name: path")
			{
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
			try
			{
				saveFileDialog->InitialDirectory = "c:\\";
				saveFileDialog->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
				saveFileDialog->FileName = "Input.txt";
				saveFileDialog->Title = "Save Input";
				if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					String^ path = saveFileDialog->FileName;
					StreamWriter^ writer = gcnew StreamWriter(File::Create(path));
					try
					{
						strfilename = path;
						writer->Write(Input->Text);
					}
					finally
					{
						delete writer;
					}
				}
			}
			finally
			{
				delete saveFileDialog;
			}
		}
	}
	private: System::Void saveas_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ temp = CustomMessageBox::ShowBox();
		if (temp == "Cancel")
		{
			return;
		}
		SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
		try
		{
			saveFileDialog->InitialDirectory = "c:\\";
			saveFileDialog->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			saveFileDialog->FileName = temp + ".txt";
			saveFileDialog->Title = "Save " + temp;
			if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				String^ path = saveFileDialog->FileName;
				StreamWriter^ writer = gcnew StreamWriter(File::Create(path));
				try
				{
					if (temp == "Input")
					{
						strfilename = path;
						writer->Write(Input->Text);
					}
					if (temp == "Output")writer->Write(Output->Text);
				}
				finally
				{
					delete writer;
				}
			}
		}
		finally
		{
			delete saveFileDialog;
		}
	}
	private: System::Void json_Click(System::Object^ sender, System::EventArgs^ e) {
		Output->Text = "";
		if (Input->Text == "")
		{
			MessageBox::Show("Input is empty", "Please enter text in input field", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		if (!Input->Text->EndsWith(">") && !Input->Text->StartsWith("<"))
		{
			MessageBox::Show("Please enter XML file in input field", "Input is not XML file", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		parser.setXml(msclr::interop::marshal_as<std::string>(Input->Text));
		parser.checkErrors();
		if (parser.errors.empty())
		{
			parser.deleteNewLines();
			parser.printJson();
			Output->Text = marshal_as<String^>(parser.json);
			return;
		}
		MessageBox::Show("Please use Validate or Correct buttons to fix the errors and try again", "Input is invalid", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	private: Color getColor(int r, int g, int b)
	{
		return Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(r)), static_cast<System::Int32>(static_cast<System::Byte>(g)), static_cast<System::Int32>(static_cast<System::Byte>(b)));
	}
	private: Color addColors(int i)
	{
		switch (i)
		{
		case 0:	return Color::Violet;
		case 1:	return Color::Turquoise;
		case 2:	return Color::OrangeRed;
		case 3:	return Color::Gold;
		case 4:	return Color::DodgerBlue;
		case 5:	return Color::Green;
		case 6:	return Color::Olive;
		case 7:	return Color::Tomato;
		case 8:	return Color::Peru;
		case 9:	return Color::Indigo;
		case 10:return Color::Khaki;
		}
	}
	private: System::Void beautify_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Input->Text == "")
		{
			MessageBox::Show("Input is empty", "Please enter text in input field", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		if (!Input->Text->EndsWith(">") && !Input->Text->StartsWith("<"))
		{
			MessageBox::Show("Please enter XML file in input field", "Input is not XML file", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		parser.setXml(msclr::interop::marshal_as<std::string>(Input->Text));
		parser.checkErrors();
		if (!parser.errors.empty())
		{
			MessageBox::Show("Please use Validate or Correct buttons to fix the errors and try again", "Input is invalid", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		parser.deleteNewLines();
		parser.extractData();
		parser.getXmlFormatted();
		parser.fillColors();
		Input->Text = marshal_as<String^>(parser.xmlFormatted);
		for (int i = 0; i < 11; i++)
		{
			for (auto tag : parser.colors[i])
			{
				Input->Select(tag.first, tag.second - tag.first + 1);
				Input->SelectionColor = addColors(i);
			}
		}
	}
	private: System::Void compress_Click(System::Object^ sender, System::EventArgs^ e) {
		Output->Text = "";
		if (Input->Text == "")
		{
			MessageBox::Show("Input is empty", "Please enter text in input field", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		if (!Input->Text->EndsWith(">") && !Input->Text->StartsWith("<"))
		{
			MessageBox::Show("Please enter XML file in input field", "Input is not XML file", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		parser.setXml(msclr::interop::marshal_as<std::string>(Input->Text));
		parser.deleteNewLines();
		Output->Text = marshal_as<String^>(parser.encode(parser.xmlCommpressed));
		float res = 100.0 * Output->Text->Length / Input->Text->Length;
		res = int(res * 100) / 100.0;
		if (MessageBox::Show("Data compressed by " + res.ToString() + "%\nDo you want to save?", "Compression is successful", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
			try
			{
				saveFileDialog->InitialDirectory = "c:\\";
				saveFileDialog->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
				saveFileDialog->FileName = "Output.txt";
				saveFileDialog->Title = "Save Output";
				if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					String^ path = saveFileDialog->FileName;
					StreamWriter^ writer = gcnew StreamWriter(File::Create(path));
					try
					{
						writer->Write(Output->Text);
					}
					finally
					{
						delete writer;
					}
				}
			}
			finally
			{
				delete saveFileDialog;
			}
		}
	}
	private: System::Void decompress_Click(System::Object^ sender, System::EventArgs^ e) {
		Output->Text = "";
		if (Input->Text == "")
		{
			MessageBox::Show("Input is empty", "Please enter text in input field", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		if (Input->Text->EndsWith(">") || Input->Text->StartsWith("<") || Input->Text->EndsWith("{"))
		{
			MessageBox::Show("Please enter valid compressed file in input field", "Input is not a valid compressed file", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		try
		{
			parser.xml = parser.decode(msclr::interop::marshal_as<std::string>(Input->Text));
			if (parser.xml.empty())
			{
				MessageBox::Show("Please enter XML file in input field", "Input is not XML file", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			parser.deleteNewLines();
			parser.extractData();
			parser.getXmlFormatted();
			Output->Text = marshal_as<String^>(parser.xmlFormatted);
		}
		catch (exception e)
		{
			MessageBox::Show("Please enter XML file in input field", "Input is not XML file", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

	}
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: bool userclosing = 0;
	private: System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (userclosing)return;
		if (MessageBox::Show("Do you really want to exit?", "Exit", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			if (e->CloseReason == CloseReason::UserClosing)userclosing = 1;
			Application::Exit();
		}
		else e->Cancel = true;
	}
	private: System::Void Visualize_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Input->Text == "")
		{
			MessageBox::Show("Input is empty", "Please enter text in input field", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		if (!Input->Text->EndsWith(">") && !Input->Text->StartsWith("<"))
		{
			MessageBox::Show("Please enter XML file in input field", "Input is not XML file", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		parser.setXml(msclr::interop::marshal_as<std::string>(Input->Text));
		parser.checkErrors();
		if (parser.errors.empty())
		{
			parser.deleteNewLines();
			parser.extractData();
			String^ data;
			String^ tail;
			for (auto user : parser.users)
			{
				tail = tail + marshal_as<String^>(user.id.second) + " [shape=circle style=filled fillcolor=dodgerblue3];\n";
				for (auto follower : user.followers.second)
				{
					data = data + marshal_as<String^>(user.id.second + "->" + follower.id) + "[color=\"dodgerblue3\"];\n";
				}
			}
			data = data + tail;
			Graph^ graph = gcnew Graph();
			graph->makeGraph(data);
			graph->openGraph();
			return;
		}
	}
	private: System::Void analysis_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Input->Text == "")
		{
			MessageBox::Show("Input is empty", "Please enter text in input field", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		if (!Input->Text->EndsWith(">") && !Input->Text->StartsWith("<"))
		{
			MessageBox::Show("Please enter XML file in input field", "Input is not XML file", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		parser.setXml(msclr::interop::marshal_as<std::string>(Input->Text));
		parser.checkErrors();
		if (parser.errors.empty())
		{
			parser.deleteNewLines();
			parser.extractData();
			//shared_ptr<XmlParser> sp(&parser);
			////mover
			////Saver x;
			////x.setParser(parser);
			//Queries^ queries = gcnew Queries(sp);
			Queries^ queries = gcnew Queries();
			queries->ShowDialog();
			return;
		}
		MessageBox::Show("Please use Validate or Correct buttons to fix the errors and try again", "Input is invalid", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	private: System::Void Input_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (!Input->Text->Length)
		{
			Input->SelectAll();
			Input->SelectionColor = defColor;
		}
	} 
	};
}

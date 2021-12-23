using namespace System::Windows::Forms;
using namespace System;
public ref class CustomMessageBox : Form
{
    private:static String^ Selection = "Cancel";
    private:Label^ label;
    private:Button^ input;
    private:Button^ output;
    private:void btnInput_Click(System::Object^ sender, EventArgs^ e)
    {
        Selection = "Input";
        this->Close();
    }
    private:void btnOutput_Click(System::Object^ sender, EventArgs^ e)
    {
        Selection = "Output";
        this->Close();
    }
    private:CustomMessageBox()
    {
        this->Selection = "Cancel";
        this->Size = System::Drawing::Size(420, 150);
        this->Text = "Please make a selection";
        this->AcceptButton = input;
        this->CancelButton = output;
        this->FormBorderStyle = ::FormBorderStyle::FixedDialog;
        this->StartPosition = FormStartPosition::CenterScreen;
        this->MaximizeBox = false;
        this->MinimizeBox = false;
        this->ShowInTaskbar = false;

        // Label
        label = gcnew Label();
        label->Text = "Choose what to save";
       // label->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular));
        label->Location = System::Drawing::Point(0, 0);
        label->Size = System::Drawing::Size(420, 80);
        label->BackColor = System::Drawing::Color::White;
        label->AutoSize = false;
        label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
        Controls->Add(label);

        // Input Button
        input = gcnew Button();
        input->Text = "Input";
        input->Location = System::Drawing::Point(105, 87);
        input->Size = System::Drawing::Size(70, 22);
        input->Click += gcnew System::EventHandler(this, &CustomMessageBox::btnInput_Click);
        Controls->Add(input);

        // Output Button
        output = gcnew Button();
        output->Text = "Output";
        output->Location = System::Drawing::Point(237, 87);
        output->Size = System::Drawing::Size(70, 22);
        output->Click += gcnew System::EventHandler(this, &CustomMessageBox::btnOutput_Click);
        Controls->Add(output);
    }

    public:static String^ ShowBox()
    {
        CustomMessageBox^ box = gcnew CustomMessageBox();
        box->ShowDialog();
        return Selection;
    }
};
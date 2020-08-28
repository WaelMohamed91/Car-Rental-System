#pragma once

#include "container.h"
namespace CarRen {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for FeeedbackF
	/// </summary>
	public ref class FeeedbackF : public System::Windows::Forms::Form
	{
	public:
		FeeedbackF(void)
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
		~FeeedbackF()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  btn_save;
	private: System::Windows::Forms::Label^  lbl_Name;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;


	protected:


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FeeedbackF::typeid));
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			this->lbl_Name = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel7->Location = System::Drawing::Point(16, 477);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(818, 18);
			this->panel7->TabIndex = 38;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 22);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(16, 473);
			this->panel2->TabIndex = 37;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(834, 22);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(18, 473);
			this->panel3->TabIndex = 36;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(852, 22);
			this->flowLayoutPanel1->TabIndex = 35;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 11);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(152, 139);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Location = System::Drawing::Point(90, 22);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(168, 164);
			this->panel1->TabIndex = 40;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox1->Location = System::Drawing::Point(293, 43);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(521, 369);
			this->textBox1->TabIndex = 41;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &FeeedbackF::textBox1_TextChanged);
			// 
			// btn_save
			// 
			this->btn_save->Enabled = false;
			this->btn_save->FlatAppearance->BorderSize = 0;
			this->btn_save->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_save->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic));
			this->btn_save->ForeColor = System::Drawing::SystemColors::Desktop;
			this->btn_save->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_save.Image")));
			this->btn_save->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_save->Location = System::Drawing::Point(180, 385);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(78, 59);
			this->btn_save->TabIndex = 42;
			this->btn_save->Text = L"Done";
			this->btn_save->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_save->UseVisualStyleBackColor = true;
			this->btn_save->Click += gcnew System::EventHandler(this, &FeeedbackF::btn_save_Click);
			// 
			// lbl_Name
			// 
			this->lbl_Name->AutoSize = true;
			this->lbl_Name->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_Name->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->lbl_Name->Location = System::Drawing::Point(147, 229);
			this->lbl_Name->Name = L"lbl_Name";
			this->lbl_Name->Size = System::Drawing::Size(117, 29);
			this->lbl_Name->TabIndex = 43;
			this->lbl_Name->Text = L"UserName";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::OliveDrab;
			this->label2->Location = System::Drawing::Point(77, 229);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 29);
			this->label2->TabIndex = 44;
			this->label2->Text = L"Hello";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::OliveDrab;
			this->label3->Location = System::Drawing::Point(43, 258);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(193, 29);
			this->label3->TabIndex = 45;
			this->label3->Text = L"please enter your";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::OliveDrab;
			this->label4->Location = System::Drawing::Point(39, 287);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(201, 29);
			this->label4->TabIndex = 46;
			this->label4->Text = L"Feeedback here :)";
			// 
			// FeeedbackF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(852, 495);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbl_Name);
			this->Controls->Add(this->btn_save);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"FeeedbackF";
			this->Load += gcnew System::EventHandler(this, &FeeedbackF::FeeedbackF_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		container ^ con_obj = gcnew container();
		String ^ Cust_Name;

		void Get_CustName() {

			StreamReader ^ sr = gcnew StreamReader("Current_Customer.txt");
			String^ row = Convert::ToString(sr->ReadLine());
			array<Char>^ splitter = { '*' };
			array<String^>^ arr = row->Split(splitter);
			Cust_Name = arr[1];
			sr->Close();

		}
		
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void FeeedbackF_Load(System::Object^  sender, System::EventArgs^  e) {
		Get_CustName();
		lbl_Name->Text = Cust_Name;
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		btn_save->Enabled = true; 
	}
private: System::Void btn_save_Click(System::Object^  sender, System::EventArgs^  e) {
	con_obj->Customer_Cs->Add_FeedBack(textBox1->Text);
	textBox1->Text = ""; 
	
	btn_save->Enabled = false; 
	MessageBox::Show("Done Send Your Feed Back", "Thank You ", MessageBoxButtons::OK, MessageBoxIcon::Information);

}
};
}

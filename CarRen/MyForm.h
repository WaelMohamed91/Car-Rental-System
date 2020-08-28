#pragma once
#include "Admin.h"
#include "AddBook.h"
#include <cliext\map>
#include <string.h>

#include "container.h"

namespace CarRen {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  AdminName;


	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  AdminPass;

	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  UserPass;

	private: System::Windows::Forms::TextBox^  UserName;

	private: System::Windows::Forms::Button^  AdminSign;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel7;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->AdminName = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->AdminSign = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->AdminPass = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->UserPass = (gcnew System::Windows::Forms::TextBox());
			this->UserName = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Location = System::Drawing::Point(47, 18);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(97, 99);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(36, 45);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 32);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(13, 13);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(70, 71);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(16, 500);
			this->panel2->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(772, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(18, 500);
			this->panel3->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(148, 144);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 124);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Admin";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(148, 284);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 124);
			this->button2->TabIndex = 3;
			this->button2->Text = L"User";
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// AdminName
			// 
			this->AdminName->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->AdminName->Location = System::Drawing::Point(99, 31);
			this->AdminName->Name = L"AdminName";
			this->AdminName->Size = System::Drawing::Size(125, 20);
			this->AdminName->TabIndex = 4;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel4->Controls->Add(this->AdminSign);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->AdminPass);
			this->panel4->Controls->Add(this->AdminName);
			this->panel4->Location = System::Drawing::Point(310, 144);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(257, 149);
			this->panel4->TabIndex = 3;
			this->panel4->Visible = false;
			// 
			// AdminSign
			// 
			this->AdminSign->FlatAppearance->BorderSize = 0;
			this->AdminSign->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AdminSign->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdminSign->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AdminSign.Image")));
			this->AdminSign->Location = System::Drawing::Point(184, 95);
			this->AdminSign->Name = L"AdminSign";
			this->AdminSign->Size = System::Drawing::Size(56, 48);
			this->AdminSign->TabIndex = 8;
			this->AdminSign->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->AdminSign->UseVisualStyleBackColor = true;
			this->AdminSign->Click += gcnew System::EventHandler(this, &MyForm::AdminSign_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(0, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 23);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(13, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 23);
			this->label1->TabIndex = 4;
			this->label1->Text = L"ID";
			// 
			// AdminPass
			// 
			this->AdminPass->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->AdminPass->Location = System::Drawing::Point(99, 69);
			this->AdminPass->Name = L"AdminPass";
			this->AdminPass->Size = System::Drawing::Size(125, 20);
			this->AdminPass->TabIndex = 5;
			this->AdminPass->UseSystemPasswordChar = true;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel5->Controls->Add(this->button4);
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->UserPass);
			this->panel5->Controls->Add(this->UserName);
			this->panel5->Location = System::Drawing::Point(310, 300);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(257, 149);
			this->panel5->TabIndex = 7;
			this->panel5->Visible = false;
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(184, 89);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(56, 48);
			this->button4->TabIndex = 9;
			this->button4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(0, 66);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 23);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(13, 34);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 23);
			this->label4->TabIndex = 4;
			this->label4->Text = L"ID";
			// 
			// UserPass
			// 
			this->UserPass->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->UserPass->Location = System::Drawing::Point(99, 69);
			this->UserPass->Name = L"UserPass";
			this->UserPass->Size = System::Drawing::Size(125, 20);
			this->UserPass->TabIndex = 5;
			this->UserPass->UseSystemPasswordChar = true;
			// 
			// UserName
			// 
			this->UserName->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->UserName->Location = System::Drawing::Point(99, 31);
			this->UserName->Name = L"UserName";
			this->UserName->Size = System::Drawing::Size(125, 20);
			this->UserName->TabIndex = 4;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(16, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(756, 18);
			this->panel6->TabIndex = 8;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel7->Location = System::Drawing::Point(16, 482);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(756, 18);
			this->panel7->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(790, 500);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}

		
#pragma endregion

		container ^ con_obj = gcnew container();
	
		void  ClearHandWritten() {
			AdminName->Text = ""; 
			AdminPass->Text = ""; 
			UserName->Text = ""; 
			UserPass->Text = ""; 
				 
		}

	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	con_obj->Admin_Cs->Load(); 
	

	panel4->Show();
	panel5->Visible = false;
	ClearHandWritten();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	

	panel5->Show();
	panel4->Visible = false;
	ClearHandWritten();

}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	con_obj->Customer_Cs->Load();
		if (con_obj->Customer_Cs->check_Login(UserName->Text, UserPass->Text)) {
			UserName->Text = "";
			UserPass->Text = "";
			AddBook^ Au = gcnew AddBook();
			this->Hide();
			Au->ShowDialog();
			this->Show();
		}
		
		else
			MessageBox::Show("Invalid Information ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);



}
private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	if (MessageBox::Show("Do you really want to Exit ?! ", "CR7",
		MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No)
	{
		e->Cancel = true;
	}
}
private: System::Void AdminSign_Click(System::Object^  sender, System::EventArgs^  e) {
	con_obj->Admin_Cs->Load();
	if (con_obj->Admin_Cs->check_Login(AdminName->Text, AdminPass->Text))
	{
		AdminName->Text = ""; 
		AdminPass->Text = "";
		Admin1^ Au = gcnew Admin1();
		this->Hide();
		Au->ShowDialog();
		this->Show();
	}
	else
		MessageBox::Show("Invalid Information ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
};
}

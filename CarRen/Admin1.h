#pragma once
#include"adminF.h"
#include"CarF.h"
#include"CustomerF.h"
#include"AddBook.h"
#include "MyForm.h"
#include "FeeedbackF.h"

namespace CarRen {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
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
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label4;
	protected:
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  btn_CustomerF;
	private: System::Windows::Forms::Button^  btn_CarF;
	private: System::Windows::Forms::Button^  btn_AdminF;
	private: System::Windows::Forms::Button^  btn_BookF;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;





	protected:






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin::typeid));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btn_CustomerF = (gcnew System::Windows::Forms::Button());
			this->btn_CarF = (gcnew System::Windows::Forms::Button());
			this->btn_AdminF = (gcnew System::Windows::Forms::Button());
			this->btn_BookF = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(439, 32);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(156, 45);
			this->label4->TabIndex = 39;
			this->label4->Text = L"Welcome";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->panel3->Controls->Add(this->btn_CustomerF);
			this->panel3->Controls->Add(this->btn_CarF);
			this->panel3->Controls->Add(this->btn_AdminF);
			this->panel3->Controls->Add(this->btn_BookF);
			this->panel3->Location = System::Drawing::Point(-52, 249);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1050, 127);
			this->panel3->TabIndex = 38;
			// 
			// btn_CustomerF
			// 
			this->btn_CustomerF->FlatAppearance->BorderSize = 0;
			this->btn_CustomerF->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_CustomerF->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Italic));
			this->btn_CustomerF->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->btn_CustomerF->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_CustomerF.Image")));
			this->btn_CustomerF->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_CustomerF->Location = System::Drawing::Point(663, 18);
			this->btn_CustomerF->Name = L"btn_CustomerF";
			this->btn_CustomerF->Size = System::Drawing::Size(154, 101);
			this->btn_CustomerF->TabIndex = 6;
			this->btn_CustomerF->Text = L"Customer";
			this->btn_CustomerF->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_CustomerF->UseVisualStyleBackColor = true;
			// 
			// btn_CarF
			// 
			this->btn_CarF->FlatAppearance->BorderSize = 0;
			this->btn_CarF->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_CarF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->btn_CarF->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->btn_CarF->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_CarF.Image")));
			this->btn_CarF->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_CarF->Location = System::Drawing::Point(389, 24);
			this->btn_CarF->Name = L"btn_CarF";
			this->btn_CarF->Size = System::Drawing::Size(100, 88);
			this->btn_CarF->TabIndex = 5;
			this->btn_CarF->Text = L"Car";
			this->btn_CarF->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_CarF->UseVisualStyleBackColor = true;
			// 
			// btn_AdminF
			// 
			this->btn_AdminF->FlatAppearance->BorderSize = 0;
			this->btn_AdminF->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_AdminF->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Italic));
			this->btn_AdminF->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->btn_AdminF->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_AdminF.Image")));
			this->btn_AdminF->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_AdminF->Location = System::Drawing::Point(279, 18);
			this->btn_AdminF->Name = L"btn_AdminF";
			this->btn_AdminF->Size = System::Drawing::Size(100, 101);
			this->btn_AdminF->TabIndex = 3;
			this->btn_AdminF->Text = L"Admin";
			this->btn_AdminF->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_AdminF->UseVisualStyleBackColor = true;
			this->btn_AdminF->Click += gcnew System::EventHandler(this, &Admin::btn_AdminF_Click_1);
			// 
			// btn_BookF
			// 
			this->btn_BookF->FlatAppearance->BorderSize = 0;
			this->btn_BookF->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_BookF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->btn_BookF->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->btn_BookF->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_BookF.Image")));
			this->btn_BookF->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_BookF->Location = System::Drawing::Point(499, 29);
			this->btn_BookF->Name = L"btn_BookF";
			this->btn_BookF->Size = System::Drawing::Size(154, 78);
			this->btn_BookF->TabIndex = 4;
			this->btn_BookF->Text = L"Booking";
			this->btn_BookF->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_BookF->UseVisualStyleBackColor = true;
			this->btn_BookF->Click += gcnew System::EventHandler(this, &Admin::btn_BookF_Click_1);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel6->Controls->Add(this->panel7);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(998, 18);
			this->panel6->TabIndex = 40;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel7->Controls->Add(this->panel1);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel7->Location = System::Drawing::Point(0, 0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(998, 18);
			this->panel7->TabIndex = 4;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(998, 18);
			this->panel1->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(998, 18);
			this->panel2->TabIndex = 4;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(998, 18);
			this->panel4->TabIndex = 4;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel5->Location = System::Drawing::Point(0, 532);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(998, 18);
			this->panel5->TabIndex = 41;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(369, 207);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(274, 39);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Choose Function";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Ravie", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(815, 458);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 59);
			this->button1->TabIndex = 42;
			this->button1->Text = L"Log Out";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Admin::button1_Click);
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(998, 550);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->panel3);
			this->Name = L"Admin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &Admin::Admin_Load);
			this->panel3->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_AdminF_Click(System::Object^  sender, System::EventArgs^  e) {
		AdminF^ Au = gcnew AdminF();
		this->Hide();
		Au->ShowDialog();
		this->Show();
	}
private: System::Void btn_CarF_Click(System::Object^  sender, System::EventArgs^  e) {
	CarF^ Au = gcnew CarF();
	this->Hide();
	Au->ShowDialog();
	this->Show();
}
private: System::Void btn_BookF_Click(System::Object^  sender, System::EventArgs^  e) {
CarF^ Au = gcnew CarF();
	this->Hide();
	Au->ShowDialog();
	this->Show();
}
private: System::Void btn_CustomerF_Click(System::Object^  sender, System::EventArgs^  e) {
	CustomerF^ Au = gcnew CustomerF();
	this->Hide();
	Au->ShowDialog();
	this->Show();
}
private: System::Void Admin_Load(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void btn_AdminF_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_BookF_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if ( MessageBox::Show("Do you really want to Exit ?! ", "Banking Accounting Management",
		MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes )
	{
		this->Close();
	}
	
		

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
};
}

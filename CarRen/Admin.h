#pragma once
#include"adminF.h"
#include"CarF.h"
#include"CustomerF.h"
#include"ShowBook.h"

#include "container.h" 
#include "ReadFeedBack.h"
namespace CarRen {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin1
	/// </summary>
	public ref class Admin1 : public System::Windows::Forms::Form
	{
	public:
		Admin1(void)
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
		~Admin1()
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
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Button^  button2;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin1::typeid));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btn_CustomerF = (gcnew System::Windows::Forms::Button());
			this->btn_CarF = (gcnew System::Windows::Forms::Button());
			this->btn_AdminF = (gcnew System::Windows::Forms::Button());
			this->btn_BookF = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(424, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(156, 45);
			this->label4->TabIndex = 41;
			this->label4->Text = L"Welcome";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &Admin1::label4_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->panel3->Controls->Add(this->btn_CustomerF);
			this->panel3->Controls->Add(this->btn_CarF);
			this->panel3->Controls->Add(this->btn_AdminF);
			this->panel3->Controls->Add(this->btn_BookF);
			this->panel3->Location = System::Drawing::Point(-70, 257);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1069, 127);
			this->panel3->TabIndex = 40;
			// 
			// btn_CustomerF
			// 
			this->btn_CustomerF->FlatAppearance->BorderSize = 0;
			this->btn_CustomerF->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_CustomerF->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Italic));
			this->btn_CustomerF->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->btn_CustomerF->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_CustomerF.Image")));
			this->btn_CustomerF->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_CustomerF->Location = System::Drawing::Point(656, 12);
			this->btn_CustomerF->Name = L"btn_CustomerF";
			this->btn_CustomerF->Size = System::Drawing::Size(154, 101);
			this->btn_CustomerF->TabIndex = 6;
			this->btn_CustomerF->Text = L"Customer";
			this->btn_CustomerF->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_CustomerF->UseVisualStyleBackColor = true;
			this->btn_CustomerF->Click += gcnew System::EventHandler(this, &Admin1::btn_CustomerF_Click);
			// 
			// btn_CarF
			// 
			this->btn_CarF->FlatAppearance->BorderSize = 0;
			this->btn_CarF->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_CarF->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Italic));
			this->btn_CarF->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->btn_CarF->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_CarF.Image")));
			this->btn_CarF->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_CarF->Location = System::Drawing::Point(382, 18);
			this->btn_CarF->Name = L"btn_CarF";
			this->btn_CarF->Size = System::Drawing::Size(100, 88);
			this->btn_CarF->TabIndex = 5;
			this->btn_CarF->Text = L"Car";
			this->btn_CarF->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_CarF->UseVisualStyleBackColor = true;
			this->btn_CarF->Click += gcnew System::EventHandler(this, &Admin1::btn_CarF_Click);
			// 
			// btn_AdminF
			// 
			this->btn_AdminF->FlatAppearance->BorderSize = 0;
			this->btn_AdminF->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_AdminF->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Italic));
			this->btn_AdminF->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->btn_AdminF->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_AdminF.Image")));
			this->btn_AdminF->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_AdminF->Location = System::Drawing::Point(272, 12);
			this->btn_AdminF->Name = L"btn_AdminF";
			this->btn_AdminF->Size = System::Drawing::Size(100, 101);
			this->btn_AdminF->TabIndex = 3;
			this->btn_AdminF->Text = L"Admin";
			this->btn_AdminF->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_AdminF->UseVisualStyleBackColor = true;
			this->btn_AdminF->Click += gcnew System::EventHandler(this, &Admin1::btn_AdminF_Click);
			// 
			// btn_BookF
			// 
			this->btn_BookF->FlatAppearance->BorderSize = 0;
			this->btn_BookF->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_BookF->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Italic));
			this->btn_BookF->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->btn_BookF->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_BookF.Image")));
			this->btn_BookF->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_BookF->Location = System::Drawing::Point(496, 28);
			this->btn_BookF->Name = L"btn_BookF";
			this->btn_BookF->Size = System::Drawing::Size(154, 78);
			this->btn_BookF->TabIndex = 4;
			this->btn_BookF->Text = L"Booking";
			this->btn_BookF->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_BookF->UseVisualStyleBackColor = true;
			this->btn_BookF->Click += gcnew System::EventHandler(this, &Admin1::btn_BookF_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(998, 18);
			this->panel6->TabIndex = 42;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel7->Location = System::Drawing::Point(0, 532);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(998, 18);
			this->panel7->TabIndex = 43;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(362, 202);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(274, 39);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Choose Function";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Italic));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(29, 455);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(219, 71);
			this->button2->TabIndex = 46;
			this->button2->Text = L"Read Feedbacks";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Admin1::button2_Click);
			// 
			// Admin1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(998, 550);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->panel3);
			this->Name = L"Admin1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin1";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Admin1::Admin1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Admin1::Admin1_Load);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		container ^ con_obj = gcnew container();
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
	ShowBook^ Au = gcnew ShowBook();
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
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Admin1_Load(System::Object^  sender, System::EventArgs^  e) {
	
		
		

		
	
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	
}
private: System::Void Admin1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	if (MessageBox::Show("Do you really want to Log Out ?! ", "Notic",
		MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No)
	{
		e->Cancel = true;
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	ReadFeedBack  ^ feed = gcnew  ReadFeedBack();

	feed->ShowDialog();
	this->Hide();

}
};
}

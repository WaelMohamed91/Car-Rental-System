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
	/// Summary for AdminF
	/// </summary>
	public ref class AdminF : public System::Windows::Forms::Form
	{
	public:
		AdminF(void)
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
		~AdminF()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel3;
	protected:
	private: System::Windows::Forms::Panel^  Spanel;
	private: System::Windows::Forms::Button^  btn_UpdateCar;
	private: System::Windows::Forms::Button^  btn_AddCar;
	private: System::Windows::Forms::Panel^  panel2;

	private: System::Windows::Forms::TextBox^  txt_Name;
	private: System::Windows::Forms::Label^  lbl_Pass;
	private: System::Windows::Forms::TextBox^  txt_Pass;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  lbl_Name;

	private: System::Windows::Forms::Label^  lbl_ID;
	private: System::Windows::Forms::TextBox^  txt_ID;
	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox5;

	private: System::Windows::Forms::Button^  btn_UpdatCar;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Label^  label3;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminF::typeid));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Spanel = (gcnew System::Windows::Forms::Panel());
			this->btn_UpdateCar = (gcnew System::Windows::Forms::Button());
			this->btn_AddCar = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_Name = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Pass = (gcnew System::Windows::Forms::Label());
			this->txt_Pass = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lbl_Name = (gcnew System::Windows::Forms::Label());
			this->lbl_ID = (gcnew System::Windows::Forms::Label());
			this->txt_ID = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->btn_UpdatCar = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->panel3->Controls->Add(this->Spanel);
			this->panel3->Controls->Add(this->btn_UpdateCar);
			this->panel3->Controls->Add(this->btn_AddCar);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(151, 550);
			this->panel3->TabIndex = 9;
			// 
			// Spanel
			// 
			this->Spanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->Spanel->Location = System::Drawing::Point(29, 197);
			this->Spanel->Name = L"Spanel";
			this->Spanel->Size = System::Drawing::Size(10, 37);
			this->Spanel->TabIndex = 22;
			// 
			// btn_UpdateCar
			// 
			this->btn_UpdateCar->FlatAppearance->BorderSize = 0;
			this->btn_UpdateCar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_UpdateCar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic));
			this->btn_UpdateCar->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_UpdateCar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_UpdateCar.Image")));
			this->btn_UpdateCar->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_UpdateCar->Location = System::Drawing::Point(37, 272);
			this->btn_UpdateCar->Name = L"btn_UpdateCar";
			this->btn_UpdateCar->Size = System::Drawing::Size(72, 63);
			this->btn_UpdateCar->TabIndex = 13;
			this->btn_UpdateCar->Text = L"Update";
			this->btn_UpdateCar->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_UpdateCar->UseVisualStyleBackColor = true;
			this->btn_UpdateCar->Click += gcnew System::EventHandler(this, &AdminF::btn_UpdateCar_Click);
			// 
			// btn_AddCar
			// 
			this->btn_AddCar->FlatAppearance->BorderSize = 0;
			this->btn_AddCar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_AddCar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic));
			this->btn_AddCar->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_AddCar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_AddCar.Image")));
			this->btn_AddCar->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_AddCar->Location = System::Drawing::Point(41, 190);
			this->btn_AddCar->Name = L"btn_AddCar";
			this->btn_AddCar->Size = System::Drawing::Size(64, 62);
			this->btn_AddCar->TabIndex = 3;
			this->btn_AddCar->Text = L"ADD";
			this->btn_AddCar->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_AddCar->UseVisualStyleBackColor = true;
			this->btn_AddCar->Click += gcnew System::EventHandler(this, &AdminF::btn_AddCar_Click);
			// 
			// panel2
			// 
			this->panel2->AccessibleName = L"";
			this->panel2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->txt_Name);
			this->panel2->Controls->Add(this->lbl_Pass);
			this->panel2->Controls->Add(this->txt_Pass);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->lbl_Name);
			this->panel2->Controls->Add(this->lbl_ID);
			this->panel2->Controls->Add(this->txt_ID);
			this->panel2->Location = System::Drawing::Point(348, 135);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(495, 296);
			this->panel2->TabIndex = 31;
			this->panel2->Visible = false;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminF::panel2_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(192, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 20);
			this->label3->TabIndex = 28;
			this->label3->Text = L"label3";
			this->label3->Visible = false;
			// 
			// txt_Name
			// 
			this->txt_Name->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_Name->Location = System::Drawing::Point(195, 85);
			this->txt_Name->Name = L"txt_Name";
			this->txt_Name->Size = System::Drawing::Size(125, 20);
			this->txt_Name->TabIndex = 27;
			// 
			// lbl_Pass
			// 
			this->lbl_Pass->AccessibleName = L"";
			this->lbl_Pass->AutoSize = true;
			this->lbl_Pass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_Pass->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->lbl_Pass->Location = System::Drawing::Point(77, 119);
			this->lbl_Pass->Name = L"lbl_Pass";
			this->lbl_Pass->Size = System::Drawing::Size(82, 23);
			this->lbl_Pass->TabIndex = 25;
			this->lbl_Pass->Text = L"Password";
			// 
			// txt_Pass
			// 
			this->txt_Pass->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_Pass->Location = System::Drawing::Point(195, 122);
			this->txt_Pass->Name = L"txt_Pass";
			this->txt_Pass->Size = System::Drawing::Size(125, 20);
			this->txt_Pass->TabIndex = 26;
			this->txt_Pass->UseSystemPasswordChar = true;
			this->txt_Pass->TextChanged += gcnew System::EventHandler(this, &AdminF::txt_Pass_TextChanged);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic));
			this->button1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->Location = System::Drawing::Point(333, 185);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 64);
			this->button1->TabIndex = 20;
			this->button1->Text = L"ADD";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminF::button1_Click);
			// 
			// lbl_Name
			// 
			this->lbl_Name->AutoSize = true;
			this->lbl_Name->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->lbl_Name->Location = System::Drawing::Point(90, 82);
			this->lbl_Name->Name = L"lbl_Name";
			this->lbl_Name->Size = System::Drawing::Size(56, 23);
			this->lbl_Name->TabIndex = 17;
			this->lbl_Name->Text = L"Name";
			// 
			// lbl_ID
			// 
			this->lbl_ID->AccessibleName = L"";
			this->lbl_ID->AutoSize = true;
			this->lbl_ID->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->lbl_ID->Location = System::Drawing::Point(103, 45);
			this->lbl_ID->Name = L"lbl_ID";
			this->lbl_ID->Size = System::Drawing::Size(31, 23);
			this->lbl_ID->TabIndex = 4;
			this->lbl_ID->Text = L"ID";
			// 
			// txt_ID
			// 
			this->txt_ID->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_ID->Location = System::Drawing::Point(195, 48);
			this->txt_ID->Name = L"txt_ID";
			this->txt_ID->Size = System::Drawing::Size(125, 20);
			this->txt_ID->TabIndex = 4;
			// 
			// panel1
			// 
			this->panel1->AccessibleName = L"";
			this->panel1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->btn_UpdatCar);
			this->panel1->Location = System::Drawing::Point(388, 158);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(424, 276);
			this->panel1->TabIndex = 32;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminF::panel1_Paint);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox2->Location = System::Drawing::Point(154, 62);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(125, 20);
			this->textBox2->TabIndex = 39;
			// 
			// label1
			// 
			this->label1->AccessibleName = L"";
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(36, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 23);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Password";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox4->Location = System::Drawing::Point(154, 95);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(125, 20);
			this->textBox4->TabIndex = 38;
			this->textBox4->UseSystemPasswordChar = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(49, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 23);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Name";
			// 
			// label4
			// 
			this->label4->AccessibleName = L"";
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(62, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 23);
			this->label4->TabIndex = 32;
			this->label4->Text = L"ID";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(154, 29);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(125, 20);
			this->textBox5->TabIndex = 33;
			// 
			// btn_UpdatCar
			// 
			this->btn_UpdatCar->FlatAppearance->BorderSize = 0;
			this->btn_UpdatCar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_UpdatCar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic));
			this->btn_UpdatCar->ForeColor = System::Drawing::SystemColors::Desktop;
			this->btn_UpdatCar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_UpdatCar.Image")));
			this->btn_UpdatCar->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_UpdatCar->Location = System::Drawing::Point(279, 121);
			this->btn_UpdatCar->Name = L"btn_UpdatCar";
			this->btn_UpdatCar->Size = System::Drawing::Size(64, 64);
			this->btn_UpdatCar->TabIndex = 20;
			this->btn_UpdatCar->Text = L"update";
			this->btn_UpdatCar->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_UpdatCar->UseVisualStyleBackColor = true;
			this->btn_UpdatCar->Click += gcnew System::EventHandler(this, &AdminF::btn_UpdatCar_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(151, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(847, 18);
			this->panel6->TabIndex = 33;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel7->Location = System::Drawing::Point(151, 532);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(847, 18);
			this->panel7->TabIndex = 34;
			// 
			// AdminF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(998, 550);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Name = L"AdminF";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminF";
			this->Load += gcnew System::EventHandler(this, &AdminF::AdminF_Load);
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		Admin_cls ^ Admin_Obj = gcnew Admin_cls () ;
		container ^ con_obj = gcnew container();


		///////////////////////////////
	public: void clear_handwriten() {
		txt_ID->Text = "";
		txt_Name->Text = "";
		
		txt_Pass->Text = "";
		textBox5->Text = ""; 
		textBox2->Text = "";
		textBox4->Text = "";
		label3->Visible = false; 
		

	}
	public:bool Check_Empty() {
		if (txt_ID->Text == "" ||
			txt_Name->Text == "" ||
			txt_Pass->Text == "" 
		
			) {
			MessageBox::Show("Please Enter All information about this new admin", "Eror", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return false;
		}
		return true;


	}
		   ///////////////////////////
	private: System::Void btn_AddCar_Click(System::Object^  sender, System::EventArgs^  e) {
		panel2->Visible = true;
		panel1->Visible = false;
		Spanel->Visible = true;
		Spanel->Height = btn_AddCar->Height;
		Spanel->Top = btn_AddCar->Top;
		label3->Visible = false ;
		clear_handwriten(); 
	}
	private: System::Void btn_UpdateCar_Click(System::Object^  sender, System::EventArgs^  e) {
		panel1->Visible = true;
		panel2->Visible = false;
		Spanel->Visible = true;
		Spanel->Height = btn_UpdateCar->Height;
		Spanel->Top = btn_UpdateCar->Top;
		////
		StreamReader ^ sr = gcnew StreamReader("Current.txt");
		String^ row = Convert::ToString(sr->ReadLine());
		array<Char>^ splitter = { '*' };
		array<String^>^ arr = row->Split(splitter);
		textBox5->Text  = arr[0];
		textBox2->Text = arr[1];
		textBox4->Text = arr[2];

	};
	private: System::Void AdminF_Load(System::Object^  sender, System::EventArgs^  e) {
	
		con_obj->Admin_Cs->Load();
		Spanel->Visible = false;
		
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
		con_obj->Admin_Cs->Load();
		
		if (!Check_Empty())
			return;
		if (!con_obj->Admin_Cs->Check_Add(txt_ID->Text))
		{
			MessageBox::Show("ID Already Exist", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		
		if (txt_Pass->Text->Length <  6) {
			label3->Text = "This Password Less Than 6 Characters"; 
			label3->Visible = true;
			return;

		}
		con_obj->Admin_Cs->Add(txt_ID->Text, txt_Name->Text, txt_Pass->Text);
		MessageBox::Show("Sucsessfuly Added");
		clear_handwriten();
	}
	
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void btn_UpdatCar_Click(System::Object^  sender, System::EventArgs^  e) {
	con_obj->Admin_Cs->Delete(textBox5->Text);
	con_obj->Admin_Cs->Add(textBox5->Text, textBox2->Text,textBox4->Text);
	MessageBox::Show("Done UpDate At ID : " + textBox5->Text, "Done ", MessageBoxButtons::OK, MessageBoxIcon::Information);

	clear_handwriten();
}
private: System::Void txt_Pass_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (txt_Pass->Text->Length >= 6) {
		label3->Text = "Valid Password";
	}
}
};
}

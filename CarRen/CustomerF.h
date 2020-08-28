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
	/// Summary for CustomerF
	/// </summary>
	public ref class CustomerF : public System::Windows::Forms::Form
	{
	public:
		CustomerF(void)
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
		~CustomerF()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel3;
	protected:
	private: System::Windows::Forms::Panel^  Spanel;
	private: System::Windows::Forms::Button^  btn_UpdateBook;
	private: System::Windows::Forms::Button^  btn_AddBook;
	private: System::Windows::Forms::Panel^  panel2;


	private: System::Windows::Forms::TextBox^  txt_Name;

	private: System::Windows::Forms::Label^  lbl_Color;
	private: System::Windows::Forms::TextBox^  txt_password;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  lbl_Name;


	private: System::Windows::Forms::Label^  lbl_ID;
	private: System::Windows::Forms::TextBox^  txt_ID;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  btn_DeletCar;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ListView^  listView1;




	private: System::Windows::Forms::Button^  btn_UpdatCar;

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CustomerF::typeid));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Spanel = (gcnew System::Windows::Forms::Panel());
			this->btn_UpdateBook = (gcnew System::Windows::Forms::Button());
			this->btn_AddBook = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_Name = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Color = (gcnew System::Windows::Forms::Label());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
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
			this->btn_DeletCar = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->btn_UpdatCar = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->panel3->Controls->Add(this->Spanel);
			this->panel3->Controls->Add(this->btn_UpdateBook);
			this->panel3->Controls->Add(this->btn_AddBook);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(151, 550);
			this->panel3->TabIndex = 8;
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
			// btn_UpdateBook
			// 
			this->btn_UpdateBook->FlatAppearance->BorderSize = 0;
			this->btn_UpdateBook->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_UpdateBook->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic));
			this->btn_UpdateBook->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_UpdateBook->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_UpdateBook.Image")));
			this->btn_UpdateBook->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_UpdateBook->Location = System::Drawing::Point(37, 272);
			this->btn_UpdateBook->Name = L"btn_UpdateBook";
			this->btn_UpdateBook->Size = System::Drawing::Size(72, 78);
			this->btn_UpdateBook->TabIndex = 13;
			this->btn_UpdateBook->Text = L"Update/Delete";
			this->btn_UpdateBook->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_UpdateBook->UseVisualStyleBackColor = true;
			this->btn_UpdateBook->Click += gcnew System::EventHandler(this, &CustomerF::btn_UpdateBook_Click);
			// 
			// btn_AddBook
			// 
			this->btn_AddBook->FlatAppearance->BorderSize = 0;
			this->btn_AddBook->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_AddBook->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic));
			this->btn_AddBook->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_AddBook->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_AddBook.Image")));
			this->btn_AddBook->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_AddBook->Location = System::Drawing::Point(41, 190);
			this->btn_AddBook->Name = L"btn_AddBook";
			this->btn_AddBook->Size = System::Drawing::Size(64, 62);
			this->btn_AddBook->TabIndex = 3;
			this->btn_AddBook->Text = L"ADD";
			this->btn_AddBook->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_AddBook->UseVisualStyleBackColor = true;
			this->btn_AddBook->Click += gcnew System::EventHandler(this, &CustomerF::btn_AddBook_Click);
			// 
			// panel2
			// 
			this->panel2->AccessibleName = L"";
			this->panel2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->txt_Name);
			this->panel2->Controls->Add(this->lbl_Color);
			this->panel2->Controls->Add(this->txt_password);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->lbl_Name);
			this->panel2->Controls->Add(this->lbl_ID);
			this->panel2->Controls->Add(this->txt_ID);
			this->panel2->Location = System::Drawing::Point(151, 24);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(808, 403);
			this->panel2->TabIndex = 30;
			this->panel2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkRed;
			this->label3->Location = System::Drawing::Point(231, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 20);
			this->label3->TabIndex = 28;
			this->label3->Text = L"label3";
			this->label3->Visible = false;
			// 
			// txt_Name
			// 
			this->txt_Name->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_Name->Location = System::Drawing::Point(195, 81);
			this->txt_Name->Name = L"txt_Name";
			this->txt_Name->Size = System::Drawing::Size(125, 20);
			this->txt_Name->TabIndex = 27;
			// 
			// lbl_Color
			// 
			this->lbl_Color->AccessibleName = L"";
			this->lbl_Color->AutoSize = true;
			this->lbl_Color->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_Color->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->lbl_Color->Location = System::Drawing::Point(77, 113);
			this->lbl_Color->Name = L"lbl_Color";
			this->lbl_Color->Size = System::Drawing::Size(82, 23);
			this->lbl_Color->TabIndex = 25;
			this->lbl_Color->Text = L"Password";
			// 
			// txt_password
			// 
			this->txt_password->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_password->Location = System::Drawing::Point(195, 114);
			this->txt_password->Name = L"txt_password";
			this->txt_password->Size = System::Drawing::Size(125, 20);
			this->txt_password->TabIndex = 26;
			this->txt_password->UseSystemPasswordChar = true;
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
			this->button1->Click += gcnew System::EventHandler(this, &CustomerF::button1_Click);
			// 
			// lbl_Name
			// 
			this->lbl_Name->AutoSize = true;
			this->lbl_Name->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->lbl_Name->Location = System::Drawing::Point(90, 79);
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
			this->panel1->Controls->Add(this->btn_DeletCar);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->listView1);
			this->panel1->Controls->Add(this->btn_UpdatCar);
			this->panel1->Location = System::Drawing::Point(217, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(660, 479);
			this->panel1->TabIndex = 31;
			this->panel1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox2->Location = System::Drawing::Point(154, 64);
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
			this->label1->Location = System::Drawing::Point(36, 104);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 23);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Password";
			this->label1->Click += gcnew System::EventHandler(this, &CustomerF::label1_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox4->Location = System::Drawing::Point(154, 106);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(125, 20);
			this->textBox4->TabIndex = 38;
			this->textBox4->UseSystemPasswordChar = true;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &CustomerF::textBox4_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(36, 61);
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
			this->label4->Location = System::Drawing::Point(46, 26);
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
			// btn_DeletCar
			// 
			this->btn_DeletCar->FlatAppearance->BorderSize = 0;
			this->btn_DeletCar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_DeletCar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic));
			this->btn_DeletCar->ForeColor = System::Drawing::Color::Black;
			this->btn_DeletCar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_DeletCar.Image")));
			this->btn_DeletCar->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_DeletCar->Location = System::Drawing::Point(168, 411);
			this->btn_DeletCar->Name = L"btn_DeletCar";
			this->btn_DeletCar->Size = System::Drawing::Size(72, 59);
			this->btn_DeletCar->TabIndex = 31;
			this->btn_DeletCar->Text = L"Delete";
			this->btn_DeletCar->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_DeletCar->UseVisualStyleBackColor = true;
			this->btn_DeletCar->Click += gcnew System::EventHandler(this, &CustomerF::btn_DeletCar_Click);
			// 
			// label5
			// 
			this->label5->AccessibleName = L"";
			this->label5->AutoSize = true;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(21, 365);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(432, 23);
			this->label5->TabIndex = 30;
			this->label5->Text = L"If you want to delet a Customer please Select It and Click Delete";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3
			});
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(34, 151);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(419, 175);
			this->listView1->TabIndex = 29;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &CustomerF::listView1_SelectedIndexChanged);
			this->listView1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &CustomerF::listView1_MouseClick);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"ID";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Name";
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Password";
			// 
			// btn_UpdatCar
			// 
			this->btn_UpdatCar->FlatAppearance->BorderSize = 0;
			this->btn_UpdatCar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_UpdatCar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic));
			this->btn_UpdatCar->ForeColor = System::Drawing::SystemColors::Desktop;
			this->btn_UpdatCar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_UpdatCar.Image")));
			this->btn_UpdatCar->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_UpdatCar->Location = System::Drawing::Point(395, 45);
			this->btn_UpdatCar->Name = L"btn_UpdatCar";
			this->btn_UpdatCar->Size = System::Drawing::Size(64, 64);
			this->btn_UpdatCar->TabIndex = 20;
			this->btn_UpdatCar->Text = L"update";
			this->btn_UpdatCar->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_UpdatCar->UseVisualStyleBackColor = true;
			this->btn_UpdatCar->Click += gcnew System::EventHandler(this, &CustomerF::btn_UpdatCar_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(151, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(847, 18);
			this->panel6->TabIndex = 32;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel7->Controls->Add(this->panel4);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel7->Location = System::Drawing::Point(151, 532);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(847, 18);
			this->panel7->TabIndex = 33;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(847, 18);
			this->panel4->TabIndex = 4;
			// 
			// CustomerF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(998, 550);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"CustomerF";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CustomerF";
			this->Load += gcnew System::EventHandler(this, &CustomerF::CustomerF_Load);
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		
		container ^ con_obj = gcnew container();
		/////////////////////////////
		public:void fill_listview() {
			listView1->Items->Clear();
			int c = 0;

			for (int i = 0; i < con_obj->Customer_Cs->Customer_List->Count; i++) {
				listView1->Items->Add(con_obj->Customer_Cs->Customer_List[i]->ID);
				listView1->Items[c]->SubItems->Add(con_obj->Customer_Cs->Customer_List[i]->Name);
				listView1->Items[c]->SubItems->Add(con_obj->Customer_Cs->Customer_List[i]->PassWord);
				c++;
			}

		}

		 public: void clear_handwriten() {
			 txt_ID->Text = "";
			 txt_Name->Text = "";
			// txt_Username->Text = "";
			 txt_password->Text = "";
			 textBox5->Text = "";
			 textBox2->Text = "";
			 textBox4->Text = "";
			 label3->Visible = false; 

		 }
	public:bool Check_Empty() {
		if (txt_ID->Text == "" ||
			txt_Name->Text == "" ||
			
			txt_password->Text == ""
			) {
			MessageBox::Show("Please Enter All information about this new Customer", "Eror", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return false;
		}
		return true;

	}
		   /////////////////
	private: System::Void btn_UpdateBook_Click(System::Object^  sender, System::EventArgs^  e) {
		panel1->Visible = true;
		panel2->Visible = false;
		Spanel->Visible = true;
		Spanel->Height = btn_UpdateBook->Height;
		Spanel->Top = btn_UpdateBook->Top;
		
		fill_listview();


	}
private: System::Void btn_AddBook_Click(System::Object^  sender, System::EventArgs^  e) {
	panel2->Visible = true;
	panel1->Visible = false;
	Spanel->Visible = true;
	Spanel->Height = btn_AddBook->Height;
	Spanel->Top = btn_AddBook->Top;
	label3->Visible = false; 
}


private: System::Void CustomerF_Load(System::Object^  sender, System::EventArgs^  e) {
	con_obj->Customer_Cs->Load();
	Spanel->Visible = false;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!Check_Empty())
		return;
	
	if (!con_obj->Customer_Cs->Check_Add(txt_ID->Text))
	{
		MessageBox::Show("This ID Already Exist", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		return;
	}
	if (txt_password->Text->Length < 6) {
		label3->Text = "This Password less Than 6 Characters";
		label3->Visible = true; 
		return;
	}




	con_obj->Customer_Cs->Add(txt_ID->Text, txt_Name->Text, txt_password->Text);
	
	MessageBox::Show("Sucsessfuly Added");
	clear_handwriten();
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void listView1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	btn_DeletCar->Enabled = true;
	btn_UpdatCar->Enabled = true;

	textBox5->Text = listView1->SelectedItems[0]->SubItems[0]->Text;
	textBox2->Text = listView1->SelectedItems[0]->SubItems[1]->Text;

	textBox4->Text = listView1->SelectedItems[0]->SubItems[2]->Text;

}
private: System::Void btn_UpdatCar_Click(System::Object^  sender, System::EventArgs^  e) {
	con_obj->Customer_Cs->Delete(textBox5->Text);

	con_obj->Customer_Cs->Add(textBox5->Text, textBox2->Text, textBox4->Text);
	MessageBox::Show("Done UpDate at ID :" + textBox5->Text, "UpDated", MessageBoxButtons::OK, MessageBoxIcon::Information);

	clear_handwriten();
	fill_listview();
}
private: System::Void btn_DeletCar_Click(System::Object^  sender, System::EventArgs^  e) {
	con_obj->Customer_Cs->Delete(textBox5->Text);
	MessageBox::Show("Done Delete ID :" + textBox5->Text, "Deleted", MessageBoxButtons::OK, MessageBoxIcon::Information);

	clear_handwriten();
	fill_listview();

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	

}
};
}

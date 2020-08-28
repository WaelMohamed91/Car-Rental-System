#pragma once

#include "container.h"

namespace CarRen {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System ::IO;
	/// <summary>
	/// Summary for CarF
	/// </summary>
	public ref class CarF : public System::Windows::Forms::Form
	{
	public:
		CarF(void)
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
		~CarF()
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

	private: System::Windows::Forms::TextBox^  txt_Price;
	private: System::Windows::Forms::Label^  lbl_Color;
	private: System::Windows::Forms::TextBox^  txt_colr;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  lbl_Price;

	private: System::Windows::Forms::Label^  lbl_ID;
	private: System::Windows::Forms::TextBox^  txt_ID;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txt_color;

	private: System::Windows::Forms::Button^  btn_UpdatCar;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::Button^  btn_DeletCar;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Label^  label8;


	private: System::Windows::Forms::TextBox^  txt_Model_Year;
	private: System::Windows::Forms::TextBox^  txt_Model_Type;
	private: System::Windows::Forms::TextBox^  txt_Type;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  Price;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CarF::typeid));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Spanel = (gcnew System::Windows::Forms::Panel());
			this->btn_UpdateCar = (gcnew System::Windows::Forms::Button());
			this->btn_AddCar = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->btn_DeletCar = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->Price = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_color = (gcnew System::Windows::Forms::TextBox());
			this->btn_UpdatCar = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_Model_Year = (gcnew System::Windows::Forms::TextBox());
			this->txt_Model_Type = (gcnew System::Windows::Forms::TextBox());
			this->txt_Type = (gcnew System::Windows::Forms::TextBox());
			this->txt_Price = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Color = (gcnew System::Windows::Forms::Label());
			this->txt_colr = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lbl_Price = (gcnew System::Windows::Forms::Label());
			this->lbl_ID = (gcnew System::Windows::Forms::Label());
			this->txt_ID = (gcnew System::Windows::Forms::TextBox());
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
			this->panel3->TabIndex = 8;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CarF::panel3_Paint);
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
			this->btn_UpdateCar->Size = System::Drawing::Size(72, 80);
			this->btn_UpdateCar->TabIndex = 13;
			this->btn_UpdateCar->Text = L"Update/Delete";
			this->btn_UpdateCar->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_UpdateCar->UseVisualStyleBackColor = true;
			this->btn_UpdateCar->Click += gcnew System::EventHandler(this, &CarF::btn_UpdateCar_Click);
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
			this->btn_AddCar->Click += gcnew System::EventHandler(this, &CarF::btn_AddCar_Click);
			// 
			// panel2
			// 
			this->panel2->AccessibleName = L"";
			this->panel2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->txt_Model_Year);
			this->panel2->Controls->Add(this->txt_Model_Type);
			this->panel2->Controls->Add(this->txt_Type);
			this->panel2->Controls->Add(this->txt_Price);
			this->panel2->Controls->Add(this->lbl_Color);
			this->panel2->Controls->Add(this->txt_colr);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->lbl_Price);
			this->panel2->Controls->Add(this->lbl_ID);
			this->panel2->Controls->Add(this->txt_ID);
			this->panel2->Location = System::Drawing::Point(185, 33);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(745, 514);
			this->panel2->TabIndex = 29;
			this->panel2->Visible = false;
			// 
			// panel1
			// 
			this->panel1->AccessibleName = L"";
			this->panel1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->btn_DeletCar);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->listView1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->txt_color);
			this->panel1->Controls->Add(this->btn_UpdatCar);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Location = System::Drawing::Point(210, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(652, 485);
			this->panel1->TabIndex = 30;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CarF::panel1_Paint);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->label10->Location = System::Drawing::Point(74, 157);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(100, 23);
			this->label10->TabIndex = 39;
			this->label10->Text = L"Model Year";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->label9->Location = System::Drawing::Point(73, 129);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(103, 23);
			this->label9->TabIndex = 38;
			this->label9->Text = L"Model Type";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox3->Location = System::Drawing::Point(195, 129);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(125, 20);
			this->textBox3->TabIndex = 36;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox4->Location = System::Drawing::Point(195, 101);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(125, 20);
			this->textBox4->TabIndex = 35;
			// 
			// btn_DeletCar
			// 
			this->btn_DeletCar->Enabled = false;
			this->btn_DeletCar->FlatAppearance->BorderSize = 0;
			this->btn_DeletCar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_DeletCar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic));
			this->btn_DeletCar->ForeColor = System::Drawing::Color::Black;
			this->btn_DeletCar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_DeletCar.Image")));
			this->btn_DeletCar->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_DeletCar->Location = System::Drawing::Point(474, 402);
			this->btn_DeletCar->Name = L"btn_DeletCar";
			this->btn_DeletCar->Size = System::Drawing::Size(72, 59);
			this->btn_DeletCar->TabIndex = 31;
			this->btn_DeletCar->Text = L"Delete";
			this->btn_DeletCar->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_DeletCar->UseVisualStyleBackColor = true;
			this->btn_DeletCar->Click += gcnew System::EventHandler(this, &CarF::btn_DeletCar_Click);
			// 
			// label5
			// 
			this->label5->AccessibleName = L"";
			this->label5->AutoSize = true;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(27, 402);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(442, 23);
			this->label5->TabIndex = 30;
			this->label5->Text = L"If you want to delet a car please Select It and Click Delete";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->columnHeader1, this->Price,
					this->columnHeader2, this->columnHeader3, this->columnHeader4, this->columnHeader5
			});
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(7, 255);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(604, 132);
			this->listView1->TabIndex = 29;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ItemSelectionChanged += gcnew System::Windows::Forms::ListViewItemSelectionChangedEventHandler(this, &CarF::listView1_ItemSelectionChanged);
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &CarF::listView1_SelectedIndexChanged);
			this->listView1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &CarF::listView1_MouseClick);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Car ID";
			this->columnHeader1->Width = 100;
			// 
			// Price
			// 
			this->Price->Text = L"Price";
			this->Price->Width = 100;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Type";
			this->columnHeader2->Width = 100;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Model Type";
			this->columnHeader3->Width = 100;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Model year";
			this->columnHeader4->Width = 100;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Color";
			this->columnHeader5->Width = 100;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox1->Location = System::Drawing::Point(195, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(125, 20);
			this->textBox1->TabIndex = 28;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox2->Location = System::Drawing::Point(195, 45);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(125, 20);
			this->textBox2->TabIndex = 27;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &CarF::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CarF::textBox2_KeyPress);
			// 
			// label1
			// 
			this->label1->AccessibleName = L"";
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(97, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 23);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Color";
			// 
			// txt_color
			// 
			this->txt_color->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_color->Location = System::Drawing::Point(195, 157);
			this->txt_color->Name = L"txt_color";
			this->txt_color->Size = System::Drawing::Size(125, 20);
			this->txt_color->TabIndex = 26;
			// 
			// btn_UpdatCar
			// 
			this->btn_UpdatCar->Enabled = false;
			this->btn_UpdatCar->FlatAppearance->BorderSize = 0;
			this->btn_UpdatCar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_UpdatCar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic));
			this->btn_UpdatCar->ForeColor = System::Drawing::SystemColors::Desktop;
			this->btn_UpdatCar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_UpdatCar.Image")));
			this->btn_UpdatCar->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_UpdatCar->Location = System::Drawing::Point(333, 185);
			this->btn_UpdatCar->Name = L"btn_UpdatCar";
			this->btn_UpdatCar->Size = System::Drawing::Size(64, 64);
			this->btn_UpdatCar->TabIndex = 20;
			this->btn_UpdatCar->Text = L"update";
			this->btn_UpdatCar->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_UpdatCar->UseVisualStyleBackColor = true;
			this->btn_UpdatCar->Click += gcnew System::EventHandler(this, &CarF::btn_UpdatCar_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(99, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 23);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Price";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(100, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 23);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Type";
			// 
			// label4
			// 
			this->label4->AccessibleName = L"";
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(109, 17);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 23);
			this->label4->TabIndex = 4;
			this->label4->Text = L"ID";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(195, 17);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(125, 20);
			this->textBox5->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(86, 177);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 23);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Model Year";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(112, 113);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 23);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Type";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(85, 145);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 23);
			this->label7->TabIndex = 37;
			this->label7->Text = L"Model Type";
			// 
			// txt_Model_Year
			// 
			this->txt_Model_Year->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_Model_Year->Location = System::Drawing::Point(195, 185);
			this->txt_Model_Year->Name = L"txt_Model_Year";
			this->txt_Model_Year->Size = System::Drawing::Size(125, 20);
			this->txt_Model_Year->TabIndex = 31;
			// 
			// txt_Model_Type
			// 
			this->txt_Model_Type->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_Model_Type->Location = System::Drawing::Point(195, 152);
			this->txt_Model_Type->Name = L"txt_Model_Type";
			this->txt_Model_Type->Size = System::Drawing::Size(125, 20);
			this->txt_Model_Type->TabIndex = 30;
			// 
			// txt_Type
			// 
			this->txt_Type->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_Type->Location = System::Drawing::Point(195, 119);
			this->txt_Type->Name = L"txt_Type";
			this->txt_Type->Size = System::Drawing::Size(125, 20);
			this->txt_Type->TabIndex = 29;
			// 
			// txt_Price
			// 
			this->txt_Price->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_Price->Location = System::Drawing::Point(195, 53);
			this->txt_Price->Name = L"txt_Price";
			this->txt_Price->Size = System::Drawing::Size(125, 20);
			this->txt_Price->TabIndex = 27;
			this->txt_Price->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CarF::txt_Price_KeyPress);
			// 
			// lbl_Color
			// 
			this->lbl_Color->AccessibleName = L"";
			this->lbl_Color->AutoSize = true;
			this->lbl_Color->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_Color->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->lbl_Color->Location = System::Drawing::Point(109, 81);
			this->lbl_Color->Name = L"lbl_Color";
			this->lbl_Color->Size = System::Drawing::Size(55, 23);
			this->lbl_Color->TabIndex = 25;
			this->lbl_Color->Text = L"Color";
			// 
			// txt_colr
			// 
			this->txt_colr->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_colr->Location = System::Drawing::Point(195, 86);
			this->txt_colr->Name = L"txt_colr";
			this->txt_colr->Size = System::Drawing::Size(125, 20);
			this->txt_colr->TabIndex = 26;
			this->txt_colr->TextChanged += gcnew System::EventHandler(this, &CarF::txt_colr_TextChanged);
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
			this->button1->Click += gcnew System::EventHandler(this, &CarF::button1_Click);
			// 
			// lbl_Price
			// 
			this->lbl_Price->AutoSize = true;
			this->lbl_Price->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->lbl_Price->Location = System::Drawing::Point(111, 49);
			this->lbl_Price->Name = L"lbl_Price";
			this->lbl_Price->Size = System::Drawing::Size(50, 23);
			this->lbl_Price->TabIndex = 17;
			this->lbl_Price->Text = L"Price";
			// 
			// lbl_ID
			// 
			this->lbl_ID->AccessibleName = L"";
			this->lbl_ID->AutoSize = true;
			this->lbl_ID->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->lbl_ID->Location = System::Drawing::Point(121, 17);
			this->lbl_ID->Name = L"lbl_ID";
			this->lbl_ID->Size = System::Drawing::Size(31, 23);
			this->lbl_ID->TabIndex = 4;
			this->lbl_ID->Text = L"ID";
			// 
			// txt_ID
			// 
			this->txt_ID->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_ID->Location = System::Drawing::Point(195, 20);
			this->txt_ID->Name = L"txt_ID";
			this->txt_ID->Size = System::Drawing::Size(125, 20);
			this->txt_ID->TabIndex = 4;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(151, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(847, 18);
			this->panel6->TabIndex = 31;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel7->Location = System::Drawing::Point(151, 532);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(847, 18);
			this->panel7->TabIndex = 32;
			// 
			// CarF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(998, 550);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Name = L"CarF";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CarF";
			this->Load += gcnew System::EventHandler(this, &CarF::CarF_Load);
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		
		container ^ con_obj = gcnew container();
		int c = 0;
		//***

		///////////////////////////////
	public: void clear_handwriten() {
		txt_ID->Text = "";
		txt_Price->Text = "";
		txt_colr->Text = "";
		txt_Type->Text = "";
		txt_Model_Type->Text = "";
		txt_Model_Year->Text = "";
		///
		textBox1->Text = ""; 
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		txt_color->Text = "";
		
			
	}
	public:bool Check_Empty() {
		if (txt_colr->Text == "" || txt_Type->Text == ""  || txt_Model_Type->Text == "" || txt_Model_Year->Text == "" || txt_ID ->Text == "" || txt_Price ->Text == "" )
		{
			
			 
			MessageBox::Show("Please Enter All information about this new Car ", "Eror", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return false;
		}
		return true;

	}
		   public:void fill_listview() {
			   listView1->Items->Clear();
			   c = 0;
			  
			   for (int i = 0; i < con_obj->Car_Cs->Cars->Count; i++) {
				   listView1->Items->Add(con_obj->Car_Cs->Cars[i]->Car_ID);
				   listView1->Items[c]->SubItems->Add(con_obj->Car_Cs->Cars[i]->Car_Price);
				   listView1->Items[c]->SubItems->Add(con_obj->Car_Cs->Cars[i]->Car_Type);
				   listView1->Items[c]->SubItems->Add(con_obj->Car_Cs->Cars[i]->Car_Model_Type);
				   listView1->Items[c]->SubItems->Add(con_obj->Car_Cs->Cars[i]->Car_Model_Year);
				   listView1->Items[c]->SubItems->Add(con_obj->Car_Cs->Cars[i]->Car_Color);
				   c++;
			   }

		   }
		   /////////////////
	private: System::Void CarF_Load(System::Object^  sender, System::EventArgs^  e) {
		con_obj->Car_Cs->Load();
		Spanel->Visible = false;
	}
private: System::Void btn_UpdateCar_Click(System::Object^  sender, System::EventArgs^  e) {
	panel1->Visible = true;
	panel2->Visible = false;
	Spanel->Visible = true;
	Spanel->Height = btn_UpdateCar->Height;
	Spanel->Top = btn_UpdateCar->Top;
	fill_listview();


}
private: System::Void btn_AddCar_Click(System::Object^  sender, System::EventArgs^  e) {
	panel2->Visible = true;
	panel1->Visible = false;
	Spanel->Visible = true;
	Spanel->Height = btn_AddCar->Height;
	Spanel->Top = btn_AddCar->Top;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!Check_Empty())
		return;
	if (!con_obj->Car_Cs->Check_Add_Car(txt_ID->Text) ) {
		MessageBox::Show("This ID Already Exist", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error); 
		return; 
	}

	con_obj->Car_Cs->Add_Car(txt_ID->Text, txt_Price->Text, txt_Type->Text, txt_Model_Type->Text, txt_Model_Year->Text, txt_colr->Text);

	MessageBox::Show("Sucsessfuly Added");
	clear_handwriten();
}
private: System::Void txt_colr_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
	

}
private: System::Void btn_UpdatCar_Click(System::Object^  sender, System::EventArgs^  e) {

	con_obj->Car_Cs->Delete_Car(textBox5->Text);
	con_obj->Car_Cs->Add_Car(textBox5->Text, textBox2->Text, textBox1->Text, textBox4->Text, textBox3->Text, txt_color->Text);
	MessageBox::Show("Done UpDate at ID :" + textBox5->Text, "UpDated", MessageBoxButtons::OK, MessageBoxIcon::Information);

	clear_handwriten();
	fill_listview();

}
private: System::Void listView1_ItemCheck(System::Object^  sender, System::Windows::Forms::ItemCheckEventArgs^  e) {
	
}
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	
}

private: System::Void listView1_ItemSelectionChanged(System::Object^  sender, System::Windows::Forms::ListViewItemSelectionChangedEventArgs^  e) {

}
private: System::Void listView1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	btn_DeletCar->Enabled = true; 
	btn_UpdatCar->Enabled = true; 
	textBox5 ->Text = listView1->SelectedItems[0]->SubItems[0]->Text;
	textBox2->Text = listView1->SelectedItems[0]->SubItems[1]->Text;
	textBox1->Text = listView1->SelectedItems[0]->SubItems[2]->Text;
	textBox4->Text = listView1->SelectedItems[0]->SubItems[3]->Text;
	textBox3->Text = listView1->SelectedItems[0]->SubItems[4]->Text;
	txt_color->Text = listView1->SelectedItems[0]->SubItems[5]->Text;
	

}
private: System::Void btn_DeletCar_Click(System::Object^  sender, System::EventArgs^  e) {
	con_obj->Car_Cs->Delete_Car(textBox5->Text);
	MessageBox::Show("Done Delete ID :" + textBox5->Text, "Deleted", MessageBoxButtons::OK, MessageBoxIcon::Information);
	clear_handwriten();
	fill_listview();

}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void txt_Price_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
};
}

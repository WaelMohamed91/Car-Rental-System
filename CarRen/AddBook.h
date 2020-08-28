#pragma once
#include "EstimationF.h"
#include "FeeedbackF.h"
#include "container.h"

namespace CarRen {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	  System::DateTime;

	/// <summary>
	/// Summary for AddBook
	/// </summary>
	public ref class AddBook : public System::Windows::Forms::Form
	{
	public:
		AddBook(void)
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
		~AddBook()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  btn_AddBook;


	private: System::Windows::Forms::Button^  btn_UpdateBook;


	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Panel^  panel4;








	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  btn_Confirm;










	private: System::Windows::Forms::Panel^  Spanel;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btn_save;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::Label^  lbl_Endtime;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  lbl_startTime;
	private: System::Windows::Forms::Label^  lbl_Carid;
	private: System::Windows::Forms::TextBox^  txt_Carid;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  Price;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;
	private: System::Windows::Forms::ColumnHeader^  columnHeader9;
	private: System::Windows::Forms::ColumnHeader^  columnHeader10;
	private: System::Windows::Forms::Button^  btn_Estimation;
	private: System::Windows::Forms::Button^  button1;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AddBook::typeid));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_Estimation = (gcnew System::Windows::Forms::Button());
			this->Spanel = (gcnew System::Windows::Forms::Panel());
			this->btn_UpdateBook = (gcnew System::Windows::Forms::Button());
			this->btn_AddBook = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->lbl_Endtime = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->lbl_startTime = (gcnew System::Windows::Forms::Label());
			this->lbl_Carid = (gcnew System::Windows::Forms::Label());
			this->txt_Carid = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->Price = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->btn_Confirm = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->btn_Estimation);
			this->panel3->Controls->Add(this->Spanel);
			this->panel3->Controls->Add(this->btn_UpdateBook);
			this->panel3->Controls->Add(this->btn_AddBook);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(151, 550);
			this->panel3->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->Location = System::Drawing::Point(29, 479);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 68);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Feedback";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddBook::button1_Click_1);
			// 
			// btn_Estimation
			// 
			this->btn_Estimation->FlatAppearance->BorderSize = 0;
			this->btn_Estimation->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Estimation->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic));
			this->btn_Estimation->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_Estimation->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Estimation.Image")));
			this->btn_Estimation->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_Estimation->Location = System::Drawing::Point(29, 99);
			this->btn_Estimation->Name = L"btn_Estimation";
			this->btn_Estimation->Size = System::Drawing::Size(105, 68);
			this->btn_Estimation->TabIndex = 23;
			this->btn_Estimation->Text = L"Estimat Cost";
			this->btn_Estimation->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_Estimation->UseVisualStyleBackColor = true;
			this->btn_Estimation->Click += gcnew System::EventHandler(this, &AddBook::btn_Estimation_Click);
			// 
			// Spanel
			// 
			this->Spanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->Spanel->Location = System::Drawing::Point(29, 186);
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
			this->btn_UpdateBook->Location = System::Drawing::Point(41, 254);
			this->btn_UpdateBook->Name = L"btn_UpdateBook";
			this->btn_UpdateBook->Size = System::Drawing::Size(72, 68);
			this->btn_UpdateBook->TabIndex = 13;
			this->btn_UpdateBook->Text = L"Update/Delete";
			this->btn_UpdateBook->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_UpdateBook->UseVisualStyleBackColor = true;
			this->btn_UpdateBook->Click += gcnew System::EventHandler(this, &AddBook::button1_Click);
			// 
			// btn_AddBook
			// 
			this->btn_AddBook->FlatAppearance->BorderSize = 0;
			this->btn_AddBook->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_AddBook->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic));
			this->btn_AddBook->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_AddBook->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_AddBook.Image")));
			this->btn_AddBook->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_AddBook->Location = System::Drawing::Point(49, 179);
			this->btn_AddBook->Name = L"btn_AddBook";
			this->btn_AddBook->Size = System::Drawing::Size(64, 68);
			this->btn_AddBook->TabIndex = 3;
			this->btn_AddBook->Text = L"ADD";
			this->btn_AddBook->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_AddBook->UseVisualStyleBackColor = true;
			this->btn_AddBook->Click += gcnew System::EventHandler(this, &AddBook::btn_AddBook_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowLayoutPanel1->Location = System::Drawing::Point(151, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(847, 22);
			this->flowLayoutPanel1->TabIndex = 25;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->btn_save);
			this->panel4->Controls->Add(this->dateTimePicker2);
			this->panel4->Controls->Add(this->lbl_Endtime);
			this->panel4->Controls->Add(this->dateTimePicker1);
			this->panel4->Controls->Add(this->lbl_startTime);
			this->panel4->Controls->Add(this->lbl_Carid);
			this->panel4->Controls->Add(this->txt_Carid);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->button7);
			this->panel4->Controls->Add(this->listView1);
			this->panel4->Location = System::Drawing::Point(245, 33);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(698, 462);
			this->panel4->TabIndex = 26;
			this->panel4->Visible = false;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AddBook::panel4_Paint);
			// 
			// label2
			// 
			this->label2->AccessibleName = L"";
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(93, 402);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(437, 23);
			this->label2->TabIndex = 39;
			this->label2->Text = L"If you want to Cancel  a Booking please Select It and Click Delete";
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
			this->btn_save->Location = System::Drawing::Point(422, 157);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(72, 59);
			this->btn_save->TabIndex = 34;
			this->btn_save->Text = L"Save";
			this->btn_save->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_save->UseVisualStyleBackColor = true;
			this->btn_save->Click += gcnew System::EventHandler(this, &AddBook::btn_save_Click);
			this->btn_save->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AddBook::btn_save_MouseClick);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(240, 125);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker2->TabIndex = 38;
			this->dateTimePicker2->Value = System::DateTime(2018, 4, 26, 0, 0, 0, 0);
			// 
			// lbl_Endtime
			// 
			this->lbl_Endtime->AutoSize = true;
			this->lbl_Endtime->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->lbl_Endtime->Location = System::Drawing::Point(143, 124);
			this->lbl_Endtime->Name = L"lbl_Endtime";
			this->lbl_Endtime->Size = System::Drawing::Size(88, 23);
			this->lbl_Endtime->TabIndex = 37;
			this->lbl_Endtime->Text = L"End Time";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(240, 88);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 36;
			this->dateTimePicker1->Value = System::DateTime(2018, 4, 26, 0, 0, 0, 0);
			// 
			// lbl_startTime
			// 
			this->lbl_startTime->AutoSize = true;
			this->lbl_startTime->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->lbl_startTime->Location = System::Drawing::Point(143, 89);
			this->lbl_startTime->Name = L"lbl_startTime";
			this->lbl_startTime->Size = System::Drawing::Size(92, 23);
			this->lbl_startTime->TabIndex = 35;
			this->lbl_startTime->Text = L"Start Time";
			// 
			// lbl_Carid
			// 
			this->lbl_Carid->AutoSize = true;
			this->lbl_Carid->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->lbl_Carid->Location = System::Drawing::Point(153, 54);
			this->lbl_Carid->Name = L"lbl_Carid";
			this->lbl_Carid->Size = System::Drawing::Size(64, 23);
			this->lbl_Carid->TabIndex = 32;
			this->lbl_Carid->Text = L"Car ID";
			// 
			// txt_Carid
			// 
			this->txt_Carid->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_Carid->Location = System::Drawing::Point(278, 51);
			this->txt_Carid->Name = L"txt_Carid";
			this->txt_Carid->Size = System::Drawing::Size(125, 20);
			this->txt_Carid->TabIndex = 33;
			// 
			// label1
			// 
			this->label1->AccessibleName = L"";
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(34, 518);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(433, 23);
			this->label1->TabIndex = 31;
			this->label1->Text = L"If you want to Cancel a Booking please Select It and Click Delete";
			// 
			// button7
			// 
			this->button7->Enabled = false;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button7->Location = System::Drawing::Point(545, 385);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(72, 59);
			this->button7->TabIndex = 26;
			this->button7->Text = L"Delete";
			this->button7->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &AddBook::button7_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader6, this->columnHeader7,
					this->columnHeader8, this->columnHeader9, this->columnHeader10
			});
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(97, 222);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(455, 139);
			this->listView1->TabIndex = 9;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AddBook::listView1_MouseClick);
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Booking ID";
			this->columnHeader6->Width = 72;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Car ID";
			this->columnHeader7->Width = 72;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Customer ID";
			this->columnHeader8->Width = 77;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Start";
			this->columnHeader9->Width = 113;
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"End";
			this->columnHeader10->Width = 108;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->listView2);
			this->panel1->Controls->Add(this->btn_Confirm);
			this->panel1->Controls->Add(this->dateTimePicker3);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->dateTimePicker4);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(242, 33);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(663, 517);
			this->panel1->TabIndex = 27;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AddBook::panel1_Paint);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(163, 178);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 23);
			this->label6->TabIndex = 31;
			this->label6->Text = L"Booking ID";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox2->Location = System::Drawing::Point(288, 175);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(125, 20);
			this->textBox2->TabIndex = 32;
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->columnHeader1, this->Price,
					this->columnHeader2, this->columnHeader3, this->columnHeader4, this->columnHeader5
			});
			this->listView2->FullRowSelect = true;
			this->listView2->GridLines = true;
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(16, 13);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(553, 132);
			this->listView2->TabIndex = 30;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			this->listView2->SelectedIndexChanged += gcnew System::EventHandler(this, &AddBook::listView2_SelectedIndexChanged);
			this->listView2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AddBook::listView2_MouseClick);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Car ID";
			this->columnHeader1->Width = 70;
			// 
			// Price
			// 
			this->Price->Text = L"Price";
			this->Price->Width = 71;
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
			// btn_Confirm
			// 
			this->btn_Confirm->FlatAppearance->BorderSize = 0;
			this->btn_Confirm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Confirm->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic));
			this->btn_Confirm->ForeColor = System::Drawing::SystemColors::Desktop;
			this->btn_Confirm->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Confirm.Image")));
			this->btn_Confirm->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_Confirm->Location = System::Drawing::Point(403, 315);
			this->btn_Confirm->Name = L"btn_Confirm";
			this->btn_Confirm->Size = System::Drawing::Size(94, 69);
			this->btn_Confirm->TabIndex = 20;
			this->btn_Confirm->Text = L"Confirm";
			this->btn_Confirm->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_Confirm->UseVisualStyleBackColor = true;
			this->btn_Confirm->Click += gcnew System::EventHandler(this, &AddBook::button5_Click);
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->CalendarFont = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker3->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker3->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker3->Location = System::Drawing::Point(250, 282);
			this->dateTimePicker3->MaxDate = System::DateTime(2020, 12, 31, 0, 0, 0, 0);
			this->dateTimePicker3->MinDate = System::DateTime(2018, 4, 30, 0, 0, 0, 0);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker3->TabIndex = 18;
			this->dateTimePicker3->Value = System::DateTime(2018, 4, 30, 0, 0, 0, 0);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(153, 281);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 23);
			this->label3->TabIndex = 17;
			this->label3->Text = L"End Time";
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->CalendarFont = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker4->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker4->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker4->Location = System::Drawing::Point(250, 245);
			this->dateTimePicker4->MaxDate = System::DateTime(2020, 12, 31, 0, 0, 0, 0);
			this->dateTimePicker4->MinDate = System::DateTime(2018, 4, 30, 0, 0, 0, 0);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker4->TabIndex = 16;
			this->dateTimePicker4->Value = System::DateTime(2018, 4, 30, 0, 0, 0, 0);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(153, 246);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 23);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Start Time";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(163, 211);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 23);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Car ID";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox1->Location = System::Drawing::Point(288, 208);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(125, 20);
			this->textBox1->TabIndex = 4;
			// 
			// AddBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(998, 550);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Name = L"AddBook";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddBook";
			this->Load += gcnew System::EventHandler(this, &AddBook::AddBook_Load);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
		
#pragma endregion
		
		String  ^ Cust_ID;
		container ^ con_obj = gcnew container();
		
		
	

		/////////////*****************************

		bool Check_Date_book() {
			if (dateTimePicker4->Value > dateTimePicker3->Value)
			{
				MessageBox::Show("the Date You Entered is Not allowed", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}
			return true;
		}

		bool Check_Date_book_For_UpDate() {
			if (dateTimePicker1->Value > dateTimePicker2->Value)
			{
				MessageBox::Show("the Date You Entered is Not allowed", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}
			return true;
		}


		  public:void fill_listview() {
			  listView2->Items->Clear();
			int  c = 0;

			  for (int i = 0; i < con_obj->Car_Cs->Cars->Count; i++) {
				  listView2->Items->Add(con_obj->Car_Cs->Cars[i]->Car_ID);
				  listView2->Items[c]->SubItems->Add(con_obj->Car_Cs->Cars[i]->Car_Price);
				  listView2->Items[c]->SubItems->Add(con_obj->Car_Cs->Cars[i]->Car_Type);
				  listView2->Items[c]->SubItems->Add(con_obj->Car_Cs->Cars[i]->Car_Model_Type);
				  listView2->Items[c]->SubItems->Add(con_obj->Car_Cs->Cars[i]->Car_Model_Year);
				  listView2->Items[c]->SubItems->Add(con_obj->Car_Cs->Cars[i]->Car_Color);
				  c++;
			  }

		  }
				 void fill_User_listview() {
					 listView1->Items->Clear();
					 int  c = 0;

					 for (int i = 0; i < con_obj->booking_Cs->User_Bookings->Count; i++) {

						 listView1->Items->Add(con_obj->booking_Cs->User_Bookings[i]->Booking_ID);
						 listView1->Items[c]->SubItems->Add(con_obj->booking_Cs->User_Bookings[i]->Customer_ID);
						 listView1->Items[c]->SubItems->Add(con_obj->booking_Cs->User_Bookings[i]->Car_ID);

						 listView1->Items[c]->SubItems->Add(con_obj->booking_Cs->User_Bookings[i]->Start);
						 listView1->Items[c]->SubItems->Add(con_obj->booking_Cs->User_Bookings[i]->End);

						 c++;
					 }
				 }

				 ////////////////////////////////////////*

				 void fill_Deletetd_User_listview() {
					 listView1->Items->Clear();
					 int  c = 0;

					 for (int i = 0; i < con_obj->booking_Cs->User_Bookings->Count; i++) {

						 listView1->Items->Add(con_obj->booking_Cs->User_Bookings[i]->Booking_ID);
						 listView1->Items[c]->SubItems->Add(con_obj->booking_Cs->User_Bookings[i]->Car_ID);
						 listView1->Items[c]->SubItems->Add(con_obj->booking_Cs->User_Bookings[i]->Customer_ID);
						 

						 listView1->Items[c]->SubItems->Add(con_obj->booking_Cs->User_Bookings[i]->Start);
						 listView1->Items[c]->SubItems->Add(con_obj->booking_Cs->User_Bookings[i]->End);

						 c++;
					 }
				 }

				 ////////////////////////////////////////*
				

				 void Get_CustID() {

					 StreamReader ^ sr = gcnew StreamReader("Current_Customer.txt");
					 String^ row = Convert::ToString(sr->ReadLine());
					 array<Char>^ splitter = { '*' };
					 array<String^>^ arr = row->Split(splitter);
					 Cust_ID = arr[0];
					 sr->Close();

				 }

				 void Get_BookinID() {
					String ^ id_counter = con_obj->booking_Cs->Bookings[con_obj->booking_Cs->Bookings->Count - 1]->Booking_ID;
					
					 int id = int::Parse(id_counter);
					 id++;
					 textBox2->Text = Convert::ToString(id);
				 }
			


				 int check_String(String ^ f, String ^ s) {
					 array<Char>^ splitter = { '/' };
					 array<String^>^ first = f->Split(splitter);
					 array<Char>^ splitter2 = { '/' };
					 array<String^>^ second = s->Split(splitter2);
					 int f1 = Convert::ToInt32(first[2]);
					 int f2 = Convert::ToInt32(first[1]);
					 int f3 = Convert::ToInt32(first[0]);
					 int s1 = Convert::ToInt32(second[2]);
					 int s2 = Convert::ToInt32(second[1]);
					 int s3 = Convert::ToInt32(second[0]);
					 if (f1 > s1)
						 return 1;
					 else if (s1 > f1)
						 return 2;
					 else {
						 if (f2 > s2)
							 return 1;
						 else if (s2 > f2)
							 return 2;
						 else {
							 if (f3 > s3)
								 return 1;
							 else if (s3 > f3)
								 return 2;
							 else
								 return 3;

						 }
					 }
				 }
				 bool Check_Time_Cases(String ^ newStart, String ^ newEnd) {
					 for (int i = 0; i < con_obj->booking_Cs->Car_Bookings->Count; i++)
					 {
						 if (check_String(newStart, con_obj->booking_Cs->Car_Bookings[i]->Start) == 1
							 && check_String(con_obj->booking_Cs->Car_Bookings[i]->End, newStart) == 1) {
							 MessageBox::Show("Car Reserved From : " + con_obj->booking_Cs->Car_Bookings[i]->Start + "To : " + con_obj->booking_Cs->Car_Bookings[i]->End, "Car ID : " + con_obj->booking_Cs->Car_Bookings[i]->Car_ID + "Not Available",	MessageBoxButtons::OK , MessageBoxIcon::Warning);

							
							 return false;
							 break;

						 }
						 else if (   check_String(newStart, con_obj->booking_Cs->Car_Bookings[i]->Start) == 2 &&
							 check_String(newEnd, con_obj->booking_Cs->Car_Bookings[i]->Start) == 1)
						 {
							 MessageBox::Show("Car Reserved From : " + con_obj->booking_Cs->Car_Bookings[i]->Start + "To : " + con_obj->booking_Cs->Car_Bookings[i]->End, "Car ID : " + con_obj->booking_Cs->Car_Bookings[i]->Car_ID + "Not Available", MessageBoxButtons::OK, MessageBoxIcon::Warning);
							 return false;
							 break;
						 }

						 else if (     check_String(newEnd, con_obj->booking_Cs->Car_Bookings[i]->Start) == 3 ||
							 check_String( newStart, con_obj->booking_Cs->Car_Bookings[i]->End)==3 ||
							 check_String(newStart, con_obj->booking_Cs->Car_Bookings[i]->Start) == 3 ||
							 check_String(newEnd, con_obj->booking_Cs->Car_Bookings[i]->End) == 3)
						 {
							 MessageBox::Show("Car Reserved From : " + con_obj->booking_Cs->Car_Bookings[i]->Start + "To : " + con_obj->booking_Cs->Car_Bookings[i]->End, "Car ID : " + con_obj->booking_Cs->Car_Bookings[i]->Car_ID + "Not Available", MessageBoxButtons::OK, MessageBoxIcon::Warning);
							 return false;
							 break;
						 }
							
					 }
					 return true; 

				 }
				 //////////////////////////////////////////////////////////////////////////////////////////////////

				 bool Check_Time_Cases_For_UpDate(String ^ newStart, String ^ newEnd) {
					 for (int i = 0; i < con_obj->booking_Cs->Bookings->Count; i++)
					 {
						 if (check_String(newStart, con_obj->booking_Cs->Bookings[i]->Start) == 1
							 && check_String(con_obj->booking_Cs->Bookings[i]->End, newStart) == 1) {
							 MessageBox::Show("Car ID : "+txt_Carid->Text +" Can Not Updated as it Reserved From : " + con_obj->booking_Cs->Bookings[i]->Start + "To : " + con_obj->booking_Cs->Bookings[i]->End , "Not Available", MessageBoxButtons::OK, MessageBoxIcon::Warning);
							 return false;
							 break;

						 }
						 else if (check_String(newStart, con_obj->booking_Cs->Bookings[i]->Start) == 2 &&
							 check_String(newEnd, con_obj->booking_Cs->Bookings[i]->Start) == 1)
						 {
							 MessageBox::Show("Car ID : " + txt_Carid->Text + " Can Not Updated as it Reserved From : " + con_obj->booking_Cs->Bookings[i]->Start + "To : " + con_obj->booking_Cs->Bookings[i]->End, "Not Available", MessageBoxButtons::OK, MessageBoxIcon::Warning);
							 return false;
							 break;
						 }

						 else if (check_String(newEnd, con_obj->booking_Cs->Bookings[i]->Start) == 3 ||
							 check_String(newStart, con_obj->booking_Cs->Bookings[i]->End) == 3 ||
							 check_String(newStart, con_obj->booking_Cs->Bookings[i]->Start) == 3 ||
							 check_String(newEnd, con_obj->booking_Cs->Bookings[i]->End) == 3)
						 {
							 MessageBox::Show("Car ID : " + txt_Carid->Text + " Can Not Updated as it Reserved From : " + con_obj->booking_Cs->Bookings[i]->Start + "To : " + con_obj->booking_Cs->Bookings[i]->End, "Not Available", MessageBoxButtons::OK, MessageBoxIcon::Warning);
							 return false;
							 break;
						 }

					 }
					 return true;

				 }

				 ///////////////////////////////////////////////////////////////////////////////////////////////////
				 void  Clear_HandWriten() {
					 btn_Confirm->Enabled = false;
					 textBox1->Text = "";
					 textBox2->Text = ""; 
					 dateTimePicker3->Value = DateTime::Now;
					 dateTimePicker4->Value = DateTime::Now;

					 txt_Carid->Text = "";
					 dateTimePicker1->Value = DateTime::Now;
					 dateTimePicker2->Value = DateTime::Now;
 				 }


		//////////************************
				 
				 void delete_old()
				 {
					 for (int i = 0; i < con_obj->booking_Cs->Bookings->Count; i++)
					 {
						 String^ row = Convert::ToString(con_obj->booking_Cs->Bookings[i]->End);
						 array<Char>^ splitter = { '/' };
						 array<String^>^ arr = row->Split(splitter);

						 if (Convert::ToInt32(arr[2]) < Convert::ToInt32(DateTime::Now.Year))
						 {
							 con_obj->booking_Cs->Delete_Booking(con_obj->booking_Cs->Bookings[i]->Booking_ID);

						 }
						 else
						 {
							 if (Convert::ToInt32(arr[1]) < Convert::ToInt32(DateTime::Now.Month))
							 {
								 con_obj->booking_Cs->Delete_Booking(con_obj->booking_Cs->Bookings[i]->Booking_ID);
							 }
							 else
							 {
								 if (Convert::ToInt32(arr[0]) < Convert::ToInt32(DateTime::Now.Day))
								 {
									 con_obj->booking_Cs->Delete_Booking(con_obj->booking_Cs->Bookings[i]->Booking_ID);
								 }
							 }
						 }




					 }
				 }
				

//////////////////////////////////////////////////////////////////////////////

	private: System::Void btn_AddBook_Click(System::Object^  sender, System::EventArgs^  e) {
		
		panel1->Show();
		panel4->Visible = false;
		Spanel->Visible = true;
		Spanel->Height = btn_AddBook->Height;
		Spanel->Top = btn_AddBook->Top;
		listView1->Visible = false;
	
		
		fill_listview();
		
		
	
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	panel4->Show();
	panel1->Visible = false;
	Spanel->Visible = true;
	Spanel->Height = btn_UpdateBook->Height;
	Spanel->Top = btn_UpdateBook->Top;
	listView1->Visible = true; 
	////////////*
	con_obj->booking_Cs->Load_User_Bookings();
	///////////*
	fill_Deletetd_User_listview();
	


}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	
	panel1->Visible = false;
	panel4->Visible = false;
	Spanel->Visible = true;
	Spanel->Height = btn_save->Height;
	Spanel->Top = btn_save->Top;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	
}

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	////////////*
	con_obj->booking_Cs->Delete_Booking(txt_Carid->Text);
	MessageBox::Show("Done Delete ID :" + txt_Carid->Text, "Deleted", MessageBoxButtons::OK, MessageBoxIcon::Information);
	Clear_HandWriten();
	fill_Deletetd_User_listview();
	/////////////*
}
		 
private: System::Void AddBook_Load(System::Object^  sender, System::EventArgs^  e) {
	Spanel->Visible = false;
	listView1->Visible = false;
	con_obj->Car_Cs->Load();
	Get_CustID();
	con_obj->booking_Cs->Load();
	
	delete_old();
	
	dateTimePicker1->MinDate = DateTime::Now;
	dateTimePicker2->MinDate = DateTime::Now;
	dateTimePicker3->MinDate = DateTime::Now;
	dateTimePicker4->MinDate = DateTime::Now;
	dateTimePicker3->Value = DateTime::Now;
	dateTimePicker4->Value = DateTime::Now;

}
		
			

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!Check_Date_book())
		return;
		
		con_obj->booking_Cs->Load_Car_Bookings(textBox1->Text);

		if (!Check_Time_Cases(dateTimePicker4->Text , dateTimePicker3->Text))
			return; 
		
		con_obj->booking_Cs->Add_Booking(textBox2->Text, textBox1->Text, Cust_ID ,  dateTimePicker4->Text, dateTimePicker3->Text);
			MessageBox::Show("Done Reserve From " + dateTimePicker4->Text + "To : " + dateTimePicker3->Text ,"Done Reserve Car ID " +textBox1->Text, MessageBoxButtons::OK, MessageBoxIcon::Information);
			Clear_HandWriten();
			

}

private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void btn_save_Click(System::Object^  sender, System::EventArgs^  e) {	
	
	if (!Check_Time_Cases_For_UpDate(dateTimePicker1->Text, dateTimePicker2->Text))
		return;
	if (!Check_Date_book_For_UpDate())
		return;

	
	con_obj->booking_Cs->Delete_Booking(txt_Carid->Text);
	con_obj->booking_Cs->Add_Booking(con_obj->booking_Cs->Bookings[0]->Booking_ID, txt_Carid->Text, con_obj->booking_Cs->Bookings[0]->Customer_ID, dateTimePicker1->Text, dateTimePicker2->Text);
		MessageBox::Show("Done UpDate at ID :" + txt_Carid->Text, "UpDated", MessageBoxButtons::OK, MessageBoxIcon::Information);
		Clear_HandWriten();
		fill_Deletetd_User_listview();
	
	
}
private: System::Void listView2_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	btn_Confirm->Enabled = true;

	textBox1->Text = listView2->SelectedItems[0]->SubItems[0]->Text;
	Get_BookinID();



}
private: System::Void listView2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void panel4_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void listView1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	/////////////*
	txt_Carid->Text = listView1->SelectedItems[0]->SubItems[1]->Text;

	btn_save->Enabled = true;
	button7->Enabled = true;
	//////////////*
}
private: System::Void btn_save_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
}
private: System::Void btn_Estimation_Click(System::Object^  sender, System::EventArgs^  e) {
	Spanel->Visible = true;
	Spanel->Height = btn_Estimation->Height;
	Spanel->Top = btn_AddBook->Top;
	EstimationF ^ ef = gcnew EstimationF();
	this->Hide();
	ef->ShowDialog();
	this->Show();

}

private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

	FeeedbackF ^ feed = gcnew FeeedbackF();
	this->Hide();
	feed->ShowDialog();
}
};
}

#pragma once
#include "container.h"

namespace CarRen {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EstimationF
	/// </summary>
	public ref class EstimationF : public System::Windows::Forms::Form
	{
	public:
		EstimationF(void)
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
		~EstimationF()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  Price;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txt_days;
	private: System::Windows::Forms::Button^  btn_UpdatCar;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EstimationF::typeid));
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->Price = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_days = (gcnew System::Windows::Forms::TextBox());
			this->btn_UpdatCar = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(998, 22);
			this->flowLayoutPanel1->TabIndex = 26;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(980, 22);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(18, 528);
			this->panel3->TabIndex = 27;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 22);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(16, 528);
			this->panel2->TabIndex = 28;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel7->Location = System::Drawing::Point(16, 532);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(964, 18);
			this->panel7->TabIndex = 29;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Location = System::Drawing::Point(106, 22);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(168, 164);
			this->panel1->TabIndex = 30;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(5, 7);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(152, 139);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &EstimationF::pictureBox2_Click);
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
			this->listView1->Location = System::Drawing::Point(22, 270);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(952, 244);
			this->listView1->TabIndex = 31;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(318, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(354, 23);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Please Enter number of your booking days :)";
			// 
			// txt_days
			// 
			this->txt_days->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txt_days->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14.25F, System::Drawing::FontStyle::Bold));
			this->txt_days->Location = System::Drawing::Point(440, 139);
			this->txt_days->Name = L"txt_days";
			this->txt_days->Size = System::Drawing::Size(517, 30);
			this->txt_days->TabIndex = 34;
			this->txt_days->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &EstimationF::txt_days_KeyPress);
			// 
			// btn_UpdatCar
			// 
			this->btn_UpdatCar->FlatAppearance->BorderSize = 0;
			this->btn_UpdatCar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_UpdatCar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic));
			this->btn_UpdatCar->ForeColor = System::Drawing::SystemColors::Desktop;
			this->btn_UpdatCar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_UpdatCar.Image")));
			this->btn_UpdatCar->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_UpdatCar->Location = System::Drawing::Point(739, 189);
			this->btn_UpdatCar->Name = L"btn_UpdatCar";
			this->btn_UpdatCar->Size = System::Drawing::Size(218, 64);
			this->btn_UpdatCar->TabIndex = 35;
			this->btn_UpdatCar->Text = L"Calculate";
			this->btn_UpdatCar->UseVisualStyleBackColor = true;
			this->btn_UpdatCar->Click += gcnew System::EventHandler(this, &EstimationF::btn_UpdatCar_Click);
			// 
			// EstimationF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(998, 550);
			this->Controls->Add(this->btn_UpdatCar);
			this->Controls->Add(this->txt_days);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"EstimationF";
			this->Text = L"EstimationF";
			this->TransparencyKey = System::Drawing::SystemColors::ActiveCaption;
			this->Load += gcnew System::EventHandler(this, &EstimationF::EstimationF_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &EstimationF::EstimationF_KeyPress);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		container ^ con_obj = gcnew container(); 

		void fill_listview() {
			listView1->Items->Clear();
			int c = 0;

			for (int i = 0; i < con_obj->Car_Cs->Cars->Count; i++) {
				listView1->Items->Add(con_obj->Car_Cs->Cars[i]->Car_ID);
				int price = Convert::ToInt32(con_obj->Car_Cs->Cars[i]->Car_Price)*Convert::ToInt32(txt_days->Text);
				String ^ p = Convert::ToString(price);
				listView1->Items[c]->SubItems->Add(p);
				listView1->Items[c]->SubItems->Add(con_obj->Car_Cs->Cars[i]->Car_Type);
				listView1->Items[c]->SubItems->Add(con_obj->Car_Cs->Cars[i]->Car_Model_Type);
				listView1->Items[c]->SubItems->Add(con_obj->Car_Cs->Cars[i]->Car_Model_Year);
				listView1->Items[c]->SubItems->Add(con_obj->Car_Cs->Cars[i]->Car_Color);
				c++;
			}


		}
	private: System::Void EstimationF_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {	}
private: System::Void EstimationF_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	
}
private: System::Void btn_UpdatCar_Click(System::Object^  sender, System::EventArgs^  e) {
	

	if (txt_days->Text == "" || txt_days->Text ->Length > 3)
	{
		MessageBox::Show("Invalid Information", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{
		con_obj->Car_Cs->Cars->Clear();
		listView1->Items->Clear();
		con_obj->Car_Cs->Load();
		fill_listview();
	}

}
private: System::Void txt_days_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
};
}

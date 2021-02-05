#pragma once
#include"rectangle.h"

namespace Project2 {
	rectangle ren1,ren2;
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
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;




	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;




	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;





	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;

	private: System::Windows::Forms::TextBox^  textBox19;

	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::Button^  button9;



	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::TextBox^  textBox27;





	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(61, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"X";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(110, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(12, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"y";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(167, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"A";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(226, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"B";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(540, 11);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"B";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(484, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"A";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(431, 15);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(14, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Y";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(372, 19);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(14, 13);
			this->label8->TabIndex = 4;
			this->label8->Text = L"X";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(75, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(33, 20);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(128, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(33, 20);
			this->textBox2->TabIndex = 9;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(187, 12);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(33, 20);
			this->textBox3->TabIndex = 10;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(246, 12);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(33, 20);
			this->textBox4->TabIndex = 11;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(392, 12);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(33, 20);
			this->textBox5->TabIndex = 12;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(445, 11);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(33, 20);
			this->textBox6->TabIndex = 13;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(504, 8);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(33, 20);
			this->textBox7->TabIndex = 14;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(560, 8);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(33, 20);
			this->textBox8->TabIndex = 15;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(64, 70);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 24);
			this->button1->TabIndex = 16;
			this->button1->Text = L"=";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(64, 92);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 24);
			this->button2->TabIndex = 17;
			this->button2->Text = L"=";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(64, 112);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 24);
			this->button3->TabIndex = 18;
			this->button3->Text = L"=";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(64, 131);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(107, 24);
			this->button4->TabIndex = 19;
			this->button4->Text = L"=";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(174, 70);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(335, 20);
			this->textBox9->TabIndex = 24;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(174, 95);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(335, 20);
			this->textBox10->TabIndex = 25;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(174, 115);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(335, 20);
			this->textBox11->TabIndex = 26;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox11_TextChanged);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(174, 135);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(335, 20);
			this->textBox12->TabIndex = 27;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(23, 76);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(14, 13);
			this->label9->TabIndex = 32;
			this->label9->Text = L"S";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(23, 98);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(14, 13);
			this->label10->TabIndex = 33;
			this->label10->Text = L"P";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(23, 118);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(15, 13);
			this->label11->TabIndex = 34;
			this->label11->Text = L"R";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(-1, 142);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 13);
			this->label12->TabIndex = 35;
			this->label12->Text = L"Check kvad";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(173, 214);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(336, 20);
			this->textBox17->TabIndex = 41;
			this->textBox17->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox17_TextChanged);
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(173, 240);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(336, 20);
			this->textBox18->TabIndex = 43;
			this->textBox18->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox18_TextChanged);
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(173, 274);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(336, 20);
			this->textBox19->TabIndex = 45;
			this->textBox19->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox19_TextChanged);
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(398, 304);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(80, 20);
			this->textBox20->TabIndex = 53;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(315, 304);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(67, 20);
			this->textBox21->TabIndex = 52;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(246, 304);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(61, 20);
			this->textBox22->TabIndex = 51;
			this->textBox22->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox22_TextChanged);
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(177, 304);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(53, 20);
			this->textBox23->TabIndex = 50;
			this->textBox23->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox23_TextChanged);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(428, 330);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(13, 13);
			this->label20->TabIndex = 49;
			this->label20->Text = L"b";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(312, 330);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(13, 13);
			this->label21->TabIndex = 48;
			this->label21->Text = L"a";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(243, 330);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(12, 13);
			this->label22->TabIndex = 47;
			this->label22->Text = L"y";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(177, 330);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(12, 13);
			this->label23->TabIndex = 46;
			this->label23->Text = L"x";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(-4, 164);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(68, 13);
			this->label24->TabIndex = 56;
			this->label24->Text = L"XY CENTER";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(174, 158);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(161, 20);
			this->textBox24->TabIndex = 55;
			this->textBox24->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox24_TextChanged);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(64, 153);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(107, 24);
			this->button9->TabIndex = 54;
			this->button9->Text = L"=";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(64, 183);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(107, 24);
			this->button11->TabIndex = 60;
			this->button11->Text = L"MUlt";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(174, 183);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(335, 20);
			this->textBox26->TabIndex = 61;
			this->textBox26->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox26_TextChanged);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(64, 213);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(107, 24);
			this->button12->TabIndex = 62;
			this->button12->Text = L"Ravensvo";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(64, 236);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(107, 24);
			this->button13->TabIndex = 63;
			this->button13->Text = L"Pot";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(341, 157);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(168, 20);
			this->textBox27->TabIndex = 64;
			this->textBox27->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox27_TextChanged);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(64, 270);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(107, 24);
			this->button14->TabIndex = 70;
			this->button14->Text = L"Persech";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(64, 300);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(107, 24);
			this->button15->TabIndex = 71;
			this->button15->Text = L"Persech prym";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button16->Location = System::Drawing::Point(-1, 350);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(594, 36);
			this->button16->TabIndex = 72;
			this->button16->Text = L"Refresh";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(12, 15);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(28, 13);
			this->label13->TabIndex = 73;
			this->label13->Text = L"ren1";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(338, 18);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(28, 13);
			this->label14->TabIndex = 74;
			this->label14->Text = L"ren2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(592, 384);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 double s;
				 if (ren1.a==0 && ren1.b==0) MessageBox::Show("This is line");
				 else {s=ren1.S();
				 textBox9->Text=System::Convert::ToString(s);}
				 
			 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 double s;
			 if (textBox1->Text=="") ren1.x=0;
			 else {s=System::Convert::ToDouble(textBox1->Text);
			 ren1.x=s;}
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 double s;
			 if (textBox2->Text=="") ren1.y=0;
			 else {s=System::Convert::ToDouble(textBox2->Text);
			 ren1.y=s;}
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			double s;
			 if (textBox3->Text=="") ren1.a=0;
			 else {s=System::Convert::ToDouble(textBox3->Text);
			 ren1.a=s;}
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {double s;
			 if (textBox4->Text=="") ren1.b=0;
			 else {s=System::Convert::ToDouble(textBox4->Text);
			 ren1.b=s;}
		 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {double s;
			 if (textBox5->Text=="") ren2.x=0;
			 else {s=System::Convert::ToDouble(textBox5->Text);
			 ren2.x=s;}
		 }
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {double s;
			 if (textBox6->Text=="") ren2.y=0;
			 else {s=System::Convert::ToDouble(textBox6->Text);
			 ren2.y=s;}
		 }
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {double s;
			 if (textBox7->Text=="") ren2.a=0;
			 else {s=System::Convert::ToDouble(textBox7->Text);
			 ren2.a=s;}
		 }
private: System::Void textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) { double s;
			 if (textBox8->Text=="") ren2.b=0;
			 else {s=System::Convert::ToDouble(textBox8->Text);
			 ren2.b=s;}
		 }
private: System::Void textBox16_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {double s;
		 if (ren1.a==0 || ren1.b==0) MessageBox::Show("This is line");
				 else {s=ren1.P();
				 textBox10->Text=System::Convert::ToString(s);}
		 }
private: System::Void textBox15_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {				
		 }
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {double s;
			 if (textBox8->Text=="") ren2.b=0;
			 else {s=System::Convert::ToDouble(textBox8->Text);
			 ren2.b=s;}
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {double s;
				 s=ren1.R();
				 textBox11->Text=System::Convert::ToString(s);
		 }
private: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 
		 }
private: System::Void textBox14_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (ren1.Kvad()==true) textBox12->Text="Yes";
			 else textBox12->Text="No";

		 }
private: System::Void textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 double s;
			 if (textBox26->Text=="") MessageBox::Show("Ведите число");
			 else {s=System::Convert::ToDouble(textBox26->Text);
			 ren1.Mult(s);
			 s=ren1.a;
			 textBox3->Text=System::Convert::ToString(s);
			 s=ren1.b;
			 textBox4->Text=System::Convert::ToString(s);}
		 }
private: System::Void textBox26_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (ren1.Rav(ren2)==true) textBox17->Text="yes";
			 else textBox17->Text="no";
		 }
private: System::Void textBox17_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
if (ren1.pot(ren2)==true)  textBox18->Text="Yes";
else  textBox18->Text="no";
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {rectangle a;
		 a.Center(ren1);
		 textBox24->Text=System::Convert::ToString(a.x);
		 textBox27->Text=System::Convert::ToString(a.y);
		 }
private: System::Void textBox24_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox27_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox18_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
if (ren1.persech(ren2)==true) textBox19->Text="YEs" ;
else 	textBox19->Text="No"	; }
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {textBox1->Text="";
textBox2->Text="";
textBox3->Text="";
textBox4->Text="";
textBox5->Text="";
textBox6->Text="";
textBox7->Text="";
textBox8->Text="";
textBox9->Text="";
textBox10->Text="";
textBox11->Text="";
textBox12->Text="";
textBox17->Text="";
textBox18->Text="";
textBox19->Text="";
textBox20->Text="";
textBox21->Text="";
textBox22->Text="";
textBox23->Text="";
textBox24->Text="";
textBox27->Text="";
textBox26->Text="";
		 }
private: System::Void textBox19_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (ren1.persech(ren2)==false) MessageBox::Show("This rectegle no ");
			 rectangle a;
			 a.kek(ren1,ren2);
			 textBox23->Text=System::Convert::ToString(a.x);
textBox22->Text=System::Convert::ToString(a.y);
textBox21->Text=System::Convert::ToString(a.a);
textBox20->Text=System::Convert::ToString(a.b);

		 }
private: System::Void textBox23_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox22_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

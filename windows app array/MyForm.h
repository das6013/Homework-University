#pragma once
#include "Header.h"
#include <iostream>
#include<ctime>
namespace Massive {
	int y,b,c,d;
	Arraya q(1000);
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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label5;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(75, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Создать";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(67, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Добавить";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Удалить позицию";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 104);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Удалить элемент";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(131, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(95, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(131, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(95, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(131, 131);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(95, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(131, 98);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(95, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(424, 124);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(396, 20);
			this->textBox5->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(424, 91);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(396, 20);
			this->textBox6->TabIndex = 10;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(424, 62);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(396, 20);
			this->textBox7->TabIndex = 9;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(424, 32);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(396, 20);
			this->textBox8->TabIndex = 8;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(424, 159);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(396, 20);
			this->textBox9->TabIndex = 12;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(231, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 33);
			this->button1->TabIndex = 13;
			this->button1->Text = L"результат";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(231, 58);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(187, 33);
			this->button2->TabIndex = 14;
			this->button2->Text = L"результат";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(231, 91);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(187, 33);
			this->button3->TabIndex = 15;
			this->button3->Text = L"результат";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(231, 177);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(187, 33);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Очистить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(231, 152);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(187, 33);
			this->button5->TabIndex = 17;
			this->button5->Text = L"результат";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(231, 124);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(187, 33);
			this->button6->TabIndex = 16;
			this->button6->Text = L"результат";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(158, 162);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 13);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Сортировка";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(822, 215);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
if (textBox1->Text=="")	y=0;	
else y=System::Int32::Parse(textBox1->Text);
			 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox2->Text=="")	b=0;
			 else b=System::Int32::Parse(textBox2->Text);
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox3->Text=="")	d=0;
			 else d=System::Int32::Parse(textBox3->Text);
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox4->Text=="")	c=0;
			 else c=System::Int32::Parse(textBox4->Text);
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 
			 for (int i=0;i<y;i++)
			 {q.a[i]=rand()%100;
			 textBox8->Text += Convert::ToString(q.a[i])+" ";}
			 q.n=y;
			 
			  
		 }
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { 
			  q+=b;
			  for (int i=0;i<q.n;i++)
				   textBox7->Text += Convert::ToString(q[i])+" ";
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 q-=c;
			 for (int i=0;i<q.n;i++)
				   textBox6->Text += Convert::ToString(q[i]+" ");
		 }
		 private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
					  q.DelPosEq(d);
					  for (int i=0;i<q.n;i++)
				   textBox5->Text += Convert::ToString(q[i]+" ");
				  }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 q.Sorting();
			 for (int i=0;i<q.n;i++)
				   textBox9->Text += Convert::ToString(q[i]+" ");
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text="";
			 textBox2->Text="";
			 textBox3->Text="";
			 textBox4->Text="";
			 textBox5->Text="";
			 textBox6->Text="";
			 textBox7->Text="";
			 textBox8->Text="";
			 textBox9->Text="";
		 }
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
}
 ;
					  }

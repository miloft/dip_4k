#pragma once
#include "genkey.h"
#include <cmath>
#include <cstdlib>
#include <ctime>

#include <cstring>

namespace CppWinForm1 {

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
		int* AString = new int[200];
		char* ABasis = new char[200];
		char* APhoton = new char[200];
		int* EString = new int[200];
		char* EBasis = new char[200];
		char* EPhoton = new char[200];
		int* BString = new int[200];
		int* newBString = new int[200];
		int* newEString = new int[200];
		int* Key = new int[200];
		int g = 0, h = 0, q = 0;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;





	public:
		char* BBasis = new char[200];
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
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::ProgressBar^  progressBar2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button11;

	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(12, 141);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Генерация строки";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 202);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Генерация базисов";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(12, 298);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Передать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(12, 327);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 34);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Сообщить о корректности";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(331, 141);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(206, 45);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Вмешаться";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(331, 202);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(125, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Генерация базисов";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Enabled = false;
			this->button7->Location = System::Drawing::Point(331, 298);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(137, 23);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Отбросить посылки";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Enabled = false;
			this->button8->Location = System::Drawing::Point(331, 333);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Измерение";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(647, 141);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(124, 23);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Генерация базисов";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Enabled = false;
			this->button10->Location = System::Drawing::Point(647, 265);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(140, 23);
			this->button10->TabIndex = 9;
			this->button10->Text = L"Сообщить о базисах";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 170);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(310, 20);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 231);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(310, 20);
			this->textBox2->TabIndex = 11;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(138, 377);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(83, 20);
			this->textBox3->TabIndex = 12;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(331, 231);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(310, 20);
			this->textBox4->TabIndex = 13;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(331, 377);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(310, 20);
			this->textBox5->TabIndex = 14;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(647, 166);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(310, 20);
			this->textBox6->TabIndex = 15;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(647, 231);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(310, 20);
			this->textBox7->TabIndex = 16;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(647, 377);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(310, 20);
			this->textBox8->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(444, 358);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Ключ Евы";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(644, 212);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Строка";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(749, 358);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Ключ Алисы и Боба";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 25);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(945, 23);
			this->progressBar1->TabIndex = 21;
			this->progressBar1->Click += gcnew System::EventHandler(this, &MyForm::progressBar1_Click);
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(12, 420);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(945, 23);
			this->progressBar2->TabIndex = 22;
			this->progressBar2->Click += gcnew System::EventHandler(this, &MyForm::progressBar2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(408, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 13);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Квантовый канал связи";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(408, 404);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 13);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Классический канал связи";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(12, 81);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 25;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 62);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 13);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Длина строки";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(963, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 13);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Журнал событий";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(155, 122);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(38, 13);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Алиса";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(460, 122);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(26, 13);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Ева";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(797, 122);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(26, 13);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Боб";
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button11->Location = System::Drawing::Point(158, 62);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(92, 39);
			this->button11->TabIndex = 33;
			this->button11->Text = L"Старт";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(963, 25);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox9->Size = System::Drawing::Size(327, 418);
			this->textBox9->TabIndex = 34;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button12->Location = System::Drawing::Point(256, 62);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(92, 39);
			this->button12->TabIndex = 35;
			this->button12->Text = L"Начать заново";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(644, 298);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(108, 13);
			this->label11->TabIndex = 37;
			this->label11->Text = L"Оставшаяся строка";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(647, 317);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(310, 20);
			this->textBox10->TabIndex = 36;
			// 
			// button13
			// 
			this->button13->Enabled = false;
			this->button13->Location = System::Drawing::Point(12, 367);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(117, 39);
			this->button13->TabIndex = 38;
			this->button13->Text = L"Сравнение и вычисление ошибки";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(12, 272);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(310, 20);
			this->textBox11->TabIndex = 39;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(331, 272);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(310, 20);
			this->textBox12->TabIndex = 40;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(135, 254);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(85, 13);
			this->label12->TabIndex = 41;
			this->label12->Text = L"Фотоны Алисы";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(444, 254);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(73, 13);
			this->label13->TabIndex = 42;
			this->label13->Text = L"Фотоны Евы";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1297, 466);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Моделирование атаки на протокол BB84";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		srand(time(NULL));
	}
	private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void progressBar2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
			 //Старт
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) 
{
	numericUpDown1->Enabled = false;
	button1->Enabled = true;
}
		 //Генерация строки Алисы
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	const int n = Convert::ToInt32(numericUpDown1->Value);
	textBox1->Clear();
	AliceString(n, AString);
	for (int i = 0; i < n; i++) {
		textBox1->Text += Convert::ToString(AString[i]);
	}
	textBox9->Text = "Алиса сгенерировала строку";

}
		 //Генерация базисов Алисы
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Clear();
	const int n = Convert::ToInt32(numericUpDown1->Value);
	AliceBasis(n, ABasis);
	for (int i = 0; i < n; i++) {
		textBox2->Text += Convert::ToChar(ABasis[i]);
	}
	textBox9->Text += Environment::NewLine+ "Алиса сгенерировала базис";
}
		 //Генерация базисов Евы
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox4->Clear();
	const int n = Convert::ToInt32(numericUpDown1->Value);
	EveBasis(n, EBasis);
	for (int i = 0; i < n; i++) {
		textBox4->Text += Convert::ToChar(EBasis[i]);
	}
	textBox9->Text += Environment::NewLine + "Ева сгенерировала базис";
}
		 //Генерация базисов Боба
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox6->Clear();
	const int n = Convert::ToInt32(numericUpDown1->Value);
	BobBasis(n, BBasis);
	for (int i = 0; i < n; i++) {
		textBox6->Text += Convert::ToChar(BBasis[i]);
	}
	button3->Enabled = true;
	textBox9->Text += Environment::NewLine + "Боб сгенерировал базис";
}
		 //Передача фотонов Бобу
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	progressBar1->Value = 0; //обнуление прогресбара
	button5->Enabled = true;
	button1->Enabled = false;
	button2->Enabled = false;
	button6->Enabled = false;
	button9->Enabled = false;
	progressBar1->Value = 50;
	textBox9->Text += Environment::NewLine + "Отправляем фотоны...";
	textBox9->Text += Environment::NewLine + "В канале появилась Ева!";
}
		 //Строка Боба
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	const int n = Convert::ToInt32(numericUpDown1->Value);
	AlicePhoton(n, BString, AString, ABasis, APhoton, EBasis, EString, EPhoton, BBasis);
	for (int i = 0; i < n; i++) {
		textBox11->Text += Convert::ToChar(APhoton[i]);
		textBox12->Text += Convert::ToChar(EPhoton[i]); }
	for (int i = 0; i < n; i++) {
		textBox7->Text += Convert::ToString(BString[i]);
	}
	button10->Enabled = true;
	textBox9->Text += Environment::NewLine + "Боб измеряет свои фотоны";
	progressBar1->Value = 100; // выполнение прогресбара
}
		 //Cообщить о базисах
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	progressBar2->Value = 0; //обнуление прогресбара
	button4->Enabled = true;
	progressBar2->Value = 100; // выполнение прогресбара
	textBox9->Text += Environment::NewLine + "Согласование базисов";
}
		 //Новая строка Боба
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	progressBar2->Value = 0; //обнуление прогресбара
	const int n = Convert::ToInt32(numericUpDown1->Value);
	button13->Enabled = true;
	int k = 0, check = 0, l = 0, t = 0;
	Checking(n, ABasis, BBasis, BString, newBString, 
		AString, k, check, EBasis, EString, newEString, 
		l, t, Key);
	for (int i = 0; i < k; i++) {
		textBox10->Text += Convert::ToString(newBString[i]);
	}
	g = check;
	h = l;
	q = t;
	textBox9->Text += Environment::NewLine + "Боб извлекает информацию после согласования базисов";
	progressBar2->Value = 100; // выполнение прогресбара
}
		 //Вычисление ошибки
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	progressBar2->Value = 0; //обнуление прогресбара
	button7->Enabled = true;
	const int n = Convert::ToInt32(numericUpDown1->Value);
	textBox9->Text += Environment::NewLine + "Выполняется подсчет ошибки... Готово.";
	int er = floor(100 * g / n);
	textBox3->Text = Convert::ToString(er)+ "%";
	for (int i = 0; i < q; i++) {
		textBox8->Text += Convert::ToString(Key[i]);
	}
	textBox9->Text += Environment::NewLine + "Получение секретного ключа";
	progressBar2->Value = 100; //обнуление прогресбара
}
		 //Измерение
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < h; i++) {
		textBox5->Text += Convert::ToString(newEString[i]);
	}
	textBox9->Text += Environment::NewLine + "Ева производит измерения над своим состоянием";
}
		//Отбросить посылки
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
{
	button8->Enabled = true;
	textBox9->Text += Environment::NewLine + "Исключение согласованных по общему каналу битов";
}

		 //Откатить форму
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	numericUpDown1->Enabled = true;
	button1->Enabled = false;
	button3->Enabled = false;
	button4->Enabled = false;
	button5->Enabled = false;
	button7->Enabled = false;
	button8->Enabled = false;
	button10->Enabled = false;
	button13->Enabled = false;
	button1->Enabled = true;
	button2->Enabled = true;
	button6->Enabled = true;
	button9->Enabled = true;
	progressBar1->Value = 0;
	progressBar2->Value = 0;
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
	textBox4->Clear();
	textBox5->Clear();
	textBox6->Clear();
	textBox7->Clear();
	textBox8->Clear();
	textBox9->Clear();
	textBox10->Clear();
	textBox11->Clear();
	textBox12->Clear();
}
};
}

#pragma once
#include "fun.h"

namespace Speaking_cal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		int op1,op2,operand;
		double result;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	public: 






	public: 
	private: System::Windows::Forms::TextBox^  textBox1;
	public: 

	public:
			 Form1(void)
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
		~Form1()
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



	private: System::Windows::Forms::Label^  label1;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(165, 126);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Live train";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(17, 187);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(291, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Live test";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(207, 275);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 35);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Train";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(98, 245);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 15);
			this->label1->TabIndex = 6;
			this->label1->Text = L"For Offline recorded file";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Highlight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(296, 96);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(17, 275);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 35);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click_1);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(12, 126);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(136, 34);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Live record for train";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(321, 341);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Voice calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 Train();
				 textBox1->Text+="Trained... "+"\r\n";
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 //textBox1->Text+="Speak first digit "+"\r\n";
				 textBox1->Clear();
				 op1=LiveTesting();
				 textBox1->Text+="Spoken word is "+System::Convert::ToString(op1)+"\r\n";
				 operand=LiveTestingOP();
				 if(operand==10){
					 textBox1->Text+="Spoken word is "+"Plus(+)"+"\r\n";
				 }
				 else if(operand==11){
					 textBox1->Text+="Spoken word is "+"Minus(-)"+"\r\n";
				 }
				 else if(operand==12){
					 textBox1->Text+="Spoken word is "+"Devided(/)"+"\r\n";
				 }
				 else if(operand==13){
					 textBox1->Text+="Spoken word is "+"Multiply(x)"+"\r\n";
				 }
				 op2=LiveTesting();
				 textBox1->Text+="Spoken word is "+System::Convert::ToString(op2)+"\r\n";
				 if(operand==10){
					 result=op1+op2;
					 textBox1->Text+="Result is "+System::Convert::ToString(result)+"\r\n";
				 }
				 else if(operand==11){
					 result=op1-op2;
					 textBox1->Text+="Result is "+System::Convert::ToString(result)+"\r\n";
				 }
				 else if(operand==12){
					 if(op2==0){
						 textBox1->Text+="Can't devided by zero"+"\r\n";
					 }
					 else{
						 result=(double)op1/op2;
						 textBox1->Text+="Result is "+result.ToString()+"\r\n";
					 }
				 }
				 if(operand==13){
					 result=op1*op2;
					 textBox1->Text+="Result is "+System::Convert::ToString(result)+"\r\n";
				 }
			 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 operand=LiveTesting();
				 textBox1->Text+="Spoken word is "+System::Convert::ToString(op1)+"\r\n";
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 op2=LiveTesting();
			 textBox1->Text+="Spoken word is "+System::Convert::ToString(op1)+"\r\n";
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 LiveTrain();
		 }
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void button5_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 LiveRecord();
		 }
};
}


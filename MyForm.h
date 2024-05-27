#pragma once
#include "deque.h"
#include "Polynom.h"


namespace Lab10 {

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::TabPage^ floatPage;
	private: System::Windows::Forms::Label^ f_resultLabel;




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ f_scalar_tb;

	private: System::Windows::Forms::Button^ f_productBy_btn;

	private: System::Windows::Forms::Button^ f_substractDeque_btn;

	private: System::Windows::Forms::Button^ f_addDeque_btn;
	private: System::Windows::Forms::RadioButton^ f_secondDeque_rb;


	private: System::Windows::Forms::Label^ f_secondDequeLabel;
	private: System::Windows::Forms::RadioButton^ f_firstDeque_rb;


	private: System::Windows::Forms::Button^ f_dequeClear_btn;
	private: System::Windows::Forms::Button^ f_dequeAvg_btn;


	private: System::Windows::Forms::Button^ f_countElem_btn;

	private: System::Windows::Forms::Button^ f_deleteAtRight_btn;

	private: System::Windows::Forms::Button^ f_deleteAtLeft_btn;

	private: System::Windows::Forms::Button^ f_addAtRight_btn;

	private: System::Windows::Forms::Button^ f_addAtLeft_btn;

	private: System::Windows::Forms::TextBox^ f_newVal_textBox;

	private: System::Windows::Forms::Label^ f_firstDequeLabel;

	private: System::Windows::Forms::TabPage^ boolPage;
	private: System::Windows::Forms::Label^ b_resultLabel;






	private: System::Windows::Forms::Label^ label2;




	private: System::Windows::Forms::Button^ b_subtractDeque_btn;

	private: System::Windows::Forms::Button^ b_addDeque_btn;
	private: System::Windows::Forms::RadioButton^ b_secondDeque_rb;


	private: System::Windows::Forms::Label^ b_secondDequeLabel;
	private: System::Windows::Forms::RadioButton^ b_firstDeque_rb;


	private: System::Windows::Forms::Button^ b_clean_btn;



	private: System::Windows::Forms::Button^ b_Size_btn;

	private: System::Windows::Forms::Button^ b_deleteRight_btn;

	private: System::Windows::Forms::Button^ b_deleteLeft_btn;

	private: System::Windows::Forms::Button^ b_addRight_btn;

	private: System::Windows::Forms::Button^ b_addLeft_btn;

	private: System::Windows::Forms::TextBox^ b_newVal_txtbox;

	private: System::Windows::Forms::Label^ b_firstDequeLabel;

	private: System::Windows::Forms::TabPage^ polynomPage;
private: System::Windows::Forms::Label^ p_resultLabel;





	private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ p_scalar_txtbox;

private: System::Windows::Forms::Button^ p_multiply_btn;
private: System::Windows::Forms::Button^ p_subtractDeque_btn;


private: System::Windows::Forms::Button^ p_addDeque_btn;
private: System::Windows::Forms::RadioButton^ p_secondDeque_rb;


private: System::Windows::Forms::Label^ p_secondDequeLabel;
private: System::Windows::Forms::RadioButton^ p_firstDeque_rb;


private: System::Windows::Forms::Button^ p_clean_btn;



private: System::Windows::Forms::Button^ p_Size_btn;

private: System::Windows::Forms::Button^ p_deleteRight_btn;

private: System::Windows::Forms::Button^ p_deleteLeft_btn;

private: System::Windows::Forms::Button^ p_addRight_btn;

private: System::Windows::Forms::Button^ p_addLeft_btn;

private: System::Windows::Forms::TextBox^ p_newVal_txtbox;
private: System::Windows::Forms::Label^ p_firstDequeLabel;
private: System::Windows::Forms::TextBox^ f_elemToFind_txtbox;
private: System::Windows::Forms::Button^ f_FindElem_btn;


private: System::Windows::Forms::Button^ p_avg_btn;
private: System::Windows::Forms::TextBox^ p_elemToFind_txtbox;
private: System::Windows::Forms::Button^ p_findElem_btn;





	protected:


































	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->floatPage = (gcnew System::Windows::Forms::TabPage());
			this->f_elemToFind_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->f_FindElem_btn = (gcnew System::Windows::Forms::Button());
			this->f_resultLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->f_scalar_tb = (gcnew System::Windows::Forms::TextBox());
			this->f_productBy_btn = (gcnew System::Windows::Forms::Button());
			this->f_substractDeque_btn = (gcnew System::Windows::Forms::Button());
			this->f_addDeque_btn = (gcnew System::Windows::Forms::Button());
			this->f_secondDeque_rb = (gcnew System::Windows::Forms::RadioButton());
			this->f_secondDequeLabel = (gcnew System::Windows::Forms::Label());
			this->f_firstDeque_rb = (gcnew System::Windows::Forms::RadioButton());
			this->f_dequeClear_btn = (gcnew System::Windows::Forms::Button());
			this->f_dequeAvg_btn = (gcnew System::Windows::Forms::Button());
			this->f_countElem_btn = (gcnew System::Windows::Forms::Button());
			this->f_deleteAtRight_btn = (gcnew System::Windows::Forms::Button());
			this->f_deleteAtLeft_btn = (gcnew System::Windows::Forms::Button());
			this->f_addAtRight_btn = (gcnew System::Windows::Forms::Button());
			this->f_addAtLeft_btn = (gcnew System::Windows::Forms::Button());
			this->f_newVal_textBox = (gcnew System::Windows::Forms::TextBox());
			this->f_firstDequeLabel = (gcnew System::Windows::Forms::Label());
			this->boolPage = (gcnew System::Windows::Forms::TabPage());
			this->b_resultLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->b_subtractDeque_btn = (gcnew System::Windows::Forms::Button());
			this->b_addDeque_btn = (gcnew System::Windows::Forms::Button());
			this->b_secondDeque_rb = (gcnew System::Windows::Forms::RadioButton());
			this->b_secondDequeLabel = (gcnew System::Windows::Forms::Label());
			this->b_firstDeque_rb = (gcnew System::Windows::Forms::RadioButton());
			this->b_clean_btn = (gcnew System::Windows::Forms::Button());
			this->b_Size_btn = (gcnew System::Windows::Forms::Button());
			this->b_deleteRight_btn = (gcnew System::Windows::Forms::Button());
			this->b_deleteLeft_btn = (gcnew System::Windows::Forms::Button());
			this->b_addRight_btn = (gcnew System::Windows::Forms::Button());
			this->b_addLeft_btn = (gcnew System::Windows::Forms::Button());
			this->b_newVal_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->b_firstDequeLabel = (gcnew System::Windows::Forms::Label());
			this->polynomPage = (gcnew System::Windows::Forms::TabPage());
			this->p_resultLabel = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->p_scalar_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->p_multiply_btn = (gcnew System::Windows::Forms::Button());
			this->p_subtractDeque_btn = (gcnew System::Windows::Forms::Button());
			this->p_addDeque_btn = (gcnew System::Windows::Forms::Button());
			this->p_secondDeque_rb = (gcnew System::Windows::Forms::RadioButton());
			this->p_secondDequeLabel = (gcnew System::Windows::Forms::Label());
			this->p_firstDeque_rb = (gcnew System::Windows::Forms::RadioButton());
			this->p_clean_btn = (gcnew System::Windows::Forms::Button());
			this->p_avg_btn = (gcnew System::Windows::Forms::Button());
			this->p_Size_btn = (gcnew System::Windows::Forms::Button());
			this->p_deleteRight_btn = (gcnew System::Windows::Forms::Button());
			this->p_deleteLeft_btn = (gcnew System::Windows::Forms::Button());
			this->p_addRight_btn = (gcnew System::Windows::Forms::Button());
			this->p_addLeft_btn = (gcnew System::Windows::Forms::Button());
			this->p_newVal_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->p_firstDequeLabel = (gcnew System::Windows::Forms::Label());
			this->p_elemToFind_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->p_findElem_btn = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->floatPage->SuspendLayout();
			this->boolPage->SuspendLayout();
			this->polynomPage->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->floatPage);
			this->tabControl1->Controls->Add(this->boolPage);
			this->tabControl1->Controls->Add(this->polynomPage);
			this->tabControl1->Location = System::Drawing::Point(-1, -2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(435, 432);
			this->tabControl1->TabIndex = 0;
			// 
			// floatPage
			// 
			this->floatPage->BackColor = System::Drawing::Color::LightSlateGray;
			this->floatPage->Controls->Add(this->f_elemToFind_txtbox);
			this->floatPage->Controls->Add(this->f_FindElem_btn);
			this->floatPage->Controls->Add(this->f_resultLabel);
			this->floatPage->Controls->Add(this->label4);
			this->floatPage->Controls->Add(this->f_scalar_tb);
			this->floatPage->Controls->Add(this->f_productBy_btn);
			this->floatPage->Controls->Add(this->f_substractDeque_btn);
			this->floatPage->Controls->Add(this->f_addDeque_btn);
			this->floatPage->Controls->Add(this->f_secondDeque_rb);
			this->floatPage->Controls->Add(this->f_secondDequeLabel);
			this->floatPage->Controls->Add(this->f_firstDeque_rb);
			this->floatPage->Controls->Add(this->f_dequeClear_btn);
			this->floatPage->Controls->Add(this->f_dequeAvg_btn);
			this->floatPage->Controls->Add(this->f_countElem_btn);
			this->floatPage->Controls->Add(this->f_deleteAtRight_btn);
			this->floatPage->Controls->Add(this->f_deleteAtLeft_btn);
			this->floatPage->Controls->Add(this->f_addAtRight_btn);
			this->floatPage->Controls->Add(this->f_addAtLeft_btn);
			this->floatPage->Controls->Add(this->f_newVal_textBox);
			this->floatPage->Controls->Add(this->f_firstDequeLabel);
			this->floatPage->Location = System::Drawing::Point(4, 25);
			this->floatPage->Name = L"floatPage";
			this->floatPage->Padding = System::Windows::Forms::Padding(3);
			this->floatPage->Size = System::Drawing::Size(427, 403);
			this->floatPage->TabIndex = 0;
			this->floatPage->Text = L"float";
			// 
			// f_elemToFind_txtbox
			// 
			this->f_elemToFind_txtbox->Location = System::Drawing::Point(148, 344);
			this->f_elemToFind_txtbox->Name = L"f_elemToFind_txtbox";
			this->f_elemToFind_txtbox->Size = System::Drawing::Size(39, 22);
			this->f_elemToFind_txtbox->TabIndex = 42;
			// 
			// f_FindElem_btn
			// 
			this->f_FindElem_btn->AutoSize = true;
			this->f_FindElem_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->f_FindElem_btn->Location = System::Drawing::Point(14, 339);
			this->f_FindElem_btn->Name = L"f_FindElem_btn";
			this->f_FindElem_btn->Size = System::Drawing::Size(119, 30);
			this->f_FindElem_btn->TabIndex = 41;
			this->f_FindElem_btn->Text = L"Find in deque";
			this->f_FindElem_btn->UseVisualStyleBackColor = true;
			this->f_FindElem_btn->Click += gcnew System::EventHandler(this, &MyForm::f_FindElem_btn_Click);
			// 
			// f_resultLabel
			// 
			this->f_resultLabel->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->f_resultLabel->Location = System::Drawing::Point(82, 96);
			this->f_resultLabel->Name = L"f_resultLabel";
			this->f_resultLabel->Size = System::Drawing::Size(212, 29);
			this->f_resultLabel->TabIndex = 40;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(9, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 29);
			this->label4->TabIndex = 39;
			this->label4->Text = L"Res";
			// 
			// f_scalar_tb
			// 
			this->f_scalar_tb->Location = System::Drawing::Point(324, 239);
			this->f_scalar_tb->Name = L"f_scalar_tb";
			this->f_scalar_tb->Size = System::Drawing::Size(39, 22);
			this->f_scalar_tb->TabIndex = 38;
			// 
			// f_productBy_btn
			// 
			this->f_productBy_btn->AutoSize = true;
			this->f_productBy_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->f_productBy_btn->Location = System::Drawing::Point(242, 231);
			this->f_productBy_btn->Name = L"f_productBy_btn";
			this->f_productBy_btn->Size = System::Drawing::Size(76, 30);
			this->f_productBy_btn->TabIndex = 37;
			this->f_productBy_btn->Text = L"Multiply";
			this->f_productBy_btn->UseVisualStyleBackColor = true;
			this->f_productBy_btn->Click += gcnew System::EventHandler(this, &MyForm::f_productBy_btn_Click);
			// 
			// f_substractDeque_btn
			// 
			this->f_substractDeque_btn->AutoSize = true;
			this->f_substractDeque_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->f_substractDeque_btn->Location = System::Drawing::Point(300, 53);
			this->f_substractDeque_btn->Name = L"f_substractDeque_btn";
			this->f_substractDeque_btn->Size = System::Drawing::Size(82, 30);
			this->f_substractDeque_btn->TabIndex = 36;
			this->f_substractDeque_btn->Text = L"Subtract";
			this->f_substractDeque_btn->UseVisualStyleBackColor = true;
			this->f_substractDeque_btn->Click += gcnew System::EventHandler(this, &MyForm::f_substractDeque_btn_Click);
			// 
			// f_addDeque_btn
			// 
			this->f_addDeque_btn->AutoSize = true;
			this->f_addDeque_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->f_addDeque_btn->Location = System::Drawing::Point(300, 12);
			this->f_addDeque_btn->Name = L"f_addDeque_btn";
			this->f_addDeque_btn->Size = System::Drawing::Size(48, 30);
			this->f_addDeque_btn->TabIndex = 35;
			this->f_addDeque_btn->Text = L"Add";
			this->f_addDeque_btn->UseVisualStyleBackColor = true;
			this->f_addDeque_btn->Click += gcnew System::EventHandler(this, &MyForm::f_addDeque_btn_Click);
			// 
			// f_secondDeque_rb
			// 
			this->f_secondDeque_rb->AutoSize = true;
			this->f_secondDeque_rb->Location = System::Drawing::Point(50, 61);
			this->f_secondDeque_rb->Name = L"f_secondDeque_rb";
			this->f_secondDeque_rb->Size = System::Drawing::Size(17, 16);
			this->f_secondDeque_rb->TabIndex = 34;
			this->f_secondDeque_rb->TabStop = true;
			this->f_secondDeque_rb->UseVisualStyleBackColor = true;
			this->f_secondDeque_rb->CheckedChanged += gcnew System::EventHandler(this, &MyForm::OnFloatChangeCheck);
			// 
			// f_secondDequeLabel
			// 
			this->f_secondDequeLabel->BackColor = System::Drawing::Color::LightSteelBlue;
			this->f_secondDequeLabel->Location = System::Drawing::Point(82, 54);
			this->f_secondDequeLabel->Name = L"f_secondDequeLabel";
			this->f_secondDequeLabel->Size = System::Drawing::Size(212, 29);
			this->f_secondDequeLabel->TabIndex = 33;
			// 
			// f_firstDeque_rb
			// 
			this->f_firstDeque_rb->AutoSize = true;
			this->f_firstDeque_rb->Location = System::Drawing::Point(50, 20);
			this->f_firstDeque_rb->Name = L"f_firstDeque_rb";
			this->f_firstDeque_rb->Size = System::Drawing::Size(17, 16);
			this->f_firstDeque_rb->TabIndex = 32;
			this->f_firstDeque_rb->TabStop = true;
			this->f_firstDeque_rb->UseVisualStyleBackColor = true;
			this->f_firstDeque_rb->CheckedChanged += gcnew System::EventHandler(this, &MyForm::OnFloatChangeCheck);
			// 
			// f_dequeClear_btn
			// 
			this->f_dequeClear_btn->AutoSize = true;
			this->f_dequeClear_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->f_dequeClear_btn->Location = System::Drawing::Point(243, 267);
			this->f_dequeClear_btn->Name = L"f_dequeClear_btn";
			this->f_dequeClear_btn->Size = System::Drawing::Size(62, 30);
			this->f_dequeClear_btn->TabIndex = 31;
			this->f_dequeClear_btn->Text = L"Clean";
			this->f_dequeClear_btn->UseVisualStyleBackColor = true;
			this->f_dequeClear_btn->Click += gcnew System::EventHandler(this, &MyForm::f_dequeClear_btn_Click);
			// 
			// f_dequeAvg_btn
			// 
			this->f_dequeAvg_btn->AutoSize = true;
			this->f_dequeAvg_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->f_dequeAvg_btn->Location = System::Drawing::Point(243, 303);
			this->f_dequeAvg_btn->Name = L"f_dequeAvg_btn";
			this->f_dequeAvg_btn->Size = System::Drawing::Size(51, 30);
			this->f_dequeAvg_btn->TabIndex = 30;
			this->f_dequeAvg_btn->Text = L"Avg";
			this->f_dequeAvg_btn->UseVisualStyleBackColor = true;
			this->f_dequeAvg_btn->Click += gcnew System::EventHandler(this, &MyForm::f_dequeAvg_btn_Click);
			// 
			// f_countElem_btn
			// 
			this->f_countElem_btn->AutoSize = true;
			this->f_countElem_btn->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->f_countElem_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->f_countElem_btn->Location = System::Drawing::Point(242, 195);
			this->f_countElem_btn->Name = L"f_countElem_btn";
			this->f_countElem_btn->Size = System::Drawing::Size(52, 30);
			this->f_countElem_btn->TabIndex = 29;
			this->f_countElem_btn->Text = L"Size";
			this->f_countElem_btn->UseVisualStyleBackColor = true;
			this->f_countElem_btn->Click += gcnew System::EventHandler(this, &MyForm::f_countElem_btn_Click);
			// 
			// f_deleteAtRight_btn
			// 
			this->f_deleteAtRight_btn->AutoSize = true;
			this->f_deleteAtRight_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->f_deleteAtRight_btn->Location = System::Drawing::Point(11, 303);
			this->f_deleteAtRight_btn->Name = L"f_deleteAtRight_btn";
			this->f_deleteAtRight_btn->Size = System::Drawing::Size(106, 30);
			this->f_deleteAtRight_btn->TabIndex = 28;
			this->f_deleteAtRight_btn->Text = L"Delete right";
			this->f_deleteAtRight_btn->UseVisualStyleBackColor = true;
			this->f_deleteAtRight_btn->Click += gcnew System::EventHandler(this, &MyForm::f_deleteAtRight_btn_Click);
			// 
			// f_deleteAtLeft_btn
			// 
			this->f_deleteAtLeft_btn->AutoSize = true;
			this->f_deleteAtLeft_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->f_deleteAtLeft_btn->Location = System::Drawing::Point(11, 267);
			this->f_deleteAtLeft_btn->Name = L"f_deleteAtLeft_btn";
			this->f_deleteAtLeft_btn->Size = System::Drawing::Size(96, 30);
			this->f_deleteAtLeft_btn->TabIndex = 27;
			this->f_deleteAtLeft_btn->Text = L"Delete left";
			this->f_deleteAtLeft_btn->UseVisualStyleBackColor = true;
			this->f_deleteAtLeft_btn->Click += gcnew System::EventHandler(this, &MyForm::f_deleteAtLeft_btn_Click);
			// 
			// f_addAtRight_btn
			// 
			this->f_addAtRight_btn->AutoSize = true;
			this->f_addAtRight_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->f_addAtRight_btn->Location = System::Drawing::Point(11, 231);
			this->f_addAtRight_btn->Name = L"f_addAtRight_btn";
			this->f_addAtRight_btn->Size = System::Drawing::Size(86, 30);
			this->f_addAtRight_btn->TabIndex = 26;
			this->f_addAtRight_btn->Text = L"Add right";
			this->f_addAtRight_btn->UseVisualStyleBackColor = true;
			this->f_addAtRight_btn->Click += gcnew System::EventHandler(this, &MyForm::f_addAtRight_btn_Click);
			// 
			// f_addAtLeft_btn
			// 
			this->f_addAtLeft_btn->AutoSize = true;
			this->f_addAtLeft_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->f_addAtLeft_btn->Location = System::Drawing::Point(11, 195);
			this->f_addAtLeft_btn->Name = L"f_addAtLeft_btn";
			this->f_addAtLeft_btn->Size = System::Drawing::Size(76, 30);
			this->f_addAtLeft_btn->TabIndex = 25;
			this->f_addAtLeft_btn->Text = L"Add left";
			this->f_addAtLeft_btn->UseVisualStyleBackColor = true;
			this->f_addAtLeft_btn->Click += gcnew System::EventHandler(this, &MyForm::f_addAtLeft_btn_Click);
			// 
			// f_newVal_textBox
			// 
			this->f_newVal_textBox->Location = System::Drawing::Point(115, 168);
			this->f_newVal_textBox->Name = L"f_newVal_textBox";
			this->f_newVal_textBox->Size = System::Drawing::Size(100, 22);
			this->f_newVal_textBox->TabIndex = 24;
			// 
			// f_firstDequeLabel
			// 
			this->f_firstDequeLabel->BackColor = System::Drawing::Color::LightSteelBlue;
			this->f_firstDequeLabel->Location = System::Drawing::Point(82, 12);
			this->f_firstDequeLabel->Name = L"f_firstDequeLabel";
			this->f_firstDequeLabel->Size = System::Drawing::Size(212, 29);
			this->f_firstDequeLabel->TabIndex = 23;
			// 
			// boolPage
			// 
			this->boolPage->BackColor = System::Drawing::Color::LightSlateGray;
			this->boolPage->Controls->Add(this->b_resultLabel);
			this->boolPage->Controls->Add(this->label2);
			this->boolPage->Controls->Add(this->b_subtractDeque_btn);
			this->boolPage->Controls->Add(this->b_addDeque_btn);
			this->boolPage->Controls->Add(this->b_secondDeque_rb);
			this->boolPage->Controls->Add(this->b_secondDequeLabel);
			this->boolPage->Controls->Add(this->b_firstDeque_rb);
			this->boolPage->Controls->Add(this->b_clean_btn);
			this->boolPage->Controls->Add(this->b_Size_btn);
			this->boolPage->Controls->Add(this->b_deleteRight_btn);
			this->boolPage->Controls->Add(this->b_deleteLeft_btn);
			this->boolPage->Controls->Add(this->b_addRight_btn);
			this->boolPage->Controls->Add(this->b_addLeft_btn);
			this->boolPage->Controls->Add(this->b_newVal_txtbox);
			this->boolPage->Controls->Add(this->b_firstDequeLabel);
			this->boolPage->Location = System::Drawing::Point(4, 25);
			this->boolPage->Name = L"boolPage";
			this->boolPage->Padding = System::Windows::Forms::Padding(3);
			this->boolPage->Size = System::Drawing::Size(427, 403);
			this->boolPage->TabIndex = 1;
			this->boolPage->Text = L"bool";
			// 
			// b_resultLabel
			// 
			this->b_resultLabel->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->b_resultLabel->Location = System::Drawing::Point(82, 96);
			this->b_resultLabel->Name = L"b_resultLabel";
			this->b_resultLabel->Size = System::Drawing::Size(212, 29);
			this->b_resultLabel->TabIndex = 40;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(11, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 29);
			this->label2->TabIndex = 39;
			this->label2->Text = L"Res";
			// 
			// b_subtractDeque_btn
			// 
			this->b_subtractDeque_btn->AutoSize = true;
			this->b_subtractDeque_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->b_subtractDeque_btn->Location = System::Drawing::Point(300, 54);
			this->b_subtractDeque_btn->Name = L"b_subtractDeque_btn";
			this->b_subtractDeque_btn->Size = System::Drawing::Size(82, 30);
			this->b_subtractDeque_btn->TabIndex = 36;
			this->b_subtractDeque_btn->Text = L"Subtract";
			this->b_subtractDeque_btn->UseVisualStyleBackColor = true;
			this->b_subtractDeque_btn->Click += gcnew System::EventHandler(this, &MyForm::b_subtractDeque_btn_Click);
			// 
			// b_addDeque_btn
			// 
			this->b_addDeque_btn->AutoSize = true;
			this->b_addDeque_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_addDeque_btn->Location = System::Drawing::Point(300, 11);
			this->b_addDeque_btn->Name = L"b_addDeque_btn";
			this->b_addDeque_btn->Size = System::Drawing::Size(48, 30);
			this->b_addDeque_btn->TabIndex = 35;
			this->b_addDeque_btn->Text = L"Add";
			this->b_addDeque_btn->UseVisualStyleBackColor = true;
			this->b_addDeque_btn->Click += gcnew System::EventHandler(this, &MyForm::b_addDeque_btn_Click);
			// 
			// b_secondDeque_rb
			// 
			this->b_secondDeque_rb->AutoSize = true;
			this->b_secondDeque_rb->Location = System::Drawing::Point(50, 54);
			this->b_secondDeque_rb->Name = L"b_secondDeque_rb";
			this->b_secondDeque_rb->Size = System::Drawing::Size(17, 16);
			this->b_secondDeque_rb->TabIndex = 34;
			this->b_secondDeque_rb->TabStop = true;
			this->b_secondDeque_rb->UseVisualStyleBackColor = true;
			this->b_secondDeque_rb->CheckedChanged += gcnew System::EventHandler(this, &MyForm::OnBoolChangeCheck);
			// 
			// b_secondDequeLabel
			// 
			this->b_secondDequeLabel->BackColor = System::Drawing::Color::LightSteelBlue;
			this->b_secondDequeLabel->Location = System::Drawing::Point(82, 54);
			this->b_secondDequeLabel->Name = L"b_secondDequeLabel";
			this->b_secondDequeLabel->Size = System::Drawing::Size(212, 29);
			this->b_secondDequeLabel->TabIndex = 33;
			// 
			// b_firstDeque_rb
			// 
			this->b_firstDeque_rb->AutoSize = true;
			this->b_firstDeque_rb->Location = System::Drawing::Point(50, 12);
			this->b_firstDeque_rb->Name = L"b_firstDeque_rb";
			this->b_firstDeque_rb->Size = System::Drawing::Size(17, 16);
			this->b_firstDeque_rb->TabIndex = 32;
			this->b_firstDeque_rb->TabStop = true;
			this->b_firstDeque_rb->UseVisualStyleBackColor = true;
			this->b_firstDeque_rb->CheckedChanged += gcnew System::EventHandler(this, &MyForm::OnBoolChangeCheck);
			// 
			// b_clean_btn
			// 
			this->b_clean_btn->AutoSize = true;
			this->b_clean_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_clean_btn->Location = System::Drawing::Point(242, 231);
			this->b_clean_btn->Name = L"b_clean_btn";
			this->b_clean_btn->Size = System::Drawing::Size(62, 30);
			this->b_clean_btn->TabIndex = 31;
			this->b_clean_btn->Text = L"Clean";
			this->b_clean_btn->UseVisualStyleBackColor = true;
			this->b_clean_btn->Click += gcnew System::EventHandler(this, &MyForm::b_clean_btn_Click);
			// 
			// b_Size_btn
			// 
			this->b_Size_btn->AutoSize = true;
			this->b_Size_btn->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->b_Size_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_Size_btn->Location = System::Drawing::Point(242, 195);
			this->b_Size_btn->Name = L"b_Size_btn";
			this->b_Size_btn->Size = System::Drawing::Size(52, 30);
			this->b_Size_btn->TabIndex = 29;
			this->b_Size_btn->Text = L"Size";
			this->b_Size_btn->UseVisualStyleBackColor = true;
			this->b_Size_btn->Click += gcnew System::EventHandler(this, &MyForm::b_Size_btn_Click);
			// 
			// b_deleteRight_btn
			// 
			this->b_deleteRight_btn->AutoSize = true;
			this->b_deleteRight_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->b_deleteRight_btn->Location = System::Drawing::Point(11, 303);
			this->b_deleteRight_btn->Name = L"b_deleteRight_btn";
			this->b_deleteRight_btn->Size = System::Drawing::Size(106, 30);
			this->b_deleteRight_btn->TabIndex = 28;
			this->b_deleteRight_btn->Text = L"Delete right";
			this->b_deleteRight_btn->UseVisualStyleBackColor = true;
			this->b_deleteRight_btn->Click += gcnew System::EventHandler(this, &MyForm::b_deleteRight_btn_Click);
			// 
			// b_deleteLeft_btn
			// 
			this->b_deleteLeft_btn->AutoSize = true;
			this->b_deleteLeft_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->b_deleteLeft_btn->Location = System::Drawing::Point(11, 267);
			this->b_deleteLeft_btn->Name = L"b_deleteLeft_btn";
			this->b_deleteLeft_btn->Size = System::Drawing::Size(96, 30);
			this->b_deleteLeft_btn->TabIndex = 27;
			this->b_deleteLeft_btn->Text = L"Delete left";
			this->b_deleteLeft_btn->UseVisualStyleBackColor = true;
			this->b_deleteLeft_btn->Click += gcnew System::EventHandler(this, &MyForm::b_deleteLeft_btn_Click);
			// 
			// b_addRight_btn
			// 
			this->b_addRight_btn->AutoSize = true;
			this->b_addRight_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_addRight_btn->Location = System::Drawing::Point(11, 231);
			this->b_addRight_btn->Name = L"b_addRight_btn";
			this->b_addRight_btn->Size = System::Drawing::Size(86, 30);
			this->b_addRight_btn->TabIndex = 26;
			this->b_addRight_btn->Text = L"Add right";
			this->b_addRight_btn->UseVisualStyleBackColor = true;
			this->b_addRight_btn->Click += gcnew System::EventHandler(this, &MyForm::b_addRight_btn_Click);
			// 
			// b_addLeft_btn
			// 
			this->b_addLeft_btn->AutoSize = true;
			this->b_addLeft_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_addLeft_btn->Location = System::Drawing::Point(11, 195);
			this->b_addLeft_btn->Name = L"b_addLeft_btn";
			this->b_addLeft_btn->Size = System::Drawing::Size(76, 30);
			this->b_addLeft_btn->TabIndex = 25;
			this->b_addLeft_btn->Text = L"Add left";
			this->b_addLeft_btn->UseVisualStyleBackColor = true;
			this->b_addLeft_btn->Click += gcnew System::EventHandler(this, &MyForm::b_addLeft_btn_Click);
			// 
			// b_newVal_txtbox
			// 
			this->b_newVal_txtbox->Location = System::Drawing::Point(115, 168);
			this->b_newVal_txtbox->Name = L"b_newVal_txtbox";
			this->b_newVal_txtbox->Size = System::Drawing::Size(100, 22);
			this->b_newVal_txtbox->TabIndex = 24;
			// 
			// b_firstDequeLabel
			// 
			this->b_firstDequeLabel->BackColor = System::Drawing::Color::LightSteelBlue;
			this->b_firstDequeLabel->Location = System::Drawing::Point(82, 12);
			this->b_firstDequeLabel->Name = L"b_firstDequeLabel";
			this->b_firstDequeLabel->Size = System::Drawing::Size(212, 29);
			this->b_firstDequeLabel->TabIndex = 23;
			// 
			// polynomPage
			// 
			this->polynomPage->BackColor = System::Drawing::Color::LightSlateGray;
			this->polynomPage->Controls->Add(this->p_elemToFind_txtbox);
			this->polynomPage->Controls->Add(this->p_findElem_btn);
			this->polynomPage->Controls->Add(this->p_resultLabel);
			this->polynomPage->Controls->Add(this->label7);
			this->polynomPage->Controls->Add(this->p_scalar_txtbox);
			this->polynomPage->Controls->Add(this->p_multiply_btn);
			this->polynomPage->Controls->Add(this->p_subtractDeque_btn);
			this->polynomPage->Controls->Add(this->p_addDeque_btn);
			this->polynomPage->Controls->Add(this->p_secondDeque_rb);
			this->polynomPage->Controls->Add(this->p_secondDequeLabel);
			this->polynomPage->Controls->Add(this->p_firstDeque_rb);
			this->polynomPage->Controls->Add(this->p_clean_btn);
			this->polynomPage->Controls->Add(this->p_avg_btn);
			this->polynomPage->Controls->Add(this->p_Size_btn);
			this->polynomPage->Controls->Add(this->p_deleteRight_btn);
			this->polynomPage->Controls->Add(this->p_deleteLeft_btn);
			this->polynomPage->Controls->Add(this->p_addRight_btn);
			this->polynomPage->Controls->Add(this->p_addLeft_btn);
			this->polynomPage->Controls->Add(this->p_newVal_txtbox);
			this->polynomPage->Controls->Add(this->p_firstDequeLabel);
			this->polynomPage->Location = System::Drawing::Point(4, 25);
			this->polynomPage->Name = L"polynomPage";
			this->polynomPage->Padding = System::Windows::Forms::Padding(3);
			this->polynomPage->Size = System::Drawing::Size(427, 403);
			this->polynomPage->TabIndex = 2;
			this->polynomPage->Text = L"CPolynom3";
			// 
			// p_resultLabel
			// 
			this->p_resultLabel->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->p_resultLabel->Location = System::Drawing::Point(82, 95);
			this->p_resultLabel->Name = L"p_resultLabel";
			this->p_resultLabel->Size = System::Drawing::Size(212, 29);
			this->p_resultLabel->TabIndex = 40;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(9, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 29);
			this->label7->TabIndex = 39;
			this->label7->Text = L"Res";
			// 
			// p_scalar_txtbox
			// 
			this->p_scalar_txtbox->Location = System::Drawing::Point(324, 239);
			this->p_scalar_txtbox->Name = L"p_scalar_txtbox";
			this->p_scalar_txtbox->Size = System::Drawing::Size(39, 22);
			this->p_scalar_txtbox->TabIndex = 38;
			// 
			// p_multiply_btn
			// 
			this->p_multiply_btn->AutoSize = true;
			this->p_multiply_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p_multiply_btn->Location = System::Drawing::Point(242, 231);
			this->p_multiply_btn->Name = L"p_multiply_btn";
			this->p_multiply_btn->Size = System::Drawing::Size(76, 30);
			this->p_multiply_btn->TabIndex = 37;
			this->p_multiply_btn->Text = L"Multiply";
			this->p_multiply_btn->UseVisualStyleBackColor = true;
			this->p_multiply_btn->Click += gcnew System::EventHandler(this, &MyForm::p_multiply_btn_Click);
			// 
			// p_subtractDeque_btn
			// 
			this->p_subtractDeque_btn->AutoSize = true;
			this->p_subtractDeque_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->p_subtractDeque_btn->Location = System::Drawing::Point(315, 54);
			this->p_subtractDeque_btn->Name = L"p_subtractDeque_btn";
			this->p_subtractDeque_btn->Size = System::Drawing::Size(82, 30);
			this->p_subtractDeque_btn->TabIndex = 36;
			this->p_subtractDeque_btn->Text = L"Subtract";
			this->p_subtractDeque_btn->UseVisualStyleBackColor = true;
			this->p_subtractDeque_btn->Click += gcnew System::EventHandler(this, &MyForm::p_subtractDeque_btn_Click);
			// 
			// p_addDeque_btn
			// 
			this->p_addDeque_btn->AutoSize = true;
			this->p_addDeque_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p_addDeque_btn->Location = System::Drawing::Point(315, 12);
			this->p_addDeque_btn->Name = L"p_addDeque_btn";
			this->p_addDeque_btn->Size = System::Drawing::Size(48, 30);
			this->p_addDeque_btn->TabIndex = 35;
			this->p_addDeque_btn->Text = L"Add";
			this->p_addDeque_btn->UseVisualStyleBackColor = true;
			this->p_addDeque_btn->Click += gcnew System::EventHandler(this, &MyForm::p_addDeque_btn_Click);
			// 
			// p_secondDeque_rb
			// 
			this->p_secondDeque_rb->AutoSize = true;
			this->p_secondDeque_rb->Location = System::Drawing::Point(37, 62);
			this->p_secondDeque_rb->Name = L"p_secondDeque_rb";
			this->p_secondDeque_rb->Size = System::Drawing::Size(17, 16);
			this->p_secondDeque_rb->TabIndex = 34;
			this->p_secondDeque_rb->TabStop = true;
			this->p_secondDeque_rb->UseVisualStyleBackColor = true;
			this->p_secondDeque_rb->CheckedChanged += gcnew System::EventHandler(this, &MyForm::OnPolynomChangeCheck);
			// 
			// p_secondDequeLabel
			// 
			this->p_secondDequeLabel->BackColor = System::Drawing::Color::LightSteelBlue;
			this->p_secondDequeLabel->Location = System::Drawing::Point(82, 54);
			this->p_secondDequeLabel->Name = L"p_secondDequeLabel";
			this->p_secondDequeLabel->Size = System::Drawing::Size(212, 29);
			this->p_secondDequeLabel->TabIndex = 33;
			// 
			// p_firstDeque_rb
			// 
			this->p_firstDeque_rb->AutoSize = true;
			this->p_firstDeque_rb->Location = System::Drawing::Point(37, 12);
			this->p_firstDeque_rb->Name = L"p_firstDeque_rb";
			this->p_firstDeque_rb->Size = System::Drawing::Size(17, 16);
			this->p_firstDeque_rb->TabIndex = 32;
			this->p_firstDeque_rb->TabStop = true;
			this->p_firstDeque_rb->UseVisualStyleBackColor = true;
			this->p_firstDeque_rb->CheckedChanged += gcnew System::EventHandler(this, &MyForm::OnPolynomChangeCheck);
			// 
			// p_clean_btn
			// 
			this->p_clean_btn->AutoSize = true;
			this->p_clean_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p_clean_btn->Location = System::Drawing::Point(243, 267);
			this->p_clean_btn->Name = L"p_clean_btn";
			this->p_clean_btn->Size = System::Drawing::Size(62, 30);
			this->p_clean_btn->TabIndex = 31;
			this->p_clean_btn->Text = L"Clean";
			this->p_clean_btn->UseVisualStyleBackColor = true;
			this->p_clean_btn->Click += gcnew System::EventHandler(this, &MyForm::p_clean_btn_Click);
			// 
			// p_avg_btn
			// 
			this->p_avg_btn->AutoSize = true;
			this->p_avg_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p_avg_btn->Location = System::Drawing::Point(243, 303);
			this->p_avg_btn->Name = L"p_avg_btn";
			this->p_avg_btn->Size = System::Drawing::Size(51, 30);
			this->p_avg_btn->TabIndex = 30;
			this->p_avg_btn->Text = L"Avg";
			this->p_avg_btn->UseVisualStyleBackColor = true;
			this->p_avg_btn->Click += gcnew System::EventHandler(this, &MyForm::p_avg_btn_Click);
			// 
			// p_Size_btn
			// 
			this->p_Size_btn->AutoSize = true;
			this->p_Size_btn->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->p_Size_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p_Size_btn->Location = System::Drawing::Point(242, 195);
			this->p_Size_btn->Name = L"p_Size_btn";
			this->p_Size_btn->Size = System::Drawing::Size(52, 30);
			this->p_Size_btn->TabIndex = 29;
			this->p_Size_btn->Text = L"Size";
			this->p_Size_btn->UseVisualStyleBackColor = true;
			this->p_Size_btn->Click += gcnew System::EventHandler(this, &MyForm::p_Size_btn_Click);
			// 
			// p_deleteRight_btn
			// 
			this->p_deleteRight_btn->AutoSize = true;
			this->p_deleteRight_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->p_deleteRight_btn->Location = System::Drawing::Point(11, 303);
			this->p_deleteRight_btn->Name = L"p_deleteRight_btn";
			this->p_deleteRight_btn->Size = System::Drawing::Size(106, 30);
			this->p_deleteRight_btn->TabIndex = 28;
			this->p_deleteRight_btn->Text = L"Delete right";
			this->p_deleteRight_btn->UseVisualStyleBackColor = true;
			this->p_deleteRight_btn->Click += gcnew System::EventHandler(this, &MyForm::p_deleteRight_btn_Click);
			// 
			// p_deleteLeft_btn
			// 
			this->p_deleteLeft_btn->AutoSize = true;
			this->p_deleteLeft_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->p_deleteLeft_btn->Location = System::Drawing::Point(11, 267);
			this->p_deleteLeft_btn->Name = L"p_deleteLeft_btn";
			this->p_deleteLeft_btn->Size = System::Drawing::Size(96, 30);
			this->p_deleteLeft_btn->TabIndex = 27;
			this->p_deleteLeft_btn->Text = L"Delete left";
			this->p_deleteLeft_btn->UseVisualStyleBackColor = true;
			this->p_deleteLeft_btn->Click += gcnew System::EventHandler(this, &MyForm::p_deleteLeft_btn_Click);
			// 
			// p_addRight_btn
			// 
			this->p_addRight_btn->AutoSize = true;
			this->p_addRight_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p_addRight_btn->Location = System::Drawing::Point(11, 231);
			this->p_addRight_btn->Name = L"p_addRight_btn";
			this->p_addRight_btn->Size = System::Drawing::Size(86, 30);
			this->p_addRight_btn->TabIndex = 26;
			this->p_addRight_btn->Text = L"Add right";
			this->p_addRight_btn->UseVisualStyleBackColor = true;
			this->p_addRight_btn->Click += gcnew System::EventHandler(this, &MyForm::p_addRight_btn_Click);
			// 
			// p_addLeft_btn
			// 
			this->p_addLeft_btn->AutoSize = true;
			this->p_addLeft_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p_addLeft_btn->Location = System::Drawing::Point(11, 195);
			this->p_addLeft_btn->Name = L"p_addLeft_btn";
			this->p_addLeft_btn->Size = System::Drawing::Size(76, 30);
			this->p_addLeft_btn->TabIndex = 25;
			this->p_addLeft_btn->Text = L"Add left";
			this->p_addLeft_btn->UseVisualStyleBackColor = true;
			this->p_addLeft_btn->Click += gcnew System::EventHandler(this, &MyForm::p_addLeft_btn_Click);
			// 
			// p_newVal_txtbox
			// 
			this->p_newVal_txtbox->Location = System::Drawing::Point(115, 168);
			this->p_newVal_txtbox->Name = L"p_newVal_txtbox";
			this->p_newVal_txtbox->Size = System::Drawing::Size(100, 22);
			this->p_newVal_txtbox->TabIndex = 24;
			// 
			// p_firstDequeLabel
			// 
			this->p_firstDequeLabel->BackColor = System::Drawing::Color::LightSteelBlue;
			this->p_firstDequeLabel->Location = System::Drawing::Point(82, 12);
			this->p_firstDequeLabel->Name = L"p_firstDequeLabel";
			this->p_firstDequeLabel->Size = System::Drawing::Size(212, 29);
			this->p_firstDequeLabel->TabIndex = 23;
			// 
			// p_elemToFind_txtbox
			// 
			this->p_elemToFind_txtbox->Location = System::Drawing::Point(145, 344);
			this->p_elemToFind_txtbox->Name = L"p_elemToFind_txtbox";
			this->p_elemToFind_txtbox->Size = System::Drawing::Size(39, 22);
			this->p_elemToFind_txtbox->TabIndex = 44;
			// 
			// p_findElem_btn
			// 
			this->p_findElem_btn->AutoSize = true;
			this->p_findElem_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p_findElem_btn->Location = System::Drawing::Point(11, 339);
			this->p_findElem_btn->Name = L"p_findElem_btn";
			this->p_findElem_btn->Size = System::Drawing::Size(119, 30);
			this->p_findElem_btn->TabIndex = 43;
			this->p_findElem_btn->Text = L"Find in deque";
			this->p_findElem_btn->UseVisualStyleBackColor = true;
			this->p_findElem_btn->Click += gcnew System::EventHandler(this, &MyForm::p_findElem_btn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::LightSlateGray;
			this->ClientSize = System::Drawing::Size(432, 442);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->floatPage->ResumeLayout(false);
			this->floatPage->PerformLayout();
			this->boolPage->ResumeLayout(false);
			this->boolPage->PerformLayout();
			this->polynomPage->ResumeLayout(false);
			this->polynomPage->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: CDeque<float>* floatDeque;
	private: CDeque<bool>* boolDeque;
	private: CDeque<CPolynom3>* polynomDeque;

	private: int FloatSelectedIndex;
	private: int BoolSelectedIndex;
	private: int PolynomSelectedIndex;

    

	private: System::Void OnFloatChangeCheck(System::Object^ sender, System::EventArgs^ e);
	private: System::Void OnBoolChangeCheck(System::Object^ sender, System::EventArgs^ e);
	private: System::Void OnPolynomChangeCheck(System::Object^ sender, System::EventArgs^ e);

	private: System::Void UpdateFloatDequeLabel();
	private: System::Void UpdateFloatResultLabel();
	private: System::Void UpdateBoolDequeLabel();
	private: System::Void UpdateBoolResultLabel();
	private: System::Void UpdatePolynomDequeLabel();
	private: System::Void UpdatePolynomResultLabel();
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void f_addAtLeft_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void f_addAtRight_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void f_deleteAtLeft_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void f_deleteAtRight_btn_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void f_countElem_btn_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void f_dequeAvg_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void f_dequeClear_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void f_productBy_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void f_addDeque_btn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void f_substractDeque_btn_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void b_addLeft_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void b_addRight_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void b_deleteLeft_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void b_deleteRight_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void b_Size_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void b_clean_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void b_addDeque_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void b_subtractDeque_btn_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void p_addLeft_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void p_addRight_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void p_deleteLeft_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void p_deleteRight_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void p_Size_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void p_multiply_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void p_clean_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void p_avg_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void p_subtractDeque_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void p_addDeque_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void f_FindElem_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void p_findElem_btn_Click(System::Object^ sender, System::EventArgs^ e);
};
}

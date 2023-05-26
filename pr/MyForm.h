#pragma once
#include <string>

namespace pr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ z1b;
	private: System::Windows::Forms::Label^ z1a;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel5;




	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label22;









	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->z1b = (gcnew System::Windows::Forms::Label());
			this->z1a = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(9, 10);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(31, 17);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(9, 32);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(31, 17);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"2";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(9, 74);
			this->radioButton3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(31, 17);
			this->radioButton3->TabIndex = 4;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"4";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(9, 52);
			this->radioButton4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(31, 17);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"3";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(9, 98);
			this->radioButton5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(31, 17);
			this->radioButton5->TabIndex = 5;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"5";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->z1b);
			this->panel1->Controls->Add(this->z1a);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(45, 10);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(573, 117);
			this->panel1->TabIndex = 6;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(280, 22);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(263, 66);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 88);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 24);
			this->button1->TabIndex = 6;
			this->button1->Text = L"пощитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(180, 16);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(136, 16);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Result:";
			// 
			// z1b
			// 
			this->z1b->AutoSize = true;
			this->z1b->Location = System::Drawing::Point(42, 49);
			this->z1b->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->z1b->Name = L"z1b";
			this->z1b->Size = System::Drawing::Size(13, 13);
			this->z1b->TabIndex = 3;
			this->z1b->Text = L"b";
			// 
			// z1a
			// 
			this->z1a->AutoSize = true;
			this->z1a->Location = System::Drawing::Point(42, 6);
			this->z1a->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->z1a->Name = L"z1a";
			this->z1a->Size = System::Drawing::Size(13, 13);
			this->z1a->TabIndex = 2;
			this->z1a->Text = L"a";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(15, 65);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(76, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 22);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 20);
			this->textBox1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(41, 11);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(638, 117);
			this->panel2->TabIndex = 7;
			this->panel2->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(146, 42);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(382, 72);
			this->pictureBox4->TabIndex = 13;
			this->pictureBox4->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(15, 89);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 20);
			this->button2->TabIndex = 12;
			this->button2->Text = L"пощитать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(42, 49);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"b";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(42, 6);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"a";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(15, 65);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(76, 20);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(15, 22);
			this->textBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(76, 20);
			this->textBox4->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(230, 14);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(186, 14);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Result:";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->textBox6);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->textBox5);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Location = System::Drawing::Point(41, 15);
			this->panel3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(635, 117);
			this->panel3->TabIndex = 13;
			this->panel3->Visible = false;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(150, 42);
			this->textBox6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(76, 20);
			this->textBox6->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(106, 14);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(175, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Введіть  розрахунок функції 1,2,3";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(15, 89);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 20);
			this->button3->TabIndex = 12;
			this->button3->Text = L"пощитать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(42, 14);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(14, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"X";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(15, 42);
			this->textBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(76, 20);
			this->textBox5->TabIndex = 9;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(332, 92);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 7;
			this->label9->Text = L"0";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(288, 92);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 13);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Result:";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->pictureBox2);
			this->panel4->Controls->Add(this->label15);
			this->panel4->Controls->Add(this->textBox9);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->textBox7);
			this->panel4->Controls->Add(this->button4);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->textBox8);
			this->panel4->Controls->Add(this->label13);
			this->panel4->Controls->Add(this->label14);
			this->panel4->Location = System::Drawing::Point(41, 11);
			this->panel4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(653, 127);
			this->panel4->TabIndex = 15;
			this->panel4->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(254, -1);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(369, 111);
			this->pictureBox2->TabIndex = 17;
			this->pictureBox2->TabStop = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(122, 13);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(14, 13);
			this->label15->TabIndex = 16;
			this->label15->Text = L"A";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(94, 42);
			this->textBox9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(76, 20);
			this->textBox9->TabIndex = 15;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(212, 14);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(14, 13);
			this->label11->TabIndex = 14;
			this->label11->Text = L"B";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(174, 42);
			this->textBox7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(76, 20);
			this->textBox7->TabIndex = 13;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(15, 89);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 20);
			this->button4->TabIndex = 12;
			this->button4->Text = L"пощитать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(42, 14);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(14, 13);
			this->label12->TabIndex = 11;
			this->label12->Text = L"X";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(15, 42);
			this->textBox8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(76, 20);
			this->textBox8->TabIndex = 9;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(158, 95);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(13, 13);
			this->label13->TabIndex = 7;
			this->label13->Text = L"0";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(106, 95);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(40, 13);
			this->label14->TabIndex = 6;
			this->label14->Text = L"Result:";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->pictureBox3);
			this->panel5->Controls->Add(this->label17);
			this->panel5->Controls->Add(this->label21);
			this->panel5->Controls->Add(this->label16);
			this->panel5->Controls->Add(this->textBox10);
			this->panel5->Controls->Add(this->button5);
			this->panel5->Controls->Add(this->label18);
			this->panel5->Controls->Add(this->textBox12);
			this->panel5->Controls->Add(this->label19);
			this->panel5->Controls->Add(this->label20);
			this->panel5->Location = System::Drawing::Point(41, 11);
			this->panel5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(809, 119);
			this->panel5->TabIndex = 17;
			this->panel5->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(274, 6);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(532, 82);
			this->pictureBox3->TabIndex = 17;
			this->pictureBox3->TabStop = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(170, 73);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(13, 13);
			this->label17->TabIndex = 16;
			this->label17->Text = L"0";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(98, 96);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(66, 13);
			this->label21->TabIndex = 15;
			this->label21->Text = L"З податком";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(116, 18);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(68, 13);
			this->label16->TabIndex = 14;
			this->label16->Text = L"Ваші години";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(108, 42);
			this->textBox10->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(76, 20);
			this->textBox10->TabIndex = 13;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(15, 79);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 20);
			this->button5->TabIndex = 12;
			this->button5->Text = L"пощитать";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(22, 18);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(62, 13);
			this->label18->TabIndex = 11;
			this->label18->Text = L"Ваш тариф";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(15, 42);
			this->textBox12->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(76, 20);
			this->textBox12->TabIndex = 9;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(170, 96);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(13, 13);
			this->label19->TabIndex = 7;
			this->label19->Text = L"0";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(94, 75);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(69, 13);
			this->label20->TabIndex = 6;
			this->label20->Text = L"Без податку";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(622, 167);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(106, 13);
			this->label22->TabIndex = 18;
			this->label22->Text = L"Козярик Максим";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(887, 190);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		panel1->Visible = true;
		panel2->Visible = false;
		panel3->Visible = false;
		panel5->Visible = false;
		panel4->Visible = false;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ a_txt = textBox1->Text;
		String^ b_txt = textBox2->Text;
		double x = System::Convert::ToDouble(a_txt);
		double a = System::Convert::ToDouble(b_txt);
		double y = (sqrt((x + a) / (2 * x) + 5) + (abs(sin(x)) - 2));
		String^ res = System::Convert::ToString(y);
		label1->Text = res;
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		panel1->Visible = false;
		panel2->Visible = true;
		panel4->Visible = false;
		panel5->Visible = false;
		panel3->Visible = false;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ a_txt = textBox3->Text;
		String^ b_txt = textBox4->Text;
		double x = System::Convert::ToDouble(a_txt);
		double a = System::Convert::ToDouble(b_txt);
		double y;
		if (x >= 4) {
			y = abs((a*x)+pow(x,2));
			label2->Text = System::Convert::ToString(y);
		}
		else if (x > 0 && x < 4) {
			y = (sqrt(a*x - 1)+3);
			label2->Text = System::Convert::ToString(y);
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		double x, y;
		int a, b, c;
		a = rand();
		b = rand();
		String^ b_txt = textBox5->Text;
		String^ c_txt = textBox6->Text;
		x = System::Convert::ToDouble(b_txt);
		c = System::Convert::ToDouble(c_txt);
		switch (c) {
		case 1:
			if (x > 0 && x < 4) {
				y = cos(x);
			}
			break;
		case 2:
			if (x > 0 && x < 4) {
				y = cos(x);
			}
			else if (x == 4) {
				y = 3 * pow(x, 2) + b * x;
				break;
			}
		case 3:
			if (x > 0 && x < 4) {
				y = cos(x);
			}
			else if (x == 4) {
				y = 3 * pow(x, 2) + b * x;
			}
			else if (x > 4 && x < 7) {
				y = log(a * x + b);
				break;
			}
		}
		label9->Text = System::Convert::ToString(y);
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		panel1->Visible = false;
		panel2->Visible = false;
		panel4->Visible = true;
		panel5->Visible = false;
		panel3->Visible = false;
	}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		double b, x, y, a;
		String^ x_txt = textBox8->Text;
		String^ a_txt = textBox9->Text;	
		String^ b_txt = textBox7->Text;
		x = System::Convert::ToDouble(x_txt);
		a = System::Convert::ToDouble(a_txt);
		b = System::Convert::ToDouble(b_txt);
		if (x > -std::numeric_limits<double>::infinity() && x < 4) {
			y = abs(a * x + pow(x, 2));
			label13->Text = System::Convert::ToString(y);
		}
		else if (x == 4) {
			y = sqrt(b * x - 1) + 3;
			label13->Text = System::Convert::ToString(y);
		}
		else if (x > 4 && x<=10) {
			y = cos(x);
			label13->Text = System::Convert::ToString(y);
		}
		else {
			label13->Text = "Функция не визначена";
		}

}
	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		panel1->Visible = false;
		panel2->Visible = false;
		panel4->Visible = false;
		panel3->Visible = true;
		panel5->Visible = false;
	}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	double a, b, result;
	String^ a_txt = textBox12->Text;
	if (a_txt->Length <= 0) {
		MessageBox::Show("Не вірно ввели тарифний план");
		MessageBox::Show("Введіть повторно");
	}
	else {
		a = System::Convert::ToDouble(a_txt);
	}String^ b_txt = textBox10->Text;
	if (b_txt->Length <= 0) {
		MessageBox::Show("Не вірно ввели години");
		MessageBox::Show("Введіть повторно");
	}else{
		b = System::Convert::ToDouble(b_txt);
	}

	result = a * b;
	label17->Text = System::Convert::ToString(result);
	result = result * 0.9;
	result = result * 0.8;
	label19->Text = System::Convert::ToString(result);;
}
private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel2->Visible = false;
	panel4->Visible = false;
	panel3->Visible = false;
	panel5->Visible = true;
}
};
};


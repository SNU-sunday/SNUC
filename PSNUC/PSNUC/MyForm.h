#pragma once

namespace PSNUC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm에 대한 요약입니다.
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
			
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  close_button;
	protected:

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  Go_to_home;

	private: System::Windows::Forms::Button^  help_button;
	private: System::Windows::Forms::Label^  sysTime;


	private: System::Windows::Forms::Button^  run_button;

	private: System::Windows::Forms::Button^  stop_button;

	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Button^  Connect;

	private: System::Windows::Forms::TabControl^  tab1;

	private: System::Windows::Forms::TabPage^  sys_monitor_tab;
	private: System::Windows::Forms::TabPage^  error_tab;



	private: System::Windows::Forms::Label^  version_label;
	private: System::Windows::Forms::Button^  code_button;
	private: System::Windows::Forms::Label^  developer_label;
	private: System::Windows::Forms::Label^  prog_label;
	private: System::Windows::Forms::Label^  cur_set_label;
	private: System::Windows::Forms::Button^  DD_set_button;
	private: System::Windows::Forms::Button^  servo_set_button;
	private: System::Windows::Forms::Label^  setting_label;
	private: System::Windows::Forms::Label^  control_label;
	private: System::Windows::Forms::Label^  status_label;
	private: System::Windows::Forms::Button^  Disconnect;



	protected:

	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			this->close_button = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Go_to_home = (gcnew System::Windows::Forms::Button());
			this->help_button = (gcnew System::Windows::Forms::Button());
			this->sysTime = (gcnew System::Windows::Forms::Label());
			this->run_button = (gcnew System::Windows::Forms::Button());
			this->stop_button = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->Connect = (gcnew System::Windows::Forms::Button());
			this->tab1 = (gcnew System::Windows::Forms::TabControl());
			this->sys_monitor_tab = (gcnew System::Windows::Forms::TabPage());
			this->error_tab = (gcnew System::Windows::Forms::TabPage());
			this->version_label = (gcnew System::Windows::Forms::Label());
			this->code_button = (gcnew System::Windows::Forms::Button());
			this->developer_label = (gcnew System::Windows::Forms::Label());
			this->prog_label = (gcnew System::Windows::Forms::Label());
			this->cur_set_label = (gcnew System::Windows::Forms::Label());
			this->DD_set_button = (gcnew System::Windows::Forms::Button());
			this->servo_set_button = (gcnew System::Windows::Forms::Button());
			this->setting_label = (gcnew System::Windows::Forms::Label());
			this->control_label = (gcnew System::Windows::Forms::Label());
			this->status_label = (gcnew System::Windows::Forms::Label());
			this->Disconnect = (gcnew System::Windows::Forms::Button());
			this->tab1->SuspendLayout();
			this->SuspendLayout();
			// 
			// close_button
			// 
			this->close_button->Location = System::Drawing::Point(476, 622);
			this->close_button->Name = L"close_button";
			this->close_button->Size = System::Drawing::Size(96, 27);
			this->close_button->TabIndex = 0;
			this->close_button->Text = L"Close";
			this->close_button->UseVisualStyleBackColor = true;
			this->close_button->Click += gcnew System::EventHandler(this, &MyForm::close_button_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(497, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Plot View";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(497, 41);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"View Log";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// Go_to_home
			// 
			this->Go_to_home->Location = System::Drawing::Point(234, 223);
			this->Go_to_home->Name = L"Go_to_home";
			this->Go_to_home->Size = System::Drawing::Size(106, 23);
			this->Go_to_home->TabIndex = 3;
			this->Go_to_home->Text = L"Go to Home";
			this->Go_to_home->UseVisualStyleBackColor = true;
			// 
			// help_button
			// 
			this->help_button->Location = System::Drawing::Point(12, 626);
			this->help_button->Name = L"help_button";
			this->help_button->Size = System::Drawing::Size(106, 23);
			this->help_button->TabIndex = 4;
			this->help_button->Text = L"Help";
			this->help_button->UseVisualStyleBackColor = true;
			this->help_button->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// sysTime
			// 
			this->sysTime->AutoSize = true;
			this->sysTime->Location = System::Drawing::Point(12, 9);
			this->sysTime->Name = L"sysTime";
			this->sysTime->Size = System::Drawing::Size(201, 12);
			this->sysTime->TabIndex = 5;
			//DateTime datetime = DateTime::Now;
			//this->sysTime->Text = datetime.ToString();
			this->sysTime->Text = L"System Time : 2018-08-13 00:00:00";
			// 
			// run_button
			// 
			this->run_button->Location = System::Drawing::Point(272, 622);
			this->run_button->Name = L"run_button";
			this->run_button->Size = System::Drawing::Size(96, 26);
			this->run_button->TabIndex = 6;
			this->run_button->Text = L"Run";
			this->run_button->UseVisualStyleBackColor = true;
			// 
			// stop_button
			// 
			this->stop_button->Location = System::Drawing::Point(374, 622);
			this->stop_button->Name = L"stop_button";
			this->stop_button->Size = System::Drawing::Size(96, 26);
			this->stop_button->TabIndex = 7;
			this->stop_button->Text = L"Stop";
			this->stop_button->UseVisualStyleBackColor = true;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 272);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(216, 23);
			this->progressBar1->TabIndex = 8;
			// 
			// Connect
			// 
			this->Connect->Location = System::Drawing::Point(12, 223);
			this->Connect->Name = L"Connect";
			this->Connect->Size = System::Drawing::Size(104, 23);
			this->Connect->TabIndex = 9;
			this->Connect->Text = L"Connect";
			this->Connect->UseVisualStyleBackColor = true;
			// 
			// tab1
			// 
			this->tab1->Controls->Add(this->sys_monitor_tab);
			this->tab1->Controls->Add(this->error_tab);
			this->tab1->Location = System::Drawing::Point(14, 301);
			this->tab1->Multiline = true;
			this->tab1->Name = L"tab1";
			this->tab1->SelectedIndex = 0;
			this->tab1->Size = System::Drawing::Size(354, 319);
			this->tab1->TabIndex = 10;
			// 
			// sys_monitor_tab
			// 
			this->sys_monitor_tab->Location = System::Drawing::Point(4, 22);
			this->sys_monitor_tab->Name = L"sys_monitor_tab";
			this->sys_monitor_tab->Padding = System::Windows::Forms::Padding(3);
			this->sys_monitor_tab->Size = System::Drawing::Size(346, 293);
			this->sys_monitor_tab->TabIndex = 0;
			this->sys_monitor_tab->Text = L"System Monitoring";
			this->sys_monitor_tab->UseVisualStyleBackColor = true;
			// 
			// error_tab
			// 
			this->error_tab->Location = System::Drawing::Point(4, 22);
			this->error_tab->Name = L"error_tab";
			this->error_tab->Padding = System::Windows::Forms::Padding(3);
			this->error_tab->Size = System::Drawing::Size(346, 293);
			this->error_tab->TabIndex = 1;
			this->error_tab->Text = L"Error";
			this->error_tab->UseVisualStyleBackColor = true;
			// 
			// version_label
			// 
			this->version_label->AutoSize = true;
			this->version_label->Location = System::Drawing::Point(380, 538);
			this->version_label->Name = L"version_label";
			this->version_label->Size = System::Drawing::Size(96, 12);
			this->version_label->TabIndex = 11;
			this->version_label->Text = L"Version : v 0.0.1";
			// 
			// code_button
			// 
			this->code_button->Location = System::Drawing::Point(382, 553);
			this->code_button->Name = L"code_button";
			this->code_button->Size = System::Drawing::Size(190, 26);
			this->code_button->TabIndex = 12;
			this->code_button->Text = L"See the code resource";
			this->code_button->UseVisualStyleBackColor = true;
			this->code_button->Click += gcnew System::EventHandler(this, &MyForm::code_button_Click);
			// 
			// developer_label
			// 
			this->developer_label->AutoSize = true;
			this->developer_label->Location = System::Drawing::Point(440, 582);
			this->developer_label->Name = L"developer_label";
			this->developer_label->Size = System::Drawing::Size(132, 12);
			this->developer_label->TabIndex = 13;
			this->developer_label->Text = L"Produced by : J. Kang";
			// 
			// prog_label
			// 
			this->prog_label->AutoSize = true;
			this->prog_label->Location = System::Drawing::Point(12, 257);
			this->prog_label->Name = L"prog_label";
			this->prog_label->Size = System::Drawing::Size(56, 12);
			this->prog_label->TabIndex = 14;
			this->prog_label->Text = L"Progress";
			// 
			// cur_set_label
			// 
			this->cur_set_label->AutoSize = true;
			this->cur_set_label->Location = System::Drawing::Point(276, 9);
			this->cur_set_label->Name = L"cur_set_label";
			this->cur_set_label->Size = System::Drawing::Size(88, 12);
			this->cur_set_label->TabIndex = 15;
			this->cur_set_label->Text = L"Current Setting";
			// 
			// DD_set_button
			// 
			this->DD_set_button->Location = System::Drawing::Point(68, 126);
			this->DD_set_button->Name = L"DD_set_button";
			this->DD_set_button->Size = System::Drawing::Size(104, 23);
			this->DD_set_button->TabIndex = 16;
			this->DD_set_button->Text = L"DD setup";
			this->DD_set_button->UseVisualStyleBackColor = true;
			// 
			// servo_set_button
			// 
			this->servo_set_button->Location = System::Drawing::Point(68, 155);
			this->servo_set_button->Name = L"servo_set_button";
			this->servo_set_button->Size = System::Drawing::Size(104, 23);
			this->servo_set_button->TabIndex = 17;
			this->servo_set_button->Text = L"Servo setup";
			this->servo_set_button->UseVisualStyleBackColor = true;
			// 
			// setting_label
			// 
			this->setting_label->AutoSize = true;
			this->setting_label->Location = System::Drawing::Point(12, 95);
			this->setting_label->Name = L"setting_label";
			this->setting_label->Size = System::Drawing::Size(43, 12);
			this->setting_label->TabIndex = 18;
			this->setting_label->Text = L"Setting";
			// 
			// control_label
			// 
			this->control_label->AutoSize = true;
			this->control_label->Location = System::Drawing::Point(12, 199);
			this->control_label->Name = L"control_label";
			this->control_label->Size = System::Drawing::Size(45, 12);
			this->control_label->TabIndex = 19;
			this->control_label->Text = L"Control";
			// 
			// status_label
			// 
			this->status_label->AutoSize = true;
			this->status_label->Location = System::Drawing::Point(380, 301);
			this->status_label->Name = L"status_label";
			this->status_label->Size = System::Drawing::Size(40, 12);
			this->status_label->TabIndex = 20;
			this->status_label->Text = L"Status";
			// 
			// Disconnect
			// 
			this->Disconnect->Location = System::Drawing::Point(122, 223);
			this->Disconnect->Name = L"Disconnect";
			this->Disconnect->Size = System::Drawing::Size(106, 23);
			this->Disconnect->TabIndex = 21;
			this->Disconnect->Text = L"Disconnect";
			this->Disconnect->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 661);
			this->Controls->Add(this->Disconnect);
			this->Controls->Add(this->status_label);
			this->Controls->Add(this->control_label);
			this->Controls->Add(this->setting_label);
			this->Controls->Add(this->servo_set_button);
			this->Controls->Add(this->DD_set_button);
			this->Controls->Add(this->cur_set_label);
			this->Controls->Add(this->prog_label);
			this->Controls->Add(this->developer_label);
			this->Controls->Add(this->code_button);
			this->Controls->Add(this->version_label);
			this->Controls->Add(this->tab1);
			this->Controls->Add(this->Connect);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->stop_button);
			this->Controls->Add(this->run_button);
			this->Controls->Add(this->sysTime);
			this->Controls->Add(this->help_button);
			this->Controls->Add(this->Go_to_home);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->close_button);
			this->Name = L"MyForm";
			this->Text = L"PSNUC Control Pad";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tab1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void close_button_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void code_button_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start("https://github.com/SNU-sunday/SNUC/tree/PSNUC");
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}

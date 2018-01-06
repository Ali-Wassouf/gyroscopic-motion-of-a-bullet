#pragma once
#include "Engine\Engine.h"

namespace Weaponry_Manufacturer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmMain
	/// </summary>

	public ref class frmMain : public System::Windows::Forms::Form
	{
	public:
		frmMain(void)
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
		~frmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip;
	protected: 

	protected: 








	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  parametersToolStripMenuItem;


	private: System::Windows::Forms::Panel^  panelFigures;
	private: System::Windows::Forms::ToolStripMenuItem^  figuresToolStripMenuItem;


	private: System::Windows::Forms::Label^  lblYaw;

	private: System::Windows::Forms::Label^  lblPitch;

	private: System::Windows::Forms::TextBox^  txtTime;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lblAlpha;
	private: System::Windows::Forms::Label^  lblFD;
	private: System::Windows::Forms::Label^  lblD;
	private: System::Windows::Forms::Label^  lblFL;


	private: System::Windows::Forms::ToolStripMenuItem^  simulationToolStripMenuItem;

	private: System::Windows::Forms::Timer^  displayTimer;
	private: System::Windows::Forms::Timer^  yvpTimer;
	private: System::Windows::Forms::Panel^  panelShooting;


	private: System::Windows::Forms::Panel^  panelParameters;
	private: System::Windows::Forms::ComboBox^  cmbWeapon;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtWm;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txtWCD;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  txtWCLa;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  txtWd;

	private: System::Windows::Forms::Label^  label10;




	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  txtWCMa;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  btnWeaponLoad;

	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  txtWIy;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  txtWIx;

	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  txtWDelta0;


	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::TextBox^  txtWv;

	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::TextBox^  txtWGamma0;


	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::TextBox^  txtWF2;

	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::TextBox^  txtWF1;

	private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Button^  btnWeaponApply;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::TextBox^  txtWL;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::TextBox^  txtWSG;

private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::ComboBox^  cmbWeaponSG;
private: System::Windows::Forms::Label^  lblTwistRate;
private: System::Windows::Forms::Label^  lblRPM;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::TextBox^  txtWtheta;

private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::TextBox^  txtPg;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::TextBox^  txtPdeltat;

private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::TextBox^  txtPp;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::ToolStripMenuItem^  shootingToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  yawVsPitchToolStripMenuItem;
private: System::Windows::Forms::Panel^  panelyvp;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::TextBox^  txtPtd;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label41;






















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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMain::typeid));
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->parametersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->figuresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->simulationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->shootingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->yawVsPitchToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panelFigures = (gcnew System::Windows::Forms::Panel());
			this->lblRPM = (gcnew System::Windows::Forms::Label());
			this->lblTwistRate = (gcnew System::Windows::Forms::Label());
			this->lblD = (gcnew System::Windows::Forms::Label());
			this->lblFL = (gcnew System::Windows::Forms::Label());
			this->lblFD = (gcnew System::Windows::Forms::Label());
			this->lblAlpha = (gcnew System::Windows::Forms::Label());
			this->lblYaw = (gcnew System::Windows::Forms::Label());
			this->lblPitch = (gcnew System::Windows::Forms::Label());
			this->txtTime = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->displayTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->yvpTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->panelShooting = (gcnew System::Windows::Forms::Panel());
			this->panelParameters = (gcnew System::Windows::Forms::Panel());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->txtPtd = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->txtPdeltat = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->txtPg = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->txtWtheta = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->cmbWeaponSG = (gcnew System::Windows::Forms::ComboBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->txtWSG = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->txtWL = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->btnWeaponApply = (gcnew System::Windows::Forms::Button());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->txtWF1 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->txtWF2 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->txtWGamma0 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->txtWDelta0 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->txtWv = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txtWIy = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txtWIx = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->btnWeaponLoad = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtWCMa = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtPp = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtWd = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtWCLa = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtWCD = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtWm = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmbWeapon = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panelyvp = (gcnew System::Windows::Forms::Panel());
			this->menuStrip->SuspendLayout();
			this->panelFigures->SuspendLayout();
			this->panelParameters->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip
			// 
			this->menuStrip->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->fileToolStripMenuItem, 
				this->parametersToolStripMenuItem, this->figuresToolStripMenuItem, this->simulationToolStripMenuItem});
			this->menuStrip->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::Flow;
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(584, 23);
			this->menuStrip->TabIndex = 5;
			this->menuStrip->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &frmMain::menuStrip_ItemClicked);
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 19);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->exitToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"exitToolStripMenuItem.Image")));
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(95, 22);
			this->exitToolStripMenuItem->Text = L"&Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::exitToolStripMenuItem_Click);
			// 
			// parametersToolStripMenuItem
			// 
			this->parametersToolStripMenuItem->Name = L"parametersToolStripMenuItem";
			this->parametersToolStripMenuItem->Size = System::Drawing::Size(78, 19);
			this->parametersToolStripMenuItem->Text = L"&Parameters";
			this->parametersToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::parametersToolStripMenuItem_Click);
			// 
			// figuresToolStripMenuItem
			// 
			this->figuresToolStripMenuItem->Name = L"figuresToolStripMenuItem";
			this->figuresToolStripMenuItem->Size = System::Drawing::Size(57, 19);
			this->figuresToolStripMenuItem->Text = L"&Figures";
			this->figuresToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::figuresToolStripMenuItem_Click);
			// 
			// simulationToolStripMenuItem
			// 
			this->simulationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->shootingToolStripMenuItem, 
				this->yawVsPitchToolStripMenuItem, this->toolStripMenuItem2});
			this->simulationToolStripMenuItem->Name = L"simulationToolStripMenuItem";
			this->simulationToolStripMenuItem->Size = System::Drawing::Size(76, 19);
			this->simulationToolStripMenuItem->Text = L"&Simulation";
			this->simulationToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::simulationToolStripMenuItem_Click);
			// 
			// shootingToolStripMenuItem
			// 
			this->shootingToolStripMenuItem->Name = L"shootingToolStripMenuItem";
			this->shootingToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->shootingToolStripMenuItem->Text = L"&Shooting";
			this->shootingToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::shootingToolStripMenuItem_Click);
			// 
			// yawVsPitchToolStripMenuItem
			// 
			this->yawVsPitchToolStripMenuItem->Name = L"yawVsPitchToolStripMenuItem";
			this->yawVsPitchToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->yawVsPitchToolStripMenuItem->Text = L"&Yaw vs. Pitch";
			this->yawVsPitchToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::yawVsPitchToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(143, 22);
			this->toolStripMenuItem2->Text = L"&Internal view";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &frmMain::toolStripMenuItem2_Click);
			// 
			// panelFigures
			// 
			this->panelFigures->Controls->Add(this->lblRPM);
			this->panelFigures->Controls->Add(this->lblTwistRate);
			this->panelFigures->Controls->Add(this->lblD);
			this->panelFigures->Controls->Add(this->lblFL);
			this->panelFigures->Controls->Add(this->lblFD);
			this->panelFigures->Controls->Add(this->lblAlpha);
			this->panelFigures->Controls->Add(this->lblYaw);
			this->panelFigures->Controls->Add(this->lblPitch);
			this->panelFigures->Controls->Add(this->txtTime);
			this->panelFigures->Controls->Add(this->label1);
			this->panelFigures->Location = System::Drawing::Point(12, 27);
			this->panelFigures->Name = L"panelFigures";
			this->panelFigures->Size = System::Drawing::Size(560, 560);
			this->panelFigures->TabIndex = 6;
			this->panelFigures->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMain::panelFigures_Paint);
			// 
			// lblRPM
			// 
			this->lblRPM->AutoSize = true;
			this->lblRPM->Location = System::Drawing::Point(3, 123);
			this->lblRPM->Name = L"lblRPM";
			this->lblRPM->Size = System::Drawing::Size(13, 13);
			this->lblRPM->TabIndex = 9;
			this->lblRPM->Text = L"0";
			// 
			// lblTwistRate
			// 
			this->lblTwistRate->AutoSize = true;
			this->lblTwistRate->Location = System::Drawing::Point(3, 110);
			this->lblTwistRate->Name = L"lblTwistRate";
			this->lblTwistRate->Size = System::Drawing::Size(13, 13);
			this->lblTwistRate->TabIndex = 8;
			this->lblTwistRate->Text = L"0";
			// 
			// lblD
			// 
			this->lblD->AutoSize = true;
			this->lblD->Location = System::Drawing::Point(3, 97);
			this->lblD->Name = L"lblD";
			this->lblD->Size = System::Drawing::Size(13, 13);
			this->lblD->TabIndex = 7;
			this->lblD->Text = L"0";
			// 
			// lblFL
			// 
			this->lblFL->AutoSize = true;
			this->lblFL->Location = System::Drawing::Point(3, 84);
			this->lblFL->Name = L"lblFL";
			this->lblFL->Size = System::Drawing::Size(13, 13);
			this->lblFL->TabIndex = 6;
			this->lblFL->Text = L"0";
			// 
			// lblFD
			// 
			this->lblFD->AutoSize = true;
			this->lblFD->Location = System::Drawing::Point(3, 71);
			this->lblFD->Name = L"lblFD";
			this->lblFD->Size = System::Drawing::Size(13, 13);
			this->lblFD->TabIndex = 5;
			this->lblFD->Text = L"0";
			// 
			// lblAlpha
			// 
			this->lblAlpha->AutoSize = true;
			this->lblAlpha->Location = System::Drawing::Point(3, 58);
			this->lblAlpha->Name = L"lblAlpha";
			this->lblAlpha->Size = System::Drawing::Size(13, 13);
			this->lblAlpha->TabIndex = 4;
			this->lblAlpha->Text = L"0";
			// 
			// lblYaw
			// 
			this->lblYaw->AutoSize = true;
			this->lblYaw->Location = System::Drawing::Point(3, 45);
			this->lblYaw->Name = L"lblYaw";
			this->lblYaw->Size = System::Drawing::Size(13, 13);
			this->lblYaw->TabIndex = 3;
			this->lblYaw->Text = L"0";
			// 
			// lblPitch
			// 
			this->lblPitch->AutoSize = true;
			this->lblPitch->Location = System::Drawing::Point(3, 32);
			this->lblPitch->Name = L"lblPitch";
			this->lblPitch->Size = System::Drawing::Size(13, 13);
			this->lblPitch->TabIndex = 2;
			this->lblPitch->Text = L"0";
			// 
			// txtTime
			// 
			this->txtTime->Location = System::Drawing::Point(60, 3);
			this->txtTime->Name = L"txtTime";
			this->txtTime->Size = System::Drawing::Size(100, 20);
			this->txtTime->TabIndex = 1;
			this->txtTime->TextChanged += gcnew System::EventHandler(this, &frmMain::txtTime_TextChanged);
			this->txtTime->DoubleClick += gcnew System::EventHandler(this, &frmMain::txtTime_DoubleClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Set time :";
			// 
			// displayTimer
			// 
			this->displayTimer->Interval = 1;
			this->displayTimer->Tick += gcnew System::EventHandler(this, &frmMain::displayTimer_Tick);
			// 
			// yvpTimer
			// 
			this->yvpTimer->Interval = 1;
			this->yvpTimer->Tick += gcnew System::EventHandler(this, &frmMain::yvpTimer_Tick);
			// 
			// panelShooting
			// 
			this->panelShooting->Location = System::Drawing::Point(12, 26);
			this->panelShooting->Name = L"panelShooting";
			this->panelShooting->Size = System::Drawing::Size(560, 560);
			this->panelShooting->TabIndex = 9;
			this->panelShooting->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &frmMain::panelSimulation_Scroll);
			this->panelShooting->Enter += gcnew System::EventHandler(this, &frmMain::panelShooting_Enter);
			this->panelShooting->Leave += gcnew System::EventHandler(this, &frmMain::panelShooting_Leave);
			this->panelShooting->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::panelSimulation_MouseDown);
			this->panelShooting->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::panelSimulation_MouseMove);
			this->panelShooting->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &frmMain::panelSimulation_PreviewKeyDown);
			// 
			// panelParameters
			// 
			this->panelParameters->Controls->Add(this->label41);
			this->panelParameters->Controls->Add(this->label39);
			this->panelParameters->Controls->Add(this->txtPtd);
			this->panelParameters->Controls->Add(this->label40);
			this->panelParameters->Controls->Add(this->label37);
			this->panelParameters->Controls->Add(this->txtPdeltat);
			this->panelParameters->Controls->Add(this->label38);
			this->panelParameters->Controls->Add(this->label35);
			this->panelParameters->Controls->Add(this->txtPg);
			this->panelParameters->Controls->Add(this->label36);
			this->panelParameters->Controls->Add(this->label33);
			this->panelParameters->Controls->Add(this->txtWtheta);
			this->panelParameters->Controls->Add(this->label34);
			this->panelParameters->Controls->Add(this->cmbWeaponSG);
			this->panelParameters->Controls->Add(this->label31);
			this->panelParameters->Controls->Add(this->txtWSG);
			this->panelParameters->Controls->Add(this->label32);
			this->panelParameters->Controls->Add(this->label29);
			this->panelParameters->Controls->Add(this->txtWL);
			this->panelParameters->Controls->Add(this->label30);
			this->panelParameters->Controls->Add(this->btnWeaponApply);
			this->panelParameters->Controls->Add(this->label27);
			this->panelParameters->Controls->Add(this->txtWF1);
			this->panelParameters->Controls->Add(this->label28);
			this->panelParameters->Controls->Add(this->label25);
			this->panelParameters->Controls->Add(this->txtWF2);
			this->panelParameters->Controls->Add(this->label26);
			this->panelParameters->Controls->Add(this->label23);
			this->panelParameters->Controls->Add(this->txtWGamma0);
			this->panelParameters->Controls->Add(this->label24);
			this->panelParameters->Controls->Add(this->label21);
			this->panelParameters->Controls->Add(this->txtWDelta0);
			this->panelParameters->Controls->Add(this->label22);
			this->panelParameters->Controls->Add(this->label19);
			this->panelParameters->Controls->Add(this->txtWv);
			this->panelParameters->Controls->Add(this->label20);
			this->panelParameters->Controls->Add(this->label17);
			this->panelParameters->Controls->Add(this->txtWIy);
			this->panelParameters->Controls->Add(this->label18);
			this->panelParameters->Controls->Add(this->label15);
			this->panelParameters->Controls->Add(this->txtWIx);
			this->panelParameters->Controls->Add(this->label16);
			this->panelParameters->Controls->Add(this->btnWeaponLoad);
			this->panelParameters->Controls->Add(this->label13);
			this->panelParameters->Controls->Add(this->txtWCMa);
			this->panelParameters->Controls->Add(this->label14);
			this->panelParameters->Controls->Add(this->label11);
			this->panelParameters->Controls->Add(this->txtPp);
			this->panelParameters->Controls->Add(this->label12);
			this->panelParameters->Controls->Add(this->label9);
			this->panelParameters->Controls->Add(this->txtWd);
			this->panelParameters->Controls->Add(this->label10);
			this->panelParameters->Controls->Add(this->label7);
			this->panelParameters->Controls->Add(this->txtWCLa);
			this->panelParameters->Controls->Add(this->label8);
			this->panelParameters->Controls->Add(this->label5);
			this->panelParameters->Controls->Add(this->txtWCD);
			this->panelParameters->Controls->Add(this->label6);
			this->panelParameters->Controls->Add(this->label4);
			this->panelParameters->Controls->Add(this->txtWm);
			this->panelParameters->Controls->Add(this->label3);
			this->panelParameters->Controls->Add(this->cmbWeapon);
			this->panelParameters->Controls->Add(this->label2);
			this->panelParameters->Location = System::Drawing::Point(12, 26);
			this->panelParameters->Name = L"panelParameters";
			this->panelParameters->Size = System::Drawing::Size(560, 560);
			this->panelParameters->TabIndex = 12;
			this->panelParameters->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMain::panelParameters_Paint);
			this->panelParameters->Resize += gcnew System::EventHandler(this, &frmMain::panelParameters_Resize);
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(13, 541);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(254, 13);
			this->label41->TabIndex = 76;
			this->label41->Text = L"Shortcuts: I- hide/show info   ,   T - hide/show target";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(148, 516);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(42, 13);
			this->label39->TabIndex = 75;
			this->label39->Text = L"(in feet)";
			// 
			// txtPtd
			// 
			this->txtPtd->Location = System::Drawing::Point(102, 513);
			this->txtPtd->Name = L"txtPtd";
			this->txtPtd->Size = System::Drawing::Size(40, 20);
			this->txtPtd->TabIndex = 74;
			this->txtPtd->Text = L"50";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(12, 516);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(87, 13);
			this->label40->TabIndex = 73;
			this->label40->Text = L"Target distance :";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(140, 490);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(80, 13);
			this->label37->TabIndex = 72;
			this->label37->Text = L"(in milliseconds)";
			// 
			// txtPdeltat
			// 
			this->txtPdeltat->Location = System::Drawing::Point(94, 487);
			this->txtPdeltat->Name = L"txtPdeltat";
			this->txtPdeltat->Size = System::Drawing::Size(40, 20);
			this->txtPdeltat->TabIndex = 71;
			this->txtPdeltat->Text = L"0.01";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(12, 490);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(78, 13);
			this->label38->TabIndex = 70;
			this->label38->Text = L"Time step (∆t) :";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(181, 438);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(131, 13);
			this->label35->TabIndex = 69;
			this->label35->Text = L"(in meter/second squared)";
			// 
			// txtPg
			// 
			this->txtPg->Location = System::Drawing::Point(135, 435);
			this->txtPg->Name = L"txtPg";
			this->txtPg->Size = System::Drawing::Size(40, 20);
			this->txtPg->TabIndex = 68;
			this->txtPg->Text = L"9.8";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(12, 438);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(122, 13);
			this->label36->TabIndex = 67;
			this->label36->Text = L"Gravity acceleration (g) :";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(176, 412);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(57, 13);
			this->label33->TabIndex = 66;
			this->label33->Text = L"(in degree)";
			// 
			// txtWtheta
			// 
			this->txtWtheta->Location = System::Drawing::Point(130, 409);
			this->txtWtheta->Name = L"txtWtheta";
			this->txtWtheta->Size = System::Drawing::Size(40, 20);
			this->txtWtheta->TabIndex = 65;
			this->txtWtheta->Text = L"45";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(12, 412);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(112, 13);
			this->label34->TabIndex = 64;
			this->label34->Text = L"Angle of shooting (Ө) :";
			// 
			// cmbWeaponSG
			// 
			this->cmbWeaponSG->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbWeaponSG->FormattingEnabled = true;
			this->cmbWeaponSG->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"Custom", L"Lead", L"Copper", L"Bronze", L"Brass", 
				L"Jacketed soft point", L"Jacketed hollow point"});
			this->cmbWeaponSG->Location = System::Drawing::Point(160, 121);
			this->cmbWeaponSG->Name = L"cmbWeaponSG";
			this->cmbWeaponSG->Size = System::Drawing::Size(145, 21);
			this->cmbWeaponSG->TabIndex = 63;
			this->cmbWeaponSG->SelectedIndexChanged += gcnew System::EventHandler(this, &frmMain::cmbWeaponSG_SelectedIndexChanged);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(357, 124);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(48, 13);
			this->label31->TabIndex = 62;
			this->label31->Text = L"(unitless)";
			// 
			// txtWSG
			// 
			this->txtWSG->Location = System::Drawing::Point(311, 121);
			this->txtWSG->Name = L"txtWSG";
			this->txtWSG->Size = System::Drawing::Size(40, 20);
			this->txtWSG->TabIndex = 61;
			this->txtWSG->TextChanged += gcnew System::EventHandler(this, &frmMain::txtWSG_TextChanged);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(13, 124);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(143, 13);
			this->label32->TabIndex = 60;
			this->label32->Text = L"Bullet\'s specific gravity (SG) :";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(183, 98);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(44, 13);
			this->label29->TabIndex = 59;
			this->label29->Text = L"(in inch)";
			// 
			// txtWL
			// 
			this->txtWL->Location = System::Drawing::Point(136, 95);
			this->txtWL->Name = L"txtWL";
			this->txtWL->Size = System::Drawing::Size(40, 20);
			this->txtWL->TabIndex = 58;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(13, 98);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(117, 13);
			this->label30->TabIndex = 57;
			this->label30->Text = L"Length of cartridge (L) :";
			// 
			// btnWeaponApply
			// 
			this->btnWeaponApply->Location = System::Drawing::Point(311, 6);
			this->btnWeaponApply->Name = L"btnWeaponApply";
			this->btnWeaponApply->Size = System::Drawing::Size(75, 23);
			this->btnWeaponApply->TabIndex = 56;
			this->btnWeaponApply->Text = L"Apply";
			this->btnWeaponApply->UseVisualStyleBackColor = true;
			this->btnWeaponApply->Click += gcnew System::EventHandler(this, &frmMain::btnWeaponApply_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(346, 334);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(47, 13);
			this->label27->TabIndex = 55;
			this->label27->Text = L"(in hertz)";
			// 
			// txtWF1
			// 
			this->txtWF1->Location = System::Drawing::Point(300, 331);
			this->txtWF1->Name = L"txtWF1";
			this->txtWF1->Size = System::Drawing::Size(40, 20);
			this->txtWF1->TabIndex = 54;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(13, 334);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(285, 13);
			this->label28->TabIndex = 53;
			this->label28->Text = L"Inertial frequency of gyroscopic nutation \"Fast-Mode\" (F1) :";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(366, 360);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(47, 13);
			this->label25->TabIndex = 52;
			this->label25->Text = L"(in hertz)";
			// 
			// txtWF2
			// 
			this->txtWF2->Location = System::Drawing::Point(320, 357);
			this->txtWF2->Name = L"txtWF2";
			this->txtWF2->Size = System::Drawing::Size(40, 20);
			this->txtWF2->TabIndex = 51;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(13, 360);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(301, 13);
			this->label26->TabIndex = 50;
			this->label26->Text = L"Inertial frequency of gyroscopic precession \"Slow-Mode\" (F2) :";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(230, 308);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(53, 13);
			this->label23->TabIndex = 49;
			this->label23->Text = L"(in radian)";
			// 
			// txtWGamma0
			// 
			this->txtWGamma0->Location = System::Drawing::Point(184, 305);
			this->txtWGamma0->Name = L"txtWGamma0";
			this->txtWGamma0->Size = System::Drawing::Size(40, 20);
			this->txtWGamma0->TabIndex = 48;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(13, 308);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(165, 13);
			this->label24->TabIndex = 47;
			this->label24->Text = L"Size of apparent wind offset (γ0) :";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(172, 282);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(53, 13);
			this->label21->TabIndex = 46;
			this->label21->Text = L"(in radian)";
			// 
			// txtWDelta0
			// 
			this->txtWDelta0->Location = System::Drawing::Point(126, 279);
			this->txtWDelta0->Name = L"txtWDelta0";
			this->txtWDelta0->Size = System::Drawing::Size(40, 20);
			this->txtWDelta0->TabIndex = 45;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(13, 282);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(107, 13);
			this->label22->TabIndex = 44;
			this->label22->Text = L"Size of nutation (δ0) :";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(165, 386);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(98, 13);
			this->label19->TabIndex = 43;
			this->label19->Text = L"(in feet per second)";
			// 
			// txtWv
			// 
			this->txtWv->Location = System::Drawing::Point(119, 383);
			this->txtWv->Name = L"txtWv";
			this->txtWv->Size = System::Drawing::Size(40, 20);
			this->txtWv->TabIndex = 42;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(13, 386);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(100, 13);
			this->label20->TabIndex = 41;
			this->label20->Text = L"Muzzle velocity (v) :";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(319, 256);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(105, 13);
			this->label17->TabIndex = 40;
			this->label17->Text = L"(in slug-feet squared)";
			// 
			// txtWIy
			// 
			this->txtWIy->Location = System::Drawing::Point(273, 253);
			this->txtWIy->Name = L"txtWIy";
			this->txtWIy->Size = System::Drawing::Size(40, 20);
			this->txtWIy->TabIndex = 39;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(13, 256);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(257, 13);
			this->label18->TabIndex = 38;
			this->label18->Text = L"Moment of inertia of the bullet about a cross-axis (Iy) :";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(319, 230);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(105, 13);
			this->label15->TabIndex = 37;
			this->label15->Text = L"(in slug-feet squared)";
			// 
			// txtWIx
			// 
			this->txtWIx->Location = System::Drawing::Point(273, 227);
			this->txtWIx->Name = L"txtWIx";
			this->txtWIx->Size = System::Drawing::Size(40, 20);
			this->txtWIx->TabIndex = 36;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(13, 230);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(255, 13);
			this->label16->TabIndex = 35;
			this->label16->Text = L"Moment of inertia of the bullet about its spin-axis (Ix) :";
			// 
			// btnWeaponLoad
			// 
			this->btnWeaponLoad->Enabled = false;
			this->btnWeaponLoad->Location = System::Drawing::Point(230, 6);
			this->btnWeaponLoad->Name = L"btnWeaponLoad";
			this->btnWeaponLoad->Size = System::Drawing::Size(75, 23);
			this->btnWeaponLoad->TabIndex = 34;
			this->btnWeaponLoad->Text = L"Load";
			this->btnWeaponLoad->UseVisualStyleBackColor = true;
			this->btnWeaponLoad->Click += gcnew System::EventHandler(this, &frmMain::btnWeaponLoad_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(346, 204);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(48, 13);
			this->label13->TabIndex = 33;
			this->label13->Text = L"(unitless)";
			// 
			// txtWCMa
			// 
			this->txtWCMa->Location = System::Drawing::Point(300, 201);
			this->txtWCMa->Name = L"txtWCMa";
			this->txtWCMa->Size = System::Drawing::Size(40, 20);
			this->txtWCMa->TabIndex = 32;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(13, 204);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(281, 13);
			this->label14->TabIndex = 31;
			this->label14->Text = L"Coefficient for determining the overturning moment (CMα) :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(182, 464);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(116, 13);
			this->label11->TabIndex = 30;
			this->label11->Text = L"(in slugs per cubic foot)";
			// 
			// txtPp
			// 
			this->txtPp->Location = System::Drawing::Point(136, 461);
			this->txtPp->Name = L"txtPp";
			this->txtPp->Size = System::Drawing::Size(40, 20);
			this->txtPp->TabIndex = 29;
			this->txtPp->Text = L"0.0023769";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(13, 464);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(122, 13);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Atmospheric density (ρ) :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(206, 72);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(42, 13);
			this->label9->TabIndex = 27;
			this->label9->Text = L"(in feet)";
			// 
			// txtWd
			// 
			this->txtWd->Location = System::Drawing::Point(160, 69);
			this->txtWd->Name = L"txtWd";
			this->txtWd->Size = System::Drawing::Size(40, 20);
			this->txtWd->TabIndex = 26;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(13, 72);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(141, 13);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Caliber of the fired bullet (d) :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(182, 178);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 13);
			this->label7->TabIndex = 24;
			this->label7->Text = L"(unitless)";
			// 
			// txtWCLa
			// 
			this->txtWCLa->Location = System::Drawing::Point(136, 175);
			this->txtWCLa->Name = L"txtWCLa";
			this->txtWCLa->Size = System::Drawing::Size(40, 20);
			this->txtWCLa->TabIndex = 23;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(13, 178);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(117, 13);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Coefficient of lift (CLα) :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(251, 152);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"(unitless)";
			// 
			// txtWCD
			// 
			this->txtWCD->Location = System::Drawing::Point(205, 149);
			this->txtWCD->Name = L"txtWCD";
			this->txtWCD->Size = System::Drawing::Size(40, 20);
			this->txtWCD->TabIndex = 20;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 152);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(186, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Coefficient of aerodynamic drag (CD) :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(148, 46);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"(in slugs)";
			// 
			// txtWm
			// 
			this->txtWm->Location = System::Drawing::Point(102, 43);
			this->txtWm->Name = L"txtWm";
			this->txtWm->Size = System::Drawing::Size(40, 20);
			this->txtWm->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Bullet mass (m) :";
			// 
			// cmbWeapon
			// 
			this->cmbWeapon->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbWeapon->FormattingEnabled = true;
			this->cmbWeapon->Location = System::Drawing::Point(103, 7);
			this->cmbWeapon->Name = L"cmbWeapon";
			this->cmbWeapon->Size = System::Drawing::Size(121, 21);
			this->cmbWeapon->TabIndex = 14;
			this->cmbWeapon->SelectedIndexChanged += gcnew System::EventHandler(this, &frmMain::cmbWeapon_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Select weapon :";
			// 
			// panelyvp
			// 
			this->panelyvp->Location = System::Drawing::Point(12, 26);
			this->panelyvp->Name = L"panelyvp";
			this->panelyvp->Size = System::Drawing::Size(560, 560);
			this->panelyvp->TabIndex = 13;
			this->panelyvp->Enter += gcnew System::EventHandler(this, &frmMain::panelyvp_Enter);
			this->panelyvp->Leave += gcnew System::EventHandler(this, &frmMain::panelyvp_Leave);
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(584, 598);
			this->Controls->Add(this->menuStrip);
			this->Controls->Add(this->panelyvp);
			this->Controls->Add(this->panelShooting);
			this->Controls->Add(this->panelParameters);
			this->Controls->Add(this->panelFigures);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip;
			this->MaximizeBox = false;
			this->Name = L"frmMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Weaponary Manufacturer";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmMain::frmMain_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load);
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->panelFigures->ResumeLayout(false);
			this->panelFigures->PerformLayout();
			this->panelParameters->ResumeLayout(false);
			this->panelParameters->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Engine^ mainEngine;

	private: System::Void frmMain_Load(System::Object^  sender, System::EventArgs^  e) {
				 mainEngine = gcnew Engine(panelShooting->Handle);
				 
				 //Loading weapons list
				 try
				 {
					 IO::DirectoryInfo^ DI = gcnew IO::DirectoryInfo("Weapons"); 
					 for each(IO::FileInfo^ file in DI->GetFiles())
						 if (file->Extension->ToUpper() == ".CFG")
							 cmbWeapon->Items->Add(IO::Path::GetFileNameWithoutExtension(file->Name));
					 DI = nullptr;	
				 }
				 catch (IO::DirectoryNotFoundException^ ex)
				 {
					 MessageBox::Show(ex->Message, "Critical error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					 Application::Exit();
				 }
				 
				 //done loading weapons
				 yvpTimer->Tag = "0.0";			 }

private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }

private: System::Void txtTime_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			 double t = Convert::ToDouble(txtTime->Text);
			 lblPitch->Text = "Pitch = " + mainEngine->pitch(t);
			 lblYaw->Text = "Yaw = " + mainEngine->yaw(t);
			 lblAlpha->Text = "Alpha = " + mainEngine->alpha(t);
			 lblFD->Text = "Fd = " + mainEngine->Fd(t);
			 lblFL->Text = "Fl = " + mainEngine->Fl(t);
			 lblD->Text = "D = " + mainEngine->D(t);
			 lblTwistRate->Text = "Twist Rate = " + mainEngine->twist_rate();
			 lblRPM->Text = "RPM = " + mainEngine->RPM(t);
		 }
private: System::Void figuresToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 panelFigures->BringToFront();
			 ActiveControl = panelFigures;
		 }
private: System::Void simulationToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void txtTime_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void displayTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
			 mainEngine->display();
			 mainEngine->swapBuffers();
		 }
private: System::Void menuStrip_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }
private: System::Void panelSimulation_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 mainEngine->mouseMove(e);
		 }
private: System::Void panelSimulation_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 mainEngine->mouseDown(e);
		 }
private: System::Void panelSimulation_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 mainEngine->mouseUp(e);
		 }
private: System::Void panelSimulation_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 mainEngine->mouseClick(e);
		 }



private: System::Void yvpTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
			 int x = panelyvp->Width / 2;
			 int y = panelyvp->Height / 2;

			 x += Convert::ToInt32(mainEngine->yaw(Convert::ToDouble(yvpTimer->Tag))*10);
			 y -= Convert::ToInt32(mainEngine->pitch(Convert::ToDouble(yvpTimer->Tag))*10);

			 yvpTimer->Tag = Convert::ToDouble(yvpTimer->Tag) + mainEngine->deltat;

			 panelyvp->CreateGraphics()->DrawEllipse(Pens::Black, x-1, y-1, 2, 2);
		 }

		

private: System::Void frmMain_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 if (e->CloseReason == CloseReason::ApplicationExitCall ||  e->CloseReason == CloseReason::WindowsShutDown) 
				 e->Cancel = false;
			 else
				 e->Cancel = (MessageBox::Show("Are you sure you want to exit ?", "Confirmation", MessageBoxButtons::YesNo, System::Windows::Forms::MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No);
		 }

private: System::Void panelSimulation_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {
			 Windows::Forms::MessageBox::Show("L");
		 }

private: System::Void panelSimulation_PreviewKeyDown(System::Object^  sender, System::Windows::Forms::PreviewKeyDownEventArgs^  e) {
			 mainEngine->previewKeyDown(e);
		 }

private: System::Void parametersToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 panelParameters->BringToFront();
			 ActiveControl = panelParameters;
		 }

private: System::Void btnWeaponLoad_Click(System::Object^  sender, System::EventArgs^  e) {
			 IO::StreamReader^ sr;
			 try
			 {
				 sr = gcnew IO::StreamReader("Weapons\\" + cmbWeapon->Text + ".cfg");
				 txtWm->Text = sr->ReadLine();
				 txtWd->Text = sr->ReadLine();
				 txtWCD->Text = sr->ReadLine();
				 txtWL->Text = sr->ReadLine();
				 cmbWeaponSG->SelectedIndex = 0; txtWSG->Text = sr->ReadLine();
				 txtWCLa->Text = sr->ReadLine();
				 txtWCMa->Text = sr->ReadLine();
				 txtWIx->Text = sr->ReadLine();
				 txtWIy->Text = sr->ReadLine();
				 txtWDelta0->Text = sr->ReadLine();
				 txtWGamma0->Text = sr->ReadLine();
				 txtWF1->Text = sr->ReadLine();
				 txtWF2->Text = sr->ReadLine();
				 txtWv->Text = sr->ReadLine();
				 sr->Close();
				 sr = nullptr;
			 }
			 catch (Exception^ ex)
			 {
				 sr->Close();
				 sr = nullptr;
				 MessageBox::Show(ex->Message, "Weapon file error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				 cmbWeapon->SelectedIndex = -1;
				 txtWm->Text = "";
				 txtWd->Text = "";
				 txtWCD->Text = "";
				 txtWL->Text = "";
				 cmbWeaponSG->SelectedIndex = 0; txtWSG->Text = "";
				 txtWCLa->Text = "";
				 txtWCMa->Text = "";
				 txtWIx->Text = "";
				 txtWIy->Text = "";
				 txtWDelta0->Text = "";
				 txtWGamma0->Text = "";
				 txtWF1->Text = "";
				 txtWF2->Text = "";
				 txtWv->Text = "";
			 }
		 }
private: System::Void cmbWeapon_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 btnWeaponLoad->Enabled = (cmbWeapon->SelectedIndex >= 0);
		 }
private: System::Void btnWeaponApply_Click(System::Object^  sender, System::EventArgs^  e) {
			 mainEngine->setm(Convert::ToDouble(txtWm->Text));
			 mainEngine->setd(Convert::ToDouble(txtWd->Text));
			 mainEngine->setCD(Convert::ToDouble(txtWCD->Text));
			 mainEngine->setl(Convert::ToDouble(txtWL->Text));
			 mainEngine->setSG(Convert::ToDouble(txtWSG->Text));
			 mainEngine->setCLa(Convert::ToDouble(txtWCLa->Text));
			 mainEngine->setCMa(Convert::ToDouble(txtWCMa->Text));
			 mainEngine->setIx(Convert::ToDouble(txtWIx->Text));
			 mainEngine->setIy(Convert::ToDouble(txtWIy->Text));
			 mainEngine->setDelta0(Convert::ToDouble(txtWDelta0->Text));
			 mainEngine->setGamma0(Convert::ToDouble(txtWGamma0->Text));
			 mainEngine->setF1(Convert::ToDouble(txtWF1->Text));
			// mainEngine->setF2(Convert::ToDouble(txtWF2->Text));
//			 mainEngine->settheta(Convert::ToDouble(txtWtheta->Text));
			 mainEngine->setv(Convert::ToDouble(txtWv->Text), Convert::ToDouble(txtWtheta->Text));
			 mainEngine->setg(Convert::ToDouble(txtPg->Text));
			 mainEngine->setp(Convert::ToDouble(txtPp->Text));
			 mainEngine->setdeltat(Convert::ToDouble(txtPdeltat->Text));
			 mainEngine->setTargetx(Convert::ToDouble(txtPtd->Text));
		 }
private: System::Void panelFigures_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void cmbWeaponSG_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 switch (cmbWeaponSG->SelectedIndex)
			 {
			 case 1:
				 txtWSG->Text = "10.9";
				 break;
			 case 2:
				 txtWSG->Text = "8.89";
				 break;
			 case 3:
				 txtWSG->Text = "8.78";
				 break;
			 case 4:
				 txtWSG->Text = "8.4";
				 break;
			 case 5:
				 txtWSG->Text = "10.3";
				 break;
			 case 6:
				 txtWSG->Text = "10.6";
				 break;
			 }
		 }
private: System::Void txtWSG_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 cmbWeaponSG->SelectedIndex = 0;
		 }
private: System::Void panelParameters_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void shootingToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 panelShooting->BringToFront();
			 ActiveControl = panelShooting;
			 mainEngine->initShooting();
			 mainEngine->wid = 1;
		 }
private: System::Void yawVsPitchToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 panelyvp->BringToFront();
			 ActiveControl = panelyvp;
			 panelyvp->CreateGraphics()->DrawLine(Pens::Red, 0, panelyvp->Height / 2, panelyvp->Width,  panelyvp->Height / 2);
			 panelyvp->CreateGraphics()->DrawLine(Pens::Red, panelyvp->Width / 2, 0, panelyvp->Width / 2,  panelyvp->Height);
			 panelyvp->Tag = "0.0";
		 }
private: System::Void panelShooting_Enter(System::Object^  sender, System::EventArgs^  e) {
			 displayTimer->Start();
		 }
private: System::Void panelShooting_Leave(System::Object^  sender, System::EventArgs^  e) {
			 displayTimer->Stop();
		 }
private: System::Void panelyvp_Enter(System::Object^  sender, System::EventArgs^  e) {
			 yvpTimer->Start();
		 }
private: System::Void panelyvp_Leave(System::Object^  sender, System::EventArgs^  e) {
			 yvpTimer->Stop();
		 }
private: System::Void toolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
			 panelShooting->BringToFront();
			 ActiveControl = panelShooting;
			 mainEngine->wid = 0;
		 }
private: System::Void panelParameters_Resize(System::Object^  sender, System::EventArgs^  e) {
		 }


};
}

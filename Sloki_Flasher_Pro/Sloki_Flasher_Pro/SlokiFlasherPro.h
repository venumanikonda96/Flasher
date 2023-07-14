#pragma once

namespace SlokiFlasherPro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SlokiFlasherPro
	/// </summary>
	public ref class SlokiFlasherPro : public System::Windows::Forms::Form
	{
	public:
		SlokiFlasherPro(void)
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
		~SlokiFlasherPro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ ConfigTab;
	protected:

	protected:

	protected:

	protected:


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ loadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exportToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ interfaceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cANToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ uSBToolStripMenuItem;
	private: System::Windows::Forms::TabPage^ FlashTab;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ userManualToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ contactToolStripMenuItem;




	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ProgressBar^ progressBarID;








	private: System::Windows::Forms::DataGridView^ dataGridView2;









	private: System::Windows::Forms::Panel^ panel1;










	private: System::Windows::Forms::TabControl^ ConfigTabs;
	private: System::Windows::Forms::TabPage^ DATA_TAB;


	private: System::Windows::Forms::TabPage^ COMMUNICATION_TAB;


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::DataGridView^ dataGridView1;












private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox3;

private: System::Windows::Forms::DataGridViewCheckBoxColumn^ SelectDataBlockColomn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ TypeDataBlocksColomn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ DataBlockDataBlocksColomn;
private: System::Windows::Forms::DataGridViewButtonColumn^ ClickDataBlocksColomn;
private: System::Windows::Forms::DataGridViewButtonColumn^ ChecksumDataBlockColomn;
private: System::Windows::Forms::DataGridViewButtonColumn^ SignatureDataBlockColomn;









private: System::Windows::Forms::DataGridViewTextBoxColumn^ Timestamp;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Discription;
private: System::Windows::Forms::DataGridView^ SegmentsDataGrid;





private: System::Windows::Forms::SplitContainer^ splitContainer1;
private: System::Windows::Forms::ToolStripPanel^ BottomToolStripPanel;
private: System::Windows::Forms::ToolStripPanel^ TopToolStripPanel;
private: System::Windows::Forms::ToolStripPanel^ RightToolStripPanel;
private: System::Windows::Forms::ToolStripPanel^ LeftToolStripPanel;
private: System::Windows::Forms::ToolStripContentPanel^ ContentPanel;
private: System::Windows::Forms::SplitContainer^ splitContainer2;





private: System::Windows::Forms::SplitContainer^ splitContainer3;

private: System::Windows::Forms::DataGridViewTextBoxColumn^ StatusColomn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ StartAddressColomn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Length;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Type;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ DataBlock_Segment;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;



private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
private: System::Windows::Forms::ToolStrip^ toolStrip1;
private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ File_Details_DataGridItem;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ FileLocation_Details_DataGridItem;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Size_Details_DataGridItem;






private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::StatusStrip^ statusStrip1;
private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
private: System::Windows::Forms::ToolStripProgressBar^ toolStripProgressBar1;
private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;






























































































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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle22 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle23 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle24 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle25 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle26 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SlokiFlasherPro::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle27 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle28 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->ConfigTab = (gcnew System::Windows::Forms::TabControl());
			this->FlashTab = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Timestamp = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Discription = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SegmentsDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->StatusColomn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->StartAddressColomn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Length = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DataBlock_Segment = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->progressBarID = (gcnew System::Windows::Forms::ProgressBar());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->ConfigTabs = (gcnew System::Windows::Forms::TabControl());
			this->DATA_TAB = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->SelectDataBlockColomn = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->TypeDataBlocksColomn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DataBlockDataBlocksColomn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ClickDataBlocksColomn = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->ChecksumDataBlockColomn = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->SignatureDataBlockColomn = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->File_Details_DataGridItem = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FileLocation_Details_DataGridItem = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Size_Details_DataGridItem = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->COMMUNICATION_TAB = (gcnew System::Windows::Forms::TabPage());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->interfaceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cANToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uSBToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->userManualToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->BottomToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
			this->TopToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
			this->RightToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
			this->LeftToolStripPanel = (gcnew System::Windows::Forms::ToolStripPanel());
			this->ContentPanel = (gcnew System::Windows::Forms::ToolStripContentPanel());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->ConfigTab->SuspendLayout();
			this->FlashTab->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SegmentsDataGrid))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->ConfigTabs->SuspendLayout();
			this->DATA_TAB->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->COMMUNICATION_TAB->SuspendLayout();
			this->panel2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// ConfigTab
			// 
			this->ConfigTab->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ConfigTab->Controls->Add(this->FlashTab);
			this->ConfigTab->Controls->Add(this->tabPage2);
			this->ConfigTab->HotTrack = true;
			this->ConfigTab->ImeMode = System::Windows::Forms::ImeMode::AlphaFull;
			this->ConfigTab->ItemSize = System::Drawing::Size(60, 22);
			this->ConfigTab->Location = System::Drawing::Point(0, 26);
			this->ConfigTab->Margin = System::Windows::Forms::Padding(10);
			this->ConfigTab->Name = L"ConfigTab";
			this->ConfigTab->Padding = System::Drawing::Point(35, 4);
			this->ConfigTab->SelectedIndex = 0;
			this->ConfigTab->Size = System::Drawing::Size(696, 560);
			this->ConfigTab->TabIndex = 0;
			// 
			// FlashTab
			// 
			this->FlashTab->BackColor = System::Drawing::Color::White;
			this->FlashTab->Controls->Add(this->panel1);
			this->FlashTab->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->FlashTab->ForeColor = System::Drawing::Color::Coral;
			this->FlashTab->Location = System::Drawing::Point(4, 26);
			this->FlashTab->Name = L"FlashTab";
			this->FlashTab->Padding = System::Windows::Forms::Padding(3);
			this->FlashTab->Size = System::Drawing::Size(688, 530);
			this->FlashTab->TabIndex = 0;
			this->FlashTab->Text = L"Flash";
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->AutoSize = true;
			this->panel1->Controls->Add(this->splitContainer3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->progressBarID);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(682, 524);
			this->panel1->TabIndex = 8;
			// 
			// splitContainer3
			// 
			this->splitContainer3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->splitContainer3->BackColor = System::Drawing::Color::White;
			this->splitContainer3->Location = System::Drawing::Point(0, 55);
			this->splitContainer3->Name = L"splitContainer3";
			this->splitContainer3->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->splitContainer1);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->toolStrip1);
			this->splitContainer3->Size = System::Drawing::Size(675, 466);
			this->splitContainer3->SplitterDistance = 436;
			this->splitContainer3->TabIndex = 13;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->dataGridView2);
			this->splitContainer1->Panel1->Controls->Add(this->textBox1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->textBox2);
			this->splitContainer1->Panel2->Controls->Add(this->SegmentsDataGrid);
			this->splitContainer1->Size = System::Drawing::Size(675, 436);
			this->splitContainer1->SplitterDistance = 318;
			this->splitContainer1->TabIndex = 9;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Timestamp,
					this->Discription
			});
			this->dataGridView2->GridColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->dataGridView2->Location = System::Drawing::Point(3, 23);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Size = System::Drawing::Size(312, 401);
			this->dataGridView2->TabIndex = 5;
			// 
			// Timestamp
			// 
			this->Timestamp->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Timestamp->FillWeight = 81.21828F;
			this->Timestamp->HeaderText = L"Timestamp";
			this->Timestamp->Name = L"Timestamp";
			this->Timestamp->ReadOnly = true;
			this->Timestamp->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Discription
			// 
			this->Discription->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Discription->FillWeight = 118.7817F;
			this->Discription->HeaderText = L"Discription";
			this->Discription->Name = L"Discription";
			this->Discription->ReadOnly = true;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(0, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(315, 16);
			this->textBox1->TabIndex = 10;
			this->textBox1->Text = L"Operational Stages:";
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(3, 3);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(351, 16);
			this->textBox2->TabIndex = 11;
			this->textBox2->Text = L"Segments:";
			// 
			// SegmentsDataGrid
			// 
			this->SegmentsDataGrid->AllowUserToAddRows = false;
			this->SegmentsDataGrid->AllowUserToDeleteRows = false;
			this->SegmentsDataGrid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->SegmentsDataGrid->BackgroundColor = System::Drawing::SystemColors::Window;
			this->SegmentsDataGrid->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->SegmentsDataGrid->ColumnHeadersHeight = 21;
			this->SegmentsDataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->StatusColomn,
					this->StartAddressColomn, this->Length, this->Type, this->DataBlock_Segment
			});
			this->SegmentsDataGrid->GridColor = System::Drawing::SystemColors::InactiveCaption;
			this->SegmentsDataGrid->Location = System::Drawing::Point(3, 23);
			this->SegmentsDataGrid->Margin = System::Windows::Forms::Padding(3, 50, 3, 3);
			this->SegmentsDataGrid->Name = L"SegmentsDataGrid";
			this->SegmentsDataGrid->ReadOnly = true;
			this->SegmentsDataGrid->RowHeadersVisible = false;
			this->SegmentsDataGrid->Size = System::Drawing::Size(350, 401);
			this->SegmentsDataGrid->TabIndex = 4;
			// 
			// StatusColomn
			// 
			this->StatusColomn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			dataGridViewCellStyle22->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			this->StatusColomn->DefaultCellStyle = dataGridViewCellStyle22;
			this->StatusColomn->FillWeight = 55.64281F;
			this->StatusColomn->HeaderText = L"Status";
			this->StatusColomn->MinimumWidth = 9;
			this->StatusColomn->Name = L"StatusColomn";
			this->StatusColomn->ReadOnly = true;
			this->StatusColomn->Width = 45;
			// 
			// StartAddressColomn
			// 
			this->StartAddressColomn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle23->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			this->StartAddressColomn->DefaultCellStyle = dataGridViewCellStyle23;
			this->StartAddressColomn->FillWeight = 125.084F;
			this->StartAddressColomn->HeaderText = L"StartAddress";
			this->StartAddressColomn->Name = L"StartAddressColomn";
			this->StartAddressColomn->ReadOnly = true;
			// 
			// Length
			// 
			this->Length->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle24->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			this->Length->DefaultCellStyle = dataGridViewCellStyle24;
			this->Length->FillWeight = 81.78505F;
			this->Length->HeaderText = L"Length";
			this->Length->Name = L"Length";
			this->Length->ReadOnly = true;
			// 
			// Type
			// 
			this->Type->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle25->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			this->Type->DefaultCellStyle = dataGridViewCellStyle25;
			this->Type->FillWeight = 56.60601F;
			this->Type->HeaderText = L"Type";
			this->Type->Name = L"Type";
			this->Type->ReadOnly = true;
			// 
			// DataBlock_Segment
			// 
			this->DataBlock_Segment->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle26->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			this->DataBlock_Segment->DefaultCellStyle = dataGridViewCellStyle26;
			this->DataBlock_Segment->FillWeight = 180.8822F;
			this->DataBlock_Segment->HeaderText = L"DataBlock | Segment";
			this->DataBlock_Segment->Name = L"DataBlock_Segment";
			this->DataBlock_Segment->ReadOnly = true;
			// 
			// toolStrip1
			// 
			this->toolStrip1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripButton1,
					this->toolStripButton2
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 1);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(675, 25);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->ForeColor = System::Drawing::Color::DimGray;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(90, 22);
			this->toolStripButton1->Text = L"Information";
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->ForeColor = System::Drawing::Color::DimGray;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(54, 22);
			this->toolStripButton2->Text = L"Trace";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Location = System::Drawing::Point(569, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 44);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Flash";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// progressBarID
			// 
			this->progressBarID->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->progressBarID->BackColor = System::Drawing::Color::White;
			this->progressBarID->Cursor = System::Windows::Forms::Cursors::Default;
			this->progressBarID->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->progressBarID->Location = System::Drawing::Point(0, 9);
			this->progressBarID->Name = L"progressBarID";
			this->progressBarID->Size = System::Drawing::Size(563, 25);
			this->progressBarID->TabIndex = 2;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->ConfigTabs);
			this->tabPage2->Location = System::Drawing::Point(4, 26);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(688, 530);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Config";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// ConfigTabs
			// 
			this->ConfigTabs->AccessibleRole = System::Windows::Forms::AccessibleRole::Table;
			this->ConfigTabs->Alignment = System::Windows::Forms::TabAlignment::Left;
			this->ConfigTabs->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ConfigTabs->Controls->Add(this->DATA_TAB);
			this->ConfigTabs->Controls->Add(this->COMMUNICATION_TAB);
			this->ConfigTabs->ImeMode = System::Windows::Forms::ImeMode::AlphaFull;
			this->ConfigTabs->ItemSize = System::Drawing::Size(40, 25);
			this->ConfigTabs->Location = System::Drawing::Point(-4, 6);
			this->ConfigTabs->Multiline = true;
			this->ConfigTabs->Name = L"ConfigTabs";
			this->ConfigTabs->Padding = System::Drawing::Point(40, 4);
			this->ConfigTabs->SelectedIndex = 0;
			this->ConfigTabs->Size = System::Drawing::Size(696, 528);
			this->ConfigTabs->TabIndex = 0;
			// 
			// DATA_TAB
			// 
			this->DATA_TAB->BackColor = System::Drawing::Color::White;
			this->DATA_TAB->Controls->Add(this->splitContainer2);
			this->DATA_TAB->Location = System::Drawing::Point(29, 4);
			this->DATA_TAB->Name = L"DATA_TAB";
			this->DATA_TAB->Padding = System::Windows::Forms::Padding(3);
			this->DATA_TAB->Size = System::Drawing::Size(663, 520);
			this->DATA_TAB->TabIndex = 0;
			this->DATA_TAB->Text = L"Data";
			this->DATA_TAB->ToolTipText = L"Open and upload the hex file";
			// 
			// splitContainer2
			// 
			this->splitContainer2->BackColor = System::Drawing::Color::White;
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(3, 3);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->textBox3);
			this->splitContainer2->Panel1->Controls->Add(this->dataGridView1);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->dataGridView3);
			this->splitContainer2->Panel2->Controls->Add(this->textBox5);
			this->splitContainer2->Size = System::Drawing::Size(657, 514);
			this->splitContainer2->SplitterDistance = 302;
			this->splitContainer2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0), true));
			this->textBox3->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textBox3->Location = System::Drawing::Point(16, 3);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox3->ShortcutsEnabled = false;
			this->textBox3->Size = System::Drawing::Size(627, 16);
			this->textBox3->TabIndex = 0;
			this->textBox3->Text = L"DataBlocks";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			dataGridViewCellStyle27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle27;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->SelectDataBlockColomn,
					this->TypeDataBlocksColomn, this->DataBlockDataBlocksColomn, this->ClickDataBlocksColomn, this->ChecksumDataBlockColomn, this->SignatureDataBlockColomn
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->Location = System::Drawing::Point(40, 25);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(603, 230);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SlokiFlasherPro::dataGridView1_CellContentClick);
			// 
			// SelectDataBlockColomn
			// 
			this->SelectDataBlockColomn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->SelectDataBlockColomn->Frozen = true;
			this->SelectDataBlockColomn->HeaderText = L"Select";
			this->SelectDataBlockColomn->Name = L"SelectDataBlockColomn";
			this->SelectDataBlockColomn->ReadOnly = true;
			this->SelectDataBlockColomn->Width = 98;
			// 
			// TypeDataBlocksColomn
			// 
			this->TypeDataBlocksColomn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->TypeDataBlocksColomn->HeaderText = L"Type";
			this->TypeDataBlocksColomn->Name = L"TypeDataBlocksColomn";
			this->TypeDataBlocksColomn->ReadOnly = true;
			// 
			// DataBlockDataBlocksColomn
			// 
			this->DataBlockDataBlocksColomn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->DataBlockDataBlocksColomn->HeaderText = L"DataBlock";
			this->DataBlockDataBlocksColomn->Name = L"DataBlockDataBlocksColomn";
			this->DataBlockDataBlocksColomn->ReadOnly = true;
			// 
			// ClickDataBlocksColomn
			// 
			this->ClickDataBlocksColomn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ClickDataBlocksColomn->HeaderText = L"Click";
			this->ClickDataBlocksColomn->Name = L"ClickDataBlocksColomn";
			this->ClickDataBlocksColomn->ReadOnly = true;
			// 
			// ChecksumDataBlockColomn
			// 
			this->ChecksumDataBlockColomn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ChecksumDataBlockColomn->HeaderText = L"Checksum";
			this->ChecksumDataBlockColomn->Name = L"ChecksumDataBlockColomn";
			this->ChecksumDataBlockColomn->ReadOnly = true;
			// 
			// SignatureDataBlockColomn
			// 
			this->SignatureDataBlockColomn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->SignatureDataBlockColomn->HeaderText = L"Signature";
			this->SignatureDataBlockColomn->Name = L"SignatureDataBlockColomn";
			this->SignatureDataBlockColomn->ReadOnly = true;
			// 
			// dataGridView3
			// 
			dataGridViewCellStyle28->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle28->SelectionBackColor = System::Drawing::Color::Cyan;
			dataGridViewCellStyle28->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->dataGridView3->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle28;
			this->dataGridView3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView3->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
			this->dataGridView3->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->ColumnHeadersVisible = false;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->File_Details_DataGridItem,
					this->FileLocation_Details_DataGridItem, this->Size_Details_DataGridItem
			});
			this->dataGridView3->Location = System::Drawing::Point(40, 25);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->Size = System::Drawing::Size(603, 154);
			this->dataGridView3->TabIndex = 4;
			// 
			// File_Details_DataGridItem
			// 
			this->File_Details_DataGridItem->HeaderText = L"File Name";
			this->File_Details_DataGridItem->Name = L"File_Details_DataGridItem";
			// 
			// FileLocation_Details_DataGridItem
			// 
			this->FileLocation_Details_DataGridItem->HeaderText = L"File Location ";
			this->FileLocation_Details_DataGridItem->Name = L"FileLocation_Details_DataGridItem";
			// 
			// Size_Details_DataGridItem
			// 
			this->Size_Details_DataGridItem->HeaderText = L"Size";
			this->Size_Details_DataGridItem->Name = L"Size_Details_DataGridItem";
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox5->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0), true));
			this->textBox5->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textBox5->Location = System::Drawing::Point(16, 3);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox5->ShortcutsEnabled = false;
			this->textBox5->Size = System::Drawing::Size(627, 16);
			this->textBox5->TabIndex = 3;
			this->textBox5->Text = L"Details";
			// 
			// COMMUNICATION_TAB
			// 
			this->COMMUNICATION_TAB->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->COMMUNICATION_TAB->Controls->Add(this->panel2);
			this->COMMUNICATION_TAB->Controls->Add(this->textBox4);
			this->COMMUNICATION_TAB->Controls->Add(this->tableLayoutPanel1);
			this->COMMUNICATION_TAB->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->COMMUNICATION_TAB->Location = System::Drawing::Point(29, 4);
			this->COMMUNICATION_TAB->Name = L"COMMUNICATION_TAB";
			this->COMMUNICATION_TAB->Padding = System::Windows::Forms::Padding(3);
			this->COMMUNICATION_TAB->Size = System::Drawing::Size(663, 520);
			this->COMMUNICATION_TAB->TabIndex = 1;
			this->COMMUNICATION_TAB->Text = L"Communication";
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->comboBox1);
			this->panel2->Location = System::Drawing::Point(113, 207);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(167, 40);
			this->panel2->TabIndex = 7;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Dock = System::Windows::Forms::DockStyle::Top;
			this->label7->Location = System::Drawing::Point(0, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(83, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Select Baudrate";
			// 
			// comboBox1
			// 
			this->comboBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"125Kbps", L"250Kbps", L"500Kbps", L"1000Kbps" });
			this->comboBox1->Location = System::Drawing::Point(0, 19);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(167, 21);
			this->comboBox1->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Enabled = false;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0), true));
			this->textBox4->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textBox4->Location = System::Drawing::Point(54, 50);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox4->ShortcutsEnabled = false;
			this->textBox4->Size = System::Drawing::Size(516, 16);
			this->textBox4->TabIndex = 4;
			this->textBox4->Text = L"CAN Device settings";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				41.48936F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				58.51064F)));
			this->tableLayoutPanel1->Controls->Add(this->label6, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label4, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label5, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(113, 84);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 27)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(378, 93);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Dock = System::Windows::Forms::DockStyle::Left;
			this->label6->Location = System::Drawing::Point(161, 9);
			this->label6->Margin = System::Windows::Forms::Padding(3, 7, 3, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(27, 22);
			this->label6->TabIndex = 4;
			this->label6->Text = L"= 0x";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Left;
			this->label4->Location = System::Drawing::Point(161, 71);
			this->label4->Margin = System::Windows::Forms::Padding(3, 7, 3, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"= 0x";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Dock = System::Windows::Forms::DockStyle::Left;
			this->label5->Location = System::Drawing::Point(161, 40);
			this->label5->Margin = System::Windows::Forms::Padding(3, 7, 3, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 22);
			this->label5->TabIndex = 4;
			this->label5->Text = L"= 0x";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Location = System::Drawing::Point(5, 71);
			this->label1->Margin = System::Windows::Forms::Padding(3, 7, 3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ECU CAN ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Location = System::Drawing::Point(5, 40);
			this->label3->Margin = System::Windows::Forms::Padding(3, 7, 3, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(148, 22);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Functional CAN ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Location = System::Drawing::Point(5, 9);
			this->label2->Margin = System::Windows::Forms::Padding(3, 7, 3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Tester CAN ID";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->toolToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(696, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->newToolStripMenuItem,
					this->loadToolStripMenuItem, this->saveToolStripMenuItem, this->exportToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"newToolStripMenuItem.Image")));
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(108, 22);
			this->newToolStripMenuItem->Text = L"New";
			// 
			// loadToolStripMenuItem
			// 
			this->loadToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loadToolStripMenuItem.Image")));
			this->loadToolStripMenuItem->Name = L"loadToolStripMenuItem";
			this->loadToolStripMenuItem->Size = System::Drawing::Size(108, 22);
			this->loadToolStripMenuItem->Text = L"Load";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveToolStripMenuItem.Image")));
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(108, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			// 
			// exportToolStripMenuItem
			// 
			this->exportToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exportToolStripMenuItem.Image")));
			this->exportToolStripMenuItem->Name = L"exportToolStripMenuItem";
			this->exportToolStripMenuItem->Size = System::Drawing::Size(108, 22);
			this->exportToolStripMenuItem->Text = L"Export";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exitToolStripMenuItem.Image")));
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(108, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// toolToolStripMenuItem
			// 
			this->toolToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->interfaceToolStripMenuItem });
			this->toolToolStripMenuItem->Name = L"toolToolStripMenuItem";
			this->toolToolStripMenuItem->Size = System::Drawing::Size(41, 20);
			this->toolToolStripMenuItem->Text = L"Tool";
			// 
			// interfaceToolStripMenuItem
			// 
			this->interfaceToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->cANToolStripMenuItem,
					this->uSBToolStripMenuItem
			});
			this->interfaceToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"interfaceToolStripMenuItem.Image")));
			this->interfaceToolStripMenuItem->Name = L"interfaceToolStripMenuItem";
			this->interfaceToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->interfaceToolStripMenuItem->Text = L"Interface";
			// 
			// cANToolStripMenuItem
			// 
			this->cANToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cANToolStripMenuItem.Image")));
			this->cANToolStripMenuItem->Name = L"cANToolStripMenuItem";
			this->cANToolStripMenuItem->Size = System::Drawing::Size(99, 22);
			this->cANToolStripMenuItem->Text = L"CAN";
			// 
			// uSBToolStripMenuItem
			// 
			this->uSBToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"uSBToolStripMenuItem.Image")));
			this->uSBToolStripMenuItem->Name = L"uSBToolStripMenuItem";
			this->uSBToolStripMenuItem->Size = System::Drawing::Size(99, 22);
			this->uSBToolStripMenuItem->Text = L"USB";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->aboutToolStripMenuItem,
					this->userManualToolStripMenuItem, this->contactToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"aboutToolStripMenuItem.Image")));
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// userManualToolStripMenuItem
			// 
			this->userManualToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"userManualToolStripMenuItem.Image")));
			this->userManualToolStripMenuItem->Name = L"userManualToolStripMenuItem";
			this->userManualToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->userManualToolStripMenuItem->Text = L"User Manual";
			// 
			// contactToolStripMenuItem
			// 
			this->contactToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"contactToolStripMenuItem.Image")));
			this->contactToolStripMenuItem->Name = L"contactToolStripMenuItem";
			this->contactToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->contactToolStripMenuItem->Text = L"Contact Us";
			this->contactToolStripMenuItem->Click += gcnew System::EventHandler(this, &SlokiFlasherPro::contactToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Location = System::Drawing::Point(578, -12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(118, 57);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// BottomToolStripPanel
			// 
			this->BottomToolStripPanel->Location = System::Drawing::Point(0, 0);
			this->BottomToolStripPanel->Name = L"BottomToolStripPanel";
			this->BottomToolStripPanel->Orientation = System::Windows::Forms::Orientation::Horizontal;
			this->BottomToolStripPanel->RowMargin = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->BottomToolStripPanel->Size = System::Drawing::Size(0, 0);
			// 
			// TopToolStripPanel
			// 
			this->TopToolStripPanel->Location = System::Drawing::Point(0, 0);
			this->TopToolStripPanel->Name = L"TopToolStripPanel";
			this->TopToolStripPanel->Orientation = System::Windows::Forms::Orientation::Horizontal;
			this->TopToolStripPanel->RowMargin = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->TopToolStripPanel->Size = System::Drawing::Size(0, 0);
			// 
			// RightToolStripPanel
			// 
			this->RightToolStripPanel->Location = System::Drawing::Point(0, 0);
			this->RightToolStripPanel->Name = L"RightToolStripPanel";
			this->RightToolStripPanel->Orientation = System::Windows::Forms::Orientation::Horizontal;
			this->RightToolStripPanel->RowMargin = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->RightToolStripPanel->Size = System::Drawing::Size(0, 0);
			// 
			// LeftToolStripPanel
			// 
			this->LeftToolStripPanel->Location = System::Drawing::Point(0, 0);
			this->LeftToolStripPanel->Name = L"LeftToolStripPanel";
			this->LeftToolStripPanel->Orientation = System::Windows::Forms::Orientation::Horizontal;
			this->LeftToolStripPanel->RowMargin = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->LeftToolStripPanel->Size = System::Drawing::Size(0, 0);
			// 
			// ContentPanel
			// 
			this->ContentPanel->Size = System::Drawing::Size(193, 147);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2, this->toolStripProgressBar1
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 582);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->statusStrip1->Size = System::Drawing::Size(696, 22);
			this->statusStrip1->TabIndex = 4;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(13, 17);
			this->toolStripStatusLabel1->Text = L"  ";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(100, 16);
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(39, 17);
			this->toolStripStatusLabel2->Text = L"Ready";
			// 
			// SlokiFlasherPro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(696, 604);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->ConfigTab);
			this->Controls->Add(this->menuStrip1);
			this->HelpButton = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"SlokiFlasherPro";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SlokiFlasherPro";
			this->TopMost = true;
			this->TransparencyKey = System::Drawing::Color::Fuchsia;
			this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
			this->Load += gcnew System::EventHandler(this, &SlokiFlasherPro::SlokiFlasherPro_Load);
			this->ConfigTab->ResumeLayout(false);
			this->FlashTab->ResumeLayout(false);
			this->FlashTab->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel2->ResumeLayout(false);
			this->splitContainer3->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SegmentsDataGrid))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->ConfigTabs->ResumeLayout(false);
			this->DATA_TAB->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel1->PerformLayout();
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->COMMUNICATION_TAB->ResumeLayout(false);
			this->COMMUNICATION_TAB->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripStatusLabel1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SlokiFlasherPro_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

private: System::Void contactToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}


 
};
}

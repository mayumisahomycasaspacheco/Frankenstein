#pragma once

namespace Frankenstein {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Pantalla de creditos
	/// </summary>
	public ref class Form_Creditos : public System::Windows::Forms::Form
	{
	public:
		Form_Creditos(void)
		{
			InitializeComponent();
			//
			//TODO: agregar codigo de constructor aqui
			//

			String^ ruta = System::IO::Path::Combine(Application::StartupPath, L"Sprite-0001.png");
			if (System::IO::File::Exists(ruta))
			{
				this->BackgroundImage = Image::FromFile(ruta);
				this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			}
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se esten usando.
		/// </summary>
		~Form_Creditos()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable del disenador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

		//Componentes
		System::Windows::Forms::Label^ lbl_titulo;
		System::Windows::Forms::Label^ lbl_texto;
		System::Windows::Forms::Button^ btn_volver;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metodo necesario para admitir el Disenador. No se puede modificar
		/// el contenido de este metodo con el editor de codigo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl_titulo = (gcnew System::Windows::Forms::Label());
			this->lbl_texto = (gcnew System::Windows::Forms::Label());
			this->btn_volver = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl_titulo
			// 
			this->lbl_titulo->Font = (gcnew System::Drawing::Font(L"Arial", 28, System::Drawing::FontStyle::Bold));
			this->lbl_titulo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_titulo->Location = System::Drawing::Point(274, 145);
			this->lbl_titulo->Name = L"lbl_titulo";
			this->lbl_titulo->Size = System::Drawing::Size(600, 60);
			this->lbl_titulo->TabIndex = 0;
			this->lbl_titulo->Text = L"CREDITS";
			this->lbl_titulo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl_texto
			// 
			this->lbl_texto->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->lbl_texto->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->lbl_texto->Location = System::Drawing::Point(274, 225);
			this->lbl_texto->Name = L"lbl_texto";
			this->lbl_texto->Size = System::Drawing::Size(600, 190);
			this->lbl_texto->TabIndex = 1;
			this->lbl_texto->Text = L"Frankeinsten\n\nYSWS TERRA\n\nMade by:\nMayumi Sahomy Casas Pacheco";
			this->lbl_texto->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btn_volver
			// 
			this->btn_volver->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->btn_volver->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_volver->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold));
			this->btn_volver->ForeColor = System::Drawing::Color::White;
			this->btn_volver->Location = System::Drawing::Point(474, 435);
			this->btn_volver->Name = L"btn_volver";
			this->btn_volver->Size = System::Drawing::Size(200, 50);
			this->btn_volver->TabIndex = 2;
			this->btn_volver->Text = L"RETURN";
			this->btn_volver->UseVisualStyleBackColor = false;
			this->btn_volver->Click += gcnew System::EventHandler(this, &Form_Creditos::btn_volver_Click);
			// 
			// Form_Creditos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(1182, 620);
			this->Controls->Add(this->btn_volver);
			this->Controls->Add(this->lbl_texto);
			this->Controls->Add(this->lbl_titulo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form_Creditos";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Frankenstein";
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void btn_volver_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	};
}

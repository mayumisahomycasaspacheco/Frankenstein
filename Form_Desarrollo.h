#pragma once
#include "Lego_Rectangulo.h"

namespace Frankenstein {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class Form_Desarrollo : public System::Windows::Forms::Form
	{
	public:
		Form_Desarrollo(void)
		{
			InitializeComponent();
			lego_rectangulo = gcnew Lego_Rectangulo(50, 100, 400, 250, 80, 40, ColorTranslator::ToWin32(Color::Red));
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Form_Desarrollo()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
		Lego_Rectangulo^ lego_rectangulo;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// Form_Desarrollo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(882, 553);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form_Desarrollo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Frankenstein";
			this->Load += gcnew System::EventHandler(this, &Form_Desarrollo::Form_Desarrollo_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form_Desarrollo::Form_Desarrollo_Paint);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form_Desarrollo_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Form_Desarrollo_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) 
	{
		lego_rectangulo->dibujar(e->Graphics);
	}
	};
}

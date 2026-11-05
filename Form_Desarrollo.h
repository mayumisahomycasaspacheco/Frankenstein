#pragma once
#include "Lego_Rectangulo.h"
#include "Lego_Elipse.h"

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
			this->DoubleBuffered = true;
			lego_rectangulo = gcnew Lego_Rectangulo(50, 100, 400, 250, 80, 40, ColorTranslator::ToWin32(Color::Red));
			lego_elipse = gcnew Lego_Elipse(50, 300, 200, 150, 60, 60, ColorTranslator::ToWin32(Color::Blue));
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
	private: System::ComponentModel::IContainer^ components;
	protected:
	private: System::Windows::Forms::Timer^ timer1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>

		Lego_Rectangulo^ lego_rectangulo;
		Lego_Elipse^ lego_elipse;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 30;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form_Desarrollo::timer1_Tick);
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
		lego_elipse->dibujar(e->Graphics);
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) 
	{
		lego_rectangulo->mover(true);
		lego_elipse->mover(true);
		this->Invalidate();
	}
	};
}

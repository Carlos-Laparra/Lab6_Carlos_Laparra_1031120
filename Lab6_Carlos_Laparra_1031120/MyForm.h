#pragma once
#include"Nodo.h";
#include"Circulo.h";
#include"Cuadrado.h";
#include"Figuras.h";
#include"ListaDoblementeEnlazada.h";
#include"Rectangulo.h";
#include"Triangulo.h";

namespace Lab6CarlosLaparra1031120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		ListaDoblementeEnlazada<Figuras*>* ListaDeFiguras;
		MyForm(void)
		{
			InitializeComponent();
			ListaDeFiguras = new ListaDoblementeEnlazada<Figuras*>();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ gbTriangulo;
	protected:
	private: System::Windows::Forms::Button^ btn_Triangulo;
	private: System::Windows::Forms::TextBox^ txt_T_Altura;
	private: System::Windows::Forms::TextBox^ txt_T_Base;
	private: System::Windows::Forms::Label^ lblAltura;
	private: System::Windows::Forms::Label^ lblBase;
	private: System::Windows::Forms::GroupBox^ gbCirculo;
	private: System::Windows::Forms::Button^ btn_Circulo;
	private: System::Windows::Forms::TextBox^ txt_C_Radio;
	private: System::Windows::Forms::Label^ lblRadio;
	private: System::Windows::Forms::GroupBox^ gbRectangulo;
	private: System::Windows::Forms::Button^ btn_Rectangulo;
	private: System::Windows::Forms::TextBox^ txt_R_Area;
	private: System::Windows::Forms::Label^ lblBase_R;
	private: System::Windows::Forms::TextBox^ txt_R_Base;
	private: System::Windows::Forms::Label^ lblAltura_R;
	private: System::Windows::Forms::GroupBox^ gbCuadrado;
	private: System::Windows::Forms::Button^ btn_Cuadrado;
	private: System::Windows::Forms::TextBox^ txt_Cu_Lado;
	private: System::Windows::Forms::Label^ lblLado;
	private: System::Windows::Forms::Panel^ pnlPintarFiguras;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->gbTriangulo = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Triangulo = (gcnew System::Windows::Forms::Button());
			this->txt_T_Altura = (gcnew System::Windows::Forms::TextBox());
			this->txt_T_Base = (gcnew System::Windows::Forms::TextBox());
			this->lblAltura = (gcnew System::Windows::Forms::Label());
			this->lblBase = (gcnew System::Windows::Forms::Label());
			this->gbCirculo = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Circulo = (gcnew System::Windows::Forms::Button());
			this->txt_C_Radio = (gcnew System::Windows::Forms::TextBox());
			this->lblRadio = (gcnew System::Windows::Forms::Label());
			this->gbRectangulo = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Rectangulo = (gcnew System::Windows::Forms::Button());
			this->txt_R_Area = (gcnew System::Windows::Forms::TextBox());
			this->lblBase_R = (gcnew System::Windows::Forms::Label());
			this->txt_R_Base = (gcnew System::Windows::Forms::TextBox());
			this->lblAltura_R = (gcnew System::Windows::Forms::Label());
			this->gbCuadrado = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Cuadrado = (gcnew System::Windows::Forms::Button());
			this->txt_Cu_Lado = (gcnew System::Windows::Forms::TextBox());
			this->lblLado = (gcnew System::Windows::Forms::Label());
			this->pnlPintarFiguras = (gcnew System::Windows::Forms::Panel());
			this->gbTriangulo->SuspendLayout();
			this->gbCirculo->SuspendLayout();
			this->gbRectangulo->SuspendLayout();
			this->gbCuadrado->SuspendLayout();
			this->SuspendLayout();
			// 
			// gbTriangulo
			// 
			this->gbTriangulo->Controls->Add(this->btn_Triangulo);
			this->gbTriangulo->Controls->Add(this->txt_T_Altura);
			this->gbTriangulo->Controls->Add(this->txt_T_Base);
			this->gbTriangulo->Controls->Add(this->lblAltura);
			this->gbTriangulo->Controls->Add(this->lblBase);
			this->gbTriangulo->Location = System::Drawing::Point(12, 23);
			this->gbTriangulo->Name = L"gbTriangulo";
			this->gbTriangulo->Size = System::Drawing::Size(274, 190);
			this->gbTriangulo->TabIndex = 0;
			this->gbTriangulo->TabStop = false;
			this->gbTriangulo->Text = L"Triángulo";
			// 
			// btn_Triangulo
			// 
			this->btn_Triangulo->Location = System::Drawing::Point(83, 134);
			this->btn_Triangulo->Name = L"btn_Triangulo";
			this->btn_Triangulo->Size = System::Drawing::Size(148, 38);
			this->btn_Triangulo->TabIndex = 4;
			this->btn_Triangulo->Text = L"Ingresar";
			this->btn_Triangulo->UseVisualStyleBackColor = true;
			this->btn_Triangulo->Click += gcnew System::EventHandler(this, &MyForm::btn_Triangulo_Click);
			// 
			// txt_T_Altura
			// 
			this->txt_T_Altura->Location = System::Drawing::Point(106, 85);
			this->txt_T_Altura->Name = L"txt_T_Altura";
			this->txt_T_Altura->Size = System::Drawing::Size(100, 26);
			this->txt_T_Altura->TabIndex = 3;
			// 
			// txt_T_Base
			// 
			this->txt_T_Base->Location = System::Drawing::Point(106, 37);
			this->txt_T_Base->Name = L"txt_T_Base";
			this->txt_T_Base->Size = System::Drawing::Size(100, 26);
			this->txt_T_Base->TabIndex = 2;
			// 
			// lblAltura
			// 
			this->lblAltura->AutoSize = true;
			this->lblAltura->Location = System::Drawing::Point(7, 85);
			this->lblAltura->Name = L"lblAltura";
			this->lblAltura->Size = System::Drawing::Size(59, 20);
			this->lblAltura->TabIndex = 1;
			this->lblAltura->Text = L"Altura: ";
			// 
			// lblBase
			// 
			this->lblBase->AutoSize = true;
			this->lblBase->Location = System::Drawing::Point(7, 37);
			this->lblBase->Name = L"lblBase";
			this->lblBase->Size = System::Drawing::Size(54, 20);
			this->lblBase->TabIndex = 0;
			this->lblBase->Text = L"Base: ";
			// 
			// gbCirculo
			// 
			this->gbCirculo->Controls->Add(this->btn_Circulo);
			this->gbCirculo->Controls->Add(this->txt_C_Radio);
			this->gbCirculo->Controls->Add(this->lblRadio);
			this->gbCirculo->Location = System::Drawing::Point(347, 23);
			this->gbCirculo->Name = L"gbCirculo";
			this->gbCirculo->Size = System::Drawing::Size(274, 190);
			this->gbCirculo->TabIndex = 1;
			this->gbCirculo->TabStop = false;
			this->gbCirculo->Text = L"Círculo";
			// 
			// btn_Circulo
			// 
			this->btn_Circulo->Location = System::Drawing::Point(88, 134);
			this->btn_Circulo->Name = L"btn_Circulo";
			this->btn_Circulo->Size = System::Drawing::Size(148, 38);
			this->btn_Circulo->TabIndex = 5;
			this->btn_Circulo->Text = L"Ingresar";
			this->btn_Circulo->UseVisualStyleBackColor = true;
			this->btn_Circulo->Click += gcnew System::EventHandler(this, &MyForm::btn_Circulo_Click);
			// 
			// txt_C_Radio
			// 
			this->txt_C_Radio->Location = System::Drawing::Point(111, 62);
			this->txt_C_Radio->Name = L"txt_C_Radio";
			this->txt_C_Radio->Size = System::Drawing::Size(100, 26);
			this->txt_C_Radio->TabIndex = 5;
			// 
			// lblRadio
			// 
			this->lblRadio->AutoSize = true;
			this->lblRadio->Location = System::Drawing::Point(20, 65);
			this->lblRadio->Name = L"lblRadio";
			this->lblRadio->Size = System::Drawing::Size(59, 20);
			this->lblRadio->TabIndex = 5;
			this->lblRadio->Text = L"Radio: ";
			// 
			// gbRectangulo
			// 
			this->gbRectangulo->Controls->Add(this->btn_Rectangulo);
			this->gbRectangulo->Controls->Add(this->txt_R_Area);
			this->gbRectangulo->Controls->Add(this->lblBase_R);
			this->gbRectangulo->Controls->Add(this->txt_R_Base);
			this->gbRectangulo->Controls->Add(this->lblAltura_R);
			this->gbRectangulo->Location = System::Drawing::Point(688, 23);
			this->gbRectangulo->Name = L"gbRectangulo";
			this->gbRectangulo->Size = System::Drawing::Size(274, 190);
			this->gbRectangulo->TabIndex = 1;
			this->gbRectangulo->TabStop = false;
			this->gbRectangulo->Text = L"Rectángulo";
			// 
			// btn_Rectangulo
			// 
			this->btn_Rectangulo->Location = System::Drawing::Point(97, 134);
			this->btn_Rectangulo->Name = L"btn_Rectangulo";
			this->btn_Rectangulo->Size = System::Drawing::Size(148, 38);
			this->btn_Rectangulo->TabIndex = 9;
			this->btn_Rectangulo->Text = L"Ingresar";
			this->btn_Rectangulo->UseVisualStyleBackColor = true;
			this->btn_Rectangulo->Click += gcnew System::EventHandler(this, &MyForm::btn_Rectangulo_Click);
			// 
			// txt_R_Area
			// 
			this->txt_R_Area->Location = System::Drawing::Point(120, 85);
			this->txt_R_Area->Name = L"txt_R_Area";
			this->txt_R_Area->Size = System::Drawing::Size(100, 26);
			this->txt_R_Area->TabIndex = 8;
			// 
			// lblBase_R
			// 
			this->lblBase_R->AutoSize = true;
			this->lblBase_R->Location = System::Drawing::Point(21, 37);
			this->lblBase_R->Name = L"lblBase_R";
			this->lblBase_R->Size = System::Drawing::Size(54, 20);
			this->lblBase_R->TabIndex = 5;
			this->lblBase_R->Text = L"Base: ";
			// 
			// txt_R_Base
			// 
			this->txt_R_Base->Location = System::Drawing::Point(120, 37);
			this->txt_R_Base->Name = L"txt_R_Base";
			this->txt_R_Base->Size = System::Drawing::Size(100, 26);
			this->txt_R_Base->TabIndex = 7;
			// 
			// lblAltura_R
			// 
			this->lblAltura_R->AutoSize = true;
			this->lblAltura_R->Location = System::Drawing::Point(21, 85);
			this->lblAltura_R->Name = L"lblAltura_R";
			this->lblAltura_R->Size = System::Drawing::Size(59, 20);
			this->lblAltura_R->TabIndex = 6;
			this->lblAltura_R->Text = L"Altura: ";
			// 
			// gbCuadrado
			// 
			this->gbCuadrado->Controls->Add(this->btn_Cuadrado);
			this->gbCuadrado->Controls->Add(this->txt_Cu_Lado);
			this->gbCuadrado->Controls->Add(this->lblLado);
			this->gbCuadrado->Location = System::Drawing::Point(1075, 23);
			this->gbCuadrado->Name = L"gbCuadrado";
			this->gbCuadrado->Size = System::Drawing::Size(274, 190);
			this->gbCuadrado->TabIndex = 1;
			this->gbCuadrado->TabStop = false;
			this->gbCuadrado->Text = L"Cuadrado";
			// 
			// btn_Cuadrado
			// 
			this->btn_Cuadrado->Location = System::Drawing::Point(84, 131);
			this->btn_Cuadrado->Name = L"btn_Cuadrado";
			this->btn_Cuadrado->Size = System::Drawing::Size(148, 38);
			this->btn_Cuadrado->TabIndex = 6;
			this->btn_Cuadrado->Text = L"Ingresar";
			this->btn_Cuadrado->UseVisualStyleBackColor = true;
			this->btn_Cuadrado->Click += gcnew System::EventHandler(this, &MyForm::btn_Cuadrado_Click);
			// 
			// txt_Cu_Lado
			// 
			this->txt_Cu_Lado->Location = System::Drawing::Point(107, 59);
			this->txt_Cu_Lado->Name = L"txt_Cu_Lado";
			this->txt_Cu_Lado->Size = System::Drawing::Size(100, 26);
			this->txt_Cu_Lado->TabIndex = 7;
			// 
			// lblLado
			// 
			this->lblLado->AutoSize = true;
			this->lblLado->Location = System::Drawing::Point(16, 62);
			this->lblLado->Name = L"lblLado";
			this->lblLado->Size = System::Drawing::Size(53, 20);
			this->lblLado->TabIndex = 8;
			this->lblLado->Text = L"Lado: ";
			// 
			// pnlPintarFiguras
			// 
			this->pnlPintarFiguras->BackColor = System::Drawing::Color::White;
			this->pnlPintarFiguras->Location = System::Drawing::Point(12, 282);
			this->pnlPintarFiguras->Name = L"pnlPintarFiguras";
			this->pnlPintarFiguras->Size = System::Drawing::Size(1407, 407);
			this->pnlPintarFiguras->TabIndex = 2;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1431, 701);
			this->Controls->Add(this->pnlPintarFiguras);
			this->Controls->Add(this->gbCuadrado);
			this->Controls->Add(this->gbRectangulo);
			this->Controls->Add(this->gbCirculo);
			this->Controls->Add(this->gbTriangulo);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->gbTriangulo->ResumeLayout(false);
			this->gbTriangulo->PerformLayout();
			this->gbCirculo->ResumeLayout(false);
			this->gbCirculo->PerformLayout();
			this->gbRectangulo->ResumeLayout(false);
			this->gbRectangulo->PerformLayout();
			this->gbCuadrado->ResumeLayout(false);
			this->gbCuadrado->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_Triangulo_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((txt_T_Altura->Text->Trim() != "") && (txt_T_Base->Text->Trim() != "")) {
			Figuras* nuevoTriangulo = new Triangulo();
			nuevoTriangulo->base = Convert::ToDouble(txt_T_Base->Text);
			nuevoTriangulo->altura = Convert::ToDouble(txt_T_Altura->Text);
			nuevoTriangulo->type = 1;
			nuevoTriangulo->area = nuevoTriangulo->ObtenerArea();
			nuevoTriangulo->perimetro = nuevoTriangulo->ObtenerPerimetro();
			ListaDeFiguras->InsertAtEnd(nuevoTriangulo);
			
			if (!ListaDeFiguras->Vacio()) {
				Nodo<Figuras*>* temp = ListaDeFiguras->start;

				for (int i = 0; i < ListaDeFiguras->count; i++) {
					Figuras* actual = temp->value;
					PintarNodo(pnlPintarFiguras->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimetro, actual->base, actual->altura);
					temp = temp->next;
				}
			}		
		}
	}
		   void PintarNodo(Graphics^ canvas, int posx, int posy, int type, double area, double perimeter, double height, double width) {
			   Brush^ brush;
			   Brush^ brushstring;
			   System::Drawing::Font^ fuente = gcnew System::Drawing::Font("Arial", 8, FontStyle::Bold);

			   switch (type)
			   {
			   case 1: {	
				   brush = gcnew SolidBrush(Color::Black);
				   brushstring = gcnew SolidBrush(Color::White);
				   array<Point>^ points = gcnew array<Point>(4);
				   points[0] = Point(posx + 100, posy + 100);
				   points[1] = Point(posx + (width/2), posy + 100);
				   points[2] = Point(posx + 50, posy + height);
				   points[3] = Point(posx + 100, posy + 100);
				   canvas->FillPolygon(brush, points);				   
			   }break;
			   case 2: {
				   brush = gcnew SolidBrush(Color::Navy);
				   brushstring = gcnew SolidBrush(Color::White);
				   canvas->FillEllipse(brush, RectangleF(posx, posy, width * 5, width * 5));				   
			   }break;
			   case 3: {
				   brush = gcnew SolidBrush(Color::DarkOrange);
				   brushstring = gcnew SolidBrush(Color::White);
				   canvas->FillRectangle(brush, RectangleF(posx, posy, width * 5, height * 5));				   
			   }break;
			   case 4: {
				   brush = gcnew SolidBrush(Color::DarkGreen);
				   brushstring = gcnew SolidBrush(Color::White);
				   canvas->FillRectangle(brush, RectangleF(posx, posy, width * 5, height * 5));				   
			   }break;
			   default:
				   break;
			   }

			   if (type == 1) {
				   canvas->DrawString("Area: " + area, fuente, brushstring, posx + 25, posy + 40);
				   canvas->DrawString("Perímetro: " + perimeter, fuente, brushstring, posx + 20, posy + 60);
			   }
			   else {
				   canvas->DrawString("Area: " + area, fuente, brushstring, posx + 1, posy + 3);
				   canvas->DrawString("Perímetro: " + perimeter, fuente, brushstring, posx + 1, posy + 13);
			   }
		   }
private: System::Void btn_Circulo_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt_C_Radio->Text->Trim() != "") {
		Figuras* nuevoCirculo = new Circulo();
		nuevoCirculo->lado = Convert::ToDouble(txt_C_Radio->Text);
		nuevoCirculo->type = 2;
		nuevoCirculo->area = nuevoCirculo->ObtenerArea();
		nuevoCirculo->perimetro = nuevoCirculo->ObtenerPerimetro();
		ListaDeFiguras->InsertAtEnd(nuevoCirculo);
		
		if (!ListaDeFiguras->Vacio()) {
			Nodo<Figuras*>* temp = ListaDeFiguras->start;

			for (int i = 0; i < ListaDeFiguras->count; i++) {
				Figuras* actual = temp->value;
				PintarNodo(pnlPintarFiguras->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimetro, actual->lado, actual->lado);
				temp = temp->next;
			}
		}				
	}
}
private: System::Void btn_Rectangulo_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((txt_R_Area->Text->Trim() != "") && (txt_R_Base->Text->Trim() != "")) {
		Figuras* nuevoRectangulo = new Rectangulo();
		nuevoRectangulo->altura = Convert::ToDouble(txt_R_Area->Text);
		nuevoRectangulo->base = Convert::ToDouble(txt_R_Base->Text);
		nuevoRectangulo->type = 3;
		nuevoRectangulo->area = nuevoRectangulo->ObtenerArea();
		nuevoRectangulo->perimetro = nuevoRectangulo->ObtenerPerimetro();
		ListaDeFiguras->InsertAtEnd(nuevoRectangulo);
		
		if (!ListaDeFiguras->Vacio()) {
			Nodo<Figuras*>* temp = ListaDeFiguras->start;

			for (int i = 0; i < ListaDeFiguras->count; i++) {
				Figuras* actual = temp->value;
				PintarNodo(pnlPintarFiguras->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimetro, actual->altura, actual->base);
				temp = temp->next;
			}
		}	
	}
}
private: System::Void btn_Cuadrado_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((txt_Cu_Lado->Text->Trim() != "")) {
		Figuras* nuevoCuadrado = new Cuadrado();
		nuevoCuadrado->lado = Convert::ToDouble(txt_Cu_Lado->Text);	
		nuevoCuadrado->type = 4;
		nuevoCuadrado->area = nuevoCuadrado->ObtenerArea();
		nuevoCuadrado->perimetro = nuevoCuadrado->ObtenerPerimetro();
		ListaDeFiguras->InsertAtEnd(nuevoCuadrado);
	
		if (!ListaDeFiguras->Vacio()) {
			Nodo<Figuras*>* temp = ListaDeFiguras->start;

			for (int i = 0; i < ListaDeFiguras->count; i++) {
				Figuras* actual = temp->value;
				PintarNodo(pnlPintarFiguras->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimetro, actual->lado, actual->lado);
				temp = temp->next;
			}
		}				
	}
}
};
}

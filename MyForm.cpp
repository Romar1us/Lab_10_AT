#include <iostream>
#include <sstream>
#include <string>
#include "Exception.h"
#include "MyForm.h"

System::Void Lab10::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	f_firstDeque_rb->Select();
	b_firstDeque_rb->Select();
	p_firstDeque_rb->Select();
	FloatSelectedIndex = 0;
	BoolSelectedIndex = 0;
	PolynomSelectedIndex = 0;
	floatDeque = new CDeque<float>[3];
	boolDeque = new CDeque<bool>[3];
	polynomDeque = new CDeque<CPolynom3>[3];
}

System::Void Lab10::MyForm::OnFloatChangeCheck(System::Object^ sender, System::EventArgs^ e)
{
	if (f_firstDeque_rb->Checked)
	{
		FloatSelectedIndex = 0;
	}
	else
	{
		FloatSelectedIndex = 1;
	}
}

System::Void Lab10::MyForm::OnBoolChangeCheck(System::Object^ sender, System::EventArgs^ e)
{
	if (b_firstDeque_rb->Checked)
	{
		BoolSelectedIndex = 0;
	}
	else
	{
		BoolSelectedIndex = 1;
	}
}

System::Void Lab10::MyForm::OnPolynomChangeCheck(System::Object^ sender, System::EventArgs^ e)
{
	if (p_firstDeque_rb->Checked)
	{
		PolynomSelectedIndex = 0;
	}
	else
	{
		PolynomSelectedIndex = 1;
	}
}

System::Void Lab10::MyForm::UpdateFloatDequeLabel()
{
	std::ostringstream oss;
	try
	{
		oss << floatDeque[FloatSelectedIndex];

	}
	catch (const IOException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
	if (!FloatSelectedIndex)
	{
		f_firstDequeLabel->Text = (gcnew String(oss.str().c_str()));
	}
	else
	{
		f_secondDequeLabel->Text = (gcnew String(oss.str().c_str()));
	}
}

System::Void Lab10::MyForm::UpdateFloatResultLabel()
{
	std::ostringstream oss;
	oss.precision(2);
	try
	{
		oss << floatDeque[2];
	}
	catch (const IOException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
	f_resultLabel->Text = Convert::ToString(gcnew String(oss.str().c_str()));
}

System::Void Lab10::MyForm::UpdateBoolDequeLabel()
{
	std::ostringstream oss;
	try
	{
		oss << boolDeque[BoolSelectedIndex];

	}
	catch (const IOException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
	if (!BoolSelectedIndex)
	{
		b_firstDequeLabel->Text = (gcnew String(oss.str().c_str()));
	}
	else
	{
		b_secondDequeLabel->Text = (gcnew String(oss.str().c_str()));
	}
}

System::Void Lab10::MyForm::UpdateBoolResultLabel()
{
	std::ostringstream oss;
	try
	{
		oss << boolDeque[2];
	}
	catch (const IOException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
	b_resultLabel->Text = Convert::ToString(gcnew String(oss.str().c_str()));
}

System::Void Lab10::MyForm::UpdatePolynomDequeLabel()
{
	std::ostringstream oss;
	try
	{
		oss << polynomDeque[PolynomSelectedIndex];

	}
	catch (const IOException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
	if (!PolynomSelectedIndex)
	{
		p_firstDequeLabel->Text = (gcnew String(oss.str().c_str()));
	}
	else
	{
		p_secondDequeLabel->Text = (gcnew String(oss.str().c_str()));
	}
}

System::Void Lab10::MyForm::UpdatePolynomResultLabel()
{
	std::ostringstream oss;
	try
	{
		oss << polynomDeque[2];
	}
	catch (const IOException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
	p_resultLabel->Text = Convert::ToString(gcnew String(oss.str().c_str()));
}

System::Void Lab10::MyForm::f_addAtLeft_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (f_newVal_textBox->Text == "")
	{
		MessageBox::Show("Empty");
		return;
	}
	try
	{
		floatDeque[FloatSelectedIndex].AddLeft(Convert::ToDouble(f_newVal_textBox->Text));
	}
	catch (const NoMemoryException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
	UpdateFloatDequeLabel();
}

System::Void Lab10::MyForm::f_addAtRight_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (f_newVal_textBox->Text == "")
	{
		MessageBox::Show("Empty");
		return;
	}
	try
	{
		floatDeque[FloatSelectedIndex].AddRight(Convert::ToDouble(f_newVal_textBox->Text));
	}
	catch (const NoMemoryException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}

	UpdateFloatDequeLabel();
}

System::Void Lab10::MyForm::f_deleteAtLeft_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		floatDeque[FloatSelectedIndex].DeleteLeft();
	}
	catch (const EmptyObjectDeletionException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}

	UpdateFloatDequeLabel();
}

System::Void Lab10::MyForm::f_deleteAtRight_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		floatDeque[FloatSelectedIndex].DeleteRight();
	}
	catch (const EmptyObjectDeletionException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
	UpdateFloatDequeLabel();
}

System::Void Lab10::MyForm::f_countElem_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Deque contains " + Convert::ToString(floatDeque[FloatSelectedIndex].get_maxsize()) + " elements");
}

System::Void Lab10::MyForm::f_dequeAvg_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		MessageBox::Show("Average of Deque is:  " + Convert::ToString(floatDeque[FloatSelectedIndex].Average()));
	}
	catch (const EmptyObjectAvgException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
}

System::Void Lab10::MyForm::f_dequeClear_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	floatDeque[FloatSelectedIndex].Clean();
	UpdateFloatDequeLabel();
}

System::Void Lab10::MyForm::f_productBy_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	double Scalar = Convert::ToDouble(f_scalar_tb->Text);
	floatDeque[FloatSelectedIndex] = std::move(floatDeque[FloatSelectedIndex] * Scalar);
	UpdateFloatDequeLabel();
}

System::Void Lab10::MyForm::f_addDeque_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		floatDeque[2] = floatDeque[0] + floatDeque[1];
	}
	catch (const DifferentSizeException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
	UpdateFloatResultLabel();
}

System::Void Lab10::MyForm::f_substractDeque_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		floatDeque[2] = floatDeque[0] - floatDeque	[1];
	}
	catch (const DifferentSizeException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
	UpdateFloatResultLabel();
}

System::Void Lab10::MyForm::b_addLeft_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (b_newVal_txtbox->Text == "")
	{
		MessageBox::Show("Empty");
		return;
	}
	try
	{
		boolDeque[BoolSelectedIndex].AddLeft(Convert::ToDouble(b_newVal_txtbox->Text));
	}
	catch (const NoMemoryException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
	UpdateBoolDequeLabel();
}

System::Void Lab10::MyForm::b_addRight_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (b_newVal_txtbox->Text == "")
	{
		MessageBox::Show("Empty");
		return;
	}
	try
	{
		boolDeque[BoolSelectedIndex].AddRight(Convert::ToDouble(b_newVal_txtbox->Text));
	}
	catch (const NoMemoryException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
	UpdateBoolDequeLabel();
}

System::Void Lab10::MyForm::b_deleteLeft_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		boolDeque[BoolSelectedIndex].DeleteRight();
	}
	catch (const EmptyObjectDeletionException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
	UpdateBoolDequeLabel();
}

System::Void Lab10::MyForm::b_deleteRight_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		boolDeque[BoolSelectedIndex].DeleteRight();
	}
	catch (const EmptyObjectDeletionException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
	UpdateBoolDequeLabel();
}

System::Void Lab10::MyForm::b_Size_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Deque contains " + Convert::ToString(boolDeque[BoolSelectedIndex].get_maxsize()) + " elements");
}

System::Void Lab10::MyForm::b_Multiply_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	double Scalar = Convert::ToDouble(b_scalar_txtbox->Text);
	boolDeque[BoolSelectedIndex] = std::move(boolDeque[BoolSelectedIndex] * Scalar);
	UpdateBoolDequeLabel();
}

System::Void Lab10::MyForm::b_clean_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	boolDeque[BoolSelectedIndex].Clean();
	UpdateBoolDequeLabel();
}

System::Void Lab10::MyForm::b_addDeque_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		boolDeque[2] = boolDeque[0] + boolDeque[1];
	}
	catch (const DifferentSizeException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
	UpdateBoolResultLabel();
}

System::Void Lab10::MyForm::b_subtractDeque_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		boolDeque[2] = boolDeque[0] - boolDeque[1];
	}
	catch (const DifferentSizeException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
	UpdateBoolResultLabel();
}

System::Void Lab10::MyForm::p_addLeft_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	double A = Convert::ToDouble(p_newVal_txtbox->Text->Split()[0]);
	double B = Convert::ToDouble(p_newVal_txtbox->Text->Split()[1]);
	double C = Convert::ToDouble(p_newVal_txtbox->Text->Split()[2]);
	CPolynom3 Polynom(A, B, C);
	
	if (p_newVal_txtbox->Text == "")
	{
		MessageBox::Show("Empty");
		return;
	}
	try
	{
		polynomDeque[PolynomSelectedIndex].AddLeft(Polynom);
	}
	catch (const NoMemoryException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
	UpdatePolynomDequeLabel();
}

System::Void Lab10::MyForm::p_addRight_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	double A = Convert::ToDouble(p_newVal_txtbox->Text->Split()[0]);
	double B = Convert::ToDouble(p_newVal_txtbox->Text->Split()[1]);
	double C = Convert::ToDouble(p_newVal_txtbox->Text->Split()[2]);
	CPolynom3 Polynom(A, B, C);
	if (p_newVal_txtbox->Text == "")
	{
		MessageBox::Show("Empty");
		return;
	}
	try
	{
		polynomDeque[PolynomSelectedIndex].AddRight(Polynom);
	}
	catch (const NoMemoryException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
	UpdatePolynomDequeLabel();
}

System::Void Lab10::MyForm::p_deleteLeft_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		polynomDeque[PolynomSelectedIndex].DeleteLeft();
	}
	catch (const EmptyObjectDeletionException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
	UpdatePolynomDequeLabel();
}

System::Void Lab10::MyForm::p_deleteRight_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		polynomDeque[PolynomSelectedIndex].DeleteRight();
	}
	catch (const EmptyObjectDeletionException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
	UpdatePolynomDequeLabel();
}

System::Void Lab10::MyForm::p_Size_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Deque contains " + Convert::ToString(polynomDeque[PolynomSelectedIndex].get_maxsize()) + " elements");
}

System::Void Lab10::MyForm::p_multiply_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	double Scalar = Convert::ToDouble(b_scalar_txtbox->Text);
	polynomDeque[PolynomSelectedIndex] = std::move(polynomDeque[PolynomSelectedIndex] * Scalar);
	UpdatePolynomDequeLabel();
}

System::Void Lab10::MyForm::p_clean_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	polynomDeque[PolynomSelectedIndex].Clean();
	UpdatePolynomDequeLabel();
}

System::Void Lab10::MyForm::p_avg_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::ostringstream oss;
	oss << polynomDeque[PolynomSelectedIndex].Average();
	try
	{
		MessageBox::Show("Average of Deque is:  " + gcnew String(oss.str().c_str()));
	}
	catch (const EmptyObjectAvgException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
}

System::Void Lab10::MyForm::p_addDeque_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		polynomDeque[2] = polynomDeque[0] + polynomDeque[1];
	}
	catch (const DifferentSizeException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
	UpdatePolynomResultLabel();
}

System::Void Lab10::MyForm::p_subtractDeque_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		polynomDeque[2] = polynomDeque[0] - polynomDeque[1];
	}
	catch (const DifferentSizeException& ex)
	{
		MessageBox::Show(gcnew String(ex.what()));
	}
	UpdatePolynomResultLabel();
}

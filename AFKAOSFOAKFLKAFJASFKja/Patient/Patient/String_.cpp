#include "String_.h"



String_::String_()
{
	this->len = 0;
	this->str = nullptr;
}

String_::String_(const char * st)
{
	this->len = std::strlen(st);
	this->str = new char[this->len + 1];
	strcpy_s(this->str, this->len + 1, st);
}

String_::String_(const String_ & obj)
{
	this->len = obj.len;
	if (this->len == 0)
		this->str = nullptr;
	else
	{
		this->str = new char[this->len + 1];
		strcpy_s(this->str, this->len + 1, obj.str);
	}
}


String_::~String_()
{
	if (this->str != nullptr)
		delete[] this->str;
	this->str = nullptr;
	this->len = 0;
}

void String_::setStr(char * ch)
{
	if (this->len != 0)
		delete this->str;
	this->len = strlen(ch);
	this->str = new char[this->len + 1];
	strcpy_s(this->str, this->len + 1, ch);
}

const char * String_::data() const
{
	return this->str;
}

void String_::clear()
{
	//this->~String_();
	if (this->str != nullptr)
		delete[] this->str;
	this->str = nullptr;
	this->len = 0;
}

bool String_::empty() const
{
	return this->len == 0;
}

const String_ & String_::operator+=(const String_ & str)
{
	char *arr;
	int size = this->len + str.len + 1;
	arr = new char[size];
	for (int i = 0; i < this->len; i++)
	{
		arr[i] = this->str[i];
	}
	for (int i = len; i < size; i++)
	{
		arr[i] = str.str[i - len];
	}
	delete[] this->str;
	this->str = arr;
	return *this;
}

void String_::append()
{
}

String_& String_::operator=(const String_ & s)
{
	//������ �� ����������������
	if (&s == this)
		return *this;
	if (this->str != nullptr)
		delete[] this->str;
	this->str = nullptr;
	this->len = s.len;
	//������ ���� ���� ��� ���������� �� s
	if (this->len > 0)
	{
		this->str = new char[this->len + 1];
		strcpy_s(this->str, this->len + 1, s.str);
	}
}

std::ostream & operator<<(std::ostream & out, const String_ & a)
{
	if (a.data() != nullptr)
		out << a.data();
	return out;
}

std::istream & operator >> (std::istream & in, String_ & a)
{
	char hop[1024];
	in >> hop;
	a.setStr(hop);
	return in;
}
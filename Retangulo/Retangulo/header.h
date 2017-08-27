#pragma once
using namespace std;
class retangulo
{
private:
	float largura, comprimento;
public:
	void atribuir(float largura_, float comprimento_)
	{
		largura = largura_;
		comprimento = comprimento_;
	}
	float getArea()
	{
		return largura*comprimento;
	}
};
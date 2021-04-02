
/*
��C++�ı�׼�����ռ�std��Ԥ�����˸�����Complex��
����ͨ����Ԫ������Complex�ĸ������㣬���������������ص�+��-��*��/��
��ʹ��using namespace std��std���ֿռ����뱾����
�򱾳����е�Complex����std���ֿռ��е�Complex�����������غ���������ͻ������������
*/
/*
���ڲ�Ҫ����ֵ�ҿ��Խ���������������������+��-��*��/ �����������
����÷ǳ�Ա��ʽ��������Ԫ����ͨ���������������������ʵ�֡�
*/

//���ǰ���2+b���⡣
#include<iostream>


class Complex{
    private:
        double r,i;
    public:
        Complex(double R=0,double I=0):r(R),i(I){};
        friend Complex operator+(Complex a, Complex b);
        friend Complex operator-(Complex a, Complex b);
        friend Complex operator*(Complex a, Complex b);
        friend Complex operator/(Complex a, Complex b);

        friend Complex operator+(Complex a,double b){
            return Complex(a.r+b,a.i);
        }
        friend Complex operator+(double a,Complex b){
            return Complex(a+b.r,b.i);
        }
        
        void display();
};

Complex operator+(Complex a, Complex b){
    return Complex(a.r+b.r,a.i+b.i); 
}
Complex operator-(Complex a, Complex b){
    return Complex(a.r-b.r,a.i-b.i);
}
Complex operator*(Complex a, Complex b){
    Complex t;
    t.r = a.r*b.r-a.i*b.i;
    t.i = a.r*b.i+a.i*b.r;
}
Complex operator/(Complex a, Complex b){
    Complex t;
    double x;
    x = 1/(b.r*b.r+b.i*b.i);
    t.r = x*(a.r*b.r+a.i*b.i);
    t.i = x*(a.i*b.r-a.r*b.i);
    return t;
}

void Complex::display(){
    std::cout<<r;
    if(i>0)
        std::cout<<"+";
    if(i!=0)
        std::cout<<i<<"i"<<std::endl;
}
int main(void) {
    Complex c1(1,2),c2(3,4),c3,c4,c5,c6; 
    Complex a,b(2,3);
    Complex a1=b+2;       			
    Complex a2=2+b;       	 
    a1.display();
    a2.display();  
    c3=c1+c2;
    c4=c1-c2;
    c5=c1*c2;
    c6=c1/c2;
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    c5.display();
    c6.display();
    system("pause");
    return 0;
}


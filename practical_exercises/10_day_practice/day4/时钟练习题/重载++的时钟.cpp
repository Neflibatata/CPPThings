/*
���һ��ʱ���࣬�ܹ���¼ʱ���֡��룬��������++�������ÿִ��һ��++���㣬��ʱ1�룬��Ҫʹ��ʱ�����ܹ��Զ���λ��
*/
#include<iostream>
using namespace std;
class Time{
    public:
        Time(int h=0,int m=0,int s=0){
            hour = h;
            minute = m;
            second = s;
        }
        void operator++();
        void showTime(){
            cout<<"��ǰʱ��Ϊ��"<<hour<<":"<<minute<<":"<<second<<endl;
        }

    private:
        int hour,minute,second;

};

void Time::operator++(){
    ++second;
    if(second=60){
        second=0;
        ++minute;
        if(minute==60){
            minute=0;
            hour++;
            if(hour==24){
                hour=0;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    Time t(23,59,59);
    ++t;
    t.showTime();
    system("pause");
    return 0;
}

#include <iostream>
using namespace std;

class CTimeSpan
{
public:
    CTimeSpan(int nHours=0, int nMins=0);      // 构造函数
    CTimeSpan operator +(CTimeSpan ts);        // 运算符“+”重载为成员函数
    int GetHours() { return m_nHours; }   // 获取小时数
    int GetMins()  { return m_nMins; }    // 获取分钟数
    void Show();                               // 显示时间值
private:
    int m_nHours;       // 小时数
    int m_nMins;        // 分钟数
};

CTimeSpan::CTimeSpan(int nHours, int nMins)          // 构造函数的实现
{
    nHours += nMins/60;
    nMins %= 60;
    m_nHours = nHours;
    m_nMins = nMins;
}

CTimeSpan CTimeSpan::operator +(CTimeSpan ts)    // 重载运算符函数实现
{
    int nNewHours;
    int nNewMins;
    nNewHours = m_nHours + ts.GetHours();
    nNewMins = m_nMins + ts.GetMins();
    nNewHours += nNewMins/60;
    nNewMins %= 60;
    return CTimeSpan(nNewHours, nNewMins);
}

void CTimeSpan::Show()
{
    cout << m_nHours << "小时" << m_nMins << "分钟" << endl;
}

int main()
{
    CTimeSpan timeSpan1(2, 50);
    CTimeSpan timeSpan2(3, 30);
    CTimeSpan timeSum;
    timeSum = timeSpan1 + timeSpan2;
    cout << "timeSpan1: ";
    timeSpan1.Show();
    cout << "timeSpan2: ";
    timeSpan2.Show();
    timeSum = timeSpan1 + timeSpan2;
    cout << "timeSum=timeSpan1+timeSpan2: ";
    timeSum.Show();
    return 0;
}
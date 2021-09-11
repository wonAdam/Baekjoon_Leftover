//#include <string>
//
//using namespace std;
//
//bool firstCondition(const string& amountText, bool& bIsCommaExist)
//{
//    bIsCommaExist = false;
//    for (const auto& c : amountText)
//    {
//        if (!(c >= 48 && c <= 57) && c != 44)
//            return false;
//
//        else if (c == 44)
//            bIsCommaExist = true;
//    }
//
//    return true;
//}
//
//bool secondCondition(const string& amountText)
//{
//    return amountText[0] != '0';
//}
//
//bool lastCondition(const string& amountText, bool bIsCommaExist)
//{
//    if (!bIsCommaExist) 
//        return true;
//
//    if (amountText[0] == ',' || amountText[amountText.size() - 1] == ',') 
//        return false;
//
//    for (int i = amountText.size() - 4; i > 0; i -= 4)
//    {
//        if (amountText[i] != ',')
//            return false;
//    }
//
//    return true;
//}
//
//bool solution(string amountText) {
//    bool answer = true;
//
//    // �ݾ��� 0�� ���
//    if (amountText == "0") return true;
//
//    // ù��° ����
//    // ,�̳� ���ڷθ� ����
//    bool bIsCommaExist;
//    answer &= firstCondition(amountText, bIsCommaExist);
//    if (!answer) return false;
//
//    // �ι�° ����
//    // ���� ���� 0 �ƴ�
//    answer &= secondCondition(amountText);
//    if (!answer) return false;
//
//    // ��, ��, �ټ���° ����
//    // , �� �����ϰ� �ִٸ� ���� ������ ��������
//    answer &= lastCondition(amountText, bIsCommaExist);
//    if (!answer) return false;
//
//
//    return answer;
//}
//
//int main()
//{
//    solution("3,339900");
//    solution("0");
//    return 0;
//}
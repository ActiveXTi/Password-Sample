#include <iostream>
#include <Ctime>
#include <cstdlib>

int errornumber;
int code = '����';
int main()
{
A:std::cout << "\a�� ���Ͽ� �������ϱ� ���ؼ��� ��й�ȣ �Է��� �ʿ��մϴ�.\n";
    std::cout << "��й�ȣ�� �����Ͻ÷��� 0�� �Է����ּ���.\n";
    std::cout << "8�ڸ� ��й�ȣ�� �Է��Ͻʽÿ�:________\b\b\b\b\b\b\b\b";
    int passnumb;
    std::cin >> passnumb; '\n';
    if (passnumb == code)
    {
        std::cout << "��� ���� �� . . .\n";
    }
    else if (passnumb == 0)
    {
        std::cout << "��� ������ �ʿ��մϴ�. �Ʒ� ���ڵ��� �Է��� �ּ���\n";
        std::srand(static_cast<unsigned int>(std::time(0))); // ���۸��� ����
        int checknumb = std::rand() * std::rand();
        std::cout << checknumb << std::endl;
        int r;
        std::cin >> r;
        if (r == checknumb)
        {
            std::cout << "��� ������ �����Ͽ����ϴ�.\n";
            std::cout << "���ο� ��й�ȣ�� �Է��� �ֽʽÿ�.\n";;
            std::cin >> code; '\n';
            std::cout << "�����Ͻ� ��й�ȣ�� " << code << " �Դϴ�.\n";
            std::cout << "����Ͻðڽ��ϱ�? ����Ͻ÷��� 1��, ���ư��÷��� 0�� �����ּ���.\n";
            int answer;
            std::cin >> answer;
            if (answer == 1)
            {
                std::cout << "��й�ȣ ���濡 �����߽��ϴ�!\n";
                goto A;
            }
            else if (answer == 0)
            {
                std::cout << "��й�ȣ ���濡 �����߽��ϴ�.\n";
                goto A;
            }
            else
            {
                std::cout << "\a�߸��� �����Դϴ�.\n";
                goto A;
            }
        }
        else
        {
            std::cout << "\a ��� ������ �����߽��ϴ�.\n\n";
            goto A;
        }
    }
    else
    {
        errornumber = errornumber + 1;
        if (errornumber == 5)
        {
            std::cout << "\a�Է����� Ƚ�� 5ȸ�� �ʰ��Ͽ����ϴ�. ���߿� �ٽ� �õ��Ͻʽÿ�.";
            goto B;
        }
        else
        {
            std::cout << "\a��й�ȣ�� ���� �ʽ��ϴ�. �ٽ� �õ��� �ֽʽÿ�\n\n";
            goto A;
        }
    }
B:return 0;

}
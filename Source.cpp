#include <iostream>
#include <Ctime>
#include <cstdlib>

int errornumber;
int code = '미정';
int main()
{
A:std::cout << "\a이 파일에 엑세스하기 위해서는 비밀번호 입력이 필요합니다.\n";
    std::cout << "비밀번호를 변경하시려면 0를 입력해주세요.\n";
    std::cout << "8자리 비밀번호를 입력하십시오:________\b\b\b\b\b\b\b\b";
    int passnumb;
    std::cin >> passnumb; '\n';
    if (passnumb == code)
    {
        std::cout << "잠금 해제 중 . . .\n";
    }
    else if (passnumb == 0)
    {
        std::cout << "사람 인증이 필요합니다. 아래 숫자들을 입력해 주세요\n";
        std::srand(static_cast<unsigned int>(std::time(0))); // 구글링한 구문
        int checknumb = std::rand() * std::rand();
        std::cout << checknumb << std::endl;
        int r;
        std::cin >> r;
        if (r == checknumb)
        {
            std::cout << "사람 인증에 성공하였습니다.\n";
            std::cout << "새로운 비밀번호를 입력해 주십시오.\n";;
            std::cin >> code; '\n';
            std::cout << "변경하신 비밀번호는 " << code << " 입니다.\n";
            std::cout << "계속하시겠습니까? 계속하시려면 1을, 돌아가시려면 0을 눌러주세요.\n";
            int answer;
            std::cin >> answer;
            if (answer == 1)
            {
                std::cout << "비밀번호 변경에 성공했습니다!\n";
                goto A;
            }
            else if (answer == 0)
            {
                std::cout << "비밀번호 변경에 실패했습니다.\n";
                goto A;
            }
            else
            {
                std::cout << "\a잘못된 접근입니다.\n";
                goto A;
            }
        }
        else
        {
            std::cout << "\a 사람 인증에 실패했습니다.\n\n";
            goto A;
        }
    }
    else
    {
        errornumber = errornumber + 1;
        if (errornumber == 5)
        {
            std::cout << "\a입력제한 횟수 5회를 초과하였습니다. 나중에 다시 시도하십시오.";
            goto B;
        }
        else
        {
            std::cout << "\a비밀번호가 옳지 않습니다. 다시 시도해 주십시오\n\n";
            goto A;
        }
    }
B:return 0;

}
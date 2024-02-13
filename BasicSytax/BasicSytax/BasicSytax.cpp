// BasicSytax.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main() {
    {
        std::cout << "Hello World!\n";
        std::cout << "Hellp c plus plus" << std::endl;
    }

    /*
        정수형 타입 : int (integer) - 4byte
        실수형 타입 : float - 4byte
        문자형 타입 : char(character) - 문자 1개
        bool형 타입 : bool 데이터 - true/flase
    */


    int Number1;
    Number1 = 10; // = : 대입 연산자

    int Number2 = 20; //변수 초기화
    int Number3 = 0;
    float PointNumber = 1.234f;
    char word = 'A'; //1글자 작은따음표 그 이상 큰따음표
    bool condition = true;

    std::cout << Number1 + 10 << std::endl;
    Number3 = Number1 + 10;

    Number1 = Number1 + 10; // Number1 = 20
    Number1 = Number1 + 10; // Number1 = 30 // 반복 실행
    Number1 += 10; //위와 같은 뜻 Number1 = 40 // 증가식
    Number1 -= 10; //*,/도 가능   Number1 = 30// 감소식

    Number2 += 1; // 카운트 연산
    Number2 -= 1; 

    Number2++; // 1씩 증가   
    Number2--; // 1씩 감소 2개이상씩할려면 위에식으로

    int Number4 = Number1 > 3;
    int Number5 = Number1 < 3;

    // != 다르다 (프로그래밍에서 !는 부정의 의미를 갖는편)

    //논리연산: bool 타입 데이터 연산
    /*
        && : And (& : Ampersand)
        || : Or (| : pipe)
        !  : Not

        And 연산 : true && true - 연산데이터가 모두 true이면 결과 true, 아니면 false
        ex) T&&T = T , T && F = F
        Or  연산 : true || true - 연산데이터가 모두 flase이면 결과 flase, 아니면 true
        ex) T || T = T . T || F = T , F || F = F
        Not 연산 : !true => false / !false => true
        논리식은 괄호로 묶어주기
    */

    std::cout << (true && false) << std::endl;



        /*
        * ()속 연산식의 결과값이 true이면 코드 실행
        분기문 = 조건문(조건식의 결과에 따라 해당 분기의 명령 실행) / if, else if, else
        if (비교연산/논리연산/산술연산/데이터/Condition) 
        {
                실행 코드
        }
         
         */
        
         Number4 = 10;
        if (Number4 > 5) {
            std::cout << "참일때 실행" << std::endl;
         }
        if (true) {
            std::cout << "참일때 실행2" << std::endl;
        }

        // false => 0 / true => 0이 아닌 정수

        if (0) {
            std::cout << "참일때 실행3" << std::endl;
        }
        if (1) {
            std::cout << "참일때 실행4" << std::endl;
        }
        if (3-1) {
            std::cout << "참일때 실행5" << std::endl;
        }

        if (Number4 > 20)
        {
            std::cout << "참일때 실행6" << std::endl;
        }
        else if (Number4 > 10)
        {
            std::cout << "참일때 실행7" << std::endl;
        }
        else
        {
            std::cout << "참일때 실행8" << std::endl;
        }

        /*
        * 중첩 => nested
            if (연산식)
            {
                    if () 
                    {
                        실행코드;
                    }
            }      
        */

        /*
            switch ~ case

            switch(산술식/데이터 O 조건식 X) 보통 요일같은거 따질때 사용
            {
                case 값1 : 
                     실행코드1;
                     break;
                case 값2 : 
                     실행코드2;
                     break;
                case 값3 : 
                     실행코드3;
                     break;
                default:
                     실행코드4;
            }
        */
        
        int SwitchNumber = 1;
        switch (SwitchNumber + 1)
        {
               case 1:
                   std::cout << "Number Case 1 : " << SwitchNumber << std::endl;
                   break;
               case 2:
                   std::cout << "Number Case 2 : " << SwitchNumber << std::endl;
                   break;
               case 3:
                   std::cout << "Number Case 3 : " << SwitchNumber << std::endl;
                   break;
               default:
                   std::cout << "Default" << std::endl;
        }

        /*
            for : 반복문
            구문 - Statment
            - 독립된 명령문의 형태          

            for (구문1;구문2;구문3)
            {
                실행코드
            }


            구문 1
            - for loop 실행될 때 최초 한번 실행
            - 반복 실행을 위한 변수 초기화
            구문 2
            - 반복 실행될 때 마다 실행
            - 반복의 실행 여부 판단(true/false)
            - 해당 횟수 코드블럭 실행 전 검토
            - 비교식의 비교값이 반복횟수 표현
            구문 3
            - 반복 실행될 때 마다 실행
            - 반복 실행의 스텝/카운트
            - 해당회수 코드블럭 실행 이후에 카운트 증가/감소
            //구문 1 최초한번 실행후 구문 2 확인 구문 3으로 가서올린후 구문 2에서 다시 확인 후 반복
        */
        // 1부터 10까지의 합
        int Sum = 0;
        for (int i = 1; i <= 10; i++) 
        {
            Sum += i;
            std::cout << "Sum : " << Sum << std::endl;           //누적되는거 확인
        }
          std::cout << "SumTotal : " << Sum << std::endl;      //결과만 확인


            // 1부터 10까지의 짝수의 합
            int Even = 0;
            for (int i = 2; i <= 10; i+=2)
            {
                Even += i;
                std::cout << "Even : " << Even << std::endl;
            }
          std::cout << "EvenTotal : " << Even << std::endl;

         /*
                while(조건식)
                {
                   실행코드
                }
         
          
          
         */ 
          int Count = 1;
          int Total = 0;
          while (Count <= 10)
          {
              Total += Count;
              
              std::cout << "Total :" << Total << std::endl;

              Count++;
          }

          // While (true){} : 무한루프
          /*
          while (true) {
               실행코드

               비교 판단 코드
               if(조건식)
               {
                    break; //현재 코드가 포함된 코드 블럭을 빠져나감
               }         
          }
          */



    // 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
    // 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴
    /*
     시작을 위한 팁:
       1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
       2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
       3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
       4. [오류 목록] 창을 사용하여 오류를 봅니다.
       5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
       6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
    */
}
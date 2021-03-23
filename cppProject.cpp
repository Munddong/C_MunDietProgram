#include<iostream>
#include<fstream>	// 파일 입출력을 하려면 헤더 파일을 포함하여야 한다. 
#include<string>
#include<time.h>
#include<random>
using namespace std;

class project
{
public:
	int num; // 메뉴번호
// int cnt = 0; 배열의 행
	double height; // 키
	double weight; // 몸무게
	double BMI;
	string str; // 어떤 체중인지 나타내주는 변수
	string male;
	string female;
	string uw; // 저체중
	string nw; // 정상
	string ow; // 과체중
	string obw; // 비만
	string eow; // 고도비만

	void bf() // bmi 수치표
	{
		printf("┌────────────────────┐\n");
		printf("│      BMI 수치표    │\n");
		printf("├──────────┬─────────┤\n");
		printf("│  0 ~ 18.5│  저체중 │\n");
		printf("├──────────┼─────────┤\n");
		printf("│ 18.5 ~ 23│   정상  │\n");
		printf("├──────────┼─────────┤\n");
		printf("│  23 ~ 25 │  과체중 │\n");
		printf("├──────────┼─────────┤\n");
		printf("│  25 ~ 30 │   비만  │\n");
		printf("├──────────┼─────────┤\n");
		printf("│    30 ~  │ 고도비만│\n");
		printf("└──────────┴─────────┘\n\n");

		cout << "키를 입력하세요 : ";
		cin >> height;
		cout << "몸무게를 입력하세요 : ";
		cin >> weight;
		cout << endl;
	}

	void bmi() // bmi 함수 
	{
		BMI = weight / height * height;	// BMI 공식

		if (BMI >= 0 && BMI <= 18.5)
			str = uw;
		else if (BMI > 18.5 && BMI <= 23)
			str = nw;
		else if (BMI > 23 && BMI <= 25)
			str = ow;
		else if (BMI > 25 && BMI <= 30)
			str = obw;
		else if (BMI > 30)
			str = eow;

		cout << "나의 신체질량지수(BMI) : " << str << " 입니다." << endl;
		cout << "BMI가 정상이 되려면, 약 48kg ~ 58kg을 유지해야 합니다. 할 수 있다! 아자 아자!\n\n\n" << endl;
	}

	void dm() // 식단
	{
		cout << "			** BMI가 정상이 되기까지의 식단, 후에 식단 추후 공지 **\n" << endl;

		cout << "08:00 기상 : 토마토 1개 + 고구마 1개(120 ~ 150g) + 닭가슴살 1조각(100g) + 야채(양상추, 오이 등등 드레싱 없이!)\n" << endl;
		cout << "12:00 : 닭가슴살 샐러드 + 다이어트 음료(식이섬유 비타민 풍부한 것)\n" << endl;
		cout << "15:00 : 바나나 1개 + 계란 휜자3개 + 노른자 1개\n" << endl;
		cout << "18:00 : 고구마 1개 + 닭가슴살 1조각 + 야채\n" << endl;
		cout << "** 명심 : 18:00 이후에 금식할 것! **\n\n" << endl;
	}

	void df() // 다이어트에 좋은 음식, 안좋은 음식
	{
		cout << "				** 알아두어야 할 것 **\n" << endl;
		cout << "다이어트에 좋은 음식이라고 해도 너무 과하게 섭취하거나 저절로 체중감량이 되는 것이 아니다." << endl;
		cout << "다이어트에 좋은 음식들은 칼로리 부담이 적고, 영양적인 섭취에 활용하기 좋은 음식들이 주로 꼽힌다." << endl;
		cout << "어떤 음식이든 식단과리를 어떻게 해주냐가 중요하며, 체중감량 식이요법을 진행할 때도" << endl;
		cout << "탄수화물, 단백질, 나물, 채소류가 골고루 식단에 들어갈 수 있도록 식사를 해줘야 한다." << endl;
		cout << "그래야 영양섭취도 균형있게 되고, 좀 더 건강한 다이어트가 가능하다." << endl;
		cout << "체중감량을 하더라도 영양불균형하게 진행하면 금방 원래체중을 회복할 가능성(요요)이 높으니" << endl;
		cout << "체중감량은 가능한 단 기간내 효과를 기대하기보다, 장기간으로 보고 진행해야 한다.\n" << endl;

		cout << "** 다이어트에 안 좋은 음식 ** " << endl;
		cout << "① 당분함량이 높은 음식" << endl;
		cout << "   - ※ 가장 주의해야 할 것 ※\n" << endl;
		cout << "② 맛이 자극적인 음식(달고, 짜고, 맵고)" << endl;
		cout << "   - 뇌에도 자극이 가기 때문에 원래 식사량보다 더 과식하게 될 가능성이 높다.\n" << endl;
		cout << "③ 고칼로리 음식" << endl;
		cout << "   - 체중감량에 방해가 된다.\n" << endl;
		cout << "④ 인스턴트, 패스트푸드, 정크푸드 등" << endl;
		cout << "	- 고칼로리 음식과 마찬가지 이다.\n" << endl;
		cout << "⑤ 삼백식품(흰쌀, 밀가루, 설탕)" << endl;
		cout << "   - 흰쌀밥까지는 괜찮아도 가능한 밀가루나 설탕은 자제해주는 것이 좋다.\n" << endl;

		cout << "** 다이어트에 좋은 음식 ** " << endl;
		cout << "① 탄수화물(고구마, 바나나, 단호박, 호밀빵, 통밀빵, 잡곡밥, 콩밥, 현미밥 등)" << endl;
		cout << "   - 혈당수치가 낮은 탄수화물 음식 활용, 다이어트 중 탄수화물은 섭취를 조심하면 좋은 영양소이다.\n" << endl;
		cout << "② 단백질(닭가슴살, 소고기, 육류의 살코기 부분, 달걀, 생선 등)" << endl;
		cout << "   - 당분함량이 낮은 저지방 혹은 무지방 유제품, 콩, 두주 등을 활용해준다.\n" << endl;
		cout << "③ 지방(불포화지방 음식)" << endl;
		cout << "   - 무조건 지방이라고 해서 안 좋은 것은 아니다. 올리브오일 같은 식물성 기름이나 아보카도, 견과류 등을 섭취 한다.\n" << endl;
		cout << "④ 비타민, 섬유질, 무기질 등(나물, 채소, 과일 종류)" << endl;
		cout << "   - 하루에 2 ~ 3가지의 나물, 채소류를 섭취하면 자연스럽게 채워진다." << endl;
		cout << "     체중감량 중 오기 쉬운 변비 예방에 도움이 되는 섬유질, 단백질 흡수에 필요한 비타민 등 체중감량에 도움이 되는 영양소가 풍부함은 물론," << endl;
		cout << "     칼로리가 매우 낮기 때문에 체줌감량 중 나물, 채소 종류를 통해서 포만감을 얻도록 해주는 것이 좋다.\n" << endl;

		cout << "	** 식사 중간중간에 허기 질 때 **" << endl;
		cout << "간식으로 당근, 오이, 토마토 등의 채소류 활용" << endl;
		cout << "당분함량이 낮은 저지방 우유 및 요거트" << endl;
		cout << "견과류 한줌(하루 한줌이내로 섭취), 삶은 달걀 등을 활용\n" << endl;
	}

	void dr() // 다이어트 규칙
	{
		cout << "꼭 지켜야 할 규칙 10가지\n" << endl;
		cout << "① 무조건 굶기 보다는 규칙적인 식사 스케쥴을 정하기" << endl;
		cout << "   = 굶는 다이어트와 과식을 피하되 배고프지 않게 먹는 것이 핵심! 일정한 시간에 맞춰 소식을 하는 것이 좋다.\n" << endl;
		cout << "② 건강한 지방을 골라 먹기" << endl;
		cout << "   = 먹어야 할 지방과 피해야 할 지방을 확실하게 구분하는 것부터 시작! 지방이라고 해서 무조건 나쁜 것만은 아니다. 생선이나 아보카도 등에는 몸에 좋은 불포화지방이 들어있다.\n" << endl;
		cout << "③ 만보계를 차고 매일 걷기" << endl;
		cout << "   = 하루에 1만보 걷기를 꾸준히 하면 체중 조절은 물론 심폐기능이 향상되고, 근육이 강화되며 질병에 걸릴 위험이 줄어든다. 만보계를 늘 차고 있으면 자극이 될 수 있다!\n" << endl;
		cout << "④ 건강한 간식을 즐기기" << endl;
		cout << "   = 간식이라고 모두 나쁜 것이 아니다! 배가 출출할 때 비스켓 등 가공식품보다는 적당한 양의 과일과 채소, 견과류를 먹으면 오히려 살을 빼는 데 효과적이다.\n" << endl;
		cout << "⑤ 식품 라벨에 씌여 있는 당분과 지방의 양을 확인하기" << endl;
		cout << "   = 당분과 몸에 나쁜 지방은 비만의 적이다! 세계보건기구(WHO)가 하루에 당분을 25g(약 6 티스푼) 이하로 섭취하라는 권고안을 마련한 것은 이 때문이다.\n" << endl;
		cout << "⑥ 음식을 추가 주문하는 것에 주의하기" << endl;
		cout << "   = 과식은 금물이다! 음식을 더 먹고 싶을 때 포만감을 줄 수 있는 채소를 선택하는 것이 좋다.\n" << endl;
		cout << "⑦ 한 시간에 10분 정도는 일어서기" << endl;
		cout << "   = 오래 앉아 있는 습관은 당뇨병과 심장마비 위험을 높이고 허리둘레를 늘게 하며 하체비만을 유발하기도 한다!\n" << endl;
		cout << "⑧ 당분이 든 음료를 피하기" << endl;
		cout << "   = 과일주스에 든 당분 함량은 예상외로 많다! 천연 과일을 표방한 음료를 선택할 때 신중할 필요가 있다.\n" << endl;
		cout << "⑨ 음식을 먹을 때 TV를 끄기" << endl;
		cout << "   = TV를 보면서 음식을 먹으면 과식을 하기 쉽고 정크푸드의 유혹에 빠지기 쉽다!\n" << endl;
		cout << "⑩ 과일과 채소는 매일 5회 정도 먹기" << endl;
		cout << "   = 채소와 과일은 건강 다이어트를 위한 필수품이다!단 당분이 든 과일은 저녁 늦게 먹는 것을 피하자.\n\n\n" << endl;
	}

	void dfud() // don't forgive up diet, ※ 다이어트를 포기하고 싶을 때 보시오 ※
	{
		cout << "* 다이어트를 포기하고 싶을 때 *\n" << endl;
		cout << "① 너가 좋아하고 사랑하는 사람들을 생각하고, 너를 좋아하고 사랑하는 사람들을 생각하자." << endl;
		cout << "② 다이어트 하면서 조금이라도 살이 빠지거나, 예전이랑 달라진 점을 생각하며 차근차근 꾸준히 하자." << endl;
		cout << "③ 목표치에 도달했을 때 그때의 너를 생각하자." << endl;
		cout << "할 수 있다! 아자 아자!!!\n\n\n" << endl;
	}

	void ds() // 다이어트 자극 문구
	{
		ifstream is;
		is.open("Diet.txt");
		if (!is)
		{		// ! 연산자 오버로딩
			cerr << "파일 오픈에 실패하였습니다" << endl;
			exit(1);
		}
		char c;
		is.get(c);		// 하나의 문자를 읽는다.
		while (!is.eof())
		{
			cout << c;
			is.get(c);
		}
		cout << endl;
		is.close();
	}

	void introduce();
	void menu();
};

void project::introduce() // 소개말 외부함수로 정의
{
	cout << "	   < Mun Diet Program >\n" << endl; // 프로그램 이름
	cout << "현재 나의 키와 몸무게 : 160cm, 110kg\n" << endl; // 프로젝트 기준
}

void project::menu() //  메뉴 번호
{
	cout << "확인하고 싶은 메뉴를 고르세요.\n" << endl;
	cout << "1. BMI 계산공식" << endl;
	cout << "2. 오늘의 운동(요일별)" << endl;
	cout << "3. 식단" << endl;
	cout << "4. 다이어트에 좋은 음식, 안좋은 음식" << endl;
	cout << "5. 다이어트 때 지켜야 할 규칙 10가지" << endl;
	cout << "6. ※ 다이어트를 포기하고 싶을 때 보시오 ※" << endl;
	cout << "7. 다이어트 자극 문구" << endl;
	cout << "0. 종료\n" << endl;

	cout << "메뉴번호를 입력하세요 : ";
	cin >> num;
	cout << endl;
}

char* timeToString(struct tm *t)  // 날짜 계산
{
	static char s[20];

	sprintf(s, "%04d-%02d-%02d %02d:%02d:%02d",	t->tm_year + 1900, t->tm_mon + 1, t->tm_mday, t->tm_hour, t->tm_min, t->tm_sec	);

	return s;
}

int main()
{
	project pj;
	
	struct tm *t;
	time_t timer;

	char week[7][2 + 1] = { "일", "월", "화", "수", "목", "금", "토" };

	timer = time(NULL);    // 현재 시각을 초 단위로 얻기
	t = localtime(&timer); // 초 단위의 시간을 분리하여 구조체에 넣기

	printf("%120s\n\n", timeToString(t));
 
	pj.male = {"남성"};
	pj.female = { "여성" };
	pj.uw = "저체중";
	pj.nw = "정상";
	pj.ow = "과체중";
	pj.obw = "비만";
	pj.eow = "고도비만";

	//다이어트 자극 문구
	// -> 프로그램을 킬 때 마다 랜덤으로 자극문구를 txt파일에 있는 것 하나를 갖고 온다.(파일 입출력) 구현못했습니다 ㅜㅡㅜ
	/*char ran[9][100];
	int random;
	random = rand() % 1 + 9;
	
	ifstream is1;
	is1.open("Diet.txt");
	if (!is1) 
	{		// ! 연산자 오버로딩
		cerr << "파일 오픈에 실패하였습니다" << endl;
		exit(1);
	}

	char c1;
	is1.get(c1);
	
	while (!is1.eof())
	{
		for (int i = 0; i < 100; i++)
		{
			if (c1 == '\n')
			{
				cnt++;
				i = 0;
			}
			ran[cnt][i] = c1;
		}
	}
	cout << endl;
	is1.close();

	cout << ran[random] << endl;
	*/
	
	pj.introduce(); // 외부함수 소개말 호출

	while (true)
	{
		try // 예외처리를 해줌
		{
			pj.menu();

			if (pj.num == 1)
			{
				pj.bf(); // 내부함수 bmi수치표 호출
				pj.bmi(); // 내부함수 bmi공식 호출	
			}

			else if (pj.num == 2)
			{
				printf("┌─────────────────────────────────────────────────────────────────────────────────────────┐\n");
				printf("│운동법 : 유산소와 무산소로 균형잡힌 전신 운동이 필요하며, 저중량 고반복의 방법이 적절하다│\n");
				printf("└─────────────────────────────────────────────────────────────────────────────────────────┘\n\n");

				cout << pj.male << " 하루 칼로리 권장량 : 2500Kcal" << endl;
				cout << pj.female << " 하루 칼로리 권장량 : 2000Kcal\n" << endl;

				printf("오늘은 %s요일 입니다.\n\n", week[t->tm_wday]);
				// 금일의 운동을 파일입출력으로 불러옴(if 문 7개)
				if (week[t->tm_wday] == week[1])
				{
					ifstream is;
					is.open("Mon.txt");
					if (!is)
					{		// ! 연산자 오버로딩
						cerr << "파일 오픈에 실패하였습니다" << endl;
						exit(1);
					}
					char c;
					is.get(c);		// 하나의 문자를 읽는다.
					while (!is.eof())
					{
						cout << c;
						is.get(c);
					}
					cout << endl;
					is.close();
				}

				else if (week[t->tm_wday] == week[2])
				{
					ifstream is;
					is.open("Tue.txt");
					if (!is)
					{		// ! 연산자 오버로딩
						cerr << "파일 오픈에 실패하였습니다" << endl;
						exit(1);
					}
					char c;
					is.get(c);		// 하나의 문자를 읽는다.
					while (!is.eof())
					{
						cout << c;
						is.get(c);
					}
					cout << endl;
					is.close();
				}

				else if (week[t->tm_wday] == week[3])
				{
					ifstream is;
					is.open("Wen.txt");
					if (!is)
					{		// ! 연산자 오버로딩
						cerr << "파일 오픈에 실패하였습니다" << endl;
						exit(1);
					}
					char c;
					is.get(c);		// 하나의 문자를 읽는다.
					while (!is.eof())
					{
						cout << c;
						is.get(c);
					}
					cout << endl;
					is.close();
				}

				else if (week[t->tm_wday] == week[4])
				{
					ifstream is;
					is.open("Thu.txt");
					if (!is)
					{		// ! 연산자 오버로딩
						cerr << "파일 오픈에 실패하였습니다" << endl;
						exit(1);
					}
					char c;
					is.get(c);		// 하나의 문자를 읽는다.
					while (!is.eof())
					{
						cout << c;
						is.get(c);
					}
					cout << endl;
					is.close();
				}

				else if (week[t->tm_wday] == week[5])
				{
					ifstream is;
					is.open("Fri.txt");
					if (!is)
					{		// ! 연산자 오버로딩
						cerr << "파일 오픈에 실패하였습니다" << endl;
						exit(1);
					}
					char c;
					is.get(c);		// 하나의 문자를 읽는다.
					while (!is.eof())
					{
						cout << c;
						is.get(c);
					}
					cout << endl;
					is.close();
				}

				else if (week[t->tm_wday] == week[6])
				{
					ifstream is;
					is.open("Sat.txt");
					if (!is)
					{		// ! 연산자 오버로딩
						cerr << "파일 오픈에 실패하였습니다" << endl;
						exit(1);
					}
					char c;
					is.get(c);		// 하나의 문자를 읽는다.
					while (!is.eof())
					{
						cout << c;
						is.get(c);
					}
					cout << endl;
					is.close();
				}

				else
				{
					ifstream is;
					is.open("Sun.txt");
					if (!is)
					{		// ! 연산자 오버로딩
						cerr << "파일 오픈에 실패하였습니다" << endl;
						exit(1);
					}
					char c;
					is.get(c);		// 하나의 문자를 읽는다.
					while (!is.eof())
					{
						cout << c;
						is.get(c);
					}
					cout << endl;
					is.close();
				}
			}

			else if (pj.num == 3)
			{
				pj.dm();
			}

			else if (pj.num == 4)
			{
				pj.df();
			}

			else if (pj.num == 5)
			{
				pj.dr();
			}

			else if (pj.num == 6)
			{
				pj.dfud();
			}

			else if (pj.num == 7)
			{
				pj.ds();
			}

			else if (pj.num == 0)
				break;

			else
				throw pj.num;
		}
		catch (int e) // try에 없는 번호면
		{
			cout << "메뉴에 없는 번호입니다. 다시 한 번 입력해 주세요.\n\n" << endl;
		}
	}
	return 0;
}
// 컨테이너정리1
#include <list>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>

int main()
{
	// 1. 사용자에게 10개의 데이타 입력후, 입력된 모든 값을 출력하고, 모든값의 합도 출력하려고 한다.
	//    배열이면 충분하다
	int x[10];

	// 2. 사용자가 -1을 입력할때까지 입력 받은후, 입력된 모든 값을 출력하고, 모든값의 합도 출력하려고 한다.
	//    선형컨테이너(list, vector 등)
	std::list<int> st;

	// 3. 사용자가 -1을 입력할때까지 입력 받은후, 제일 큰수 3개를 제거하고, 정렬된 상태로 출력.
	std::multiset<int> ms;

	// 4. (3)번을 하는데, 중복된 값은 제거하고 입력
	std::set<int> s;

	// 5. 학생 이름을 키값으로 "국, 영, 수" 점수를 저장
	std::map<std::string, std::vector<int>> score_map;

	score_map["홍길동"].push_back(100); // 국어
	score_map["홍길동"].push_back(80); // 영어
	score_map["홍길동"].push_back(90); // 수학

	// 홍길동을 키값으로 vector를 먼저 얻으세요
	std::vector<int>& score = socre_map["홍길동"];

	// 이제 jumsu 사용
	score[0] = 100;
	score[1] = 100;

	// vector는 []도 가능하므로
	score_map["홍길동"][0] = 90; // 국어점수 수정.

	// 6. 키값기준 정렬은 필요없고, 오직 검색을 빠르게 하고 싶다.
	std::unordered_map<std::string, std::vector<int>> score_map2;

	// 만들고자 하는 프로그램에 따라서 "어떤 컨테이너(자료구조)" 를 사용할것인가를 결정해야 합니다.
}
/*
// 실습과제 => C의 전처리기를 만드세요.
// a.txt 파일 만들고 아래 처럼 만드세요
#define MAX 100				// #define 으로 시작하면 MAX, 10 을 맵에 저장 
#define MIN 10				// 그리고 출력파일에서는 쓸 필요 없다.

// 그리고 한줄씩 읽어서, 단어 별로 분리후 각 단어가 맵에 있는지 확인후, 없으면 그냥 출력 파일에 출력
//																		있으면 맵에 데이타 를 파일로출력
int main()
{
	int a = MAX
	int b = MIN
}
// 프로그램을 만들어서 위 "a.txt" 읽어 들여서 "b.txt" 파일에 쓰세요.. 결과는 아래와 같아야 합니다.
int main()
{
	int a = 100
	int b = 10
}
*/



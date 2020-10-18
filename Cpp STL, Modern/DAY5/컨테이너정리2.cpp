// 컨테이너정리2.cpp
// isocpp.org

// 1979년 : C++탄생. - "stroustrup"
// 1998년 : C++ 1차 표준 탄생. 문법표준화, STL 등장

STL 개념소개 : Container, Iterator, Algorithm

std::list<int> s(10, 3);
std::list<int>::iterator p1 = s.begin();
std::list<int>::iterator ret = std::find(s.begin(), s.end(), 3);

선형컨테이너   : list, vector, deque
컨테이너어답터 : stack, queue, priority_queue
연관컨테이너   : set, multiset, map, multimap

유틸리티 : string, pair, bitset

알고리즘 함수들 : find, sort, reverse, remove, replace 등..

결국 "자료구조(컨테이너)" 와 "알고리즘" 위주의 라이브러리.
---------------------------------------------------
// 2011년 : C++11 이라고 불리는 2번째 표준 발표. 문법 대폭 추가.(auto, 람다표현식, range-for, "move", "완벽한전달")
// STL 도 추가
// 1. 자료구조 추가 : array<>, forward_list(싱글리스트)
//                    unordered_set(multiset, map, multimap)

// 2. 자료구조와 알고리즘 외의 유틸리티 추가 
//    "스마트포인터", "funtion", "시간과 날짜", "멀티스레드", "정규표현식", "정밀한 난수 발생기"

// 2014 / 2017 : 역시 자료구조 보다는 "유틸리티 추가" => "파일 시스템(C++17)"

// 2020(C++20) : 네트워크가 들어오기로 했으나 탈락,  대신 "RANGE" 라는 엄청난 도구가 등장

// 향후,  GUI, DB, Network, XML 등 모든 분야을 담으려고 노력!!



//// https://www.acmicpc.net/problem/23320
//
//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//#define OUT
//
//int ratioOfA;
//int minScoreForA;
//priority_queue<int, vector<int>, less<int>> pq;
//int n;
//
//void solution(OUT int& numsBasedOnCurve, OUT int& numsOnAbsoluteEval)
//{
//	numsBasedOnCurve = (int)(n * (ratioOfA / 100.0f));
//
//	int cnt = 0;
//	while (pq.size() > 0 && pq.top() >= minScoreForA)
//	{
//		pq.pop();
//		++cnt;
//	}
//
//	numsOnAbsoluteEval = cnt;
//}
//
//int main()
//{
//	/////////////////////////////////////////
//	// INPUT
//	cin >> n;
//
//	for (int i = 0; i < n; ++i)
//	{
//		int score;
//		cin >> score;
//		pq.emplace(score);
//	}
//
//	cin >> ratioOfA;
//	cin >> minScoreForA;
//
//	/////////////////////////////////////////
//	// SOLUTION
//	int numsBasedOnCurve;
//	int numsOnAbsoluteEval;
//	solution(OUT numsBasedOnCurve, OUT numsOnAbsoluteEval);
//
//	cout << numsBasedOnCurve << " " << numsOnAbsoluteEval;
//
//	return 0;
//}
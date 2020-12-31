#include <string>
#include <vector>
#include <stack>
#include <iostream>

int solution(std::vector<std::vector<int>> board, std::vector<int> moves)
{
	int answer = 0;
	std::stack<int> stack;
	int idx = 0;

	/* 모든 moves를 소모할때까지 */
	while (moves.size() > idx)
	{
		int m = moves[idx];
		m--; idx++;

		/* 인형뽑기 */
		int dep = 0;
		int doll = 0;
		while (dep < board[0].size())
		{
			if (board[dep][m] != 0)
			{
				doll = board[dep][m];
				board[dep][m] = 0;
				break;
			}
			dep++;
		}

		if (doll == 0) continue; // 뽑은 인형이 없음


		/* 스택에 담기 */
		stack.push(doll);
		if (stack.size() > 1)
		{
			int firsttop = stack.top();
			stack.pop();
			int secondtop = stack.top();

			if (firsttop == secondtop) // 위에서 첫번째와 두번째 인형이 같은 인형임
			{
				answer += 2;
				stack.pop();
			}
			else { // pop 했던 것을 원상복귀
				stack.push(firsttop);
			}

		}

	}

	return answer;
}


int main()
{
	std::vector< std::vector<int> > board;

	// [[0,0,0,0,0],[0,0,1,0,3],[0,2,5,0,1],[4,2,4,4,2],[3,5,1,3,1]]
	board.push_back(std::vector<int>());
	board.push_back(std::vector<int>());
	board.push_back(std::vector<int>());
	board.push_back(std::vector<int>());
	board.push_back(std::vector<int>());
	board[0].push_back(0); board[0].push_back(0); board[0].push_back(0); board[0].push_back(0); board[0].push_back(0);
	board[1].push_back(0); board[1].push_back(0); board[1].push_back(1); board[1].push_back(0); board[1].push_back(3);
	board[2].push_back(0); board[2].push_back(2); board[2].push_back(5); board[2].push_back(0); board[2].push_back(1);
	board[3].push_back(4); board[3].push_back(2); board[3].push_back(4); board[3].push_back(4); board[3].push_back(2);
	board[4].push_back(3); board[4].push_back(5); board[4].push_back(1); board[4].push_back(3); board[4].push_back(1);

	std::vector<int> moves;

	//[1,5,3,5,1,2,1,4]
	moves.push_back(1);
	moves.push_back(5);
	moves.push_back(3);
	moves.push_back(5);
	moves.push_back(1);
	moves.push_back(2);
	moves.push_back(1);
	moves.push_back(4);

	int answer = solution(board, moves);

	std::cout << answer << std::endl;

	return 0;
}
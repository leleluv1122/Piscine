int g_flag;
int g_result_arr[4][4];
int g_argv_garo[4][2]; //위 컬럼
int g_argv_sero[4][2];  // 왼쪽 오른쪽.

#include <unistd.h>

int exception(int argc, char *argv[])	//예외처리 함수.
{
	int i;
	int n;

	if(argc != 2 || argv[1][0] == '\0') // 널이면.	//argc 가 2가 아닐떄 //argc != 2 //인자가 2개 아닐
		return (0);
	i = 0;
	n = 0;
	while (argv[1][i] != '\0')
	{
		if(i % 2 == 0 && '1' <= argv[1][i] && argv[1][i] <= '4')//홀수 위치는 숫자인데 1~ 4 범위의 숫자
			;
		else if(i % 2 == 1 && argv[1][i] == ' ')//홀수 위치가 null
			;
		else
			return (0);
		if(n > 30) // 문자열의 길이가 30보다 커지면 나오면됨. 딱 정해진 형식대로만 받음. argv의 길이는 31
			return (0);
		n++;
		i++;
	}
	return (1);
}

void g_result_arr_zero_padding()
{
	int i;
	int j;

	i = 0; // 0으로 패딩
	while (i < 4) {
		j = 0;
		while (j < 4) {
			g_result_arr[i][j] = 0;
			j++;
		}
		i++;
	}
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_box(int result_arr[4][4])
{
	int n;
	int m;

	n = 0;
	while (n < 4)
	{
		m = 0;
		while (m < 4)
		{
			ft_putchar(result_arr[n][m] + '0');
			if (m == 3) //배열 출력을 안함.
				break;
			ft_putchar(' ');
			m++;
		}
		ft_putchar('\n');
		n++;
	}
}

int check_sero(int b, int result_arr[4][4]) //중복확인
{
	int ck_sero[5] = {0, 0, 0, 0, 0};
	int n;
	int sero_flag;

	n = 0;
	sero_flag = 0;
	while (n < 4)
	{
		if (result_arr[n][b] == 0) //  n 은 고정
			;
		else if (ck_sero[result_arr[n][b]] == 1)
		{
			sero_flag = 1; // 실행안댐
			break ;
		}
		else
			ck_sero[result_arr[n][b]] = 1;
		n++;
	}
	return (sero_flag);
}

int check_garo(int a, int result_arr[4][4])
{
	int ck_garo[5] = {0, 0, 0, 0, 0};// 0 쓰레기. 1 2 3 4 ... visited
	int n;
	int garo_flag;

	n = 0;
	garo_flag = 0;
	while (n < 4)
	{
		if (result_arr[a][n] == 0) //a는 고장. n만 바
			;
		else if (ck_garo[result_arr[a][n]] == 1)//
		{
			garo_flag = 1; // 실행안댐뀜
			break ;
		}
		else
			ck_garo[result_arr[a][n]] = 1;
		n++;
	}
	return (garo_flag);
}

// left -> right
int check_left(int a, int result_arr[4][4])
{
	int cnt; //카운트 1 2 3 4
	int n; // n
	int max_val; //큰값.. 더 크면 cnt + 1

	cnt = 1;//카운트가 1인 이유는 일단 0번쨰 위치를 갖기 때문
	n = 1;//n이 1인 이유는, 0번째는 알에서 주입.
	max_val = result_arr[a][0]; //가로 위치의 최대값. => 시작위치를 저장.
	while (n < 4)
	{
		if (result_arr[a][n] > max_val)//
		{
			max_val = result_arr[a][n];
			cnt++;
		}
		n++;
	}
	if (g_argv_garo[a][0] != cnt)
		return (1);
	return (0);
}

// right -> left
int check_right(int a, int result_arr[4][4])
{
	int cnt;
	int n;
	int max_val;

	cnt = 1;
	n = 2;
	max_val = result_arr[a][3];
	while (n >= 0)
	{
		if (result_arr[a][n] > max_val)
		{
			max_val = result_arr[a][n];
			cnt++;

		}
		n--;
	}
	if (cnt != g_argv_garo[a][1])
		return (1);
	return (0);
}

// top bottom
int check_top(int b, int result_arr[4][4])
{
	int cnt;
	int n;
	int max_val;

	cnt = 1;
	n = 1;

	max_val = result_arr[0][b]; //0열 부터 시작. 1, 2, 3, 4
	while (n < 4)
	{
		if (result_arr[n][b] > max_val)// 2열 비교, 3열비교, 4열 비교 // max보다 크면 들어감
		{//b => 행이 고정된 상태로 증가. 2, 3, 4, 1 .... n = 2 b1
			max_val = result_arr[n][b];//max_val를 바꿔줌.
			cnt++;//크기 측정을 위해 카운트증가.
		}
		n++;
	}
	if (cnt != g_argv_sero[b][0])//세로의 위치와 카운트개수가 맞지 않으면 리턴
		return (1); //거짓 반환
	return (0);
}

// bottom -> top
int check_bottom(int b, int result_arr[4][4])
{
	int cnt;
	int n;
	int max_val;

	cnt = 1;
	n = 2;
	max_val = result_arr[3][b];
	while (n >= 0)
	{
		if (result_arr[n][b] > max_val)
		{
			max_val = result_arr[n][b];
			cnt++;
		}
		n--;
	}
	if (cnt != g_argv_sero[b][1])
		return (1);
	return (0);
}

int check_bottom_top(int a, int b, int result_arr[4][4])
{
	int top = check_top(b, result_arr);
	int bottom = check_bottom(b, result_arr);
	int ck;

	ck = 0;
	if (top == 1 || bottom == 1)
		ck = 1;
	return (ck);//하나라도 있으면 리턴 1
}

int check_left_right(int a, int b, int result_arr[4][4])
{
	int left = check_left(a, result_arr);//왼쪽에서 오른
	int right = check_right(a, result_arr);
	int ck;

	ck = 0;
	if (left == 1 || right == 1)
		ck = 1;
	return (ck);
}


int check_duplication_sero_garo(int a, int b, int result_arr[4][4])
{
	int sero = check_sero(b, result_arr);//세로중복체크
	int garo = check_garo(a, result_arr);//가로중복체크
	int ck;

	ck = 0;
	if (sero == 1 || garo == 1)
		ck = 1; // 세로가 1, 가로 , 하나라도 거짓.
	return (ck);
}
int check(int result_arr[4][4], int a, int b)
{
	if (check_duplication_sero_garo(a, b, result_arr)) // 행렬 중복 체크하기.
		return (0);
	if (a == 3 && check_bottom_top(a, b, result_arr) == 1) //열 끝에 다달으면 체크
		return (0);//a 길이가 3일때 체크를 했는데 안맞으면 0 리턴
	if (b == 3 && check_left_right(a, b, result_arr) == 1)  // 00 01 02 03 => 10 11 .... 33 3+1 = 4;
		return (0);
	return (1); //모든 조건 통과
}

void dfs(int result_arr[4][4], int a, int b) {
	int n;

	if (a == 4 && b == 0) {
		print_box(result_arr);
		g_flag = 1;
		return;
	}
	n = 1;
	while (n < 5) {
		result_arr[a][b] = n; // 일단 넣기.
		if (check(result_arr, a, b))
		{
			print_box(result_arr);
			printf("\n");
			if (b == 3)
				dfs(result_arr, a + 1, 0);
			else
				dfs(result_arr, a, b + 1);
			if (g_flag == 1)
				return;
		}
		result_arr[a][b] = 0;
		n++;
	}
}


int main(int argc, char *argv[])
{
	int i;
	int j;

	if (exception(argc, argv) == 0)
	{
		write(1,"Error\n", 6);
		return (1);
	}
	g_result_arr_zero_padding();
	j = 0;
	i = 0;
	while (i != 4) { //4번 반복
		g_argv_garo[i][0] = argv[1][j] - '0';
		g_argv_garo[i][1] = argv[1][j+8] - '0';
		g_argv_sero[i][0] = argv[1][j+16] - '0';
		g_argv_sero[i][1] = argv[1][j+24] - '0';
		j = j + 2;
		i++;
	}
	dfs(g_result_arr, 0, 0);
	return(-1);
}
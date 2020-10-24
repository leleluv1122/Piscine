#include <stdio.h>
#include <unistd.h>

int g_flag;
int g_argv_garo[4][2] = {{4,1}, {3,2}, {2,2}, {1,2}};
int g_argv_sero[4][2] = {{4,1}, {3,2}, {2,2}, {1,2}};

void print_box(int result_arr[4][4])
{
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
			printf("%d ", result_arr[i][j]);
		printf("\n");
	}
}

int check_sero(int b, int result_arr[4][4]) //중복확인
{
	int		ck_sero[5] = {0, 0, 0, 0, 0};
	int		n;
	int		sero_flag;

	n = 0;
	sero_flag = 0;
	while (n < 4)
	{
        if (result_arr[n][b] == 0)
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

int check_garo(int a,  int result_arr[4][4])
{
	int		ck_garo[5] = {0, 0, 0, 0, 0};
	int		n;
	int		garo_flag;

	n = 0;
	garo_flag = 0;
	while (n < 4)
	{
        if (result_arr[a][n] == 0)
            ;
		else if (ck_garo[result_arr[a][n]] == 1)
		{
			garo_flag = 1; // 실행안댐
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
    int cnt;
    int n;
    int max_val;
    int flag;

    cnt = 1;
    n = 1;
    flag = 0;
    max_val = result_arr[a][0];
    while (n < 4)
	{
        if (result_arr[a][n] > max_val)
        {
            max_val = result_arr[a][n];
            cnt++;
            if (g_argv_garo[a][0] < cnt)
            {
                flag = 1;
                break ;
            }
        }
        n++;
    }
    return (flag);
}

// right -> left
int check_right(int a, int result_arr[4][4])
{
    int cnt;
    int n;
    int max_val;
    int flag;

    cnt = 1;
    n = 2;
    flag = 0;
    max_val = result_arr[a][3];
    while (n >= 0)
	{
        if (result_arr[a][n] > max_val)
        {
            max_val = result_arr[a][n];
            cnt++;
            if (g_argv_garo[a][1] < cnt)
            {
                flag = 1;
                break ;
            }
        }
        n--;
    }
    return (flag);
}

// top bottom
int check_top(int b, int result_arr[4][4])
{
    int cnt;
    int n;
    int max_val;
    int flag;

    cnt = 1;
    n = 1;
    flag = 0;
    max_val = result_arr[0][b];
    while (n < 4)
	{
        if (result_arr[n][b] > max_val)
        {
            max_val = result_arr[n][b];
            cnt++;
            if (g_argv_sero[b][0] < cnt)
            {
                flag = 1;
                break ;
            }
        }
        n++;
    }
    return (flag);
}

// bottom -> top
int check_bottom(int b, int result_arr[4][4])
{
    int cnt;
    int n;
    int max_val;
    int flag;

    cnt = 1;
    n = 2;
    flag = 0;
    max_val = result_arr[3][b];
    while (n >= 0)
	{
        if (result_arr[n][b] > max_val)
        {
            max_val = result_arr[n][b];
            cnt++;
            if (g_argv_sero[b][1] < cnt)
            {
                flag = 1;
                break ;
            }
        }
        n--;
    }
    return (flag);
}

int check(int a, int b, int result_arr[4][4])
{
	int		sero = check_sero(b, result_arr);
	int		garo = check_garo(a, result_arr);
    int     left = check_left(a, result_arr);
    int     right = check_right(a, result_arr);
    int     top = check_top(b, result_arr);
    int     bottom = check_bottom(b, result_arr);
	int		ck;

	ck = 0;
	if (sero == 1 || garo == 1 || left == 1)
		ck = 1;
    if (right == 1 || top == 1 || bottom == 1)
        ck = 1;
	return (ck);
}

void	dfs(int result_arr[4][4], int a, int b)
{
	int		n;

	if (a == 4 && b == 0)
	{
		print_box(result_arr);
		g_flag = 1;
		return ;
	}
	n = 1;
	while (n < 5)
	{
        result_arr[a][b] = n;
		if (!check(a, b, result_arr))
		{
			if (b + 1 == 4)
			{
				a += 1;
				b = 0;
			}
			else
				b++;
			dfs(result_arr, a, b);
			if (g_flag == 1)
				break ;
		}
        result_arr[a][b] = 0;
		n++;
	}
}

int main()
{
	g_flag = 0;
	int result_arr[4][4] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	dfs(result_arr, 0, 0);
}

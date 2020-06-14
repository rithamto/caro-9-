#include <conio.h>
#include <stdio.h>
#include <windows.h>

char banco[3][3] = {'1','2','3','4','5','6','7','8','9'};
int ve()
{
	system("cls");
	system("color 37");
	printf("\n\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~CARO~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\n\n");
	for(int i=0;i<3;i++)
	{
		printf("\t\t\t\t\t\t\t\t\t");
		printf("-------------------------");
		printf("\n");
		printf("\t\t\t\t\t\t\t\t\t"); 
		for(int j=0;j<3;j++)
		{
                
			printf("|   %c   ",banco[i][j]);
		}
		printf("|\n");
	}
	printf("\t\t\t\t\t\t\t\t\t"); 
	printf("-------------------------\n");
}
int kiemtra()
{
    if (banco[0][0] == banco[0][1] && banco[0][1] == banco[0][2])
        return 1;
        
    else if (banco[1][0] == banco[1][1] && banco[1][1] == banco[1][2])
        return 1;
        
    else if (banco[2][0] == banco[2][1] && banco[2][1] == banco[2][2])
        return 1;
        
    else if (banco[0][0] == banco[1][0] && banco[1][0] == banco[2][0])
        return 1;
        
    else if (banco[0][1] == banco[1][1] && banco[1][1] == banco[2][1])
        return 1;
        
    else if (banco[0][2] == banco[1][2] && banco[1][2] == banco[2][2])
        return 1;
        
    else if (banco[0][0] == banco[1][1] && banco[1][1] == banco[2][2])
        return 1;
        
    else if (banco[0][2] == banco[1][1] && banco[1][1]== banco[2][0])
        return 1;
        
    else if (banco[0][0] != '1' && banco[0][1] != '2' && banco[0][2] != '3' &&
        banco[1][0] != '4' && banco[1][1] != '5' && banco[1][2] != '6' && banco[2][0] 
        != '7' && banco[2][1] != '8' && banco[2][2] != '9')

        return 0;
    else
        return  - 1;
}
int main()
{
	system("color 37");
    int player = 1, i, c;
    char nguoi, menu;
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t1.PLAY\n\t\t\t\t\t\t\t\t\t2.EXIT\n");
    printf("\t\t\t\t\t\t\t\t\tCHOSE A NUMBER: ");
    scanf("%c", &menu);
    switch(menu)
    {
    	case '1':
    {
	do
    	{
        	ve();
         	player = (player % 2) ? 1 : 2;
        	printf("\n\t\t\t\t\t\t\t\t\tPlayer %d, enter a number:  \a", player);
        	scanf("%d", &c);

        	nguoi = (player == 1) ? 'X' : 'O';

        	if (c == 1 && banco[0][0] == '1')
            banco[0][0] = nguoi;
            
        	else if (c == 2 && banco[0][1] == '2')
            banco[0][1] = nguoi;
            
        	else if (c == 3 && banco[0][2] == '3')
            banco[0][2] = nguoi;
            
        	else if (c == 4 && banco[1][0] == '4')
            banco[1][0] = nguoi;
            
        	else if (c == 5 && banco[1][1] == '5')
            banco[1][1] = nguoi;
            
        	else if (c == 6 && banco[1][2] == '6')
            banco[1][2] = nguoi;
            
        	else if (c == 7 && banco[2][0] == '7')
            banco[2][0] = nguoi;
            
        	else if (c == 8 && banco[2][1] == '8')
            banco[2][1] = nguoi;
            
        	else if (c == 9 && banco[2][2] == '9')
            banco[2][2] = nguoi;
            
	        else
	        {
	            printf("\t\t\t\t\t\t\t\t\tInvalid move, press any key to try agian ");
	            player--;
	            getch();
	        }
	        i = kiemtra();
	        player++;
    }
	while (i ==  - 1);  
    	ve();
    if (i == 1)
        printf("\a\n\t\t\t\t\t\t\t\t\t    <->PLAYER %d WIN<-> ", --player);
    else
        printf("\a\t\t\t\t\t\t\t\t\t\t <<<_TIE_>>>");
    break;
}
		case '2':
			{
				exit(0);
			}
	}
}
   

int uniquePathsWithObstacles(int** obstacleGrid, int obstacleGridRowSize, int obstacleGridColSize) {
    int i,j;
    int m = obstacleGridRowSize, n = obstacleGridColSize;
    int dp[m][n];
    
    memset(dp,0,sizeof(dp));
    
    if(m == 1 && n == 1)
    {
        return obstacleGrid[0][0]==1?0:1;
    }
    else if(m == 1)
    {
        for(i = 0; i < n; i++)
            if(obstacleGrid[0][i] == 1) return 0;
        return 1;
    }
        
    else if(n == 1) 
    {
        for(i = 0; i < m; i++)
            if(obstacleGrid[i][0] == 1) return 0;
        return 1;
    }
    
    if(obstacleGrid[m-1][n-1] == 1) return 0;
    if(obstacleGrid[0][0] == 1) return 0;
    
    dp[0][0]= 1;
    
    for(i = 1; i < m; i++)
    {
        dp[i][0] = dp[i-1][0] == 1?1:0;
        if(obstacleGrid[i][0] == 1) dp[i][0] = 0;
    }
        
    
    for(i = 1; i < n; i++)
    {
        dp[0][i] = dp[0][i-1] == 1?1:0;
        if(obstacleGrid[0][i] == 1) dp[0][i] = 0;
    }
        
    
    for(i = 1; i < m; i ++)
        for(j = 1; j < n; j++)
        {
            if(obstacleGrid[i][j]!=1)
            {
                if(obstacleGrid[i-1][j]!=1&&obstacleGrid[i][j-1]!=1)
                    dp[i][j] = dp[i-1][j]+dp[i][j-1];
                else if(obstacleGrid[i-1][j]!=1)
                    dp[i][j] = dp[i-1][j];
                else if(obstacleGrid[i][j-1]!=1)
                    dp[i][j] = dp[i][j-1];
                else 
                    dp[i][j] = 0;
            }
            else
                dp[i][j] = 0;
        }
    return dp[m-1][n-1];
}

// Brute force --> where complexity is n^3 because of which it gives run time error

class Solution {
public:

    int n, m;
    void markrow(vector<vector<int>> &matrix, int n, int m, int i)
    {
        for(int j=0; j<m;i++)
        {
            if(matrix[i][j]!=0)
            {
                matrix[i][j] = -1;
            }
        }
    }

    void markcol(vector<vector<int>> &matrix,int n, int m , int j)
    {
        for(int i =0; i<n;i++)
        {
            if(matrix[i][j]!=0)
            {
                matrix[i][j] = -1;
            }
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {
        n = matrix.size();
        m = matrix[0].size();
      for(int i=0; i<n;i++)  
      {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                markrow(matrix,n,m,i);
                markcol(matrix,n,m,j);
            }
        }
      }

      for(int i=0; i<n;i++)  
      {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==-1)
            {
               matrix[i][j]=0;
            }
        }
      }
      
    }
};

// Approach with time complexity n^2 which gives run time error

class Solution {
public:
    int n,m;
    void setZeroes(vector<vector<int>>& matrix) {
        n = matrix.size();
        m = matrix[0].size();
        vector<int> row={0};
        vector<int> col={0};

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=1;
                    col[j]=1;
                }
            }
        }

        for(int i=0; i<n;i++){
            for(int j=0;j<m;j++)
            {
                if(row[i]||col[j])
                {
                    matrix[i][j]=0;
                }
            }

        }
    }
};

//Approach with Time complexity 


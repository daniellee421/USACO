#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
//vector<int> graph[1005];
vector<int> arr[3][1005];
int visited[1005] = {};
int dx[5] = {1, -1, 0, 0};
int dy[5] = {0, 0, 1, -1};
int n = 0;
int m = 0;
int total = 0;

void dfs(int x, int y){
    
    visited[y] = 1;
    
    for(int i = 0; i < arr[x][y].size(); i++){
        int nxt = arr[x][y][i];
        
        if(visited[nxt] == 0){
            
            total+=1;
            dfs(x, nxt);
            
        }
    }
}

int main(){
    //freopen("homework.in", "r", stdin);
    //freopen("homework.out", "w", stdout);
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for(int i = 1; i<=m; i++){
        int x, y;
        cin >> x >> y;
        arr[0][x].push_back(y);
        arr[1][y].push_back(x);
    }
    int sum = 0;
    for(int i = 1; i<=n; i++){
        for(int i = 0; i< 505; i++){
            visited[i] = 0;
        }
        dfs(0,i);
        dfs(1,i);
        if(total == n-1){
            sum+=1;
            
        }
        total = 0;
    }
    cout << sum;
   
    
}




/*
 int m, n, k;
  cin >> m >> n >> k;
  int x1, x2, y1, y2;
  for(int i = 1; i<=m; i++){
      for(int j = 1; j<=n; j++){
          cin >> arr[i][j];
      }
  }
 
  for(int i = 0;i < k; i++){
      int jungle = 0, ocean = 0, ice = 0;
      cin >> x1 >> y1 >> x2 >> y2;
      for(int j=x1; j<=x2; j++){
          for(int k = y1; k<= y2; k++){
              if(arr[j][k] == 'J'){
                  jungle+=1;
              }else if(arr[j][k] == 'O'){
                  ocean+=1;
              }else if(arr[j][k] == 'I'){
                  ice +=1;
              }
          }
      }
      cout << jungle << " " << ocean << " " << ice << "\n";
      
  }
 int t, n;
 cin >> t;
 for(int i = 0; i<t; i++){
     cin >> n;
     for(int j = 1; j<=n; j++){
         cin >> arr[i];
     }
     for(int j = 1; j<n; j++){
         if(arr2[j-1]+arr[j]>arr[j]){
             arr2[j]=arr2[j-1]+arr[j];
         }else{
             arr2[j]=
         }
         
     }
 }
 int n;
 int count = 0;
 cin >> n;
 for(int i = 0; i<n; i++){
     cin >> gestures[i];
 }
 
 for(int k = 0; k<3; k++){
     for(int i = 0; i<n; i++){
         for(int h = 0; h<3;h++){
             for(int j = i+1; j<n; j++){
         
             }
         }
     }
 }
 int n, b;
    int answer = 1000000;
    int output = 0;
    cin >> n >> b;
    for(int i = 0; i<n; i++){
        cin >> p[i].first >> p[i].second;
    }
    sort(&p[0], &p[n]);
    for(int i = 0; i < b; i+=2){
        for(int j = 0; j < b; j+=2){
            int q1 = 0, q2 = 0, q3 = 0, q4 = 0;
            for(int k = 0; k <n; k++){
                if(p[k].first > i && j < p[k].second){
                    q1 +=1;
                }
                if(p[k].first < i && j < p[k].second){
                    q2 +=1;
                }
                if(p[k].first < i && j > p[k].second){
                    q3 +=1;
                }
                if(p[k].first > i && j > p[k].second){
                    q4 +=1;
                }
                
            }
            output = max(q1, max(q2,max(q3, q4)));
            if(output < answer){
                answer = output;
            }
        }
        
    }
    cout << answer;
        
        
    
 int n;
  int x = 1000;
  int y = 1000;
  cin >> n;
 
  arr[x][y] = 1;
  for(int i = 0; i<n; i++){
      char direction;
      int steps;
      int newx = 0;
      int newy = 0;
      cin >> direction >> steps;
      
      if(direction == 'N'){
          dnd+=1
      }else if (direction == 'S'){
          dnd+=2;
      }else if(direction == 'E'){
          dnd+=3;
      }else if(direction == 'W'){
          dnd+=4;
      }
 }
 int n, b;
 int answer = 1000000;
 int output = 0;
 cin >> n >> b;
 for(int i = 0; i<n; i++){
     cin >> p[i].first >> p[i].second;
 }
 sort(&p[0], &p[n]);
 for(int i = 0; i < b; i++){
     for(int j = 0; j < b; j++){
         int q1 = 0, q2 = 0, q3 = 0, q4 = 0;
         for(int k = 0; k <n; k++){
             if(p[k].first > i && j < p[k].second){
                 q1 +=1;
             }
             if(p[k].first < i && j < p[k].second){
                 q2 +=1;
             }
             if(p[k].first < i && j > p[k].second){
                 q3 +=1;
             }
             if(p[k].first > i && j > p[k].second){
                 q4 +=1;
             }
             
         }
         output = max(q1, max(q2,max(q3, q4)));
         if(output < answer){
             answer = output;
         }
     }
     
 }
 cout << answer;
 */

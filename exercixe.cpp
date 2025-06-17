# include <iostream>
using namespace std;
int main(){
    double matrix[4][4] = {{1.0,0.0,1.0,3.0},
                          {1.0,0.0,1.0,3.0},
                          {1.0,0.0,1.0,3.0},
                          {1.0,0.0,1.0,3.0}
};

for (int i=0;i<4;i++){
    for (int j =0;j<4;j++){
        cout<<matrix[i][j]<<" ";    
    }
    cout<<endl;
}

return 0;

}
//A CGPA Calculator
#include<iostream>
#include<vector>
using namespace std;

void calculate(){
    int n;

    cout << "Enter number of subjects: ";
    cin >> n;
    cout << endl;

    //input variables
    vector<string> grade_scored(n);
    vector<int> credit(n,0);

    //output variables
    float cg = 0.0;
    string g;

    //taking input of grades and credits of each subject
    for(int i=0; i<n; i++){
        cout << "Enter grade scored in subject " << i+1 << ": ";
        cin >> grade_scored[i];
        cout << endl;
    }
    cout << "\033[2J\033[1;1H";
    for(int i=0; i<n; i++){
        cout << "Enter credit of  subject " << i+1 << ": ";
        cin >> credit[i];
        cout << endl;
    }

    //grade_scored values
    vector<string>grade = {"A+","A","B+","B","C+","C","F"};
    vector<float>val = {10.0, 9.0, 8.5, 8.0, 7.5, 7.0, 0.0};

    //cg evaluation
    float total= 0.0, sum = 0.0;
    for(int i=0; i<n; i++){
        int j = 0;
        for(j=0; j<7; j++)if(grade_scored[i] == grade[j])break;
        total += credit[i]*val[j];
    }
    for(int i=0; i<n; i++)sum+=credit[i];
    cg = total/sum;
    
    //finding grade_scored
    int pos;
    for(int i=0; i<7; i++){
        if(cg>=val[i]){pos=i;break;}
    }
    g = grade[pos];


    //Printing Output
    cout << "\033[2J\033[1;1H";

    cout << "Scorecard: " << endl;
    for(int i=0; i<n ;i++){
        cout << "Subject " << i+1 << ": " << grade_scored[i] << endl;
    }
    cout << endl;
    printf("CG: %.2f\n", cg);
    cout << "Grade: " << g << endl;
}

int main(){
    ios::sync_with_stdio(0);
    //cin.tie(0); cout.tie(0);


    calculate();
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

const int MAX = 20;

void mostrar(int m[MAX][MAX], int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++)
            cout << m[i][j] << "\t";
        cout << endl;
    }
}


void incisoA(int N){
    int m[MAX][MAX], c=1;
    for(int i=0;i<N;i++){
        if(i%2==0)
            for(int j=0;j<N;j++) m[i][j]=c++;
        else
            for(int j=N-1;j>=0;j--) m[i][j]=c++;
    }
    cout << "\nInciso a)\n";
    mostrar(m,N);
}

void incisoB(int N){
    int m[MAX][MAX], c=1;
    for(int j=0;j<N;j++){
        if(j%2==0)
            for(int i=0;i<N;i++) m[i][j]=c++;
        else
            for(int i=N-1;i>=0;i--) m[i][j]=c++;
    }
    cout << "\nInciso b)\n";
    mostrar(m,N);
}


void incisoC(int N){
    int m[MAX][MAX], c=N*N;
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            m[i][j]=c--;
    cout << "\nInciso c)\n";
    mostrar(m,N);
}


void incisoD(int N){
    int m[MAX][MAX], c=1;
    for(int d=0; d<=2*(N-1); d++){
        for(int i=0;i<N;i++){
            int j=d-i;
            if(j>=0 && j<N)
                m[i][j]=c++;
        }
    }
    cout << "\nInciso d)\n";
    mostrar(m,N);
}

void incisoE(int N){
    int m[MAX][MAX], c=1;
    int ini=0, fin=N-1;

    while(ini<=fin){
        for(int j=ini;j<=fin;j++) m[ini][j]=c++;
        for(int i=ini+1;i<=fin;i++) m[i][fin]=c++;
        for(int j=fin-1;j>=ini;j--) m[fin][j]=c++;
        for(int i=fin-1;i>ini;i--) m[i][ini]=c++;
        ini++; fin--;
    }
    cout << "\nInciso e)\n";
    mostrar(m,N);
}

void incisoF(int N){
    int m[MAX][MAX], c=N*N;
    int ini=0, fin=N-1;

    while(ini<=fin){
        for(int j=ini;j<=fin;j++) m[ini][j]=c--;
        for(int i=ini+1;i<=fin;i++) m[i][fin]=c--;
        for(int j=fin-1;j>=ini;j--) m[fin][j]=c--;
        for(int i=fin-1;i>ini;i--) m[i][ini]=c--;
        ini++; fin--;
    }
    cout << "\nInciso f)\n";
    mostrar(m,N);
}


void incisoG(int N){
    int m[MAX][MAX];
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            m[i][j]=abs(i-j)+1;

    cout << "\nInciso g)\n";
    mostrar(m,N);
}

void incisoH(int N){
    int m[MAX][MAX];
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            m[i][j]=i+j+1;

    cout << "\nInciso h)\n";
    mostrar(m,N);
}

void incisoI(int N){
    int m[MAX][MAX];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i <= j){
                m[i][j] = j - i + 1;
            } else {
                m[i][j] = i - j + 1;
            }
        }
    }

    cout << "\nInciso i)\n";
    mostrar(m, N);
}

int main(){
    int N;
    cout << "Ingrese nro entero: ";
    cin >> N;

    incisoA(N);
    incisoB(N);
    incisoC(N);
    incisoD(N);
    incisoE(N);
    incisoF(N);
    incisoG(N);
    incisoH(N);
    incisoI(N);

    return 0;
}

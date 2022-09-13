#pragma once
#define N 5
#define T 80
#define M 32
#define OB 20
#define pie 3.14
long extern double sample[500000],AvgEnergy[500000],r[13],ai[13][13],e[13],k[13],c[11][21][100][13];
long extern double Delta[T+1][N+1],pi[N+1],pi_Avg[OB+1][N+1],b[N+1][M+1],b_Avg[OB+1][N+1][M+1],a[N+1][N+1],a_Avg[OB+1][N+1][N+1],Alpha[T+1][N+1],Bita[T+1][N+1],Zie[N+1][N+1][T+1],Gamma[T+1][N+1],a_New[N+1][N+1],b_New[N+1][M+1],pi_New[N+1];
int extern Si[T+1][N+1],O[OB+1][T+1],q_Star_T,print[T+1];
long double Compute_P_Star(int obsNum);
void Compute_Alpha(int obsNum);
void Compute_Bita(int obsNum);
void Compute_Zie(int obsNum);
void Compute_Gamma(int obsNum);
long double Update_a_(int i,int j);
long double Update_b_(int i,int j,int obsNum);
void Update_pi_();
int LiveTesting();
int LiveTestingOP();
void LiveTrain();
int FileTesting(char namef[200]);
int FileTestingOP(char namef[200]);
void Train();
void LiveRecord();
/*
dotMul_cpu.c
*/
#include "test_comm_cpu.h"
void dotMul_cpu(t_ve* in1, t_ve* in2,t_ve* out, unsigned int N)
{
	for(int i = 0; i < N; i++){
		out[i] = in1[i]*in2[i];
	}
}

void test_dotMul_cpu(double * pIn1,double * pIn2,unsigned int N)
{
	t_ve* pV1, pV2;
	int i;
	pV1 = (t_ve*)malloc(sizeof(t_ve)*N);
	pV2 = (t_ve*)malloc(sizeof(t_ve)*N);
	for (i = 0; i < N; i++){
		pV1[i] = (t_ve)pIn1[i];
		pV2[i] = (t_ve)pIn2[i];
	}	
	dotMul_cpu(pV1,pV2,N);
	free(pV1);
	free(pV2);

}
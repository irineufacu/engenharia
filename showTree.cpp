void exibirPreOrdemIterativo (Tree *T)
{
	Pilha *P;
	initPilha(&P);
	push(&P, T);
	while(!isEmptyP(P))
	{
		// Preciso ser ter, pois, se diferente de nula significa que vou ter que andar para o lado esquerdo
		if(T != NULL) 
		{
			pop(&P, &T);
			while(T != NULL)
			{
				printf("\n%d", T->info);
				push(&P, T);
				T = T->esq;
			}								
		}	
		pop(&P, &T);				
		T = T->dir;	
		if(T != NULL)
		{
			push(&P, T);
		}	
	}
    // Teste
}
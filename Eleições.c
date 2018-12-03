#include <stdio.h>
#include <stdlib.h>


urna ()
{
 int alternativa;
	
	printf("\n ESCOLHA UMA ALTERNATIVA DE VOTO:");
		printf("\n Para 'A',      digite [1] ");
		printf("\n Para 'B',      digite [2] ");
		printf("\n Para 'C',      digite [3] ");
		printf("\n Para 'D',      digite [4] ");
		printf("\n Para 'Branco', digite [5] ");
		printf("\n Para 'Nulo',   digite [6] ");
		scanf("%d", &alternativa);
}

int main ()
{
	int candA=0, candB=0, candC=0, candD=0, branco=0, nulo=0,continuarVot, totVot=0, totNul=0, totValid=0, alternativa;
	float percA, percB, percC, percD, percValid, percNul;
	
	urna ();
	
	printf("\n DESEJA CONTINUAR VOTANDO?: |S [1]|N [2]|");
	scanf("%d", &continuarVot);
	system ("cls");
	
	switch (continuarVot){
		case 1:
			urna ();
			{
					if (alternativa == 1){
			candA <- candA++;
		}
				else if (alternativa == 2){
				candB <- candB++;
			}
					else if (alternativa== 3){
					candC <- candC++;
					}
						else if (alternativa== 4){
						candD <- candD++;
					}
							else if  (alternativa== 5){
							branco <- branco++;
					}
							else if (alternativa== 6){
						
								nulo <- nulo++;
							}
			}
			
		totVot <-candA + candB + candC + candD + branco + nulo;
		totNul <-branco + nulo;
		totValid <- totVot -totNul;
		percA <- (candA * 100)/totValid;
		percB <- (candB * 100)/totValid;
		percC <- (candC * 100)/totValid;
		percD <- (candD * 100)/totValid;
		percValid <- (totValid * 100)/totVot;
		percNul <- (totNul * 100)/totVot;
		   					
							
			
			printf("\n DESEJA CONTINUAR VOTANDO?: |S [1]|N [2]|");
			scanf("%d", &continuarVot);
			system ("cls");
		break;
		
		case 2:
			Printf("\n\n |TOTAL DE VOTOS:%d |", totVot);
			Printf("\n\n |Votos Válidos:%f %|", percValid);
			Printf("\n\n |Votos Nulos e Brancos:%f %|", percNul);
			Printf("\n |Candidato A:%f %|", percA);
			Printf("\n |Candidato B:%f %|", percB); 
			Printf("\n |Candidato C:%f %|", percC); 
			Printf("\n |Candidato D:%f %|", percD);   
		break;
		
		if ((candA>candB)&&(candA>candC)&&(candA>candD)){
			printf ("\n O VENCEDOR FOI A \n");
		}else if ((candB>candA)&&(candB>candC)&&(candB>candD)){
			printf ("\n O VENCEDOR FOI B \n");
		}else if ((candC>candA)&&(candC>candB)&&(candC>candD)){
			printf ("\n O VENCEDOR FOI C \n");
		}else if ((candD>candA)&&(candD>candB)&&(candD>candC)){
			printf ("\n O VENCEDOR FOI D \n");
		}
		
	}
	
}

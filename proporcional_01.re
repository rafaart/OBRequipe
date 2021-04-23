#luz(1) = sensor da direita  luz(3) = sensor da esquerda
numero sensord = 0
numero sensore = 0
numero sensorm =0
numero motorE = 0
numero motorD = 0
inicio 
	enquanto(verdadeiro) farei{
		sensord = luz(1)-luz(3)
		sensore = luz(3)-luz(1)
		sensorm = 150-luz(2)
		motorE = (sensord*20)+sensorm
		motorD = (sensore*20)+sensorm
		escrevernumero(1, sensord)
		escrevernumero(2, sensore)
		mover(motorE, motorD)
		
	}

fim
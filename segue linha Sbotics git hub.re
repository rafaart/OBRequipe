inicio
  enquanto (verdadeiro) farei{
    escrever(1,cor(1))
    escrever(2,cor(2))
    escrever(3,cor(3))
    se (((cor(1) == "BRANCO") e (cor(2) == "BRANCO")) e (cor(3) == "BRANCO"))entao {
      mover(200,200)
      acenderled("BRANCO")
    }
    se (((cor(1) == "BRANCO") e (cor(2) == "PRETO")) e (cor(3) == "BRANCO"))entao {
      mover(300,negativo(300))
      acenderled("VERMELHO")
    }
    se (((cor(1) == "PRETO") e (cor(2) == "BRANCO")) e (cor(3) == "BRANCO"))entao {
      mover(negativo(300),300)
      acenderled("AZUL")
    }
    se (((cor(1) == "PRETO") e (cor(2) == "PRETO")) e (cor(3) == "BRANCO"))entao {
      frenterotacao(200,15)
      rotacionar(300,90)
      trasrotacao(200,7)
      acenderled("VERDE")
    }
  }

fim
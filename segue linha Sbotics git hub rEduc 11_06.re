texto textoCOR1 = ""
texto textoCOR2 = ""
texto textoCOR3 = ""
texto textosensores1atC3A93 = ""


tarefa cC3B3digoantigo {
  textoCOR1 = "BRANCO"
  textoCOR2 = "BRANCO"
  textoCOR3 = "BRANCO"
  escrever(1,cor(1))
  escrever(2,cor(2))
  escrever(3,cor(3))
  textoCOR1 = cor(1)
  textoCOR2 = cor(2)
  textoCOR3 = cor(3)
  se ((textoCOR1 == "BRANCO") e ((textoCOR2 == "BRANCO") e (textoCOR3 == "BRANCO")))entao {
    mover(100,100)
    acenderled("BRANCO")
  }
  se ((textoCOR1 == "BRANCO") e ((textoCOR2 == "BRANCO") e (textoCOR3 == "PRETO")))entao {
    mover(100,100)
    acenderled("AMARELO")
  }
  se ((textoCOR1 == "BRANCO") e ((textoCOR2 == "PRETO") e (textoCOR3 == "BRANCO")))entao {
    mover(300,negativo(300))
    acenderled("VERMELHO")
  }
  se ((textoCOR1 == "PRETO") e ((textoCOR2 == "BRANCO") e (textoCOR3 == "BRANCO")))entao {
    mover(negativo(300),300)
    acenderled("AZUL")
  }
  se ((textoCOR1 == "PRETO") e ((textoCOR2 == "PRETO") e (textoCOR3 == "BRANCO")))entao {
    frenterotacao(200,15)
    rotacionar(300,90)
    trasrotacao(200,7)
    acenderled("VERDE")
  }
}

tarefa vC3A1riavC3A9isrespostasensores1atC3A93declarando {
  textoCOR1 = cor(1)
  textoCOR2 = cor(2)
  textoCOR3 = cor(3)
}

tarefa escreversensores12e3noconsole {
  escrever(1,cor(1))
  escrever(2,cor(2))
  escrever(3,cor(3))
}

tarefa reto100 {
  mover(100,100)
}

tarefa Curvadireita {
  mover(300,negativo(300))
}

tarefa Curvaesquerda {
  mover(negativo(300),300)
}

tarefa curva90C2B0 {
  frenterotacao(200,15)
  rotacionar(300,90)
  trasrotacao(200,7)
}


inicio
  enquanto (verdadeiro) farei{
    vC3A1riavC3A9isrespostasensores1atC3A93declarando()
    escreversensores12e3noconsole()
    textosensores1atC3A93 = concatenar3(textoCOR1,textoCOR2,textoCOR3)
    teste (textosensores1atC3A93){
       caso concatenar3("BRANCO","BRANCO","BRANCO"):
         reto100()
        acenderled("BRANCO")

      caso concatenar3("BRANCO","BRANCO","PRETO"):
         reto100()
        acenderled("AMARELO")

      caso concatenar3("BRANCO","PRETO","BRANCO"):
         Curvadireita()
        acenderled("VERMELHO")

      caso concatenar3("PRETO","BRANCO","BRANCO"):
         Curvaesquerda()
        acenderled("AZUL")

      caso concatenar3("PRETO","PRETO","BRANCO"):
         curva90C2B0()
        acenderled("VERDE")

      outros:

    }
  }

fim
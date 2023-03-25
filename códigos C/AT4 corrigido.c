#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


typedef struct NoArvore *PonteiroAVL;

typedef struct NoArvore {
  int chave;
  PonteiroAVL esquerda;
  PonteiroAVL direita;
  int profundidade;
  int nivel;
}NoArvore;

void IniciaAVL (PonteiroAVL *NoAVL) {
  (*NoAVL) = NULL;
}

bool VerificaAVLVazia (PonteiroAVL *NoAVL) {
  return (*NoAVL) == NULL;
}

int ProfundidadeAVL (PonteiroAVL NoAVL) {
  if(NoAVL == NULL) {
    return (0);
  } else {
    return ((NoAVL)->profundidade);
  }
}

int AtualizaProfundidadeAVL (PonteiroAVL esquerda, PonteiroAVL direita ) {
  int prof_esq = ProfundidadeAVL(esquerda);
  int prof_dir = ProfundidadeAVL(direita);

  if(prof_esq > prof_dir) {
    return(prof_esq + 1);
  } else {
    return(prof_dir + 1);
  }
}

void RotacaoSimplesDireita (PonteiroAVL *NoAVL) {
  PonteiroAVL aux = (*NoAVL)->esquerda;

  (*NoAVL)->esquerda = aux->direita;
  aux->direita = (*NoAVL);

  (*NoAVL)->profundidade = AtualizaProfundidadeAVL((*NoAVL)->esquerda, (*NoAVL)->direita);
  aux->profundidade = AtualizaProfundidadeAVL(aux->esquerda, aux->direita);

  (*NoAVL) = aux;
}

void RotacaoSimplesEsquerda (PonteiroAVL *NoAVL) {
  PonteiroAVL aux = (*NoAVL)->direita;

  (*NoAVL)->direita = aux->esquerda;
  aux->esquerda = (*NoAVL);
  (*NoAVL)->profundidade = 0;

  (*NoAVL)->profundidade = AtualizaProfundidadeAVL((*NoAVL)->esquerda, (*NoAVL)->direita);
  aux->profundidade = AtualizaProfundidadeAVL(aux->esquerda, aux->direita);

  (*NoAVL) = aux;
}

void RotacaoDuplaDireita (PonteiroAVL *NoAVL) {
  PonteiroAVL aux = (*NoAVL)->esquerda;
  PonteiroAVL aux2 = aux->direita;

  aux->direita = aux2->esquerda;
  aux2->esquerda = aux;
  (*NoAVL)->esquerda = aux2->direita;
  aux2->direita = (*NoAVL);

  (*NoAVL)->profundidade = AtualizaProfundidadeAVL((*NoAVL)->esquerda, (*NoAVL)->direita);
  aux->profundidade = AtualizaProfundidadeAVL(aux->esquerda, aux->direita);
  aux2->profundidade = AtualizaProfundidadeAVL(aux2->esquerda, aux2->direita);

  (*NoAVL) = aux2;
}

void RotacaoDuplaEsquerda (PonteiroAVL *NoAVL) {
  PonteiroAVL aux = (*NoAVL)->direita;
  PonteiroAVL aux2 = aux->esquerda;

  (*NoAVL)->direita = aux2->esquerda;
  aux->esquerda = aux2->direita;
  aux2->esquerda = (*NoAVL);
  aux2->direita = aux;

  (*NoAVL)->profundidade = AtualizaProfundidadeAVL((*NoAVL)->esquerda, (*NoAVL)->direita);
  aux->profundidade = AtualizaProfundidadeAVL(aux->esquerda, aux->direita);
  aux2->profundidade = AtualizaProfundidadeAVL(aux2->esquerda, aux2->direita);

  (*NoAVL) = aux2;
}

void AplicarRotacao (PonteiroAVL *NoAVL) {
  int prof_dir = ProfundidadeAVL((*NoAVL)->direita);
  int prof_esq = ProfundidadeAVL((*NoAVL)->esquerda);

  if(prof_esq > prof_dir) {
    PonteiroAVL temporario = (*NoAVL)->esquerda;
    int temporario_direito = ProfundidadeAVL(temporario->direita);
    int temporario_esquerdo = ProfundidadeAVL(temporario->esquerda);

  if(temporario_esquerdo > temporario_direito) {
      RotacaoSimplesDireita(&(*NoAVL));
    } else {
      RotacaoDuplaEsquerda(&(*NoAVL));
    }
  }
  else {
    PonteiroAVL temporario2 = (*NoAVL)->direita;
    int temporario2_direito = ProfundidadeAVL(temporario2->direita);
    int temporario2_esquerdo = ProfundidadeAVL(temporario2->esquerda);

    if(temporario2_direito > temporario2_esquerdo){
      RotacaoSimplesEsquerda(&(*NoAVL));
    } else {
      RotacaoDuplaEsquerda(&(*NoAVL));
    }
  }
}

bool InsereAVL (PonteiroAVL *NoAVL, int elemento) {
  int prof_dir;
  int prof_esq;
  bool aux;

  if((*NoAVL) == NULL) {
    (*NoAVL) = (PonteiroAVL)malloc(sizeof(NoAVL));
    (*NoAVL)->direita = (*NoAVL)->esquerda = NULL;
    (*NoAVL)->chave = elemento;
    (*NoAVL)->profundidade = 1;
    return true;
  }
  if((*NoAVL)->chave == elemento){
   return false;
}

  if(elemento < (*NoAVL)->chave) {
    aux = InsereAVL(&(*NoAVL)->esquerda, elemento);
  } else {
    aux = InsereAVL(&(*NoAVL)->direita, elemento);
  }
  if(!aux){
  return (false);
}

  prof_esq = ProfundidadeAVL((*NoAVL)->esquerda);
  prof_dir = ProfundidadeAVL((*NoAVL)->direita);

  if((prof_dir - prof_esq) >= +2 || (prof_dir - prof_esq) <= -2) {
    AplicarRotacao(&(*NoAVL));
  }
  (*NoAVL)->profundidade = AtualizaProfundidadeAVL((*NoAVL)->esquerda, (*NoAVL)->direita);
  return(true);
}

void preOrdem(PonteiroAVL *NoAVL, int profundidade, FILE *saida) {

  int prof_dir, prof_esq, diferenca;

  if((*NoAVL) == NULL){
    return;
  }

  prof_dir = ProfundidadeAVL((*NoAVL)->direita);
  prof_esq = ProfundidadeAVL((*NoAVL)->esquerda);

  diferenca = prof_dir - prof_esq;

 fprintf(saida, "%d,\n", (*NoAVL)->chave, diferenca, (*NoAVL)->profundidade);
  preOrdem(&(*NoAVL)->esquerda, profundidade, saida);
  preOrdem(&(*NoAVL)->direita, profundidade, saida);
}

PonteiroAVL MinimoDireita(PonteiroAVL *NoAVL) {
  PonteiroAVL aux;
  if((*NoAVL)->esquerda == NULL) {
    aux = (*NoAVL);
    (*NoAVL) = (*NoAVL)->direita;
    return(aux);
  }
  return(MinimoDireita(&(*NoAVL)->esquerda));
}

bool RemoveDireita(PonteiroAVL *NoAVL, int elemento) {

  bool teste;
  int prof_dir, prof_esq;

  if((*NoAVL) == NULL) {
    printf("Não há elemento para ser removido\n");
    return (false);
  }

  if((*NoAVL)->chave == elemento) {

    PonteiroAVL aux = (*NoAVL);
    if((*NoAVL)->esquerda == NULL) {
      (*NoAVL) = (*NoAVL)->direita;
    }else if((*NoAVL)->direita == NULL) {
      (*NoAVL) = (*NoAVL)->esquerda;
    } else {
      aux = MinimoDireita(&(*NoAVL)->direita);
      (*NoAVL)->chave = aux->chave;
    }
    free(aux);
    return true;
  }

  if((*NoAVL)->chave > elemento){
    teste = RemoveDireita(&(*NoAVL)->esquerda, elemento);
  } else {
    teste = RemoveDireita(&(*NoAVL)->direita, elemento);
  }

  if(teste == false){
    return (false);
  }else{
   prof_esq = ProfundidadeAVL((*NoAVL)->esquerda);
   prof_dir = ProfundidadeAVL((*NoAVL)->direita);

    if( prof_dir - prof_esq <= -2 || prof_dir - prof_esq >= 2){
      AplicarRotacao(&(*NoAVL));
    }

    (*NoAVL)->profundidade = AtualizaProfundidadeAVL((*NoAVL)->esquerda, (*NoAVL)->direita);
    return(true);
  }
}

PonteiroAVL MaximoEsquerda(PonteiroAVL *NoAVL) {
  PonteiroAVL aux;
  if((*NoAVL)->direita == NULL) {
    aux = (*NoAVL);
    (*NoAVL) = (*NoAVL)->esquerda; //
    return(aux);
  }
  return(MaximoEsquerda(&(*NoAVL)->direita));
}

//removedor pro caso de escolha e
bool RemoveEsquerda(PonteiroAVL *NoAVL, int elemento) {

  bool teste;
  int prof_esq, prof_dir;

  if((*NoAVL) == NULL) {
    printf("Não há elemento para ser removido!\n", elemento);
    return (false);
  }

  if((*NoAVL)->chave == elemento) {
    PonteiroAVL aux = (*NoAVL);

    if((*NoAVL)->esquerda == NULL) {
      (*NoAVL) = (*NoAVL)->direita;
    }else if((*NoAVL)->direita == NULL) {
      (*NoAVL) = (*NoAVL)->esquerda;
    } else {
      aux = MaximoEsquerda(&(*NoAVL)->esquerda);

      (*NoAVL)->chave = aux->chave;
    }
    free(aux);
    return true;
  }

  if((*NoAVL)->chave > elemento){
    teste = RemoveEsquerda(&(*NoAVL)->esquerda, elemento);
  } else {
    teste = RemoveEsquerda(&(*NoAVL)->direita, elemento);
  }

  if(teste == false){
    return (false);
  }else {
   prof_esq = ProfundidadeAVL((*NoAVL)->esquerda);
   prof_dir = ProfundidadeAVL((*NoAVL)->direita);

    if( prof_dir - prof_esq <= -2 || prof_dir - prof_esq >= 2){
      AplicarRotacao(&(*NoAVL));
    }

    (*NoAVL)->profundidade = AtualizaProfundidadeAVL((*NoAVL)->esquerda, (*NoAVL)->direita);
    return(true);
  }
}

void DestroiAVL (PonteiroAVL *NoAVL) {
  if((*NoAVL) != NULL){
    DestroiAVL (&(*NoAVL)->esquerda);
    DestroiAVL (&(*NoAVL)->direita);
    free(*NoAVL);
    *NoAVL = NULL;
  }
}

void ImprimeNivel (PonteiroAVL *NoAVL) {
  if((*NoAVL) == NULL){
    return;
  }
  if((*NoAVL)->esquerda != NULL){
    (*NoAVL)->esquerda->nivel = (*NoAVL)->nivel+1;
  }
  if((*NoAVL)->direita != NULL){
    (*NoAVL)->direita->nivel = (*NoAVL)->nivel+1;
  }
 ImprimeNivel(&(*NoAVL)->esquerda);
 ImprimeNivel(&(*NoAVL)->direita);
  return;
}

int main (int argc, char *argv[]){
  PonteiroAVL ponteiro;
  int elemento;
  int contador = 1, profundidade, profundidade_final;
  char linha[200], *passe, lado_escolhido;
  IniciaAVL (&ponteiro);

  FILE *entrada = fopen (argv[1], "r");
  FILE *saida = fopen (argv[2], "w");
  if(argc != 3){
    printf("Numero de argumentos inválido!!");
  }
  if (entrada == NULL || saida == NULL){
    perror ("\nErro ao abrir um dos arquivos!! \n");
  }else{

    fscanf(entrada, "%s", linha);

    passe = strtok(linha, ",");
    elemento = atoi(passe);
    InsereAVL(&ponteiro, elemento);

    while(passe != NULL){
      passe = strtok (NULL,",");
        if(passe == NULL){
          break;
    }
    elemento = atoi(passe);
    InsereAVL(&ponteiro, elemento);
    }

    fprintf(saida, "Antes:\n");

    profundidade = ProfundidadeAVL(ponteiro);

    ponteiro->nivel = 1;
    ImprimeNivel(&ponteiro);

    preOrdem(&ponteiro, contador, saida);
    fprintf(saida, "\n");

    fscanf(entrada, "%s", lado_escolhido);

    if(lado_escolhido == 'e' || lado_escolhido == 'E'){
      RemoveEsquerda(&ponteiro, elemento);
    }else if (lado_escolhido == 'd' || lado_escolhido == 'D'){
    RemoveDireita(&ponteiro, elemento);
  }else{
    fprintf(saida, "Opção Inválida!!");
  }
    while(passe != NULL){
      passe = strtok (NULL, ",");
      if(passe == NULL){
        break;
      }
      elemento = atoi(passe);
      if(lado_escolhido == 'e' || lado_escolhido == 'E'){
        RemoveEsquerda(&ponteiro, elemento);
      }else if(lado_escolhido == 'd' || lado_escolhido == 'D'){
        RemoveDireita(&ponteiro, elemento);
      }else{
        printf("Opção Inválida!!");
        return 0;
      }
    }
    fprintf(saida, "\n");
    fprintf(saida, "Depois:\n");

    profundidade_final = ProfundidadeAVL(ponteiro);

    ponteiro->nivel = 1;
    ImprimeNivel(&ponteiro);

    preOrdem(&ponteiro, contador, saida);
    fprintf(saida, "\n");

  fclose (entrada);
  fclose (saida);
  }
  return 0;
}

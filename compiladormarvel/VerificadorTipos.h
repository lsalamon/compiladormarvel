/*
  Arquivo header que define a classe VerificacaoVariaveis, que herda de
  Visitor (� a implementa��o de Visitor para o caso em que a declara��o
  das vari�veis � verificada).
*/
#ifndef VERIFICADORTIPOS_H
#define VERIFICADORTIPOS_H

#include "Visitor.h"

/* Defini��es para o Verificador de Tipos */
#define BOOLEAN 0
#define CHAR    1
#define NUMBER  2
#define EMPTY   0
#define FALSE   0
#define TRUE    1


// Define os atributos e os m�todos visitantes
class VerificadorTipos : public Visitor {
      
      public:
             int tipo;
             int linha;

      public:
             // Declara��o do construtor
             VerificadorTipos();
             
             // M�todos visitantes
              void visit(ProgramNode* programNode);
              void visit(StatementListNode* stmtNode);
              void visit(NameDeclNode* nameDeclNode);
              void visit(FragmentNode* fragmentNode);
              void visit(IfNode* ifNode);
              void visit(WhileNode* whileNode);
              void visit(AssignNode* assignNode);
              void visit(FragCallNode* fragCallNode);
              void visit(ReadNode* readNode);
              void visit(WriteNode* writeNode);
              void visit(ConstantNode* constantNode);
              void visit(ExpressionListNode* expressionListNode);
              void visit(CallNode* callNode);
              void visit(ArrayNode* arrayNode);
              void visit(RelOpNode* relationalOpNode);
              void visit(AddOpNode* additionalOpNode);
              void visit(MultOpNode* multOpNode);
              void visit(BoolOpNode* boolOpNode);
              void visit(BitwiseOpNode* bitwiseOpNode);
              void visit(NotNode* notNode);
              void visit(NegativeNode* negativeNode);
              void visit(ModifierListNode* modifierListNode);
              void visit(ModifierNode* modifierNode);
              void visit(IdNode* idNode);
              void visit(IdListNode* idListNode);
              void visit(NumberNode* numberNode);
              void visit(LiteralNode* literalNode);
              

};
#endif

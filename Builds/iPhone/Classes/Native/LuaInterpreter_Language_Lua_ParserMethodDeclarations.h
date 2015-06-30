#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Parser
struct Parser_t2572;
// Language.Lua.Chunk
struct Chunk_t2579;
// Language.Lua.ParserInput`1<System.Char>
struct ParserInput_1_t2649;
// Language.Lua.Statement
struct Statement_t2576;
// Language.Lua.Assignment
struct Assignment_t2575;
// Language.Lua.Function
struct Function_t2587;
// Language.Lua.LocalVar
struct LocalVar_t2591;
// Language.Lua.LocalFunc
struct LocalFunc_t2590;
// Language.Lua.ExprStmt
struct ExprStmt_t2582;
// Language.Lua.ReturnStmt
struct ReturnStmt_t2593;
// Language.Lua.BreakStmt
struct BreakStmt_t2577;
// Language.Lua.DoStmt
struct DoStmt_t2580;
// Language.Lua.IfStmt
struct IfStmt_t2589;
// Language.Lua.ElseifBlock
struct ElseifBlock_t2654;
// Language.Lua.ForStmt
struct ForStmt_t2584;
// Language.Lua.ForInStmt
struct ForInStmt_t2583;
// Language.Lua.WhileStmt
struct WhileStmt_t2594;
// Language.Lua.RepeatStmt
struct RepeatStmt_t2592;
// System.Collections.Generic.List`1<Language.Lua.Var>
struct List_1_t2573;
// System.Collections.Generic.List`1<Language.Lua.Expr>
struct List_1_t2574;
// Language.Lua.Expr
struct Expr_t2581;
// Language.Lua.Term
struct Term_t2597;
// Language.Lua.NilLiteral
struct NilLiteral_t2608;
// Language.Lua.BoolLiteral
struct BoolLiteral_t2598;
// Language.Lua.NumberLiteral
struct NumberLiteral_t2609;
// Language.Lua.StringLiteral
struct StringLiteral_t2618;
// Language.Lua.VariableArg
struct VariableArg_t2621;
// Language.Lua.FunctionValue
struct FunctionValue_t2603;
// Language.Lua.FunctionBody
struct FunctionBody_t2586;
// Language.Lua.Access
struct Access_t2595;
// Language.Lua.BaseExpr
struct BaseExpr_t2596;
// Language.Lua.KeyAccess
struct KeyAccess_t2605;
// Language.Lua.NameAccess
struct NameAccess_t2607;
// Language.Lua.MethodCall
struct MethodCall_t2606;
// Language.Lua.FunctionCall
struct FunctionCall_t2602;
// Language.Lua.Var
struct Var_t2659;
// Language.Lua.PrimaryExpr
struct PrimaryExpr_t2617;
// Language.Lua.VarName
struct VarName_t2622;
// Language.Lua.FunctionName
struct FunctionName_t2585;
// Language.Lua.GroupExpr
struct GroupExpr_t2604;
// Language.Lua.TableConstructor
struct TableConstructor_t2620;
// System.Collections.Generic.List`1<Language.Lua.Field>
struct List_1_t2619;
// Language.Lua.Field
struct Field_t2655;
// Language.Lua.KeyValue
struct KeyValue_t2657;
// Language.Lua.NameValue
struct NameValue_t2658;
// Language.Lua.ItemValue
struct ItemValue_t2656;
// Language.Lua.OperatorExpr
struct OperatorExpr_t2612;
// Language.Lua.Args
struct Args_t2601;
// Language.Lua.ParamList
struct ParamList_t2600;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1;
// System.String
struct String_t;

// System.Void Language.Lua.Parser::.ctor()
extern "C" void Parser__ctor_m12031 (Parser_t2572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Chunk Language.Lua.Parser::ParseChunk(Language.Lua.ParserInput`1<System.Char>,System.Boolean&)
extern "C" Chunk_t2579 * Parser_ParseChunk_m12032 (Parser_t2572 * __this, Object_t* ___input, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Chunk Language.Lua.Parser::ParseChunk(System.Boolean&)
extern "C" Chunk_t2579 * Parser_ParseChunk_m12033 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Statement Language.Lua.Parser::ParseStatement(System.Boolean&)
extern "C" Statement_t2576 * Parser_ParseStatement_m12034 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Assignment Language.Lua.Parser::ParseAssignment(System.Boolean&)
extern "C" Assignment_t2575 * Parser_ParseAssignment_m12035 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Function Language.Lua.Parser::ParseFunction(System.Boolean&)
extern "C" Function_t2587 * Parser_ParseFunction_m12036 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LocalVar Language.Lua.Parser::ParseLocalVar(System.Boolean&)
extern "C" LocalVar_t2591 * Parser_ParseLocalVar_m12037 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LocalFunc Language.Lua.Parser::ParseLocalFunc(System.Boolean&)
extern "C" LocalFunc_t2590 * Parser_ParseLocalFunc_m12038 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.ExprStmt Language.Lua.Parser::ParseExprStmt(System.Boolean&)
extern "C" ExprStmt_t2582 * Parser_ParseExprStmt_m12039 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.ReturnStmt Language.Lua.Parser::ParseReturnStmt(System.Boolean&)
extern "C" ReturnStmt_t2593 * Parser_ParseReturnStmt_m12040 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.BreakStmt Language.Lua.Parser::ParseBreakStmt(System.Boolean&)
extern "C" BreakStmt_t2577 * Parser_ParseBreakStmt_m12041 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.DoStmt Language.Lua.Parser::ParseDoStmt(System.Boolean&)
extern "C" DoStmt_t2580 * Parser_ParseDoStmt_m12042 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.IfStmt Language.Lua.Parser::ParseIfStmt(System.Boolean&)
extern "C" IfStmt_t2589 * Parser_ParseIfStmt_m12043 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.ElseifBlock Language.Lua.Parser::ParseElseifBlock(System.Boolean&)
extern "C" ElseifBlock_t2654 * Parser_ParseElseifBlock_m12044 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.ForStmt Language.Lua.Parser::ParseForStmt(System.Boolean&)
extern "C" ForStmt_t2584 * Parser_ParseForStmt_m12045 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.ForInStmt Language.Lua.Parser::ParseForInStmt(System.Boolean&)
extern "C" ForInStmt_t2583 * Parser_ParseForInStmt_m12046 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.WhileStmt Language.Lua.Parser::ParseWhileStmt(System.Boolean&)
extern "C" WhileStmt_t2594 * Parser_ParseWhileStmt_m12047 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.RepeatStmt Language.Lua.Parser::ParseRepeatStmt(System.Boolean&)
extern "C" RepeatStmt_t2592 * Parser_ParseRepeatStmt_m12048 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Language.Lua.Var> Language.Lua.Parser::ParseVarList(System.Boolean&)
extern "C" List_1_t2573 * Parser_ParseVarList_m12049 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Language.Lua.Expr> Language.Lua.Parser::ParseExprList(System.Boolean&)
extern "C" List_1_t2574 * Parser_ParseExprList_m12050 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Expr Language.Lua.Parser::ParseExpr(System.Boolean&)
extern "C" Expr_t2581 * Parser_ParseExpr_m12051 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.Parser::ParseTerm(System.Boolean&)
extern "C" Term_t2597 * Parser_ParseTerm_m12052 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.NilLiteral Language.Lua.Parser::ParseNilLiteral(System.Boolean&)
extern "C" NilLiteral_t2608 * Parser_ParseNilLiteral_m12053 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.BoolLiteral Language.Lua.Parser::ParseBoolLiteral(System.Boolean&)
extern "C" BoolLiteral_t2598 * Parser_ParseBoolLiteral_m12054 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.NumberLiteral Language.Lua.Parser::ParseNumberLiteral(System.Boolean&)
extern "C" NumberLiteral_t2609 * Parser_ParseNumberLiteral_m12055 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.StringLiteral Language.Lua.Parser::ParseStringLiteral(System.Boolean&)
extern "C" StringLiteral_t2618 * Parser_ParseStringLiteral_m12056 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.VariableArg Language.Lua.Parser::ParseVariableArg(System.Boolean&)
extern "C" VariableArg_t2621 * Parser_ParseVariableArg_m12057 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.FunctionValue Language.Lua.Parser::ParseFunctionValue(System.Boolean&)
extern "C" FunctionValue_t2603 * Parser_ParseFunctionValue_m12058 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.FunctionBody Language.Lua.Parser::ParseFunctionBody(System.Boolean&)
extern "C" FunctionBody_t2586 * Parser_ParseFunctionBody_m12059 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Access Language.Lua.Parser::ParseAccess(System.Boolean&)
extern "C" Access_t2595 * Parser_ParseAccess_m12060 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.BaseExpr Language.Lua.Parser::ParseBaseExpr(System.Boolean&)
extern "C" BaseExpr_t2596 * Parser_ParseBaseExpr_m12061 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.KeyAccess Language.Lua.Parser::ParseKeyAccess(System.Boolean&)
extern "C" KeyAccess_t2605 * Parser_ParseKeyAccess_m12062 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.NameAccess Language.Lua.Parser::ParseNameAccess(System.Boolean&)
extern "C" NameAccess_t2607 * Parser_ParseNameAccess_m12063 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.MethodCall Language.Lua.Parser::ParseMethodCall(System.Boolean&)
extern "C" MethodCall_t2606 * Parser_ParseMethodCall_m12064 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.FunctionCall Language.Lua.Parser::ParseFunctionCall(System.Boolean&)
extern "C" FunctionCall_t2602 * Parser_ParseFunctionCall_m12065 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Var Language.Lua.Parser::ParseVar(System.Boolean&)
extern "C" Var_t2659 * Parser_ParseVar_m12066 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.PrimaryExpr Language.Lua.Parser::ParsePrimaryExpr(System.Boolean&)
extern "C" PrimaryExpr_t2617 * Parser_ParsePrimaryExpr_m12067 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.VarName Language.Lua.Parser::ParseVarName(System.Boolean&)
extern "C" VarName_t2622 * Parser_ParseVarName_m12068 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.FunctionName Language.Lua.Parser::ParseFunctionName(System.Boolean&)
extern "C" FunctionName_t2585 * Parser_ParseFunctionName_m12069 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.GroupExpr Language.Lua.Parser::ParseGroupExpr(System.Boolean&)
extern "C" GroupExpr_t2604 * Parser_ParseGroupExpr_m12070 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.TableConstructor Language.Lua.Parser::ParseTableConstructor(System.Boolean&)
extern "C" TableConstructor_t2620 * Parser_ParseTableConstructor_m12071 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Language.Lua.Field> Language.Lua.Parser::ParseFieldList(System.Boolean&)
extern "C" List_1_t2619 * Parser_ParseFieldList_m12072 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Field Language.Lua.Parser::ParseField(System.Boolean&)
extern "C" Field_t2655 * Parser_ParseField_m12073 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.KeyValue Language.Lua.Parser::ParseKeyValue(System.Boolean&)
extern "C" KeyValue_t2657 * Parser_ParseKeyValue_m12074 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.NameValue Language.Lua.Parser::ParseNameValue(System.Boolean&)
extern "C" NameValue_t2658 * Parser_ParseNameValue_m12075 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.ItemValue Language.Lua.Parser::ParseItemValue(System.Boolean&)
extern "C" ItemValue_t2656 * Parser_ParseItemValue_m12076 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.OperatorExpr Language.Lua.Parser::ParseOperatorExpr(System.Boolean&)
extern "C" OperatorExpr_t2612 * Parser_ParseOperatorExpr_m12077 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Args Language.Lua.Parser::ParseArgs(System.Boolean&)
extern "C" Args_t2601 * Parser_ParseArgs_m12078 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Language.Lua.Expr> Language.Lua.Parser::ParseArgList(System.Boolean&)
extern "C" List_1_t2574 * Parser_ParseArgList_m12079 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.ParamList Language.Lua.Parser::ParseParamList(System.Boolean&)
extern "C" ParamList_t2600 * Parser_ParseParamList_m12080 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> Language.Lua.Parser::ParseFullName(System.Boolean&)
extern "C" List_1_t1 * Parser_ParseFullName_m12081 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> Language.Lua.Parser::ParseNameList(System.Boolean&)
extern "C" List_1_t1 * Parser_ParseNameList_m12082 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseName(System.Boolean&)
extern "C" String_t* Parser_ParseName_m12083 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseFloatNumber(System.Boolean&)
extern "C" String_t* Parser_ParseFloatNumber_m12084 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseHexicalNumber(System.Boolean&)
extern "C" String_t* Parser_ParseHexicalNumber_m12085 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseSingleQuotedText(System.Boolean&)
extern "C" String_t* Parser_ParseSingleQuotedText_m12086 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseDoubleQuotedText(System.Boolean&)
extern "C" String_t* Parser_ParseDoubleQuotedText_m12087 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseLongString(System.Boolean&)
extern "C" String_t* Parser_ParseLongString_m12088 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseKeyword(System.Boolean&)
extern "C" void Parser_ParseKeyword_m12089 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Language.Lua.Parser::ParseDigit(System.Boolean&)
extern "C" uint16_t Parser_ParseDigit_m12090 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Language.Lua.Parser::ParseHexDigit(System.Boolean&)
extern "C" uint16_t Parser_ParseHexDigit_m12091 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Language.Lua.Parser::ParseLetter(System.Boolean&)
extern "C" uint16_t Parser_ParseLetter_m12092 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseUnaryOperator(System.Boolean&)
extern "C" String_t* Parser_ParseUnaryOperator_m12093 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseBinaryOperator(System.Boolean&)
extern "C" String_t* Parser_ParseBinaryOperator_m12094 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseWordSep(System.Boolean&)
extern "C" void Parser_ParseWordSep_m12095 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseFieldSep(System.Boolean&)
extern "C" void Parser_ParseFieldSep_m12096 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseSpReq(System.Boolean&)
extern "C" void Parser_ParseSpReq_m12097 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseSpOpt(System.Boolean&)
extern "C" void Parser_ParseSpOpt_m12098 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseComment(System.Boolean&)
extern "C" void Parser_ParseComment_m12099 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseEol(System.Boolean&)
extern "C" void Parser_ParseEol_m12100 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseEof(System.Boolean&)
extern "C" void Parser_ParseEof_m12101 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Language.Lua.Parser::ParseEscapeChar(System.Boolean&)
extern "C" uint16_t Parser_ParseEscapeChar_m12102 (Parser_t2572 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Language.Lua.Parser::get_Position()
extern "C" int32_t Parser_get_Position_m12103 (Parser_t2572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::set_Position(System.Int32)
extern "C" void Parser_set_Position_m12104 (Parser_t2572 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::SetInput(Language.Lua.ParserInput`1<System.Char>)
extern "C" void Parser_SetInput_m12105 (Parser_t2572 * __this, Object_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Language.Lua.Parser::TerminalMatch(System.Char)
extern "C" bool Parser_TerminalMatch_m12106 (Parser_t2572 * __this, uint16_t ___terminal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Language.Lua.Parser::TerminalMatch(System.Char,System.Int32)
extern "C" bool Parser_TerminalMatch_m12107 (Parser_t2572 * __this, uint16_t ___terminal, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Language.Lua.Parser::MatchTerminal(System.Char,System.Boolean&)
extern "C" uint16_t Parser_MatchTerminal_m12108 (Parser_t2572 * __this, uint16_t ___terminal, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Language.Lua.Parser::MatchTerminalRange(System.Char,System.Char,System.Boolean&)
extern "C" uint16_t Parser_MatchTerminalRange_m12109 (Parser_t2572 * __this, uint16_t ___start, uint16_t ___end, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Language.Lua.Parser::MatchTerminalSet(System.String,System.Boolean,System.Boolean&)
extern "C" uint16_t Parser_MatchTerminalSet_m12110 (Parser_t2572 * __this, String_t* ___terminalSet, bool ___isComplement, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::MatchTerminalString(System.String,System.Boolean&)
extern "C" String_t* Parser_MatchTerminalString_m12111 (Parser_t2572 * __this, String_t* ___terminalString, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Language.Lua.Parser::PeekTerminalString(System.String)
extern "C" bool Parser_PeekTerminalString_m12112 (Parser_t2572 * __this, String_t* ___terminalString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Language.Lua.Parser::Error(System.String)
extern "C" int32_t Parser_Error_m12113 (Parser_t2572 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ClearError(System.Int32)
extern "C" void Parser_ClearError_m12114 (Parser_t2572 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::GetEorrorMessages()
extern "C" String_t* Parser_GetEorrorMessages_m12115 (Parser_t2572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

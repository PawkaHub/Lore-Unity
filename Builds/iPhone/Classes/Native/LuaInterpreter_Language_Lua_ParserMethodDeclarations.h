#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Parser
struct Parser_t3500;
// Language.Lua.Chunk
struct Chunk_t3507;
// Language.Lua.ParserInput`1<System.Char>
struct ParserInput_1_t3579;
// Language.Lua.Statement
struct Statement_t3504;
// Language.Lua.Assignment
struct Assignment_t3503;
// Language.Lua.Function
struct Function_t3515;
// Language.Lua.LocalVar
struct LocalVar_t3519;
// Language.Lua.LocalFunc
struct LocalFunc_t3518;
// Language.Lua.ExprStmt
struct ExprStmt_t3510;
// Language.Lua.ReturnStmt
struct ReturnStmt_t3521;
// Language.Lua.BreakStmt
struct BreakStmt_t3505;
// Language.Lua.DoStmt
struct DoStmt_t3508;
// Language.Lua.IfStmt
struct IfStmt_t3517;
// Language.Lua.ElseifBlock
struct ElseifBlock_t3584;
// Language.Lua.ForStmt
struct ForStmt_t3512;
// Language.Lua.ForInStmt
struct ForInStmt_t3511;
// Language.Lua.WhileStmt
struct WhileStmt_t3522;
// Language.Lua.RepeatStmt
struct RepeatStmt_t3520;
// System.Collections.Generic.List`1<Language.Lua.Var>
struct List_1_t3501;
// System.Collections.Generic.List`1<Language.Lua.Expr>
struct List_1_t3502;
// Language.Lua.Expr
struct Expr_t3509;
// Language.Lua.Term
struct Term_t3525;
// Language.Lua.NilLiteral
struct NilLiteral_t3536;
// Language.Lua.BoolLiteral
struct BoolLiteral_t3526;
// Language.Lua.NumberLiteral
struct NumberLiteral_t3537;
// Language.Lua.StringLiteral
struct StringLiteral_t3546;
// Language.Lua.VariableArg
struct VariableArg_t3549;
// Language.Lua.FunctionValue
struct FunctionValue_t3531;
// Language.Lua.FunctionBody
struct FunctionBody_t3514;
// Language.Lua.Access
struct Access_t3523;
// Language.Lua.BaseExpr
struct BaseExpr_t3524;
// Language.Lua.KeyAccess
struct KeyAccess_t3533;
// Language.Lua.NameAccess
struct NameAccess_t3535;
// Language.Lua.MethodCall
struct MethodCall_t3534;
// Language.Lua.FunctionCall
struct FunctionCall_t3530;
// Language.Lua.Var
struct Var_t3589;
// Language.Lua.PrimaryExpr
struct PrimaryExpr_t3545;
// Language.Lua.VarName
struct VarName_t3550;
// Language.Lua.FunctionName
struct FunctionName_t3513;
// Language.Lua.GroupExpr
struct GroupExpr_t3532;
// Language.Lua.TableConstructor
struct TableConstructor_t3548;
// System.Collections.Generic.List`1<Language.Lua.Field>
struct List_1_t3547;
// Language.Lua.Field
struct Field_t3585;
// Language.Lua.KeyValue
struct KeyValue_t3587;
// Language.Lua.NameValue
struct NameValue_t3588;
// Language.Lua.ItemValue
struct ItemValue_t3586;
// Language.Lua.OperatorExpr
struct OperatorExpr_t3540;
// Language.Lua.Args
struct Args_t3529;
// Language.Lua.ParamList
struct ParamList_t3528;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1;
// System.String
struct String_t;

// System.Void Language.Lua.Parser::.ctor()
extern "C" void Parser__ctor_m10822 (Parser_t3500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Chunk Language.Lua.Parser::ParseChunk(Language.Lua.ParserInput`1<System.Char>,System.Boolean&)
extern "C" Chunk_t3507 * Parser_ParseChunk_m10823 (Parser_t3500 * __this, Object_t* ___input, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Chunk Language.Lua.Parser::ParseChunk(System.Boolean&)
extern "C" Chunk_t3507 * Parser_ParseChunk_m10824 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Statement Language.Lua.Parser::ParseStatement(System.Boolean&)
extern "C" Statement_t3504 * Parser_ParseStatement_m10825 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Assignment Language.Lua.Parser::ParseAssignment(System.Boolean&)
extern "C" Assignment_t3503 * Parser_ParseAssignment_m10826 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Function Language.Lua.Parser::ParseFunction(System.Boolean&)
extern "C" Function_t3515 * Parser_ParseFunction_m10827 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LocalVar Language.Lua.Parser::ParseLocalVar(System.Boolean&)
extern "C" LocalVar_t3519 * Parser_ParseLocalVar_m10828 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LocalFunc Language.Lua.Parser::ParseLocalFunc(System.Boolean&)
extern "C" LocalFunc_t3518 * Parser_ParseLocalFunc_m10829 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.ExprStmt Language.Lua.Parser::ParseExprStmt(System.Boolean&)
extern "C" ExprStmt_t3510 * Parser_ParseExprStmt_m10830 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.ReturnStmt Language.Lua.Parser::ParseReturnStmt(System.Boolean&)
extern "C" ReturnStmt_t3521 * Parser_ParseReturnStmt_m10831 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.BreakStmt Language.Lua.Parser::ParseBreakStmt(System.Boolean&)
extern "C" BreakStmt_t3505 * Parser_ParseBreakStmt_m10832 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.DoStmt Language.Lua.Parser::ParseDoStmt(System.Boolean&)
extern "C" DoStmt_t3508 * Parser_ParseDoStmt_m10833 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.IfStmt Language.Lua.Parser::ParseIfStmt(System.Boolean&)
extern "C" IfStmt_t3517 * Parser_ParseIfStmt_m10834 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.ElseifBlock Language.Lua.Parser::ParseElseifBlock(System.Boolean&)
extern "C" ElseifBlock_t3584 * Parser_ParseElseifBlock_m10835 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.ForStmt Language.Lua.Parser::ParseForStmt(System.Boolean&)
extern "C" ForStmt_t3512 * Parser_ParseForStmt_m10836 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.ForInStmt Language.Lua.Parser::ParseForInStmt(System.Boolean&)
extern "C" ForInStmt_t3511 * Parser_ParseForInStmt_m10837 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.WhileStmt Language.Lua.Parser::ParseWhileStmt(System.Boolean&)
extern "C" WhileStmt_t3522 * Parser_ParseWhileStmt_m10838 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.RepeatStmt Language.Lua.Parser::ParseRepeatStmt(System.Boolean&)
extern "C" RepeatStmt_t3520 * Parser_ParseRepeatStmt_m10839 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Language.Lua.Var> Language.Lua.Parser::ParseVarList(System.Boolean&)
extern "C" List_1_t3501 * Parser_ParseVarList_m10840 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Language.Lua.Expr> Language.Lua.Parser::ParseExprList(System.Boolean&)
extern "C" List_1_t3502 * Parser_ParseExprList_m10841 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Expr Language.Lua.Parser::ParseExpr(System.Boolean&)
extern "C" Expr_t3509 * Parser_ParseExpr_m10842 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.Parser::ParseTerm(System.Boolean&)
extern "C" Term_t3525 * Parser_ParseTerm_m10843 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.NilLiteral Language.Lua.Parser::ParseNilLiteral(System.Boolean&)
extern "C" NilLiteral_t3536 * Parser_ParseNilLiteral_m10844 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.BoolLiteral Language.Lua.Parser::ParseBoolLiteral(System.Boolean&)
extern "C" BoolLiteral_t3526 * Parser_ParseBoolLiteral_m10845 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.NumberLiteral Language.Lua.Parser::ParseNumberLiteral(System.Boolean&)
extern "C" NumberLiteral_t3537 * Parser_ParseNumberLiteral_m10846 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.StringLiteral Language.Lua.Parser::ParseStringLiteral(System.Boolean&)
extern "C" StringLiteral_t3546 * Parser_ParseStringLiteral_m10847 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.VariableArg Language.Lua.Parser::ParseVariableArg(System.Boolean&)
extern "C" VariableArg_t3549 * Parser_ParseVariableArg_m10848 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.FunctionValue Language.Lua.Parser::ParseFunctionValue(System.Boolean&)
extern "C" FunctionValue_t3531 * Parser_ParseFunctionValue_m10849 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.FunctionBody Language.Lua.Parser::ParseFunctionBody(System.Boolean&)
extern "C" FunctionBody_t3514 * Parser_ParseFunctionBody_m10850 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Access Language.Lua.Parser::ParseAccess(System.Boolean&)
extern "C" Access_t3523 * Parser_ParseAccess_m10851 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.BaseExpr Language.Lua.Parser::ParseBaseExpr(System.Boolean&)
extern "C" BaseExpr_t3524 * Parser_ParseBaseExpr_m10852 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.KeyAccess Language.Lua.Parser::ParseKeyAccess(System.Boolean&)
extern "C" KeyAccess_t3533 * Parser_ParseKeyAccess_m10853 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.NameAccess Language.Lua.Parser::ParseNameAccess(System.Boolean&)
extern "C" NameAccess_t3535 * Parser_ParseNameAccess_m10854 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.MethodCall Language.Lua.Parser::ParseMethodCall(System.Boolean&)
extern "C" MethodCall_t3534 * Parser_ParseMethodCall_m10855 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.FunctionCall Language.Lua.Parser::ParseFunctionCall(System.Boolean&)
extern "C" FunctionCall_t3530 * Parser_ParseFunctionCall_m10856 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Var Language.Lua.Parser::ParseVar(System.Boolean&)
extern "C" Var_t3589 * Parser_ParseVar_m10857 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.PrimaryExpr Language.Lua.Parser::ParsePrimaryExpr(System.Boolean&)
extern "C" PrimaryExpr_t3545 * Parser_ParsePrimaryExpr_m10858 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.VarName Language.Lua.Parser::ParseVarName(System.Boolean&)
extern "C" VarName_t3550 * Parser_ParseVarName_m10859 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.FunctionName Language.Lua.Parser::ParseFunctionName(System.Boolean&)
extern "C" FunctionName_t3513 * Parser_ParseFunctionName_m10860 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.GroupExpr Language.Lua.Parser::ParseGroupExpr(System.Boolean&)
extern "C" GroupExpr_t3532 * Parser_ParseGroupExpr_m10861 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.TableConstructor Language.Lua.Parser::ParseTableConstructor(System.Boolean&)
extern "C" TableConstructor_t3548 * Parser_ParseTableConstructor_m10862 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Language.Lua.Field> Language.Lua.Parser::ParseFieldList(System.Boolean&)
extern "C" List_1_t3547 * Parser_ParseFieldList_m10863 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Field Language.Lua.Parser::ParseField(System.Boolean&)
extern "C" Field_t3585 * Parser_ParseField_m10864 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.KeyValue Language.Lua.Parser::ParseKeyValue(System.Boolean&)
extern "C" KeyValue_t3587 * Parser_ParseKeyValue_m10865 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.NameValue Language.Lua.Parser::ParseNameValue(System.Boolean&)
extern "C" NameValue_t3588 * Parser_ParseNameValue_m10866 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.ItemValue Language.Lua.Parser::ParseItemValue(System.Boolean&)
extern "C" ItemValue_t3586 * Parser_ParseItemValue_m10867 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.OperatorExpr Language.Lua.Parser::ParseOperatorExpr(System.Boolean&)
extern "C" OperatorExpr_t3540 * Parser_ParseOperatorExpr_m10868 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Args Language.Lua.Parser::ParseArgs(System.Boolean&)
extern "C" Args_t3529 * Parser_ParseArgs_m10869 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Language.Lua.Expr> Language.Lua.Parser::ParseArgList(System.Boolean&)
extern "C" List_1_t3502 * Parser_ParseArgList_m10870 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.ParamList Language.Lua.Parser::ParseParamList(System.Boolean&)
extern "C" ParamList_t3528 * Parser_ParseParamList_m10871 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> Language.Lua.Parser::ParseFullName(System.Boolean&)
extern "C" List_1_t1 * Parser_ParseFullName_m10872 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> Language.Lua.Parser::ParseNameList(System.Boolean&)
extern "C" List_1_t1 * Parser_ParseNameList_m10873 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseName(System.Boolean&)
extern "C" String_t* Parser_ParseName_m10874 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseFloatNumber(System.Boolean&)
extern "C" String_t* Parser_ParseFloatNumber_m10875 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseHexicalNumber(System.Boolean&)
extern "C" String_t* Parser_ParseHexicalNumber_m10876 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseSingleQuotedText(System.Boolean&)
extern "C" String_t* Parser_ParseSingleQuotedText_m10877 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseDoubleQuotedText(System.Boolean&)
extern "C" String_t* Parser_ParseDoubleQuotedText_m10878 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseLongString(System.Boolean&)
extern "C" String_t* Parser_ParseLongString_m10879 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseKeyword(System.Boolean&)
extern "C" void Parser_ParseKeyword_m10880 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Language.Lua.Parser::ParseDigit(System.Boolean&)
extern "C" uint16_t Parser_ParseDigit_m10881 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Language.Lua.Parser::ParseHexDigit(System.Boolean&)
extern "C" uint16_t Parser_ParseHexDigit_m10882 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Language.Lua.Parser::ParseLetter(System.Boolean&)
extern "C" uint16_t Parser_ParseLetter_m10883 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseUnaryOperator(System.Boolean&)
extern "C" String_t* Parser_ParseUnaryOperator_m10884 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseBinaryOperator(System.Boolean&)
extern "C" String_t* Parser_ParseBinaryOperator_m10885 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseWordSep(System.Boolean&)
extern "C" void Parser_ParseWordSep_m10886 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseFieldSep(System.Boolean&)
extern "C" void Parser_ParseFieldSep_m10887 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseSpReq(System.Boolean&)
extern "C" void Parser_ParseSpReq_m10888 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseSpOpt(System.Boolean&)
extern "C" void Parser_ParseSpOpt_m10889 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseComment(System.Boolean&)
extern "C" void Parser_ParseComment_m10890 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseEol(System.Boolean&)
extern "C" void Parser_ParseEol_m10891 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseEof(System.Boolean&)
extern "C" void Parser_ParseEof_m10892 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Language.Lua.Parser::ParseEscapeChar(System.Boolean&)
extern "C" uint16_t Parser_ParseEscapeChar_m10893 (Parser_t3500 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Language.Lua.Parser::get_Position()
extern "C" int32_t Parser_get_Position_m10894 (Parser_t3500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::set_Position(System.Int32)
extern "C" void Parser_set_Position_m10895 (Parser_t3500 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::SetInput(Language.Lua.ParserInput`1<System.Char>)
extern "C" void Parser_SetInput_m10896 (Parser_t3500 * __this, Object_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Language.Lua.Parser::TerminalMatch(System.Char)
extern "C" bool Parser_TerminalMatch_m10897 (Parser_t3500 * __this, uint16_t ___terminal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Language.Lua.Parser::TerminalMatch(System.Char,System.Int32)
extern "C" bool Parser_TerminalMatch_m10898 (Parser_t3500 * __this, uint16_t ___terminal, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Language.Lua.Parser::MatchTerminal(System.Char,System.Boolean&)
extern "C" uint16_t Parser_MatchTerminal_m10899 (Parser_t3500 * __this, uint16_t ___terminal, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Language.Lua.Parser::MatchTerminalRange(System.Char,System.Char,System.Boolean&)
extern "C" uint16_t Parser_MatchTerminalRange_m10900 (Parser_t3500 * __this, uint16_t ___start, uint16_t ___end, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Language.Lua.Parser::MatchTerminalSet(System.String,System.Boolean,System.Boolean&)
extern "C" uint16_t Parser_MatchTerminalSet_m10901 (Parser_t3500 * __this, String_t* ___terminalSet, bool ___isComplement, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::MatchTerminalString(System.String,System.Boolean&)
extern "C" String_t* Parser_MatchTerminalString_m10902 (Parser_t3500 * __this, String_t* ___terminalString, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Language.Lua.Parser::PeekTerminalString(System.String)
extern "C" bool Parser_PeekTerminalString_m10903 (Parser_t3500 * __this, String_t* ___terminalString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Language.Lua.Parser::Error(System.String)
extern "C" int32_t Parser_Error_m10904 (Parser_t3500 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ClearError(System.Int32)
extern "C" void Parser_ClearError_m10905 (Parser_t3500 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::GetEorrorMessages()
extern "C" String_t* Parser_GetEorrorMessages_m10906 (Parser_t3500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

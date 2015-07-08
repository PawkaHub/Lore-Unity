#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Parser
struct Parser_t3738;
// Language.Lua.Chunk
struct Chunk_t3745;
// Language.Lua.ParserInput`1<System.Char>
struct ParserInput_1_t3817;
// Language.Lua.Statement
struct Statement_t3742;
// Language.Lua.Assignment
struct Assignment_t3741;
// Language.Lua.Function
struct Function_t3753;
// Language.Lua.LocalVar
struct LocalVar_t3757;
// Language.Lua.LocalFunc
struct LocalFunc_t3756;
// Language.Lua.ExprStmt
struct ExprStmt_t3748;
// Language.Lua.ReturnStmt
struct ReturnStmt_t3759;
// Language.Lua.BreakStmt
struct BreakStmt_t3743;
// Language.Lua.DoStmt
struct DoStmt_t3746;
// Language.Lua.IfStmt
struct IfStmt_t3755;
// Language.Lua.ElseifBlock
struct ElseifBlock_t3822;
// Language.Lua.ForStmt
struct ForStmt_t3750;
// Language.Lua.ForInStmt
struct ForInStmt_t3749;
// Language.Lua.WhileStmt
struct WhileStmt_t3760;
// Language.Lua.RepeatStmt
struct RepeatStmt_t3758;
// System.Collections.Generic.List`1<Language.Lua.Var>
struct List_1_t3739;
// System.Collections.Generic.List`1<Language.Lua.Expr>
struct List_1_t3740;
// Language.Lua.Expr
struct Expr_t3747;
// Language.Lua.Term
struct Term_t3763;
// Language.Lua.NilLiteral
struct NilLiteral_t3774;
// Language.Lua.BoolLiteral
struct BoolLiteral_t3764;
// Language.Lua.NumberLiteral
struct NumberLiteral_t3775;
// Language.Lua.StringLiteral
struct StringLiteral_t3784;
// Language.Lua.VariableArg
struct VariableArg_t3787;
// Language.Lua.FunctionValue
struct FunctionValue_t3769;
// Language.Lua.FunctionBody
struct FunctionBody_t3752;
// Language.Lua.Access
struct Access_t3761;
// Language.Lua.BaseExpr
struct BaseExpr_t3762;
// Language.Lua.KeyAccess
struct KeyAccess_t3771;
// Language.Lua.NameAccess
struct NameAccess_t3773;
// Language.Lua.MethodCall
struct MethodCall_t3772;
// Language.Lua.FunctionCall
struct FunctionCall_t3768;
// Language.Lua.Var
struct Var_t3827;
// Language.Lua.PrimaryExpr
struct PrimaryExpr_t3783;
// Language.Lua.VarName
struct VarName_t3788;
// Language.Lua.FunctionName
struct FunctionName_t3751;
// Language.Lua.GroupExpr
struct GroupExpr_t3770;
// Language.Lua.TableConstructor
struct TableConstructor_t3786;
// System.Collections.Generic.List`1<Language.Lua.Field>
struct List_1_t3785;
// Language.Lua.Field
struct Field_t3823;
// Language.Lua.KeyValue
struct KeyValue_t3825;
// Language.Lua.NameValue
struct NameValue_t3826;
// Language.Lua.ItemValue
struct ItemValue_t3824;
// Language.Lua.OperatorExpr
struct OperatorExpr_t3778;
// Language.Lua.Args
struct Args_t3767;
// Language.Lua.ParamList
struct ParamList_t3766;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1;
// System.String
struct String_t;

// System.Void Language.Lua.Parser::.ctor()
extern "C" void Parser__ctor_m11241 (Parser_t3738 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Chunk Language.Lua.Parser::ParseChunk(Language.Lua.ParserInput`1<System.Char>,System.Boolean&)
extern "C" Chunk_t3745 * Parser_ParseChunk_m11242 (Parser_t3738 * __this, Object_t* ___input, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Chunk Language.Lua.Parser::ParseChunk(System.Boolean&)
extern "C" Chunk_t3745 * Parser_ParseChunk_m11243 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Statement Language.Lua.Parser::ParseStatement(System.Boolean&)
extern "C" Statement_t3742 * Parser_ParseStatement_m11244 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Assignment Language.Lua.Parser::ParseAssignment(System.Boolean&)
extern "C" Assignment_t3741 * Parser_ParseAssignment_m11245 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Function Language.Lua.Parser::ParseFunction(System.Boolean&)
extern "C" Function_t3753 * Parser_ParseFunction_m11246 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LocalVar Language.Lua.Parser::ParseLocalVar(System.Boolean&)
extern "C" LocalVar_t3757 * Parser_ParseLocalVar_m11247 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LocalFunc Language.Lua.Parser::ParseLocalFunc(System.Boolean&)
extern "C" LocalFunc_t3756 * Parser_ParseLocalFunc_m11248 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.ExprStmt Language.Lua.Parser::ParseExprStmt(System.Boolean&)
extern "C" ExprStmt_t3748 * Parser_ParseExprStmt_m11249 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.ReturnStmt Language.Lua.Parser::ParseReturnStmt(System.Boolean&)
extern "C" ReturnStmt_t3759 * Parser_ParseReturnStmt_m11250 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.BreakStmt Language.Lua.Parser::ParseBreakStmt(System.Boolean&)
extern "C" BreakStmt_t3743 * Parser_ParseBreakStmt_m11251 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.DoStmt Language.Lua.Parser::ParseDoStmt(System.Boolean&)
extern "C" DoStmt_t3746 * Parser_ParseDoStmt_m11252 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.IfStmt Language.Lua.Parser::ParseIfStmt(System.Boolean&)
extern "C" IfStmt_t3755 * Parser_ParseIfStmt_m11253 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.ElseifBlock Language.Lua.Parser::ParseElseifBlock(System.Boolean&)
extern "C" ElseifBlock_t3822 * Parser_ParseElseifBlock_m11254 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.ForStmt Language.Lua.Parser::ParseForStmt(System.Boolean&)
extern "C" ForStmt_t3750 * Parser_ParseForStmt_m11255 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.ForInStmt Language.Lua.Parser::ParseForInStmt(System.Boolean&)
extern "C" ForInStmt_t3749 * Parser_ParseForInStmt_m11256 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.WhileStmt Language.Lua.Parser::ParseWhileStmt(System.Boolean&)
extern "C" WhileStmt_t3760 * Parser_ParseWhileStmt_m11257 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.RepeatStmt Language.Lua.Parser::ParseRepeatStmt(System.Boolean&)
extern "C" RepeatStmt_t3758 * Parser_ParseRepeatStmt_m11258 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Language.Lua.Var> Language.Lua.Parser::ParseVarList(System.Boolean&)
extern "C" List_1_t3739 * Parser_ParseVarList_m11259 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Language.Lua.Expr> Language.Lua.Parser::ParseExprList(System.Boolean&)
extern "C" List_1_t3740 * Parser_ParseExprList_m11260 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Expr Language.Lua.Parser::ParseExpr(System.Boolean&)
extern "C" Expr_t3747 * Parser_ParseExpr_m11261 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Term Language.Lua.Parser::ParseTerm(System.Boolean&)
extern "C" Term_t3763 * Parser_ParseTerm_m11262 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.NilLiteral Language.Lua.Parser::ParseNilLiteral(System.Boolean&)
extern "C" NilLiteral_t3774 * Parser_ParseNilLiteral_m11263 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.BoolLiteral Language.Lua.Parser::ParseBoolLiteral(System.Boolean&)
extern "C" BoolLiteral_t3764 * Parser_ParseBoolLiteral_m11264 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.NumberLiteral Language.Lua.Parser::ParseNumberLiteral(System.Boolean&)
extern "C" NumberLiteral_t3775 * Parser_ParseNumberLiteral_m11265 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.StringLiteral Language.Lua.Parser::ParseStringLiteral(System.Boolean&)
extern "C" StringLiteral_t3784 * Parser_ParseStringLiteral_m11266 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.VariableArg Language.Lua.Parser::ParseVariableArg(System.Boolean&)
extern "C" VariableArg_t3787 * Parser_ParseVariableArg_m11267 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.FunctionValue Language.Lua.Parser::ParseFunctionValue(System.Boolean&)
extern "C" FunctionValue_t3769 * Parser_ParseFunctionValue_m11268 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.FunctionBody Language.Lua.Parser::ParseFunctionBody(System.Boolean&)
extern "C" FunctionBody_t3752 * Parser_ParseFunctionBody_m11269 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Access Language.Lua.Parser::ParseAccess(System.Boolean&)
extern "C" Access_t3761 * Parser_ParseAccess_m11270 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.BaseExpr Language.Lua.Parser::ParseBaseExpr(System.Boolean&)
extern "C" BaseExpr_t3762 * Parser_ParseBaseExpr_m11271 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.KeyAccess Language.Lua.Parser::ParseKeyAccess(System.Boolean&)
extern "C" KeyAccess_t3771 * Parser_ParseKeyAccess_m11272 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.NameAccess Language.Lua.Parser::ParseNameAccess(System.Boolean&)
extern "C" NameAccess_t3773 * Parser_ParseNameAccess_m11273 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.MethodCall Language.Lua.Parser::ParseMethodCall(System.Boolean&)
extern "C" MethodCall_t3772 * Parser_ParseMethodCall_m11274 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.FunctionCall Language.Lua.Parser::ParseFunctionCall(System.Boolean&)
extern "C" FunctionCall_t3768 * Parser_ParseFunctionCall_m11275 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Var Language.Lua.Parser::ParseVar(System.Boolean&)
extern "C" Var_t3827 * Parser_ParseVar_m11276 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.PrimaryExpr Language.Lua.Parser::ParsePrimaryExpr(System.Boolean&)
extern "C" PrimaryExpr_t3783 * Parser_ParsePrimaryExpr_m11277 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.VarName Language.Lua.Parser::ParseVarName(System.Boolean&)
extern "C" VarName_t3788 * Parser_ParseVarName_m11278 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.FunctionName Language.Lua.Parser::ParseFunctionName(System.Boolean&)
extern "C" FunctionName_t3751 * Parser_ParseFunctionName_m11279 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.GroupExpr Language.Lua.Parser::ParseGroupExpr(System.Boolean&)
extern "C" GroupExpr_t3770 * Parser_ParseGroupExpr_m11280 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.TableConstructor Language.Lua.Parser::ParseTableConstructor(System.Boolean&)
extern "C" TableConstructor_t3786 * Parser_ParseTableConstructor_m11281 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Language.Lua.Field> Language.Lua.Parser::ParseFieldList(System.Boolean&)
extern "C" List_1_t3785 * Parser_ParseFieldList_m11282 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Field Language.Lua.Parser::ParseField(System.Boolean&)
extern "C" Field_t3823 * Parser_ParseField_m11283 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.KeyValue Language.Lua.Parser::ParseKeyValue(System.Boolean&)
extern "C" KeyValue_t3825 * Parser_ParseKeyValue_m11284 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.NameValue Language.Lua.Parser::ParseNameValue(System.Boolean&)
extern "C" NameValue_t3826 * Parser_ParseNameValue_m11285 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.ItemValue Language.Lua.Parser::ParseItemValue(System.Boolean&)
extern "C" ItemValue_t3824 * Parser_ParseItemValue_m11286 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.OperatorExpr Language.Lua.Parser::ParseOperatorExpr(System.Boolean&)
extern "C" OperatorExpr_t3778 * Parser_ParseOperatorExpr_m11287 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Args Language.Lua.Parser::ParseArgs(System.Boolean&)
extern "C" Args_t3767 * Parser_ParseArgs_m11288 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Language.Lua.Expr> Language.Lua.Parser::ParseArgList(System.Boolean&)
extern "C" List_1_t3740 * Parser_ParseArgList_m11289 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.ParamList Language.Lua.Parser::ParseParamList(System.Boolean&)
extern "C" ParamList_t3766 * Parser_ParseParamList_m11290 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> Language.Lua.Parser::ParseFullName(System.Boolean&)
extern "C" List_1_t1 * Parser_ParseFullName_m11291 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> Language.Lua.Parser::ParseNameList(System.Boolean&)
extern "C" List_1_t1 * Parser_ParseNameList_m11292 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseName(System.Boolean&)
extern "C" String_t* Parser_ParseName_m11293 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseFloatNumber(System.Boolean&)
extern "C" String_t* Parser_ParseFloatNumber_m11294 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseHexicalNumber(System.Boolean&)
extern "C" String_t* Parser_ParseHexicalNumber_m11295 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseSingleQuotedText(System.Boolean&)
extern "C" String_t* Parser_ParseSingleQuotedText_m11296 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseDoubleQuotedText(System.Boolean&)
extern "C" String_t* Parser_ParseDoubleQuotedText_m11297 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseLongString(System.Boolean&)
extern "C" String_t* Parser_ParseLongString_m11298 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseKeyword(System.Boolean&)
extern "C" void Parser_ParseKeyword_m11299 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Language.Lua.Parser::ParseDigit(System.Boolean&)
extern "C" uint16_t Parser_ParseDigit_m11300 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Language.Lua.Parser::ParseHexDigit(System.Boolean&)
extern "C" uint16_t Parser_ParseHexDigit_m11301 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Language.Lua.Parser::ParseLetter(System.Boolean&)
extern "C" uint16_t Parser_ParseLetter_m11302 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseUnaryOperator(System.Boolean&)
extern "C" String_t* Parser_ParseUnaryOperator_m11303 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::ParseBinaryOperator(System.Boolean&)
extern "C" String_t* Parser_ParseBinaryOperator_m11304 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseWordSep(System.Boolean&)
extern "C" void Parser_ParseWordSep_m11305 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseFieldSep(System.Boolean&)
extern "C" void Parser_ParseFieldSep_m11306 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseSpReq(System.Boolean&)
extern "C" void Parser_ParseSpReq_m11307 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseSpOpt(System.Boolean&)
extern "C" void Parser_ParseSpOpt_m11308 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseComment(System.Boolean&)
extern "C" void Parser_ParseComment_m11309 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseEol(System.Boolean&)
extern "C" void Parser_ParseEol_m11310 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ParseEof(System.Boolean&)
extern "C" void Parser_ParseEof_m11311 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Language.Lua.Parser::ParseEscapeChar(System.Boolean&)
extern "C" uint16_t Parser_ParseEscapeChar_m11312 (Parser_t3738 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Language.Lua.Parser::get_Position()
extern "C" int32_t Parser_get_Position_m11313 (Parser_t3738 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::set_Position(System.Int32)
extern "C" void Parser_set_Position_m11314 (Parser_t3738 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::SetInput(Language.Lua.ParserInput`1<System.Char>)
extern "C" void Parser_SetInput_m11315 (Parser_t3738 * __this, Object_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Language.Lua.Parser::TerminalMatch(System.Char)
extern "C" bool Parser_TerminalMatch_m11316 (Parser_t3738 * __this, uint16_t ___terminal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Language.Lua.Parser::TerminalMatch(System.Char,System.Int32)
extern "C" bool Parser_TerminalMatch_m11317 (Parser_t3738 * __this, uint16_t ___terminal, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Language.Lua.Parser::MatchTerminal(System.Char,System.Boolean&)
extern "C" uint16_t Parser_MatchTerminal_m11318 (Parser_t3738 * __this, uint16_t ___terminal, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Language.Lua.Parser::MatchTerminalRange(System.Char,System.Char,System.Boolean&)
extern "C" uint16_t Parser_MatchTerminalRange_m11319 (Parser_t3738 * __this, uint16_t ___start, uint16_t ___end, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Language.Lua.Parser::MatchTerminalSet(System.String,System.Boolean,System.Boolean&)
extern "C" uint16_t Parser_MatchTerminalSet_m11320 (Parser_t3738 * __this, String_t* ___terminalSet, bool ___isComplement, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::MatchTerminalString(System.String,System.Boolean&)
extern "C" String_t* Parser_MatchTerminalString_m11321 (Parser_t3738 * __this, String_t* ___terminalString, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Language.Lua.Parser::PeekTerminalString(System.String)
extern "C" bool Parser_PeekTerminalString_m11322 (Parser_t3738 * __this, String_t* ___terminalString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Language.Lua.Parser::Error(System.String)
extern "C" int32_t Parser_Error_m11323 (Parser_t3738 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Parser::ClearError(System.Int32)
extern "C" void Parser_ClearError_m11324 (Parser_t3738 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.Parser::GetEorrorMessages()
extern "C" String_t* Parser_GetEorrorMessages_m11325 (Parser_t3738 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

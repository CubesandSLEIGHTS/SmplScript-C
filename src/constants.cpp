#include <iostream>
#include <list>
using namespace std;

const string TT_INT	        = "INT";
const string TT_FLOAT    	= "FLOAT";
const string TT_STRING      = "STRING";
const string TT_IDENTIFIER	= "IDENTIFIER";
const string TT_KEYWORD		= "KEYWORD";
const string TT_PLUS     	= "PLUS";
const string TT_MINUS    	= "MINUS";
const string TT_MUL      	= "MUL";
const string TT_DIV      	= "DIV";
const string TT_POW         = "POW";
const string TT_EQ          = "EQ";
const string TT_LPAREN   	= "LPAREN";
const string TT_RPAREN   	= "RPAREN";
const string TT_LSQUARE     = "LSQUARE";
const string TT_RSQUARE     = "RSQUARE";
const string TT_EE          = "EE";
const string TT_NE          = "NE";
const string TT_LT          = "LT";
const string TT_GT          = "GT";
const string TT_LTE         = "LTE";
const string TT_GTE         = "GTE";
const string TT_COMMA       = "COMMA";
const string TT_ARROW       = "ARROW";
const string TT_NEWLINE		= "NEWLINE";
const string TT_EOF         = "EOF";

const list<string> KEYWORDS = {
   "assign",
   "and",
   "or",
   "not",
   "if",
   "elif",
   "else",
   "for",
   "to",
   "step",
   "while",
   "define_func",
   "then",
   "end",
   "return",
   "continue",
   "stop"
   };

// Generated from ../azslLexer.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  azslLexer : public antlr4::Lexer {
public:
  enum {
    AppendStructuredBuffer = 1, Bool = 2, Bool1 = 3, Bool2 = 4, Bool3 = 5, 
    Bool4 = 6, Bool1x1 = 7, Bool1x2 = 8, Bool1x3 = 9, Bool1x4 = 10, Bool2x1 = 11, 
    Bool2x2 = 12, Bool2x3 = 13, Bool2x4 = 14, Bool3x1 = 15, Bool3x2 = 16, 
    Bool3x3 = 17, Bool3x4 = 18, Bool4x1 = 19, Bool4x2 = 20, Bool4x3 = 21, 
    Bool4x4 = 22, Buffer = 23, BuiltInTriangleIntersectionAttributes = 24, 
    ByteAddressBuffer = 25, Break = 26, Case = 27, CBuffer = 28, Centroid = 29, 
    ConstantBuffer = 30, ConstantBufferCamel = 31, Class = 32, ColumnMajor = 33, 
    Const = 34, ConsumeStructuredBuffer = 35, Continue = 36, Default = 37, 
    Discard = 38, Do = 39, Double = 40, Double1 = 41, Double2 = 42, Double3 = 43, 
    Double4 = 44, Double1x1 = 45, Double1x2 = 46, Double1x3 = 47, Double1x4 = 48, 
    Double2x1 = 49, Double2x2 = 50, Double2x3 = 51, Double2x4 = 52, Double3x1 = 53, 
    Double3x2 = 54, Double3x3 = 55, Double3x4 = 56, Double4x1 = 57, Double4x2 = 58, 
    Double4x3 = 59, Double4x4 = 60, Else = 61, Enum = 62, Export = 63, Extern = 64, 
    FeedbackTexture2D = 65, FeedbackTexture2DArray = 66, Float = 67, Float1 = 68, 
    Float2 = 69, Float3 = 70, Float4 = 71, Float1x1 = 72, Float1x2 = 73, 
    Float1x3 = 74, Float1x4 = 75, Float2x1 = 76, Float2x2 = 77, Float2x3 = 78, 
    Float2x4 = 79, Float3x1 = 80, Float3x2 = 81, Float3x3 = 82, Float3x4 = 83, 
    Float4x1 = 84, Float4x2 = 85, Float4x3 = 86, Float4x4 = 87, For = 88, 
    Groupshared = 89, Globallycoherent = 90, Global = 91, Half = 92, Half1 = 93, 
    Half2 = 94, Half3 = 95, Half4 = 96, Half1x1 = 97, Half1x2 = 98, Half1x3 = 99, 
    Half1x4 = 100, Half2x1 = 101, Half2x2 = 102, Half2x3 = 103, Half2x4 = 104, 
    Half3x1 = 105, Half3x2 = 106, Half3x3 = 107, Half3x4 = 108, Half4x1 = 109, 
    Half4x2 = 110, Half4x3 = 111, Half4x4 = 112, If = 113, In = 114, Inline = 115, 
    Rootconstant = 116, Inout = 117, InputPatch = 118, Int = 119, Int16_t = 120, 
    Int32_t = 121, Int64_t = 122, Int1 = 123, Int2 = 124, Int3 = 125, Int4 = 126, 
    Int1x1 = 127, Int1x2 = 128, Int1x3 = 129, Int1x4 = 130, Int2x1 = 131, 
    Int2x2 = 132, Int2x3 = 133, Int2x4 = 134, Int3x1 = 135, Int3x2 = 136, 
    Int3x3 = 137, Int3x4 = 138, Int4x1 = 139, Int4x2 = 140, Int4x3 = 141, 
    Int4x4 = 142, Interface = 143, Line_ = 144, LineAdj = 145, Linear = 146, 
    LineStream = 147, Long = 148, Matrix = 149, Namespace = 150, Nointerpolation = 151, 
    Noperspective = 152, Option = 153, Out = 154, OutputPatch = 155, Override = 156, 
    Partial = 157, Packoffset = 158, Point = 159, PointStream = 160, Precise = 161, 
    RasterizerOrderedBuffer = 162, RasterizerOrderedByteAddressBuffer = 163, 
    RasterizerOrderedStructuredBuffer = 164, RasterizerOrderedTexture1D = 165, 
    RasterizerOrderedTexture1DArray = 166, RasterizerOrderedTexture2D = 167, 
    RasterizerOrderedTexture2DArray = 168, RasterizerOrderedTexture3D = 169, 
    RayDesc = 170, RaytracingAccelerationStructure = 171, Register = 172, 
    Return = 173, RowMajor = 174, RWBuffer = 175, RWByteAddressBuffer = 176, 
    RWStructuredBuffer = 177, RWTexture1D = 178, RWTexture1DArray = 179, 
    RWTexture2D = 180, RWTexture2DArray = 181, RWTexture3D = 182, Sample = 183, 
    Sampler = 184, SamplerCapitalS = 185, SamplerComparisonState = 186, 
    SamplerStateCamel = 187, SamplerState = 188, Shared = 189, SNorm = 190, 
    Static = 191, Struct = 192, StructuredBuffer = 193, SubpassInput = 194, 
    SubpassInputMS = 195, Switch = 196, TBuffer = 197, Texture1D = 198, 
    Texture1DArray = 199, Texture2D = 200, Texture2DArray = 201, Texture2DMS = 202, 
    Texture2DMSArray = 203, Texture3D = 204, TextureCube = 205, TextureCubeArray = 206, 
    Triangle = 207, TriangleAdj = 208, TriangleStream = 209, Uniform = 210, 
    Uint = 211, Uint1 = 212, Uint2 = 213, Uint3 = 214, Uint4 = 215, Uint1x1 = 216, 
    Uint1x2 = 217, Uint1x3 = 218, Uint1x4 = 219, Uint2x1 = 220, Uint2x2 = 221, 
    Uint2x3 = 222, Uint2x4 = 223, Uint3x1 = 224, Uint3x2 = 225, Uint3x3 = 226, 
    Uint3x4 = 227, Uint4x1 = 228, Uint4x2 = 229, Uint4x3 = 230, Uint4x4 = 231, 
    Uint16_t = 232, Uint32_t = 233, Uint64_t = 234, UNorm = 235, Unsigned = 236, 
    Dword = 237, Dword1 = 238, Dword2 = 239, Dword3 = 240, Dword4 = 241, 
    Dword1x1 = 242, Dword1x2 = 243, Dword1x3 = 244, Dword1x4 = 245, Dword2x1 = 246, 
    Dword2x2 = 247, Dword2x3 = 248, Dword2x4 = 249, Dword3x1 = 250, Dword3x2 = 251, 
    Dword3x3 = 252, Dword3x4 = 253, Dword4x1 = 254, Dword4x2 = 255, Dword4x3 = 256, 
    Dword4x4 = 257, Vector = 258, Volatile = 259, Void = 260, While = 261, 
    StateObjectConfig = 262, LocalRootSignature = 263, GlobalRootSignature = 264, 
    SubobjectToExportsAssociation = 265, RaytracingShaderConfig = 266, RaytracingPipelineConfig = 267, 
    RaytracingPipelineConfig1 = 268, TriangleHitGroup = 269, ProceduralPrimitiveHitGroup = 270, 
    ADDRESS_U = 271, ADDRESS_V = 272, ADDRESS_W = 273, BORDER_COLOR = 274, 
    MIN_FILTER = 275, MAG_FILTER = 276, MIP_FILTER = 277, MAX_ANISOTROPY = 278, 
    MAX_LOD = 279, MIN_LOD = 280, MIP_LOD_BIAS = 281, COMPARISON_FUNC = 282, 
    REDUCTION_TYPE = 283, FILTER_MODE_POINT = 284, FILTER_MODE_LINEAR = 285, 
    REDUCTION_TYPE_FILTER = 286, REDUCTION_TYPE_COMPARISON = 287, REDUCTION_TYPE_MINIMUM = 288, 
    REDUCTION_TYPE_MAXIMUM = 289, ADDRESS_MODE_WRAP = 290, ADDRESS_MODE_MIRROR = 291, 
    ADDRESS_MODE_CLAMP = 292, ADDRESS_MODE_BORDER = 293, ADDRESS_MODE_MIRROR_ONCE = 294, 
    COMPARISON_FUNCTION_NEVER = 295, COMPARISON_FUNCTION_LESS = 296, COMPARISON_FUNCTION_EQUAL = 297, 
    COMPARISON_FUNCTION_LESS_EQUAL = 298, COMPARISON_FUNCTION_GREATER = 299, 
    COMPARISON_FUNCTION_NOT_EQUAL = 300, COMPARISON_FUNCTION_GREATER_EQUAL = 301, 
    COMPARISON_FUNCTION_ALWAYS = 302, BORDER_COLOR_OPAQUE_BLACK = 303, BORDER_COLOR_TRANSPARENT_BLACK = 304, 
    BORDER_COLOR_OPAQUE_WHITE = 305, LeftParen = 306, RightParen = 307, 
    LeftBracket = 308, RightBracket = 309, LeftBrace = 310, RightBrace = 311, 
    LeftDoubleBracket = 312, Less = 313, LessEqual = 314, Greater = 315, 
    GreaterEqual = 316, LeftShift = 317, RightShift = 318, Plus = 319, PlusPlus = 320, 
    Minus = 321, MinusMinus = 322, Star = 323, Div = 324, Mod = 325, And = 326, 
    Or = 327, AndAnd = 328, OrOr = 329, Caret = 330, Not = 331, Tilde = 332, 
    Question = 333, Colon = 334, ColonColon = 335, Semi = 336, Comma = 337, 
    Assign = 338, StarAssign = 339, DivAssign = 340, ModAssign = 341, PlusAssign = 342, 
    MinusAssign = 343, LeftShiftAssign = 344, RightShiftAssign = 345, AndAssign = 346, 
    XorAssign = 347, OrAssign = 348, Equal = 349, NotEqual = 350, Dot = 351, 
    True = 352, False = 353, KW_AssociatedType = 354, KW_TypeAlias = 355, 
    KW_Typedef = 356, KW_Fundamental = 357, KW_Typeof = 358, FrequencyId = 359, 
    ShaderVariantFallback = 360, ShaderResourceGroupSemantic = 361, ShaderResourceGroup = 362, 
    KW_ext_print_message = 363, KW_ext_print_symbol = 364, KW_ext_prtsym_fully_qualified = 365, 
    KW_ext_prtsym_least_qualified = 366, KW_ext_prtsym_constint_value = 367, 
    HLSLSemanticStream = 368, HLSLSemanticSystem = 369, Identifier = 370, 
    IntegerLiteral = 371, FloatLiteral = 372, StringLiteral = 373, PragmaDirective = 374, 
    LineDirective = 375, Whitespace = 376, Newline = 377, BlockComment = 378, 
    LineComment = 379
  };

  enum {
    PREPROCESSOR = 2, COMMENTS = 3
  };

  explicit azslLexer(antlr4::CharStream *input);
  ~azslLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};


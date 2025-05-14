# AZSLc - evo

This fork is a prototype of Amazon Shader Language Compiler version 2 for open 3d engine (o3de).  
This prototype called "evolution", is intended to remove the necessity of renaming SRG variables throughout the emitted hlsl program, by changing the concept of SRG into a real namespace. Modern DXC being able to support them. Meaning the emitted output can be roughly equivalent to the input source.  
This change will allow a loosening of the semantic system that will in turn allow for unforseen language features. Meaning ideally, support of modern HLSL features like templates or operators. The parser however cannot be loose and the tokens and grammar rules will need to at least have semantic-hollow rules that allow the parsing to continue, and not shift out of phase for following constructs. Because grasping what it can is still beneficial for reflection of layouts, or other platform specific, or cli option specific tranforms.

## License

For terms please see the LICENSE*.TXT file at the root of this distribution.

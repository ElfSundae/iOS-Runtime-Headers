/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRTurkishSuffix : NSObject {
    unsigned char  _isOptional;
    NSString * _name;
    NSString * _pattern;
    unsigned char  _patternBuffer;
    unsigned int  _patternBufferLength;
    BOOL  _postponesApostrophe;
    int  _suffixType;
}

+ (void)_enumerateSuffixMatchesForBuffer:(char *)arg1 length:(unsigned int)arg2 followedByLetter:(unsigned char)arg3 options:(unsigned int)arg4 depth:(unsigned int)arg5 matchState:(int)arg6 suffixStack:(id*)arg7 suffixRangeStack:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg8 usingBlock:(id /* block */)arg9;
+ (void)enumerateSuffixMatchesForBuffer:(char *)arg1 length:(unsigned int)arg2 options:(unsigned int)arg3 usingBlock:(id /* block */)arg4;
+ (void)enumerateSuffixMatchesForWord:(id)arg1 options:(unsigned int)arg2 usingBlock:(id /* block */)arg3;
+ (id)standardTurkishNounSuffixes;
+ (id)standardTurkishSuffixes;
+ (id)standardTurkishVerbSuffixes;

- (void)_fillPatternBuffer;
- (void)dealloc;
- (id)description;
- (id)initWithPattern:(id)arg1 name:(id)arg2 type:(int)arg3 postponesApostrophe:(BOOL)arg4;
- (unsigned int)matchingIndexInBuffer:(char *)arg1 length:(unsigned int)arg2 followedByLetter:(unsigned char)arg3 matchWithNameOnly:(BOOL*)arg4;
- (id)name;
- (id)pattern;
- (BOOL)postponesApostrophe;
- (int)suffixType;

@end

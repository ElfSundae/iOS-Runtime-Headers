/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface _MDHTMLParsing : NSObject {
    NSMutableDictionary * attributes;
    BOOL  inHead;
    BOOL  inScript;
    BOOL  inStyle;
    BOOL  inTitle;
    unsigned long  indexingLimit;
    NSString * metaContent;
    NSString * metaHttpEquiv;
    NSString * metaName;
    unsigned char  newLineBuffer;
    unsigned int  newLineLength;
    unsigned long  sourceCFEncoding;
    unsigned int  sourceEncoding;
    unsigned int  titleLength;
    const char * titleStart;
    unsigned int  uniCharLen;
    unsigned int  uniCharSize;
    unsigned short * uniChars;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)appendNewline;
- (void)appendText:(const char *)arg1 length:(unsigned int)arg2;
- (void)appendUnichars:(const unsigned short*)arg1 length:(unsigned int)arg2;
- (void)dealloc;
- (id)initWithEncoding:(unsigned int)arg1;

@end

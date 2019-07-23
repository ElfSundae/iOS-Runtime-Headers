/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

@interface DSTextFile : NSObject <DSTextFileEnumeratorControl> {
    unsigned int  _bufferSize;
    BOOL  _cancelEnumeration;
    unsigned int  _currentLineIndex;
    NSFileHandle * _fileHandle;
    BOOL  _isEnumerating;
    NSData * _lineBreak;
    NSMutableArray * _linePositions;
    int  _skipCount;
}

@property (nonatomic) unsigned int bufferSize;
@property (nonatomic) BOOL cancelEnumeration;
@property (nonatomic) unsigned int currentLineIndex;
@property (nonatomic, retain) NSFileHandle *fileHandle;
@property (nonatomic) BOOL isEnumerating;
@property (nonatomic, retain) NSData *lineBreak;
@property (nonatomic, retain) NSMutableArray *linePositions;
@property (nonatomic) int skipCount;

+ (id)textFileWithPath:(id)arg1;

- (void).cxx_destruct;
- (BOOL)advanceToNextLine:(id*)arg1;
- (unsigned int)bufferSize;
- (BOOL)cancelEnumeration;
- (unsigned int)currentLineIndex;
- (unsigned long long)currentOffset;
- (void)end;
- (void)enumerateUsingBlock:(id /* block */)arg1;
- (id)extractLine:(unsigned int)arg1;
- (id)fileHandle;
- (unsigned long long)getOffsetAtLineIndex:(unsigned int)arg1;
- (id)init;
- (id)initWithFilePath:(id)arg1;
- (id)initWithFilePath:(id)arg1 withBufferSize:(unsigned int)arg2;
- (BOOL)isEnumerating;
- (id)lineBreak;
- (id)linePositions;
- (id)readDataOfLength:(unsigned int)arg1;
- (void)resetEnumerator;
- (BOOL)searchForNextLineFromCurrentPosition:(id*)arg1;
- (void)seekToBeginning;
- (void)seekToOffset:(unsigned long long)arg1;
- (void)setBufferSize:(unsigned int)arg1;
- (void)setCancelEnumeration:(BOOL)arg1;
- (void)setCurrentLineIndex:(unsigned int)arg1;
- (void)setFileHandle:(id)arg1;
- (void)setIsEnumerating:(BOOL)arg1;
- (void)setLineBreak:(id)arg1;
- (void)setLinePositions:(id)arg1;
- (void)setSkipCount:(int)arg1;
- (int)skipCount;
- (void)skipWithLines:(int)arg1;

@end

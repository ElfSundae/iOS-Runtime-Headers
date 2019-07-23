/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleFormatter : NSObject <NSCopying> {
    BOOL _anyUnread;
    id _appToken;
    struct __CFArray { } *_chunkArray;
    struct __CFDictionary { } *_chunkDictionary;
    int _contractionMode;
    BOOL _currentUnread;
    int _displayMode;
    int _firstToken;
    int _lastToken;
    int _lineFocus;
    BOOL _showDotsSevenAndEight;
    BOOL _showEightDot;
    NSAttributedString *_statusText;
    struct __CFDictionary { } *_tokenDictionary;
}

@property (nonatomic) int lineFocus;

- (void)addText:(id)arg1 language:(id)arg2 selection:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 token:(int)arg4 focused:(BOOL)arg5;
- (void)addText:(id)arg1 language:(id)arg2 selection:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 token:(int)arg4 focused:(BOOL)arg5 technical:(BOOL)arg6;
- (void)addText:(id)arg1 overrideText:(id)arg2 language:(id)arg3 selection:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg4 token:(int)arg5 focused:(BOOL)arg6 technical:(BOOL)arg7;
- (void)addText:(id)arg1 selection:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 token:(int)arg3 focused:(BOOL)arg4;
- (void)addText:(id)arg1 selection:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 token:(int)arg3 focused:(BOOL)arg4 technical:(BOOL)arg5;
- (BOOL)anyUnread;
- (id)appToken;
- (struct __CFArray { }*)chunkArray;
- (struct __CFDictionary { }*)chunkDictionary;
- (int)contractionMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)currentUnread;
- (void)dealloc;
- (id)deepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)displayMode;
- (int)firstToken;
- (id)initWithContractionMode:(int)arg1 showEightDot:(BOOL)arg2 showDotsSevenAndEight:(BOOL)arg3;
- (int)lastToken;
- (int)lineFocus;
- (void)setAnyUnread:(BOOL)arg1;
- (void)setAppToken:(id)arg1;
- (void)setCurrentUnread:(BOOL)arg1;
- (void)setDisplayMode:(int)arg1;
- (void)setLineFocus:(int)arg1;
- (void)setStatusText:(id)arg1;
- (BOOL)showDotsSevenAndEight;
- (BOOL)showEightDot;
- (id)statusText;
- (void)translate;

@end
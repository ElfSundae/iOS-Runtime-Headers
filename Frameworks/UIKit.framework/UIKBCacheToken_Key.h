/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBCacheToken_Key : UIKBCacheToken {
    NSString *_cacheDisplayString;
    NSString *_cacheSecondaryDisplayString;
    int _clipCorners;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _displayInsets;
    int _displayRowHint;
    int _displayTypeHint;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    int _state;
    union { 
        struct { 
            unsigned int idiom : 6; 
            unsigned int landscape : 1; 
            unsigned int split : 1; 
            unsigned int appearance : 8; 
            unsigned int rendering : 16; 
        } styling; 
        int intValue; 
    } _style;
    BOOL _usesInsets;
}

+ (id)tokenForKey:(id)arg1 style:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg2;
+ (id)tokenForKey:(id)arg1 style:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg2 displayInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3;

- (id)_initWithKey:(id)arg1 style:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg2 displayInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3;
- (id)_stringWithAdditionalValues:(id /* block */)arg1;
- (void)annotateWithBool:(BOOL)arg1;
- (void)annotateWithInt:(int)arg1;
- (void)dealloc;
- (int)displayHint;
- (BOOL)hasKey;
- (int)rowHint;
- (void)setDisplayHint:(int)arg1;
- (void)setRowHint:(int)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1;
- (struct CGSize { float x1; float x2; })size;
- (id)string;
- (id)stringForRenderFlags:(int)arg1 lightKeyboard:(BOOL)arg2;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })styling;

@end

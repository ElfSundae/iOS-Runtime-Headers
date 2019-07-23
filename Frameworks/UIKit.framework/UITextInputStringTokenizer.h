/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextInputStringTokenizer : NSObject <UITextInputTokenizer> {
    UIResponder<UITextInput> * _textInput;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (struct _NSRange { unsigned int x1; unsigned int x2; })_getClosestTokenRangeForPosition:(id)arg1 granularity:(int)arg2 downstream:(BOOL)arg3;
- (int)_indexForTextPosition:(id)arg1;
- (BOOL)_isDownstreamForDirection:(int)arg1 atPosition:(id)arg2;
- (id)_positionFromPosition:(id)arg1 offset:(unsigned int)arg2 affinity:(int)arg3;
- (id)initWithTextInput:(id)arg1;
- (BOOL)isPosition:(id)arg1 atBoundary:(int)arg2 inDirection:(int)arg3;
- (BOOL)isPosition:(id)arg1 withinTextUnit:(int)arg2 inDirection:(int)arg3;
- (id)positionFromPosition:(id)arg1 toBoundary:(int)arg2 inDirection:(int)arg3;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(int)arg2 inDirection:(int)arg3;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITextInputControllerTokenizer : UITextInputStringTokenizer {
    UITextInputController * _textInput;
    struct __CFStringTokenizer { } * _tokenizer;
    bool  _tokenizerIsInvalid;
    int  _tokenizerType;
}

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_getClosestTokenRangeForPosition:(id)arg1 granularity:(long long)arg2 downstream:(bool)arg3;
- (long long)_indexForTextPosition:(id)arg1;
- (bool)_isDownstreamForDirection:(long long)arg1 atPosition:(id)arg2;
- (id)_positionFromPosition:(id)arg1 offset:(unsigned long long)arg2 affinity:(long long)arg3;
- (long long)_writingDirectionAtPosition:(id)arg1;
- (void)dealloc;
- (id)initWithTextInputController:(id)arg1;
- (void)invalidateTokenizer;

@end

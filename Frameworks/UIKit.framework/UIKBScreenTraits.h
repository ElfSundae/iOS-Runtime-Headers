/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBScreenTraits : NSObject {
    BOOL _isKeyboardMinorEdgeWidth;
    float _keyboardWidth;
    BOOL _knobInput;
    int _orientation;
    UIScreen *_screen;
    BOOL _touchInput;
}

@property (nonatomic, readonly) int idiom;
@property (nonatomic, readonly) BOOL isKeyboardMinorEdgeWidth;
@property (nonatomic) float keyboardWidth;
@property (nonatomic, readonly) BOOL knobInput;
@property (nonatomic) int orientation;
@property (nonatomic, readonly) UIScreen *screen;
@property (nonatomic, readonly) BOOL touchInput;

+ (id)traitsWithScreen:(id)arg1 orientation:(int)arg2;

- (int)idiom;
- (id)initWithScreen:(id)arg1 orientation:(int)arg2;
- (BOOL)isKeyboardMinorEdgeWidth;
- (float)keyboardWidth;
- (BOOL)knobInput;
- (int)orientation;
- (id)screen;
- (void)setKeyboardWidth:(float)arg1;
- (void)setOrientation:(int)arg1;
- (BOOL)touchInput;
- (void)updateForTextInputTraits:(id)arg1;

@end

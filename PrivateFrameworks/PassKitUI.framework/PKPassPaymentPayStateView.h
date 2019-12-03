/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPaymentPayStateView : UIView <PKGlyphViewDelegate> {
    bool  _accessPass;
    bool  _biometricsUnavailableHint;
    UILabel * _debugLabel;
    <PKPassPaymentPayStateViewDelegate> * _delegate;
    bool  _didLayout;
    PKGlyphView * _glyph;
    double  _glyphViewPadding;
    UILabel * _label;
    double  _labelAlpha;
    double  _labelStateBottomInset;
    double  _labelTopPadding;
    long long  _layoutState;
    bool  _persistentEmulationHint;
    long long  _state;
    long long  _style;
    bool  _touchRecognizingHint;
}

@property (nonatomic) bool accessPass;
@property (nonatomic) bool biometricsUnavailableHint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) UILabel *debugLabel;
@property (nonatomic) <PKPassPaymentPayStateViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKGlyphView *glyph;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic) double labelAlpha;
@property (nonatomic) double labelStateBottomInset;
@property (nonatomic, readonly) long long layoutState;
@property (nonatomic) bool persistentEmulationHint;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic) bool touchRecognizingHint;

- (void).cxx_destruct;
- (void)_applyStatePreservingGlyphState:(bool)arg1 overridingText:(id)arg2 animated:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)_attributedTextWithTitle:(id)arg1;
- (id)_attributedTextWithTitle:(id)arg1 subtitle:(id)arg2;
- (bool)_canEmphasizeState:(long long)arg1;
- (bool)_canPreserveGlyphForState:(long long)arg1;
- (void)_configureLayoutMetrics;
- (long long)_defaultGlyphStateForState:(long long)arg1;
- (void)_resolveLayout;
- (id)_textForState:(long long)arg1 textOverride:(id)arg2;
- (bool)accessPass;
- (bool)biometricsUnavailableHint;
- (void)dealloc;
- (id)debugLabel;
- (id)delegate;
- (void)emphasizeStateIfPossible:(long long)arg1 withOverrideText:(id)arg2;
- (id)glyph;
- (void)glyphView:(id)arg1 revealingCheckmark:(bool)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)label;
- (double)labelAlpha;
- (double)labelStateBottomInset;
- (bool)labelWillChangeForState:(long long)arg1 withOverrideText:(id)arg2;
- (long long)layoutState;
- (void)layoutSubviews;
- (bool)persistentEmulationHint;
- (void)setAccessPass:(bool)arg1;
- (void)setBiometricsUnavailableHint:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLabelAlpha:(double)arg1;
- (void)setLabelStateBottomInset:(double)arg1;
- (void)setPersistentEmulationHint:(bool)arg1;
- (void)setState:(long long)arg1 animated:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setState:(long long)arg1 animated:(bool)arg2 withOverrideText:(id)arg3 preserveGlyphState:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)setTouchRecognizingHint:(bool)arg1;
- (long long)state;
- (bool)touchRecognizingHint;
- (void)updateDebugLabel:(id)arg1 isErrorState:(bool)arg2;

@end

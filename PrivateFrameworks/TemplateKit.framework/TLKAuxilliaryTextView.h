/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKAuxilliaryTextView : TLKView <NUIContainerStackViewDelegate> {
    TLKVibrantLabel * _bottomLabel;
    TLKFormattedText * _bottomText;
    TLKVibrantLabel * _middleLabel;
    TLKFormattedText * _middleText;
    TLKStackView * _stackView;
    TLKTextAreaView * _textAreaViewForAlignment;
    TLKVibrantLabel * _topLabel;
    TLKFormattedText * _topText;
}

@property (retain) TLKVibrantLabel *bottomLabel;
@property (nonatomic, retain) TLKFormattedText *bottomText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) TLKVibrantLabel *middleLabel;
@property (nonatomic, retain) TLKFormattedText *middleText;
@property (retain) TLKStackView *stackView;
@property (readonly) Class superclass;
@property (retain) TLKTextAreaView *textAreaViewForAlignment;
@property (retain) TLKVibrantLabel *topLabel;
@property (nonatomic, retain) TLKFormattedText *topText;

+ (bool)formattedTextHasTextContent:(id)arg1;
+ (id)largeMiddleTextFont;

- (void).cxx_destruct;
- (id)bottomLabel;
- (id)bottomLabelFont;
- (id)bottomLabelString;
- (id)bottomText;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })containerStackView:(id)arg1 minimumSpacingAdjecentToArrangedSubview:(id)arg2;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (void)generateAndSizeTextAreaViewIfNeeded;
- (id)init;
- (void)matchBaselineOfLabel:(id)arg1 toView:(id)arg2;
- (id)middleLabel;
- (id)middleLabelFont;
- (id)middleLabelString;
- (id)middleText;
- (void)observedPropertiesChanged;
- (void)setBottomLabel:(id)arg1;
- (void)setBottomText:(id)arg1;
- (void)setMiddleLabel:(id)arg1;
- (void)setMiddleText:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setTextAreaViewForAlignment:(id)arg1;
- (void)setTopLabel:(id)arg1;
- (void)setTopText:(id)arg1;
- (id)stackView;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)textAreaViewForAlignment;
- (id)topLabel;
- (id)topLabelString;
- (id)topText;

@end

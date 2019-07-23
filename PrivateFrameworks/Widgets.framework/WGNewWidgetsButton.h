/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGNewWidgetsButton : UIButton {
    unsigned long long  _badgeNumber;
    _UILegibilitySettings * _legibilitySettings;
    NSCache * _numberAttributedStringCache;
    NSString * _numberText;
    UIButton * _overlayButton;
    NSString * _text;
    UIButton * _vibrantButton;
}

@property (nonatomic) unsigned long long badgeNumber;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) NSString *numberText;
@property (nonatomic, retain) NSString *text;

- (void).cxx_destruct;
- (id)_attributedStringWithColor:(id)arg1;
- (void)_buttonPushed:(id)arg1;
- (void)_buttonStateChanged:(id)arg1;
- (id)_numberAttributedStringWithNumberText:(id)arg1 attributes:(id)arg2;
- (id)_numberFont;
- (id)_numberImageForNumberText:(id)arg1 withAttributes:(id)arg2;
- (struct CGSize { double x1; double x2; })_numberLabelSizeForText:(id)arg1;
- (id)_numberTextAttributes;
- (void)_setAttributeTitleForButton:(id)arg1 withColor:(id)arg2;
- (id)_textAttributesWithColor:(id)arg1;
- (id)_textFont;
- (void)_updateButtons;
- (unsigned long long)badgeNumber;
- (id)init;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (id)numberText;
- (void)setBadgeNumber:(unsigned long long)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setNumberText:(id)arg1;
- (void)setText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (void)updateForContentCategorySizeChange;

@end

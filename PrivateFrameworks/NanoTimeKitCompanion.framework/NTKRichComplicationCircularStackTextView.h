/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKRichComplicationCircularStackTextView : NTKRichComplicationCircularBaseView {
    unsigned long long  _highlightMode;
    NTKColoringLabel * _line1Label;
    NTKColoringLabel * _line2Label;
}

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (id)_createAndAddLabel;
- (id)_desiredFontForLabel:(id)arg1;
- (void)_editingDidEnd;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (long long)_line1FilterStyle;
- (long long)_line2FilterStyle;
- (id)init;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

@interface SGTappableTextView : UITextView {
    UIColor * _activeRangeHighlightedColor;
    UIColor * _activeRangeNormalColor;
    NSMutableIndexSet * _activeRanges;
    NSAttributedString * _clientText;
    long long  _currentStyle;
    bool  _needsLabelUpdate;
    <SGTappableTextViewDelegate> * _tappableDelegate;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _trackingRange;
    bool  _trackingRangeHighlighted;
}

@property (nonatomic, retain) UIColor *activeRangeHighlightedColor;
@property (nonatomic, retain) UIColor *activeRangeNormalColor;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } activeRangesRect;
@property (nonatomic, readonly) bool hasActiveRanges;
@property (nonatomic) <SGTappableTextViewDelegate> *tappableDelegate;

- (void).cxx_destruct;
- (unsigned long long)_characterIndexAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_commonInit;
- (void)_highlightTrackingRange:(bool)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setNeedUpdateLabel;
- (id)_textColor;
- (void)_updateAttributedTextColor;
- (void)_updateCurrentAppearance;
- (void)_updateLabelIfNeeded;
- (id)activeRangeHighlightedColor;
- (id)activeRangeNormalColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })activeRangesRect;
- (void)addActiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)hasActiveRanges;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTracking;
- (void)layoutSubviews;
- (void)removeActiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeAllActiveRanges;
- (void)setActiveRangeHighlightedColor:(id)arg1;
- (void)setActiveRangeNormalColor:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setTappableDelegate:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTrackingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)tappableDelegate;
- (id)text;
- (void)tintColorDidChange;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })trackingRange;

@end

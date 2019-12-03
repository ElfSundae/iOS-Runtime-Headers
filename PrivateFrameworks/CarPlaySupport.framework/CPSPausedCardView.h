/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSPausedCardView : CPSInheritedBackgroundColorView {
    UIActivityIndicatorView * _spinner;
    UILabel * _title;
}

@property (nonatomic, readonly) UIActivityIndicatorView *spinner;
@property (nonatomic, readonly) UILabel *title;

- (void).cxx_destruct;
- (id)backgroundColor;
- (void)backgroundColorDidChange;
- (id)initWithTitle:(id)arg1 showsSpinner:(bool)arg2 backgroundColor:(id)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)spinner;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;

@end

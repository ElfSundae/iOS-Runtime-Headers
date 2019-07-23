/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFSecureMIMEPersonHeaderView : UIView {
    UIView * _backgroundView;
    NSArray * _buttons;
    unsigned int  _editing;
    UILabel * _label;
    UIView * _secureLabel;
    UIView * _signedLabel;
    UIView * _warningLabel;
}

@property (nonatomic, copy) NSArray *buttons;
@property (nonatomic) BOOL editing;
@property (nonatomic, copy) NSString *explanationText;
@property (nonatomic, copy) NSString *secureLabelText;
@property (nonatomic, copy) NSString *signedLabelText;
@property (nonatomic, copy) NSString *warningLabelText;

+ (id)_explanationLabelDefaultAttributes;

- (void)_insert:(BOOL)arg1 subview:(id)arg2;
- (id)_secureLabel;
- (void)_setText:(id)arg1 forLabel:(id)arg2;
- (id)_signedLabel;
- (id)_warningLabel;
- (id)buttons;
- (void)dealloc;
- (BOOL)editing;
- (id)explanationText;
- (float)heightOfBottomMargin;
- (float)heightThatFitsButtons;
- (float)heightThatFitsMainLabel:(struct CGSize { float x1; float x2; })arg1;
- (float)heightThatFitsSubview:(id)arg1 padding:(float)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)secureLabelText;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setButtons:(id)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setExplanationText:(id)arg1;
- (void)setSecureLabelText:(id)arg1;
- (void)setSignedLabelText:(id)arg1;
- (void)setWarningLabelText:(id)arg1;
- (BOOL)showsButtons;
- (id)signedLabelText;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)warningLabelText;
- (float)widthForSizingToFitSize:(struct CGSize { float x1; float x2; })arg1;

@end

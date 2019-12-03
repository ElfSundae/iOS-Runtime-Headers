/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftAmountControl : UIControl <UITextFieldDelegate> {
    NSMutableArray * _amountButtons;
    UIView * _customAmountBackgroundView;
    UITextField * _customAmountField;
    SKUIGiftConfiguration * _giftConfiguration;
    long long  _selectedAmount;
    long long  _trackingAmount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long selectedAmount;
@property (nonatomic, readonly) NSString *selectedAmountString;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_reloadSelectedButton;
- (void)_textFieldDidBeginEditing:(id)arg1;
- (void)_textFieldDidChange:(id)arg1;
- (void)_textFieldDidEndEditing:(id)arg1;
- (void)_updateButtonsWithTouch:(id)arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithGiftConfiguration:(id)arg1;
- (void)layoutSubviews;
- (long long)selectedAmount;
- (id)selectedAmountString;
- (void)setBackgroundColor:(id)arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldBeginEditing:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertyNameCell : CNContactCell {
    <CNPropertyCellDelegate> * _delegate;
    UIResponder * _firstResponderItem;
    UITextField * _textField;
}

@property (nonatomic) <CNPropertyCellDelegate> *delegate;
@property (nonatomic, readonly) UIResponder *firstResponderItem;
@property (nonatomic, retain) CNPropertyGroupItem *propertyItem;
@property (nonatomic, readonly) UITextField *textField;

- (void).cxx_destruct;
- (id)constantConstraints;
- (void)dealloc;
- (id)delegate;
- (id)firstResponderItem;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)propertyItem;
- (void)setBackgroundColor:(id)arg1;
- (void)setCardGroupItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPropertyItem:(id)arg1;
- (id)textField;
- (void)textFieldChanged:(id)arg1;

@end

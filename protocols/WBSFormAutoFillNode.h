/* Generated by RuntimeBrowser.
 */

@protocol WBSFormAutoFillNode <NSObject>

@required

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })elementBounds;
- (id)initWithJSWrapper:(struct OpaqueJSValue { }*)arg1 inContext:(struct OpaqueJSContext { }*)arg2;
- (BOOL)isHTMLInputElementUserEdited;
- (BOOL)isHTMLTextAreaElementUserEdited;
- (void)setHTMLInputElementAutofilled:(BOOL)arg1;

@end

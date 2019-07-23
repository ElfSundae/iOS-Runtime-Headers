/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentButton : UIButton {
    struct CGSize { 
        float width; 
        float height; 
    } _boundsSize;
    UILabel *_buyLabel;
    UIView *_container;
    CAFilter *_highlightFilter;
    BOOL _highlighted;
    CAShapeLayer *_layer;
    PKShapeView *_maskView;
    PKPDFView *_pdfView;
    int _style;
    int _type;
}

+ (id)buttonWithType:(int)arg1 style:(int)arg2;
+ (Class)layerClass;

- (void)_createHighlightFilterIfNecessary;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithPaymentButtonType:(int)arg1 paymentButtonStyle:(int)arg2;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;

@end

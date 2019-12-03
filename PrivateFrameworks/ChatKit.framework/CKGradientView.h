/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKGradientView : UIView <CKLayerDelegate> {
    NSArray * _colors;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _gradientFrame;
    CKBaseLayer * _gradientLayer;
    UIImage * _maskImage;
    UIView<CKGradientReferenceView> * _referenceView;
    CATransformLayer * _trackingLayer;
}

@property (nonatomic, retain) NSArray *colors;
@property (nonatomic, readonly) UIImage *gradient;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } gradientFrame;
@property (nonatomic, retain) CKBaseLayer *gradientLayer;
@property (nonatomic, retain) UIImage *maskImage;
@property (nonatomic) UIView<CKGradientReferenceView> *referenceView;
@property (nonatomic, retain) CATransformLayer *trackingLayer;

+ (id)gradientViews;

- (void).cxx_destruct;
- (void)_removeAllAnimations:(bool)arg1;
- (void)ckLayerDidBecomeVisible:(bool)arg1;
- (id)colors;
- (void)dealloc;
- (id)description;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)gradient;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })gradientFrame;
- (id)gradientLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)maskImage;
- (id)referenceView;
- (void)setColors:(id)arg1;
- (void)setGradientFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setMaskImage:(id)arg1;
- (void)setReferenceView:(id)arg1;
- (void)setTrackingLayer:(id)arg1;
- (id)trackingLayer;
- (void)updateAnimation;
- (void)updateGradientImage;

@end

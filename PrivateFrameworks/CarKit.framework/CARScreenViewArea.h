/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CARScreenViewArea : NSObject {
    bool  _displaysTransitionControl;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _safeFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleFrame;
}

@property (nonatomic, readonly) bool displaysTransitionControl;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } safeFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleFrame;

- (id)description;
- (bool)displaysTransitionControl;
- (id)initWithPropertySupplier:(id /* block */)arg1;
- (id)initWithPropertySupplier:(id /* block */)arg1 additionalInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToViewArea:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })safeFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrame;

@end

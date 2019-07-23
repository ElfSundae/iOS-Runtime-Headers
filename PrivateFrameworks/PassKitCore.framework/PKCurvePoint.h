/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKCurvePoint : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    }  _leftTangentPoint;
    struct CGPoint { 
        float x; 
        float y; 
    }  _rightTangentPoint;
    float  _roundness;
    float  _smoothness;
    float  _x;
    float  _y;
}

@property struct CGPoint { float x1; float x2; } CGPoint;
@property struct CGPoint { float x1; float x2; } leftTangentPoint;
@property struct CGPoint { float x1; float x2; } rightTangentPoint;
@property float roundness;
@property float smoothness;
@property float x;
@property float y;

+ (id)pointWithCGPoint:(struct CGPoint { float x1; float x2; })arg1;
+ (id)pointWithX:(float)arg1 y:(float)arg2;

- (struct CGPoint { float x1; float x2; })CGPoint;
- (id)initWithX:(float)arg1 y:(float)arg2;
- (struct CGPoint { float x1; float x2; })leftTangentPoint;
- (struct CGPoint { float x1; float x2; })rightTangentPoint;
- (float)roundness;
- (void)setCGPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setLeftTangentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setRightTangentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setRoundness:(float)arg1;
- (void)setSmoothness:(float)arg1;
- (void)setX:(float)arg1;
- (void)setY:(float)arg1;
- (float)smoothness;
- (float)x;
- (float)y;

@end

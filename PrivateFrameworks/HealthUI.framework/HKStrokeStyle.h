/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKStrokeStyle : NSObject <NSCopying> {
    int  _lineCap;
    int  _lineJoin;
    float  _lineWidth;
    UIColor * _strokeColor;
}

@property (nonatomic) int lineCap;
@property (nonatomic) int lineJoin;
@property (nonatomic) float lineWidth;
@property (nonatomic, copy) UIColor *strokeColor;

+ (id)strokeStyleWithColor:(id)arg1 lineWidth:(float)arg2;

- (void).cxx_destruct;
- (void)applyToContext:(struct CGContext { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (int)lineCap;
- (int)lineJoin;
- (float)lineWidth;
- (void)setLineCap:(int)arg1;
- (void)setLineJoin:(int)arg1;
- (void)setLineWidth:(float)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)strokeColor;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHRenderUtilities : NSObject

+ (void)addTextSubselectionHalosToArray:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
+ (void)addTextSubselectionKnobsToArray:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
+ (struct { double x1; double x2; double x3; bool x4; })barElementsRendererValueRangeForModelCache:(id)arg1 groupIndex:(unsigned long long)arg2;
+ (bool)centerPointForSeries:(id)arg1 index:(unsigned long long)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 point:(struct CGPoint { double x1; double x2; }*)arg4;
+ (bool)centerPointForSeries:(id)arg1 index:(unsigned long long)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 point:(struct CGPoint { double x1; double x2; }*)arg4 nullsUseIntercept:(bool)arg5;
+ (void)drawFill:(id)arg1 inContext:(struct CGContext { }*)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (void)drawFill:(id)arg1 inContext:(struct CGContext { }*)arg2 path:(struct CGPath { }*)arg3;
+ (void)drawImageFill:(id)arg1 inContext:(struct CGContext { }*)arg2 path:(struct CGPath { }*)arg3 withinBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
+ (void)drawNullFillSwatchInContext:(struct CGContext { }*)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (void)drawSymbol:(int)arg1 inContext:(struct CGContext { }*)arg2 at:(struct CGPoint { double x1; double x2; })arg3 width:(double)arg4 fill:(id)arg5 stroke:(id)arg6;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })integralFillRenderingRectFromElementRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelRectFromClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 elementSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)lightenFillOrStroke:(id)arg1 byPercent:(double)arg2;
+ (struct CGLayer { }*)newCGLayerForUserSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2 outUserSpaceLayerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
+ (struct CGPath { }*)newClipPathForSymbol:(int)arg1 at:(struct CGPoint { double x1; double x2; })arg2 width:(double)arg3 stroke:(id)arg4;
+ (struct CGImage { }*)newImageFromFills:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 spaceBetween:(struct CGSize { double x1; double x2; })arg3 scale:(double)arg4 borderColor:(id)arg5 outFillRects:(struct CGRect {}**)arg6;
+ (struct CGColor { }*)newLightenedColor:(struct CGColor { }*)arg1 byPercent:(double)arg2;
+ (struct CGPath { }*)newStrokedPathFromPath:(struct CGPath { }*)arg1 stroke:(id)arg2 cap:(int)arg3;
+ (struct CGPath { }*)newUnitPathForSymbol:(int)arg1 symbolSize:(double)arg2 stroke:(id)arg3;
+ (id)p_fillToRenderWithFill:(id)arg1 inContext:(struct CGContext { }*)arg2;
+ (struct CGPath { }*)p_newCirclePath:(struct CGPoint { double x1; double x2; })arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
+ (struct CGPath { }*)p_newCrossPath:(struct CGPoint { double x1; double x2; })arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
+ (struct CGPath { }*)p_newDiamondPath:(struct CGPoint { double x1; double x2; })arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
+ (struct CGPath { }*)p_newPathForSymbol:(int)arg1 context:(struct CGContext { }*)arg2 at:(struct CGPoint { double x1; double x2; })arg3 width:(double)arg4 pathLocation:(long long)arg5 stroke:(id)arg6;
+ (struct CGPath { }*)p_newPlusPath:(struct CGPoint { double x1; double x2; })arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4 context:(struct CGContext { }*)arg5;
+ (struct CGPath { }*)p_newSquarePath:(struct CGPoint { double x1; double x2; })arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4 context:(struct CGContext { }*)arg5;
+ (struct CGPath { }*)p_newTrianglePath:(struct CGPoint { double x1; double x2; })arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
+ (struct CGPath { }*)p_newYieldPath:(struct CGPoint { double x1; double x2; })arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
+ (id)printCGPath:(struct CGPath { }*)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scaleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toFit:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (void)updateStackRectsDictionary:(id)arg1 withElementRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 groupIndex:(unsigned long long)arg3 barModelCache:(id)arg4;

@end

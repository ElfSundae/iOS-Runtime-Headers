/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMLineShapeBuilder : CMShapeBuilder {
    OADStroke * _stroke;
}

- (float)_adjustedCoefAtIndex:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundingBoxForLineEnd:(id)arg1;
- (float)_getRotationFromPoint:(struct CGPoint { float x1; float x2; })arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2 withBounds:(id)arg3;
- (void)_renderBentConnector2InPath:(struct CGPath { }*)arg1 withTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 andOrientedBounds:(id)arg3 headSrc:(struct CGPoint { float x1; float x2; }*)arg4 headDst:(struct CGPoint { float x1; float x2; }*)arg5 tailSrc:(struct CGPoint { float x1; float x2; }*)arg6 tailDst:(struct CGPoint { float x1; float x2; }*)arg7;
- (void)_renderBentConnector3InPath:(struct CGPath { }*)arg1 withTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 andOrientedBounds:(id)arg3 headSrc:(struct CGPoint { float x1; float x2; }*)arg4 headDst:(struct CGPoint { float x1; float x2; }*)arg5 tailSrc:(struct CGPoint { float x1; float x2; }*)arg6 tailDst:(struct CGPoint { float x1; float x2; }*)arg7;
- (void)_renderLineEnd:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 withOrientation:(float)arg3 inPath:(struct CGPath { }*)arg4;
- (void)_renderStraightConnector1InPath:(struct CGPath { }*)arg1 withTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 andOrientedBounds:(id)arg3 headSrc:(struct CGPoint { float x1; float x2; }*)arg4 headDst:(struct CGPoint { float x1; float x2; }*)arg5 tailSrc:(struct CGPoint { float x1; float x2; }*)arg6 tailDst:(struct CGPoint { float x1; float x2; }*)arg7;
- (struct CGPath { }*)copyShapeWithTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)dealloc;
- (void)setStroke:(id)arg1;

@end

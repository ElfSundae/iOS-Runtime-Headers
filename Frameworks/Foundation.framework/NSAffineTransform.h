/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAffineTransform : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        float m11; 
        float m12; 
        float m21; 
        float m22; 
        float tX; 
        float tY; 
    } _transformStruct;
}

@property struct { float x1; float x2; float x3; float x4; float x5; float x6; } transformStruct;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (BOOL)supportsSecureCoding;
+ (id)transform;

- (void)appendTransform:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransform:(id)arg1;
- (void)invert;
- (BOOL)isEqual:(id)arg1;
- (void)prependTransform:(id)arg1;
- (void)rotateByDegrees:(float)arg1;
- (void)rotateByRadians:(float)arg1;
- (void)scaleBy:(float)arg1;
- (void)scaleXBy:(float)arg1 yBy:(float)arg2;
- (void)setTransformStruct:(struct { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct CGPoint { float x1; float x2; })transformPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })transformSize:(struct CGSize { float x1; float x2; })arg1;
- (struct { float x1; float x2; float x3; float x4; float x5; float x6; })transformStruct;
- (void)translateXBy:(float)arg1 yBy:(float)arg2;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

- (void)gqu_transformRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 upperLeft:(struct CGPoint { float x1; float x2; }*)arg2 lowerLeft:(struct CGPoint { float x1; float x2; }*)arg3 lowerRight:(struct CGPoint { float x1; float x2; }*)arg4 upperRight:(struct CGPoint { float x1; float x2; }*)arg5;

@end
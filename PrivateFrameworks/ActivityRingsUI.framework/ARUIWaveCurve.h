/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

@interface ARUIWaveCurve : NSObject <NSCopying> {
    struct { 
        float a; 
        float b; 
        float c; 
        float d; 
        float e; 
        float f; 
        float g; 
        float h; 
    }  _parameters;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithParameters:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; })arg1;
- (float)solveForX:(float)arg1;

@end

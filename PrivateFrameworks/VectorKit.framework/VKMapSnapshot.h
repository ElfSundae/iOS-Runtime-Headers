/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapSnapshot : NSObject <NSSecureCoding> {
    VKCamera *_camera;
    unsigned long _height;
    struct CGImage { } *_image;
    float _scale;
    BOOL _showingNoDataPlaceholders;
    unsigned long _width;
}

@property (nonatomic, readonly) struct CGImage { }*image;
@property (nonatomic, readonly) float scale;
@property (getter=isShowingNoDataPlaceholders, nonatomic, readonly) BOOL showingNoDataPlaceholders;

+ (BOOL)supportsSecureCoding;

- (id)_initWithImage:(struct CGImage { }*)arg1 scale:(float)arg2 camera:(id)arg3 showingNoDataPlaceholders:(BOOL)arg4;
- (struct { double x1; double x2; })coordinateForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct CGImage { }*)image;
- (id)imageDataInFormat:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isShowingNoDataPlaceholders;
- (struct CGPoint { float x1; float x2; })pointForCoordinate:(struct { double x1; double x2; })arg1;
- (float)scale;
- (BOOL)writeImageToFile:(id)arg1 format:(unsigned int)arg2 error:(id*)arg3;

@end

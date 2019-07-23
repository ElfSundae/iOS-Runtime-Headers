/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
 */

@interface MPSImagePyramid : MPSUnaryImageKernel {
    unsigned int  _fHeight;
    unsigned int  _fWidth;
    bool  separable;
    float * wtArray;
    unsigned short * wtArrayh;
    <MTLBuffer> * wtBuffer;
    <MTLBuffer> * wtBufferh;
}

@property (nonatomic, readonly) unsigned int kernelHeight;
@property (nonatomic, readonly) unsigned int kernelWidth;

- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 centerWeight:(float)arg2;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned int)arg2 kernelHeight:(unsigned int)arg3 weights:(const float*)arg4;
- (unsigned int)kernelHeight;
- (unsigned int)kernelWidth;

@end

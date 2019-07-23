/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface CVAFilterMaskedVariableBlur : NSObject {
    <MTLDeviceSPI> * _device;
    MPSImageGaussianPyramid * _gaussianPyramid;
    NSString * _label;
    <MTLComputePipelineState> * _maskedVariableBlurKernel;
}

@property (readonly) NSString *label;

+ (void)prewarmGaussianPyramid:(id)arg1 device:(id)arg2 commandBuffer:(id)arg3;

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 mask:(id)arg4 maxBlur:(float)arg5;
- (id)initWithDevice:(id)arg1 library:(id)arg2 commandQueue:(id)arg3 error:(id*)arg4;
- (id)label;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBlendWithAlphaMask : CIFilter {
    CIImage * inputBackgroundImage;
    CIImage * inputImage;
    CIImage * inputMaskImage;
}

@property (nonatomic, retain) CIImage *inputBackgroundImage;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIImage *inputMaskImage;

+ (id)customAttributes;

- (id)_kernel;
- (id)_kernelNoB;
- (id)_kernelNoF;
- (id)inputBackgroundImage;
- (id)inputImage;
- (id)inputMaskImage;
- (id)outputImage;
- (void)setInputBackgroundImage:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputMaskImage:(id)arg1;

@end

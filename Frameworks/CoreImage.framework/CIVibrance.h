/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIVibrance : CIFilter <_CIFilterProperties> {
    NSNumber * inputAmount;
    CIImage * inputImage;
}

@property (nonatomic, retain) NSNumber *inputAmount;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_initFromProperties:(id)arg1;
- (bool)_isIdentity;
- (id)_kernelNeg;
- (id)_kernelPos;
- (id)_outputProperties;
- (id)inputAmount;
- (id)inputImage;
- (id)outputImage;
- (void)setInputAmount:(id)arg1;
- (void)setInputImage:(id)arg1;

@end

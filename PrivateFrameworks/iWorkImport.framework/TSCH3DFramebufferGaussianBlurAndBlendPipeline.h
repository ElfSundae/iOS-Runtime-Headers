/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFramebufferGaussianBlurAndBlendPipeline : TSCH3DFramebufferGaussianBlurPipeline {
    float  mBlendFactor;
    TSCH3DFramebuffer * mBlendTexture;
}

@property (nonatomic) float blendFactor;
@property (nonatomic, retain) TSCH3DFramebuffer *blendTexture;

+ (id)effectsArray;

- (float)blendFactor;
- (id)blendTexture;
- (void)dealloc;
- (void)setBlendFactor:(float)arg1;
- (void)setBlendTexture:(id)arg1;
- (void)updateShaderEffectsStates;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFillSageFillData : NSObject <TSCH3DSageFillData> {
    TSCH3DFill *mFill;
    NSMutableArray *mTextureBlendModes;
    NSMutableArray *mTextures;
}

+ (id)dataWithFill:(id)arg1;

- (void)dealloc;
- (struct Color { float x1; float x2; float x3; float x4; })diffuse;
- (unsigned int)diffuseCount;
- (id)diffuseMaterial;
- (struct Color { float x1; float x2; float x3; float x4; })emissive;
- (id)environment;
- (id)fillSetIdentifier;
- (id)initWithFill:(id)arg1;
- (BOOL)isLayerEnabledForIndex:(unsigned int)arg1;
- (int)layerBlendModeForIndex:(unsigned int)arg1;
- (unsigned int)layerCount;
- (BOOL)layerIsEnvironmentMapForIndex:(unsigned int)arg1;
- (id)layerLightenPercentageForIndex:(unsigned int)arg1;
- (float)layerRotationForIndex:(unsigned int)arg1;
- (float)layerScaleForIndex:(unsigned int)arg1;
- (int)layerTilingModeForIndex:(unsigned int)arg1;
- (id)lightingModel;
- (id)materialAtIndex:(unsigned int)arg1;
- (unsigned int)modulateCount;
- (id)modulateMaterial;
- (float)opacity;
- (void)p_addMaterial:(id)arg1 blendMode:(int)arg2;
- (id)phongMaterials;
- (float)shininess;
- (struct Color { float x1; float x2; float x3; float x4; })specular;
- (id)textureForIndex:(unsigned int)arg1;

@end

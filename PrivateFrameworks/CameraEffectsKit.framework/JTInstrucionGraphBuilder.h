/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@interface JTInstrucionGraphBuilder : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _outputSize;
    int  _renderingIntent;
    int  _timeScale;
}

@property (nonatomic) struct CGSize { double x1; double x2; } outputSize;
@property (nonatomic) int renderingIntent;
@property (nonatomic) int timeScale;

- (id)_buildTestXFormAnimation:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 baseTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 clipNaturalSize:(struct CGSize { double x1; double x2; })arg3;
- (id)_sourceNodeForStillMediaItem:(id)arg1 sourceTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 transformAnimation:(id)arg3 presentationRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg4;
- (id)_sourceNodeForVideoMediaItem:(id)arg1 sourceTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 compositionTrackID:(int)arg3 transformAnimation:(id)arg4;
- (id)aggregateAndApplyTrackableEffects:(id)arg1 presentationRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 renderDelegate:(id)arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 metadata:(id)arg5 toInput:(id)arg6;
- (id)applyEffectStack:(id)arg1 presentationRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 toInput:(id)arg3;
- (id)applyEffectStack:(id)arg1 toInput:(id)arg2;
- (id)applyTrackedEffects:(id)arg1 presentationRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 renderDelegate:(id)arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 metadata:(id)arg5 toInput:(id)arg6;
- (id)arSelfieEffectNode:(id)arg1 inputNode:(id)arg2 maskNode:(id)arg3 bgImageNodes:(id)arg4;
- (id)blendNodeForClipSourceNodes:(id)arg1;
- (id)initWithOutputSize:(struct CGSize { double x1; double x2; })arg1;
- (id)instructionGraphForJTClip:(id)arg1 presentationTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 sourceTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 compositionTrackID:(int)arg4 liveTransform:(struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; }*)arg5 excludingEffectType:(int)arg6 customRendererProperties:(struct NSDictionary { Class x1; }*)arg7;
- (struct CGSize { double x1; double x2; })outputSize;
- (int)renderingIntent;
- (void)setOutputSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRenderingIntent:(int)arg1;
- (void)setTimeScale:(int)arg1;
- (id)sourceNodeForGeneratorEffect:(id)arg1 effectRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (id)sourceNodeForImageBuffer:(id)arg1 sourceTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (id)sourceNodeForMediaItem:(id)arg1 sourceTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 compositionTrackID:(int)arg3 transformAnimation:(id)arg4 presentationTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg5;
- (int)timeScale;

@end

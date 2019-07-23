/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DRayPickPipeline : TSCH3DSceneRenderPipeline <TSCH3DSceneObjectDelegator> {
    struct tvec2<float> { 
        union { 
            float x; 
            float r; 
            float s; 
        } ; 
        union { 
            float y; 
            float g; 
            float t; 
        } ; 
    }  mPickPosition;
    TSCH3DRayPickPipelineDelegate * mSceneObjectDelegate;
}

@property (nonatomic, readonly) TSCH3DPickedPoint *pickedPoint;
@property (nonatomic, readonly) NSArray *pickedPoints;
@property (nonatomic) float slack;

+ (id)pipelineWithScene:(id)arg1 position:(const struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg2;

- (id).cxx_construct;
- (void)dealloc;
- (id)initWithScene:(id)arg1 position:(const struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg2;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1;
- (id)makeDelegateWithScene:(id)arg1;
- (id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2;
- (id)p_closestPickedPoint;
- (id)p_frontMostPickedPoint;
- (id)p_renderProcessor;
- (id)p_unsortedPickedPoints;
- (id)pickedPoint;
- (id)pickedPoints;
- (void)rayPick:(id)arg1;
- (bool)run;
- (void)setSlack:(float)arg1;
- (float)slack;

@end

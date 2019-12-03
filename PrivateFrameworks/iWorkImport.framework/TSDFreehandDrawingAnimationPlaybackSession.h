/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDFreehandDrawingAnimationPlaybackSession : NSObject <TSDDynamicOverrideProvider> {
    TSDFreehandDrawingInfo * _drawingInfo;
    double  _duration;
    double  _framesPerSecond;
    double  _progress;
    bool  _shouldParameterizeStrokes;
    TSDFreehandDrawingAnimationPlaybackTiming * _timing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic) double progress;
@property (nonatomic, readonly) bool shouldParameterizeStrokes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)duration;
- (id)dynamicOverrideForLayout:(id)arg1;
- (id)dynamicOverrideForRep:(id)arg1;
- (id)initWithFreehandDrawingInfo:(id)arg1 duration:(double)arg2 framesPerSecond:(double)arg3;
- (void)p_updateShouldParameterizeStrokes;
- (double)progress;
- (void)setDuration:(double)arg1;
- (void)setProgress:(double)arg1;
- (bool)shouldParameterizeStrokes;
- (double)visibilityOfChild:(id)arg1;

@end

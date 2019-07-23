/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIQuadView : UIView {
    <CLKUIQuadViewDelegate> * _delegate;
    struct { 
        unsigned int quadViewWillDisplay : 1; 
    }  _delegateRespondsTo;
    CLKUIQuadViewDisplayLink * _displayLink;
    unsigned long long  _frameNum;
    NSMutableArray * _mutableQuads;
}

@property (nonatomic) <CLKUIQuadViewDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long frameNum;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic, readonly) NSArray *quads;

+ (id)quadViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)quadViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)_displayWithCompletion:(id /* block */)arg1;
- (void)_handleQuadArrayChange:(id)arg1;
- (bool)_prepareAndRenderForTime:(double)arg1 completion:(id /* block */)arg2;
- (void)_prerenderForTime:(double)arg1;
- (id)_snapshotInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scale:(double)arg2 time:(double)arg3;
- (void)addQuad:(id)arg1;
- (void)addQuadsFromArray:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)discardContents;
- (unsigned long long)frameNum;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPaused;
- (long long)preferredFramesPerSecond;
- (id)quads;
- (void)removeAllQuads;
- (void)removeQuad:(id)arg1;
- (bool)renderSynchronouslyWithImageQueueDiscard:(bool)arg1;
- (bool)renderSynchronouslyWithImageQueueDiscard:(bool)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (id)snapshotInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scale:(double)arg2 time:(double)arg3;

@end

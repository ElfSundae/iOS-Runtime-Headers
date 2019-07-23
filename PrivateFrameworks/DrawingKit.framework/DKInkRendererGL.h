/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
 */

@interface DKInkRendererGL : GLKView <DKInkRenderer, DKOpenGLRendererDelegate> {
    float  _backingScale;
    NSMutableArray * _brushPointQueue;
    NSMutableArray * _brushStrokes;
    NSMutableArray * _currentBrushStroke;
    float  _drawingScale;
    BOOL  _initialized;
    UIColor * _inkColor;
    DKOpenGLRenderer * _inkRenderer;
    unsigned int  _mode;
    BOOL  _needToNotify;
    <DKInkRendererDelegate> * delegate;
    BOOL  drawingEnabled;
    BOOL  scaleDrawingToFitCanvas;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DKInkRendererDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL drawingEnabled;
@property (nonatomic) float drawingScale;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL initialized;
@property (nonatomic, retain) UIColor *inkColor;
@property (nonatomic, readonly) unsigned int maximumPointsForBleedAnimation;
@property (nonatomic) unsigned int mode;
@property (nonatomic) BOOL scaleDrawingToFitCanvas;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL supportsBleedAnimation;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)addPoint:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; float x3; float x4; })arg1;
- (void)addPointsFromBrushPointQueueWithSegmentLength:(unsigned int)arg1;
- (void)beginStroke;
- (BOOL)canBecomeFirstResponder;
- (void)clear;
- (void)completeAnimationsImmediately;
- (void)dealloc;
- (id)delegate;
- (void)display;
- (void)displayForcefully;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)drawingEnabled;
- (float)drawingScale;
- (void)endStroke;
- (void)flush;
- (void)force;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)initialized;
- (id)inkColor;
- (void)layoutSubviews;
- (unsigned int)maximumPointsForBleedAnimation;
- (unsigned int)mode;
- (void)removeLastStroke;
- (void)rendererDidFinishAnimatingDrawing:(id)arg1;
- (void)resetRendererState;
- (BOOL)scaleDrawingToFitCanvas;
- (void)setDelegate:(id)arg1;
- (void)setDrawingEnabled:(BOOL)arg1;
- (void)setDrawingScale:(float)arg1;
- (void)setInkColor:(id)arg1;
- (void)setMode:(unsigned int)arg1;
- (void)setScaleDrawingToFitCanvas:(BOOL)arg1;
- (id)snapshot;
- (BOOL)supportsBleedAnimation;
- (void)teardown;

@end

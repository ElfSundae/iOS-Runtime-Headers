/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureVideoPreviewLayer : CALayer {
    AVCaptureVideoPreviewLayerInternal * _internal;
}

@property (nonatomic) BOOL automaticallyAdjustsMirroring;
@property (nonatomic, readonly) AVCaptureConnection *connection;
@property (getter=isMirrored, nonatomic) BOOL mirrored;
@property (getter=isMirroringSupported, nonatomic, readonly) BOOL mirroringSupported;
@property (nonatomic) int orientation;
@property (getter=isOrientationSupported, nonatomic, readonly) BOOL orientationSupported;
@property (nonatomic, retain) AVCaptureSession *session;
@property (copy) NSString *videoGravity;

+ (void)initialize;
+ (id)layerWithSession:(id)arg1;
+ (id)layerWithSessionWithNoConnection:(id)arg1;

- (BOOL)_automaticallyAdjustsMirroring;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (id)_initWithSession:(id)arg1 makeConnection:(BOOL)arg2;
- (id)_input;
- (BOOL)_isMirrored;
- (int)_orientation;
- (void)_setSensorAndEstimatedPreviewSizes;
- (void)_updateCaptureDeviceTransform;
- (void)_updatePreviewTransforms;
- (id)activeConnections;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (BOOL)automaticallyAdjustsMirroring;
- (void)bumpChangeSeed;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (struct CGPoint { float x1; float x2; })captureDevicePointOfInterestForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)centerSublayer:(int)arg1;
- (int)changeSeed;
- (id)connection;
- (id)connectionMediaTypes;
- (id)connections;
- (void)dealloc;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)initWithSessionWithNoConnection:(id)arg1;
- (BOOL)isChromaNoiseReductionEnabled;
- (BOOL)isChromaNoiseReductionSupported;
- (BOOL)isMirrored;
- (BOOL)isMirroringSupported;
- (BOOL)isOrientationSupported;
- (BOOL)isPaused;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)layoutSublayers;
- (id)liveConnections;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })metadataOutputRectOfInterestForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (int)orientation;
- (struct CGPoint { float x1; float x2; })pointForCaptureDevicePointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (float)previewRotationDegrees;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForMetadataOutputRectOfInterest:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removeConnection:(id)arg1;
- (id)session;
- (void)setAutomaticallyAdjustsMirroring:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setChromaNoiseReductionEnabled:(BOOL)arg1;
- (void)setMirrored:(BOOL)arg1;
- (void)setOrientation:(int)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionWithNoConnection:(id)arg1;
- (void)setSinkID:(id)arg1;
- (void)setVideoGravity:(id)arg1;
- (id)sinkID;
- (id)transformedMetadataObjectForMetadataObject:(id)arg1;
- (id)videoGravity;

@end

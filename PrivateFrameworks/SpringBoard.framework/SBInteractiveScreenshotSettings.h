/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBInteractiveScreenshotSettings : PTSettings {
    double  _applicationTouchDelayHysteresis;
    double  _baseCornerTranslationDegrees;
    SBFFluidBehaviorSettings * _contentAnimationSettings;
    double  _cornerHorizontalEdgeLength;
    double  _cornerRadiusVisibleProgressThreshold;
    double  _cornerVerticalEdgeLength;
    double  _cropCornersVisibleProgressThreshold;
    SBFFluidBehaviorSettings * _cropLinesAlphaAnimationSettings;
    double  _cropLinesVisibleProgressThreshold;
    SBFFluidBehaviorSettings * _cropsAnimationSettings;
    double  _disabledGestureCancellationDistance;
    SBFFluidBehaviorSettings * _disabledGestureContentAnimationSettings;
    double  _disabledGestureVelocityScale;
    bool  _enabled;
    double  _horizontalTranslationFactor;
    double  _maximumInjectedVelocity;
    double  _normalizedDistanceForCommitThreshold;
    double  _projectionDecelerationRate;
    double  _rubberbandingRange;
    bool  _shouldAsynchronouslyRender;
    bool  _shouldInjectVelocity;
    bool  _shouldPreheat;
    double  _verticalTranslationFactor;
}

@property (nonatomic) double applicationTouchDelayHysteresis;
@property (nonatomic) double baseCornerTranslationDegrees;
@property (nonatomic, retain) SBFFluidBehaviorSettings *contentAnimationSettings;
@property (nonatomic) double cornerHorizontalEdgeLength;
@property (nonatomic) double cornerRadiusVisibleProgressThreshold;
@property (nonatomic) double cornerVerticalEdgeLength;
@property (nonatomic) double cropCornersVisibleProgressThreshold;
@property (nonatomic, retain) SBFFluidBehaviorSettings *cropLinesAlphaAnimationSettings;
@property (nonatomic) double cropLinesVisibleProgressThreshold;
@property (nonatomic, retain) SBFFluidBehaviorSettings *cropsAnimationSettings;
@property (nonatomic) double disabledGestureCancellationDistance;
@property (nonatomic, retain) SBFFluidBehaviorSettings *disabledGestureContentAnimationSettings;
@property (nonatomic) double disabledGestureVelocityScale;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) double horizontalTranslationFactor;
@property (nonatomic) double maximumInjectedVelocity;
@property (nonatomic) double normalizedDistanceForCommitThreshold;
@property (nonatomic) double projectionDecelerationRate;
@property (nonatomic) double rubberbandingRange;
@property (nonatomic) bool shouldAsynchronouslyRender;
@property (nonatomic) bool shouldInjectVelocity;
@property (nonatomic) bool shouldPreheat;
@property (nonatomic) double verticalTranslationFactor;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (double)applicationTouchDelayHysteresis;
- (double)baseCornerTranslationDegrees;
- (id)contentAnimationSettings;
- (double)cornerHorizontalEdgeLength;
- (double)cornerRadiusVisibleProgressThreshold;
- (double)cornerVerticalEdgeLength;
- (double)cropCornersVisibleProgressThreshold;
- (id)cropLinesAlphaAnimationSettings;
- (double)cropLinesVisibleProgressThreshold;
- (id)cropsAnimationSettings;
- (double)disabledGestureCancellationDistance;
- (id)disabledGestureContentAnimationSettings;
- (double)disabledGestureVelocityScale;
- (double)horizontalTranslationFactor;
- (bool)isEnabled;
- (double)maximumInjectedVelocity;
- (double)normalizedDistanceForCommitThreshold;
- (double)projectionDecelerationRate;
- (double)rubberbandingRange;
- (void)setApplicationTouchDelayHysteresis:(double)arg1;
- (void)setBaseCornerTranslationDegrees:(double)arg1;
- (void)setContentAnimationSettings:(id)arg1;
- (void)setCornerHorizontalEdgeLength:(double)arg1;
- (void)setCornerRadiusVisibleProgressThreshold:(double)arg1;
- (void)setCornerVerticalEdgeLength:(double)arg1;
- (void)setCropCornersVisibleProgressThreshold:(double)arg1;
- (void)setCropLinesAlphaAnimationSettings:(id)arg1;
- (void)setCropLinesVisibleProgressThreshold:(double)arg1;
- (void)setCropsAnimationSettings:(id)arg1;
- (void)setDefaultValues;
- (void)setDisabledGestureCancellationDistance:(double)arg1;
- (void)setDisabledGestureContentAnimationSettings:(id)arg1;
- (void)setDisabledGestureVelocityScale:(double)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHorizontalTranslationFactor:(double)arg1;
- (void)setMaximumInjectedVelocity:(double)arg1;
- (void)setNormalizedDistanceForCommitThreshold:(double)arg1;
- (void)setProjectionDecelerationRate:(double)arg1;
- (void)setRubberbandingRange:(double)arg1;
- (void)setShouldAsynchronouslyRender:(bool)arg1;
- (void)setShouldInjectVelocity:(bool)arg1;
- (void)setShouldPreheat:(bool)arg1;
- (void)setVerticalTranslationFactor:(double)arg1;
- (bool)shouldAsynchronouslyRender;
- (bool)shouldInjectVelocity;
- (bool)shouldPreheat;
- (double)verticalTranslationFactor;

@end

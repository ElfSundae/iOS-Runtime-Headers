/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISForcePressPlaybackInput : ISGestureInput <UIInteractionProgressObserver> {
    BOOL __aboveTimeoutThreshold;
    int __currentTimeoutRequestId;
    BOOL __forceAboveThresholdLongEnough;
    BOOL __hasCrossedHintThreshold;
    UIPreviewForceInteractionProgress *__interactionProgress;
    BOOL __isTouchActive;
}

@property (setter=_setAboveTimeoutThreshold:, nonatomic) BOOL _aboveTimeoutThreshold;
@property (setter=_setCurrentTimeoutRequestId:, nonatomic) int _currentTimeoutRequestId;
@property (setter=_setForceAboveThresholdLongEnough:, nonatomic) BOOL _forceAboveThresholdLongEnough;
@property (setter=_setHasCrossedHintThreshold:, nonatomic) BOOL _hasCrossedHintThreshold;
@property (setter=_setInteractionProgress:, nonatomic, retain) UIPreviewForceInteractionProgress *_interactionProgress;
@property (setter=_setTouchActive:, nonatomic) BOOL _isTouchActive;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_aboveTimeoutThreshold;
- (int)_currentTimeoutRequestId;
- (BOOL)_forceAboveThresholdLongEnough;
- (void)_handlePress:(id)arg1;
- (BOOL)_hasCrossedHintThreshold;
- (id)_interactionProgress;
- (BOOL)_isTouchActive;
- (void)_setAboveTimeoutThreshold:(BOOL)arg1;
- (void)_setCurrentTimeoutRequestId:(int)arg1;
- (void)_setForceAboveThresholdLongEnough:(BOOL)arg1;
- (void)_setHasCrossedHintThreshold:(BOOL)arg1;
- (void)_setInteractionProgress:(id)arg1;
- (void)_setTouchActive:(BOOL)arg1;
- (void)_updateValue;
- (void)gestureRecognizerDidChange;
- (void)gestureRecognizerViewDidChange;
- (int)inputType;
- (void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (id)newGestureRecognizer;

@end

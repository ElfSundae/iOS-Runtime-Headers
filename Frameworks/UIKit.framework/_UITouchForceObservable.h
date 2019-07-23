/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITouchForceObservable : NSObservationSource <NSObserver> {
    CADisplayLink * _continuousEvaluationDisplayLink;
    NSSet * _currentTouches;
    _UITouchesObservingGestureRecognizer * _gestureRecognizer;
    int  _observerCount;
    NSObservation * _touchesObservation;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelContinuousEvaluation;
- (void)_didEndHavingAnyObservers;
- (float)_maximumPossibleForceForTouches:(id)arg1;
- (BOOL)_shouldFilterDueToSystemGesturesForTouches:(id)arg1;
- (double)_timestampForTouches:(id)arg1;
- (id)_touchForceMessageForTouches:(id)arg1;
- (float)_unclampedTouchForceForTouches:(id)arg1;
- (void)_updateForContinuousEvaluation:(id)arg1;
- (void)_willBeginHavingAnyObservers;
- (id)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithView:(id)arg1;
- (void)receiveObservedValue:(id)arg1;
- (void)removeObservation:(id)arg1;

@end

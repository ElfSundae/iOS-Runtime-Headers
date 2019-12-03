/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextGestureTuning : NSObject {
    UITextSelectionWindowAveragedValue * _averagedRadius;
    NSObject<UICoordinateSpace> * _coordinateSpace;
    bool  _didBreakLineThresholdAbove;
    bool  _didBreakLineThresholdBelow;
    bool  _includeTipProjection;
    double  _initialOffset;
    double  _initialOffsetFromTopOfCaret;
    long long  _lastTouchType;
    bool  _shouldIncludeConstantOffset;
    bool  _shouldUseLineThreshold;
    bool  _strongerBiasAgainstUp;
    double  _visibilityOffset;
    UITextMagnifierTimeWeightedPoint * _weightedPoint;
}

@property (nonatomic) NSObject<UICoordinateSpace> *coordinateSpace;
@property (nonatomic) bool includeTipProjection;
@property (nonatomic) bool shouldIncludeConstantOffset;
@property (nonatomic) bool shouldUseLineThreshold;
@property (nonatomic) bool strongerBiasAgainstUp;
@property (nonatomic, readonly) double visibilityOffset;

- (void).cxx_destruct;
- (void)assertInitialVerticalOffset:(double)arg1 fromTopOfCaret:(double)arg2;
- (id)coordinateSpace;
- (bool)includeTipProjection;
- (id)init;
- (struct CGPoint { double x1; double x2; })pointForGestureState:(long long)arg1 point:(struct CGPoint { double x1; double x2; })arg2 translation:(struct CGPoint { double x1; double x2; })arg3;
- (struct CGPoint { double x1; double x2; })pointIfPlacedCarefully:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCoordinateSpace:(id)arg1;
- (void)setIncludeTipProjection:(bool)arg1;
- (void)setShouldIncludeConstantOffset:(bool)arg1;
- (void)setShouldUseLineThreshold:(bool)arg1;
- (void)setStrongerBiasAgainstUp:(bool)arg1;
- (bool)shouldIncludeConstantOffset;
- (bool)shouldUseLineThreshold;
- (bool)strongerBiasAgainstUp;
- (struct CGPoint { double x1; double x2; })touchAlignedPointForPoint:(struct CGPoint { double x1; double x2; })arg1 translation:(struct CGPoint { double x1; double x2; })arg2;
- (void)updateVisibilityOffsetForTouch:(id)arg1 state:(long long)arg2;
- (void)updateWeightedPointWithGestureState:(long long)arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (void)updateWithTouches:(id)arg1 gestureState:(long long)arg2;
- (double)visibilityOffset;

@end

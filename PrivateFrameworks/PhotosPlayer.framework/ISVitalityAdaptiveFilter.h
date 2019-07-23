/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISVitalityAdaptiveFilter : ISVitalityFilter {
    double __rawVitalityOffset;
    ISDynamicValueFilter *__vitalityOffsetValueFilter;
    BOOL _didVisibilityOffsetCrossCenter;
    int _direction;
    double _maxRate;
    BOOL _previousVisibility;
    double _previousVisibilityOffset;
    double _vitalityRange;
}

@property (setter=_setRawVitalityOffset:, nonatomic) double _rawVitalityOffset;
@property (nonatomic, readonly) ISDynamicValueFilter *_vitalityOffsetValueFilter;

- (void).cxx_destruct;
- (double)_adjustedDuration:(double)arg1;
- (double)_adjustedVisibilityOffset:(double)arg1;
- (double)_rawVitalityOffset;
- (void)_setRawVitalityOffset:(double)arg1;
- (id)_vitalityOffsetValueFilter;
- (id)initWithSettings:(id)arg1;
- (void)inputDidChange;

@end

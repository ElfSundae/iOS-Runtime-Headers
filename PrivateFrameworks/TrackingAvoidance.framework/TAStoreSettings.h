/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

@interface TAStoreSettings : NSObject <NSCopying> {
    unsigned long long  _bufferCapacity;
    double  _bufferTimeIntervalOfRetention;
    unsigned long long  _interVisitMetricSnapshotCapacity;
    double  _interVisitSnapshotUpdateInterval;
    unsigned long long  _loiBufferPerTypeCapacity;
    double  _loiBufferTimeIntervalOfRetention;
    unsigned long long  _poiDisplayBufferCapacity;
    unsigned long long  _poiSnapshotCapacity;
    double  _snapshotBufferTimeIntervalOfRetention;
    double  _thresholdOfLocationRelevance;
}

@property (nonatomic, readonly) unsigned long long bufferCapacity;
@property (nonatomic, readonly) double bufferTimeIntervalOfRetention;
@property (nonatomic, readonly) unsigned long long interVisitMetricSnapshotCapacity;
@property (nonatomic, readonly) double interVisitSnapshotUpdateInterval;
@property (nonatomic, readonly) unsigned long long loiBufferPerTypeCapacity;
@property (nonatomic, readonly) double loiBufferTimeIntervalOfRetention;
@property (nonatomic, readonly) unsigned long long poiDisplayBufferCapacity;
@property (nonatomic, readonly) unsigned long long poiSnapshotCapacity;
@property (nonatomic, readonly) double snapshotBufferTimeIntervalOfRetention;
@property (nonatomic, readonly) double thresholdOfLocationRelevance;

- (unsigned long long)bufferCapacity;
- (double)bufferTimeIntervalOfRetention;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBufferCapacity:(unsigned long long)arg1 poiSnapshotCapacity:(unsigned long long)arg2 bufferTimeIntervalOfRetention:(double)arg3 poiDisplayBufferCapacity:(unsigned long long)arg4 interVisitMetricSnapshotCapacity:(unsigned long long)arg5 thresholdOfLocationRelevance:(double)arg6 interVisitSnapshotUpdateInterval:(double)arg7 snapshotBufferTimeIntervalOfRetention:(double)arg8 loiBufferPerTypeCapacity:(unsigned long long)arg9 loiBufferTimeIntervalOfRetention:(double)arg10;
- (id)initWithBufferCapacityOrDefault:(id)arg1 poiSnapshotCapacityOrDefault:(id)arg2 bufferTimeIntervalOfRetentionOrDefault:(id)arg3 poiDisplayBufferCapacityOrDefault:(id)arg4 interVisitMetricSnapshotCapacityOrDefault:(id)arg5 thresholdOfLocationRelevanceOrDefault:(id)arg6 interVisitSnapshotUpdateIntervalOrDefault:(id)arg7 snapshotBufferTimeIntervalOfRetentionOrDefault:(id)arg8 loiBufferPerTypeCapacityOrDefault:(id)arg9 loiBufferTimeIntervalOfRetentionOrDefault:(id)arg10;
- (unsigned long long)interVisitMetricSnapshotCapacity;
- (double)interVisitSnapshotUpdateInterval;
- (unsigned long long)loiBufferPerTypeCapacity;
- (double)loiBufferTimeIntervalOfRetention;
- (unsigned long long)poiDisplayBufferCapacity;
- (unsigned long long)poiSnapshotCapacity;
- (double)snapshotBufferTimeIntervalOfRetention;
- (double)thresholdOfLocationRelevance;

@end
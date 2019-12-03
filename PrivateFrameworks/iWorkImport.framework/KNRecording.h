/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNRecording : TSPObject {
    KNRecordingCorrectionHistory * _correctionHistory;
    double  _duration;
    NSArray * _eventTracks;
    NSDate * _modificationDate;
    KNRecordingMovieTrack * _movieTrack;
    KNRecordingSyncState * _syncState;
}

@property (nonatomic, readonly) KNRecordingCorrectionHistory *correctionHistory;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSArray *eventTracks;
@property (getter=isInSyncWithShow, nonatomic, readonly) bool inSyncWithShow;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) KNRecordingMovieTrack *movieTrack;
@property (nonatomic, readonly) KNRecordingSyncState *syncState;

+ (id)p_correctedNavigationEventsFromNavigationEventTrack:(id)arg1;
+ (id)p_movieEventsDerivedFromNavigationEvents:(id)arg1;

- (void).cxx_destruct;
- (id)correctionHistory;
- (id)description;
- (double)duration;
- (id)eventTracks;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 eventTracks:(id)arg2 movieTrack:(id)arg3 duration:(double)arg4;
- (id)initWithContext:(id)arg1 eventTracks:(id)arg2 movieTrack:(id)arg3 duration:(double)arg4 modificationDate:(id)arg5;
- (id)initWithContext:(id)arg1 eventTracks:(id)arg2 movieTrack:(id)arg3 duration:(double)arg4 syncState:(id)arg5 modificationDate:(id)arg6 correctionHistory:(id)arg7;
- (bool)isInSyncWithShow;
- (bool)isLocallyOutOfSyncWithShowUsingLocalOutOfSyncToken:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)modificationDate;
- (id)movieSegmentToTrimWhenReplacingAfterTime:(double)arg1 trimDuration:(out double*)arg2;
- (id)movieTrack;
- (id)recordingByAddingMissingEventsForRadar49654305;
- (id)recordingByMarkingAsOutOfSyncWithShow:(bool)arg1 withLocalOutOfSyncToken:(id)arg2 restoringModificationDate:(id)arg3;
- (id)recordingByReplacingAfterTime:(double)arg1 withRecording:(id)arg2 trimmedMovieSegment:(id)arg3;
- (void)saveToArchive:(struct RecordingArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct Reference {} *x6; struct Date {} *x7; struct RecordingSyncState {} *x8; struct RecordingCorrectionHistory {} *x9; double x10; int x11; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)slideNodeWasAddedToDocument:(id)arg1;
- (void)slideNodeWillBeRemovedFromDocument:(id)arg1;
- (id)syncState;

@end

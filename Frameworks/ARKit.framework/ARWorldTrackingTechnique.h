/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARWorldTrackingTechnique : ARImageBasedTechnique {
    bool  _allowPoseGraphUpdates;
    ARWorldTrackingReferenceAnchorData * _anchorData;
    ARWorldTrackingPoseData * _cachedPoseData;
    bool  _didClearMap;
    bool  _didRelocalize;
    ARWorldTrackingErrorData * _errorData;
    struct map<CV3DVIOError, double, std::__1::less<CV3DVIOError>, std::__1::allocator<std::__1::pair<const CV3DVIOError, double> > > { 
        struct __tree<std::__1::__value_type<CV3DVIOError, double>, std::__1::__map_value_compare<CV3DVIOError, std::__1::__value_type<CV3DVIOError, double>, std::__1::less<CV3DVIOError>, true>, std::__1::allocator<std::__1::__value_type<CV3DVIOError, double> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<CV3DVIOError, double>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<CV3DVIOError, std::__1::__value_type<CV3DVIOError, double>, std::__1::less<CV3DVIOError>, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _lastErrorLogTimestamp;
    double  _lastMajorRelocalizationTimestamp;
    double  _lastPoseMajorRelocalizationTimestamp;
    double  _lastPoseTrackingMapTimestamp;
    double  _lastQualityKeyframeTimestamp;
    double  _lastRelocalizationTimestamp;
    double  _minVergenceAngleCosine;
    struct CV3DMLModel { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct CV3DMLModelData {} *x2; } * _mlModel;
    ARWorldTrackingOptions * _mutableOptions;
    NSDictionary * _objectDetectionOptions;
    NSHashTable * _observers;
    NSObject<OS_dispatch_semaphore> * _observersSemaphore;
    long long  _previousKeyframeCount;
    long long  _reinitializationAttempts;
    long long  _reinitializationAttemptsAtInitialization;
    bool  _relocalizingAfterSensorDataDrop;
    double  _resultLatency;
    NSObject<OS_dispatch_semaphore> * _resultSemaphore;
    struct CV3DVIOSurfaceDetectionRuntimeConfiguration { 
        int desiredOrientations; 
        int desiredExtentType; 
        double minVergenceAngle; 
        bool lineTrackingAlwaysOn; 
    }  _surfaceDetectionConfiguration;
    struct CV3DSurfaceDetectionParameters { 
        unsigned int minDetections; 
        unsigned int minimumSupportHorizontal; 
        unsigned int minimumSupportVertical; 
    }  _surfaceDetectionParameters;
    bool  _useFixedIntrinsics;
    struct CV3DVIOContext { } * _vioHandle;
    long long  _vioHandleState;
    NSObject<OS_dispatch_semaphore> * _vioHandleStateSemaphore;
    NSObject<OS_dispatch_semaphore> * _vioObjectDetectionSemaphore;
}

@property (retain) ARWorldTrackingOptions *mutableOptions;
@property (nonatomic, readonly, copy) ARWorldTrackingOptions *options;
@property (nonatomic) struct CV3DVIOContext { }*vioHandle;

+ (bool)isSupported;
+ (bool)supportsVideoResolution:(struct CGSize { double x1; double x2; })arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addIntrinsicsToDictionary:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 dictionary:(struct __CFDictionary { }*)arg2;
- (void)_didFailWithError:(id)arg1;
- (id)_featurePointDataFromDictionary:(id)arg1;
- (void)_initializeSurfaceDetection;
- (long long)_initializeVIOHandle;
- (long long)_mappingStatusFromStateDetails:(id)arg1 timestamp:(double)arg2;
- (void)_reportError:(double)arg1 error:(int)arg2;
- (void)_reportSignificantEvent:(int)arg1 data:(id)arg2;
- (void)_updatePose:(double)arg1 frame:(struct __CVBuffer { }*)arg2 rotationMatrix:(const double*)arg3 translationVector:(const double*)arg4 trackingState:(int)arg5 stateDetails:(id)arg6;
- (void)_updatePoseDataTrackingState:(id)arg1 vioTrackingState:(int)arg2 stateDetails:(id)arg3;
- (void)addObserver:(id)arg1;
- (void)addReferenceAnchors:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraTransformAtTimestamp:(double)arg1;
- (long long)captureBehavior;
- (void)clearMap;
- (void)dealloc;
- (bool)deterministicMode;
- (id)getObservers;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (void)initializeSceneUnderstandingIfNeeded;
- (bool)isEqual:(id)arg1;
- (void)loadSurfaceData:(id)arg1;
- (void)mergeResultData:(id)arg1 intoData:(id)arg2 context:(id)arg3;
- (id)mutableOptions;
- (id)options;
- (id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (void)prepare;
- (void)prepareResultData:(id)arg1 forContext:(id)arg2;
- (id)processData:(id)arg1;
- (bool)reconfigurableFrom:(id)arg1;
- (void)reconfigureFrom:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeReferenceAnchors:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (id)serializeMapData;
- (id)serializeSurfaceData;
- (void)setMutableOptions:(id)arg1;
- (void)setVioHandle:(struct CV3DVIOContext { }*)arg1;
- (bool)setupObjectDetection:(id)arg1;
- (struct CV3DVIOContext { }*)vioHandle;
- (long long)vioHandleState;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKNavCameraController : VKCameraController <VKGesturingCameraController, VKNavContextObserver, VKNavigationCameraController> {
    unsigned char  _alternateFramingSource;
    float  _animationTime;
    VKAttachedNavGestureCameraBehavior * _attachedGestureBehavior;
    int  _baseDisplayRate;
    struct Unit<MeterUnitDescription, double> { 
        double _value; 
    }  _cameraDistanceFromTarget;
    struct CameraFrame<geo::Radians, double> { 
        struct Mercator3<double> { 
            double _e[3]; 
        } _target; 
        struct Unit<MeterUnitDescription, double> { 
            double _value; 
        } _distanceFromTarget; 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } _pitch; 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } _heading; 
    }  _cameraFrame;
    struct Unit<RadianUnitDescription, double> { 
        double _value; 
    }  _cameraPitch;
    unsigned char  _cameraType;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _clientFramingInsets;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { 
        struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { 
            struct __rep { 
                union { 
                    struct __long { 
                        unsigned int __cap_; 
                        unsigned int __size_; 
                        char *__data_; 
                    } __l; 
                    struct __short { 
                        union { 
                            unsigned char __size_; 
                            BOOL __lx; 
                        } ; 
                        BOOL __data_[11]; 
                    } __s; 
                    struct __raw { 
                        unsigned long __words[3]; 
                    } __r; 
                } ; 
            } __first_; 
        } __r_; 
    }  _currentStyleName;
    double  _desiredZoomScale;
    VKDetachedNavGestureCameraBehavior * _detachedGestureBehavior;
    struct Spring<double, md::SpringType::Linear> { 
        double _position; 
        double _velocity; 
        double _restingPosition; 
        double _kSpring; 
        double _kDamper; 
        int _type; 
    }  _distanceFromTargetSpring;
    bool  _enablePan;
    bool  _enablePitch;
    bool  _enableRotate;
    bool  _enableZoom;
    bool  _frameAllGroupedManeuvers;
    double  _framingDistanceAfterManeuver;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _framingEdgeInset;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _framingEdgeInsetProportional;
    struct Box<double, 2> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _minimum; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _maximum; 
    }  _framingScreenRect;
    VKGestureCameraBehavior<VKNavGestureCameraBehavior> * _gestureBehavior;
    double  _halfPuckSize;
    struct Unit<RadianUnitDescription, double> { 
        double _value; 
    }  _headingDelta;
    struct Unit<RadianUnitDescription, double> { 
        double _value; 
    }  _headingMinDelta;
    struct Spring<double, md::SpringType::Angular> { 
        double _position; 
        double _velocity; 
        double _restingPosition; 
        double _kSpring; 
        double _kDamper; 
        int _type; 
    }  _headingSpring;
    unsigned char  _headingType;
    bool  _ignorePointsBehind;
    bool  _insetsAnimating;
    BOOL  _isDetached;
    bool  _isTracking;
    struct CameraFrame<geo::Radians, double> { 
        struct Mercator3<double> { 
            double _e[3]; 
        } _target; 
        struct Unit<MeterUnitDescription, double> { 
            double _value; 
        } _distanceFromTarget; 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } _pitch; 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } _heading; 
    }  _lastCalculatedCameraFrame;
    unsigned long  _lastTargetStyleIdentifier;
    unsigned char  _maneuversToFrame;
    VKMapCanvas * _mapCanvas;
    VKMapModel * _mapModel;
    double  _maxCameraHeight;
    struct Unit<RadianUnitDescription, double> { 
        double _value; 
    }  _maxCameraPitch;
    double  _maxFramingDistance;
    double  _maxHeightDeltaChangeHorizontal;
    double  _maxHeightDeltaChangeVertical;
    unsigned char  _maxManeuversToFrame;
    double  _maxZoomScale;
    double  _minCameraHeight;
    struct Unit<RadianUnitDescription, double> { 
        double _value; 
    }  _minCameraPitch;
    double  _minHeightDeltaChangeHorizontal;
    double  _minHeightDeltaChangeVertical;
    double  _minZoomScale;
    VKNavContext * _navContext;
    BOOL  _needsUpdate;
    <VKNavCameraControllerObserver> * _observer;
    float  _panReturnDelayTime;
    BOOL  _panning;
    struct Spring<double, md::SpringType::Linear> { 
        double _position; 
        double _velocity; 
        double _restingPosition; 
        double _kSpring; 
        double _kDamper; 
        int _type; 
    }  _pitchSpring;
    BOOL  _pitching;
    struct vector<geo::Mercator2<double>, std::__1::allocator<geo::Mercator2<double> > > { 
        struct Mercator2<double> {} *__begin_; 
        struct Mercator2<double> {} *__end_; 
        struct __compressed_pair<geo::Mercator2<double> *, std::__1::allocator<geo::Mercator2<double> > > { 
            struct Mercator2<double> {} *__first_; 
        } __end_cap_; 
    }  _pointsToFrame;
    bool  _pouncing;
    double  _previousUpdateTime;
    struct Unit<RadianUnitDescription, double> { 
        double _value; 
    }  _puckCourse;
    struct Matrix<double, 2, 1> { 
        double _e[2]; 
    }  _puckLocation;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _puckMovementBoundsMax;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _puckMovementBoundsMin;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _puckScreenPosition;
    BOOL  _rotating;
    struct Mercator2<double> { 
        double _e[2]; 
    }  _routeFocusPoint;
    GEORouteMatch * _routeMatch;
    struct Spring<gm::Matrix<double, 2, 1>, md::SpringType::Linear> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _position; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _velocity; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _restingPosition; 
        double _kSpring; 
        double _kDamper; 
        int _type; 
    }  _screenPositionSpring;
    VKTimedAnimation * _snapHeadingAnimation;
    VKTimedAnimation * _snapPitchAnimation;
    unsigned char  _styleManeuversToFrame;
    VKTimedAnimation * _transitionAnimation;
    struct CameraFrame<geo::Radians, double> { 
        struct Mercator3<double> { 
            double _e[3]; 
        } _target; 
        struct Unit<MeterUnitDescription, double> { 
            double _value; 
        } _distanceFromTarget; 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } _pitch; 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } _heading; 
    }  _transitionFrame;
    struct Box<double, 2> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _minimum; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _maximum; 
    }  _viewableScreenRect;
    BOOL  _zooming;
}

@property (nonatomic, readonly) double altitude;
@property (nonatomic) int baseDisplayRate;
@property (nonatomic) struct { double x1; double x2; } centerCoordinate;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } clientFramingInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double distanceFromCenterCoordinate;
@property (readonly) unsigned int hash;
@property (nonatomic) double heading;
@property (nonatomic, readonly) BOOL isFullyPitched;
@property (nonatomic, readonly) BOOL isPitched;
@property (nonatomic, readonly) BOOL isRotated;
@property (nonatomic) VKMapCanvas *mapCanvas;
@property (nonatomic, retain) VKMapModel *mapModel;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) double maxPitch;
@property (nonatomic) double pitch;
@property (readonly) Class superclass;
@property (nonatomic) double zoomScale;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Matrix<double, 2, 1> { double x1[2]; })_calculatePuckScreenPoint;
- (BOOL)_canZoomIn;
- (BOOL)_canZoomOut;
- (struct Matrix<double, 3, 1> { double x1[3]; })_groundPointFromScreenPoint:(const struct Matrix<double, 2, 1> { double x1[2]; }*)arg1 andFrame:(const struct CameraFrame<geo::Radians, double> { struct Mercator3<double> { double x_1_1_1[3]; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; }*)arg2;
- (BOOL)_hasRunningAnimation;
- (double)_normalizedZoomLevelForDisplayZoomLevel:(double)arg1;
- (void)_setDetached:(BOOL)arg1;
- (void)_setNeedsUpdate;
- (void)_snapHeading;
- (void)_snapPitch;
- (void)_updateDebugOverlay;
- (void)_updateDebugText;
- (void)_updateRouteMatch;
- (void)_updateSceneStyles;
- (BOOL)_updateSprings:(double)arg1;
- (void)_updateStyles;
- (void)_updateZoomScaleLimts;
- (double)altitude;
- (void)animateCameraWithDuration:(float)arg1;
- (int)baseDisplayRate;
- (struct Unit<RadianUnitDescription, double> { double x1; })calculateHeading;
- (struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })calculateViewableScreenRect;
- (struct CameraFrame<geo::Radians, double> { struct Mercator3<double> { double x_1_1_1[3]; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; })cameraFrame;
- (BOOL)canEnter3DMode;
- (BOOL)canZoomInForTileSize:(int)arg1;
- (BOOL)canZoomOutForTileSize:(int)arg1;
- (void)canvasDidLayout;
- (struct { double x1; double x2; })centerCoordinate;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })clientFramingInsets;
- (struct CameraFrame<geo::Radians, double> { struct Mercator3<double> { double x_1_1_1[3]; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; })currentCameraFrame;
- (double)currentZoomLevel;
- (void)dealloc;
- (double)distanceFromCenterCoordinate;
- (double)distanceToManeuver:(unsigned int)arg1;
- (void)edgeInsetsDidEndAnimating;
- (void)edgeInsetsWillBeginAnimating;
- (double)heading;
- (id)init;
- (BOOL)isGesturing;
- (BOOL)isPitchEnabled;
- (BOOL)isRotateEnabled;
- (struct CameraFrame<geo::Radians, double> { struct Mercator3<double> { double x_1_1_1[3]; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; })lerpCameraFrame:(const struct CameraFrame<geo::Radians, double> { struct Mercator3<double> { double x_1_1_1[3]; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; }*)arg1 two:(const struct CameraFrame<geo::Radians, double> { struct Mercator3<double> { double x_1_1_1[3]; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; }*)arg2 frac:(float)arg3;
- (id)mapCanvas;
- (id)mapModel;
- (struct Unit<RadianUnitDescription, double> { double x1; })maxCameraPitch;
- (double)maxZoomHeight;
- (double)maxZoomScale;
- (double)maximumZoomLevel;
- (struct Unit<RadianUnitDescription, double> { double x1; })minCameraPitch;
- (double)minZoomHeight;
- (double)minZoomScale;
- (double)minimumZoomLevel;
- (void)navContextStateDidChange:(id)arg1;
- (double)pitch;
- (void)puckAnimator:(id)arg1 runAnimation:(id)arg2;
- (void)puckAnimator:(id)arg1 updatedPosition:(const struct Mercator3<double> { double x1[3]; }*)arg2 course:(double)arg3;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(struct Matrix<double, 3, 1> { double x1[3]; })arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (void)removeObserver;
- (void)resetSpringsToResting;
- (struct CameraFrame<geo::Radians, double> { struct Mercator3<double> { double x_1_1_1[3]; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; })restingCameraFrame;
- (void)returnToPuck;
- (void)returnToTrackingWithDelay:(double)arg1 resetZoom:(BOOL)arg2;
- (struct Mercator2<double> { double x1[2]; })routeLocationAtDistance:(double)arg1;
- (struct Mercator2<double> { double x1[2]; })routeLocationAtDistance:(double)arg1 fromManeuver:(unsigned int)arg2;
- (void)setBaseDisplayRate:(int)arg1;
- (void)setCamera:(id)arg1;
- (void)setCameraFrame:(struct CameraFrame<geo::Radians, double> { struct Mercator3<double> { double x_1_1_1[3]; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; })arg1;
- (void)setClientFramingInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setMapCanvas:(id)arg1;
- (void)setMapModel:(id)arg1;
- (void)setNavContext:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setZoomScale:(double)arg1;
- (void)startPanningAtPoint:(struct CGPoint { float x1; float x2; })arg1 panAtStartPoint:(BOOL)arg2;
- (void)startPinchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startPitchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startRotatingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startWithPounce:(BOOL)arg1 startLocation:(struct { double x1; double x2; })arg2 pounceCompletionHandler:(id /* block */)arg3;
- (void)stop;
- (void)stopAnimations;
- (void)stopPanningAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopSnappingAnimations;
- (void)stylesheetDidChange;
- (void)stylesheetDidReload;
- (double)topDownMinimumZoomLevel;
- (void)transferGestureState:(id)arg1;
- (void)updateCameraState;
- (void)updateLocation:(const struct Mercator3<double> { double x1[3]; }*)arg1 andCourse:(double)arg2;
- (void)updateManeuversToFrame;
- (void)updatePanWithTranslation:(struct CGPoint { float x1; float x2; })arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updatePitchWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 translation:(double)arg2;
- (void)updatePointsToFrame;
- (void)updateRotationWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 newValue:(double)arg2;
- (void)updateSpringsForFramingCamera;
- (void)updateSpringsForTrackingCamera;
- (void)updateWithTimestamp:(double)arg1;
- (BOOL)wantsTimerTick;
- (struct Matrix<double, 2, 1> { double x1[2]; })worldPointToScreenPoint:(struct Matrix<double, 3, 1> { double x1[3]; })arg1 forViewProjectionMatrix:(const struct Matrix<double, 4, 4> { double x1[16]; }*)arg2;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint { float x1; float x2; })arg2 completionHandler:(id /* block */)arg3;
- (double)zoomScale;

@end

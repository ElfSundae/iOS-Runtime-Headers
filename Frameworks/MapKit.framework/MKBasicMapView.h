/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKBasicMapView : UIView {
    BOOL _changingViewSize;
    UIView *_hostView;
    double _mapModeStartTime;
    VKMapView *_mapView;
    double _trafficStartTime;
}

@property (getter=isChangingViewSize, nonatomic, readonly) BOOL changingViewSize;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property (nonatomic) double mapModeStartTime;
@property (nonatomic, readonly) VKMapView *mapView;
@property (nonatomic) BOOL rendersInBackground;
@property (nonatomic) double trafficStartTime;

- (void).cxx_destruct;
- (void)_animateCanvasForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_enterBackground:(id)arg1;
- (void)_enterForeground:(id)arg1;
- (void)_finishedSnapshot:(id)arg1;
- (void)_updateForCurrentScreen;
- (void)_updateMapViewHidden;
- (void)_updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(BOOL)arg1 ignoreIfViewInWindow:(BOOL)arg2;
- (void)_updateStatsForTrafficEnabledTime:(BOOL)arg1;
- (void)addCalloutSubview:(id)arg1;
- (float)calloutContainerCanvasScale;
- (struct CGSize { float x1; float x2; })calloutContainerCanvasSize;
- (struct CGPoint { float x1; float x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toCameraModelPointToView:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toPointToView:(id)arg2;
- (struct { double x1; double x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toCoordinateFromView:(id)arg2;
- (void)dealloc;
- (void)didMoveToWindow;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 andGlobe:(BOOL)arg2 shouldRasterize:(BOOL)arg3;
- (BOOL)isChangingViewSize;
- (BOOL)isPointValidForGesturing:(struct CGPoint { float x1; float x2; })arg1;
- (double)mapModeStartTime;
- (id)mapView;
- (BOOL)rendersInBackground;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setMapModeStartTime:(double)arg1;
- (void)setRendersInBackground:(BOOL)arg1;
- (void)setTrafficStartTime:(double)arg1;
- (double)trafficStartTime;
- (void)updateStatsForEnablingTraffic:(BOOL)arg1;
- (void)updateStatsForSwitchingToMapType:(int)arg1;
- (void)updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(BOOL)arg1;
- (void)updateStatsForTrafficEnabledTime;
- (void)willMoveToWindow:(id)arg1;

@end

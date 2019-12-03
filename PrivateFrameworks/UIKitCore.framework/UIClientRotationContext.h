/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIClientRotationContext : NSObject {
    UISnapshotView * _contentSnapshotViewStart;
    UIView * _contentView;
    bool  _contentWasHidden;
    double  _duration;
    UIView * _footerEndSnapshotView;
    UISnapshotView * _footerSnapshotViewStart;
    UIView * _footerStartSnapshotView;
    UIView * _footerView;
    bool  _footerWasHidden;
    long long  _fromOrientation;
    UISnapshotView * _headerSnapshotViewStart;
    UIView * _headerView;
    bool  _headerWasHidden;
    bool  _orderKeyboardInAfterRotating;
    id  _rotatingClient;
    UIView * _rotatingSnapshotView;
    struct { 
        bool animateContentRotation; 
        bool preserveHeight; 
        bool avoidFadingBottomOfContent; 
        bool skipSnapshotOfEndState; 
        bool preventAdditveAnimations; 
        double contentStretchRightEdgeInset; 
        int edgeClip; 
    }  _rotationSettings;
    bool  _skipClientRotationCallbacks;
    UIView * _snapshotTargetView;
    bool  _snapshotTargetWasHidden;
    long long  _toOrientation;
    UIWindow * _window;
    double  contentBottomInset;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) long long fromOrientation;
@property (nonatomic, readonly) id rotatingClient;
@property (nonatomic) bool skipClientRotationCallbacks;
@property (nonatomic, readonly) long long toOrientation;

- (bool)_isFooterTranslucent;
- (bool)_isHeaderTranslucent;
- (void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(long long)arg3;
- (void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(bool)arg3 forInterfaceOrientation:(long long)arg4;
- (id)contentView;
- (void)dealloc;
- (double)duration;
- (void)finishFirstHalfRotation;
- (void)finishFullRotateUsingOnePartAnimation:(bool)arg1;
- (long long)fromOrientation;
- (id)initWithClient:(id)arg1 toOrientation:(long long)arg2 duration:(double)arg3 andWindow:(id)arg4;
- (void)rotateSnapshots;
- (id)rotatingClient;
- (void)setSkipClientRotationCallbacks:(bool)arg1;
- (void)setupRotationOrderingKeyboardInAfterRotation:(bool)arg1;
- (bool)skipClientRotationCallbacks;
- (void)slideHeaderViewAndFooterViewOffScreen:(bool)arg1 forInterfaceOrientation:(long long)arg2;
- (long long)toOrientation;

@end

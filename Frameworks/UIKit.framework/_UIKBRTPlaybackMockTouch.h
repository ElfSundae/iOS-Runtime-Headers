/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIKBRTPlaybackMockTouch : NSObject {
    _UIKBRTPlaybackTouchView *_fingerView;
    NSNumber *_identifier;
    struct CGPoint { 
        float x; 
        float y; 
    } _locationInView;
    float _majorRadius;
    float _majorRadiusTolerance;
    struct CGPoint { 
        float x; 
        float y; 
    } _previousLocation;
    double _timestamp;
    _UIKBRTTouchInfo *_touchInfo;
    UIView *_view;
}

@property (nonatomic, retain) _UIKBRTPlaybackTouchView *fingerView;
@property (nonatomic, retain) NSNumber *identifier;
@property (nonatomic) struct CGPoint { float x1; float x2; } locationInView;
@property (nonatomic) float majorRadius;
@property (nonatomic) float majorRadiusTolerance;
@property (nonatomic) struct CGPoint { float x1; float x2; } previousLocation;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) _UIKBRTTouchInfo *touchInfo;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)doneWithFinger;
- (id)fingerView;
- (id)identifier;
- (struct CGPoint { float x1; float x2; })locationInView;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (float)majorRadius;
- (float)majorRadiusTolerance;
- (void)observeTouchStateOf:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct CGPoint { float x1; float x2; })previousLocation;
- (struct CGPoint { float x1; float x2; })previousLocationInView:(id)arg1;
- (void)setFingerView:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocationInView:(struct CGPoint { float x1; float x2; })arg1;
- (void)setMajorRadius:(float)arg1;
- (void)setMajorRadiusTolerance:(float)arg1;
- (void)setPreviousLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTouchInfo:(id)arg1;
- (void)setView:(id)arg1;
- (double)timestamp;
- (id)touchInfo;
- (void)updateFingerTouchState:(BOOL)arg1;
- (void)updateFingerViewInView:(id)arg1;
- (id)view;

@end

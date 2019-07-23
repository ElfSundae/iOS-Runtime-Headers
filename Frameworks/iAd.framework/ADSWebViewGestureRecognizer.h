/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADSWebViewGestureRecognizer : UIGestureRecognizer {
    int  _lastTrackedTouch;
    struct CGPoint { 
        float x; 
        float y; 
    }  _location;
    BOOL  _pointIsInsideView;
    BOOL  _shouldBlockNavigation;
}

@property (nonatomic) int lastTrackedTouch;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } location;
@property (nonatomic, readonly) BOOL pointIsInsideView;
@property (nonatomic, readonly) BOOL shouldBlockNavigation;

- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (int)lastTrackedTouch;
- (struct CGPoint { float x1; float x2; })location;
- (BOOL)pointIsInsideView;
- (void)reset;
- (void)setLastTrackedTouch:(int)arg1;
- (BOOL)shouldBlockNavigation;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

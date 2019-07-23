/* Generated by RuntimeBrowser.
 */

@protocol _UIFocusScrollAnimator <NSObject>

@required

- (void)cancelPeekAdjustmentForScrollView:(UIScrollView *)arg1 performRollback:(BOOL)arg2;
- (void)cancelScrollingForScrollView:(UIScrollView *)arg1;
- (struct CGPoint { float x1; float x2; })currentVelocityForScrollView:(UIScrollView *)arg1;
- (float)defaultConvergenceRate;
- (BOOL)isAnimatingScrollView:(UIScrollView *)arg1;
- (BOOL)requiresExtendingScrollViewVisibleBounds;
- (void)setDefaultConvergenceRate:(float)arg1;
- (void)setPeekOffsetAdjustment:(struct CGPoint { float x1; float x2; })arg1 forScrollView:(UIScrollView *)arg2;
- (void)setTargetContentOffset:(void *)arg1 forScrollView:(void *)arg2 convergenceRate:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: struct CGPoint { float x1; float x2; }, UIScrollView *, float, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (struct CGPoint { float x1; float x2; })targetContentOffsetForScrollView:(UIScrollView *)arg1;
- (struct CGPoint { float x1; float x2; })velocityToScrollFromOffset:(struct CGPoint { float x1; float x2; })arg1 toOffset:(struct CGPoint { float x1; float x2; })arg2;

@end

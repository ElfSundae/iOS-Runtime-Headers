/* Generated by RuntimeBrowser.
 */

@protocol PUUserTransformViewDelegate <NSObject>

@required

- (void)userTransformView:(PUUserTransformView *)arg1 didChangeUserAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 isUserInteracting:(BOOL)arg3;

@optional

- (void)userTransformView:(PUUserTransformView *)arg1 didChangeIsUserInteracting:(BOOL)arg2;
- (BOOL)userTransformView:(PUUserTransformView *)arg1 shouldReceiveTouchAtPoint:(struct CGPoint { float x1; float x2; })arg2;

@end

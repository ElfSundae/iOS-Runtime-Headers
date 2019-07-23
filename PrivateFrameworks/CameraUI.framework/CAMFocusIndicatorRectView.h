/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFocusIndicatorRectView : UIImageView {
    int  _size;
}

@property (getter=isPulsing, nonatomic, readonly) BOOL pulsing;
@property (nonatomic, readonly) int size;

- (void)_commonCAMFocusIndicatorRectViewInitialization;
- (id)_crosshairImageForSize:(int)arg1;
- (void)_generateImagePairFromCurrentTintColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (id)initWithSize:(int)arg1;
- (BOOL)isPulsing;
- (int)size;
- (void)startPulsing;
- (void)stopPulsing;
- (void)tintColorDidChange;

@end

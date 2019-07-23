/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMImageWell : UIButton {
    UIView *__containerView;
    NSMutableArray *__dimmingViewQueue;
    UIImageView *__maskImageView;
    UIImage *__thumbnailImage;
    UIImageView *__thumbnailImageView;
    NSString *__uuid;
    int _cameraOrientation;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _tappableEdgeInsets;
    BOOL _thumbnailImageHidden;
}

@property (nonatomic, readonly) UIView *_containerView;
@property (nonatomic, readonly) NSMutableArray *_dimmingViewQueue;
@property (nonatomic, readonly) UIImageView *_maskImageView;
@property (setter=_setThumbnailImage:, nonatomic, retain) UIImage *_thumbnailImage;
@property (nonatomic, readonly) UIImageView *_thumbnailImageView;
@property (setter=_setUuid:, nonatomic, retain) NSString *_uuid;
@property (nonatomic) int cameraOrientation;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } tappableEdgeInsets;
@property (nonatomic, readonly) UIImage *thumbnailImage;
@property (getter=isThumbnailImageHidden, nonatomic) BOOL thumbnailImageHidden;

- (void).cxx_destruct;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_affineTransformForImageOrientation:(int)arg1;
- (void)_commonCAMImageWellInitialization;
- (id)_containerView;
- (id)_dimmingViewQueue;
- (id)_maskImage;
- (id)_maskImageView;
- (void)_performEmitAnimationWithImage:(id)arg1 orientation:(int)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)_removeFirstDimmingView;
- (void)_setThumbnailImage:(id)arg1;
- (void)_setUuid:(id)arg1;
- (id)_thumbnailImage;
- (id)_thumbnailImageView;
- (void)_updateThumbnailImageAnimated:(BOOL)arg1;
- (void)_updateThumbnailTransformFromCameraOrientation;
- (id)_uuid;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (int)cameraOrientation;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isThumbnailImageHidden;
- (void)layoutSubviews;
- (void)prepareForThumbnailUpdateFromCapture;
- (void)recoverFromFailedThumbnailUpdate;
- (void)setCameraOrientation:(int)arg1;
- (void)setCameraOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setThumbnailImage:(id)arg1 animated:(BOOL)arg2;
- (void)setThumbnailImage:(id)arg1 uuid:(id)arg2 animated:(BOOL)arg3;
- (void)setThumbnailImageHidden:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })tappableEdgeInsets;
- (id)thumbnailImage;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPhotoPickerCell : UICollectionViewCell <PHLivePhotoViewDelegate> {
    <CKPhotoPickerCellDelegate> *_delegate;
    UIImageView *_imageView;
    BOOL _isLivePhoto;
    BOOL _isVideo;
    CKPhotoTileBadgeView *_livePhotoBadgeView;
    PHLivePhotoView *_livePhotoView;
    PLRoundProgressView *_progressView;
    UIImageView *_videoImageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKPhotoPickerCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) BOOL isLivePhoto;
@property (nonatomic) BOOL isVideo;
@property (nonatomic, retain) CKPhotoTileBadgeView *livePhotoBadgeView;
@property (nonatomic, retain) PHLivePhotoView *livePhotoView;
@property (nonatomic, retain) PLRoundProgressView *progressView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImageView *videoImageView;

- (void)_badgeToggled:(id*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isLivePhoto;
- (BOOL)isVideo;
- (void)layoutSubviews;
- (id)livePhotoBadgeView;
- (id)livePhotoView;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(int)arg2;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(int)arg2;
- (void)prepareForReuse;
- (id)progressView;
- (void)setDelegate:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setIsLivePhoto:(BOOL)arg1;
- (void)setIsVideo:(BOOL)arg1;
- (void)setLivePhotoBadgeView:(id)arg1;
- (void)setLivePhotoView:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setVideoImageView:(id)arg1;
- (void)updateProgress:(double)arg1;
- (id)videoImageView;

@end

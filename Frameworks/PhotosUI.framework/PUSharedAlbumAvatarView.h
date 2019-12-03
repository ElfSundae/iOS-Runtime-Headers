/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSharedAlbumAvatarView : UIImageView {
    bool  _enabled;
    UIImage * _firstAvatar;
    UIGraphicsImageRenderer * _imageRenderer;
    bool  _isRTL;
    CNMonogrammer * _monogrammer;
    CAShapeLayer * _overlayLayer;
    UIImage * _secondAvatar;
    PHAssetCollection * _sharedAlbumCollection;
    UIImage * _thirdAvatar;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) UIImage *firstAvatar;
@property (nonatomic, retain) UIGraphicsImageRenderer *imageRenderer;
@property (readonly) NSObject<OS_os_log> *log;
@property (nonatomic, retain) CNMonogrammer *monogrammer;
@property (nonatomic, retain) CAShapeLayer *overlayLayer;
@property (nonatomic, retain) UIImage *secondAvatar;
@property (nonatomic, retain) PHAssetCollection *sharedAlbumCollection;
@property (nonatomic, retain) UIImage *thirdAvatar;

+ (id)sharedSerialQueue;

- (void).cxx_destruct;
- (void)_renderAvatarsForAlbumCollection:(id)arg1;
- (void)_requestPersonPhoto:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)_resetImages;
- (void)_resetViewContents;
- (void)_resetViewContentsIfNeededForAlbumCollection:(id)arg1;
- (void)_setContentsImage:(id)arg1 withShadowPath:(struct CGPath { }*)arg2 forAlbumCollection:(id)arg3;
- (void)_setImage:(id)arg1 forIndex:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })_sizeForNumberOfAvatars:(unsigned long long)arg1;
- (void)_updateSubscriberAvatars;
- (void)_updateSubscriberAvatarsWithAlbumCollection:(id)arg1;
- (void)accessibilityInvertColorsStatusDidChange:(id)arg1;
- (void)embedInView:(id)arg1;
- (id)firstAvatar;
- (id)imageRenderer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (id)log;
- (id)monogrammer;
- (id)overlayLayer;
- (void)prepareForReuse;
- (id)secondAvatar;
- (void)setEnabled:(bool)arg1;
- (void)setFirstAvatar:(id)arg1;
- (void)setImageRenderer:(id)arg1;
- (void)setMonogrammer:(id)arg1;
- (void)setOverlayLayer:(id)arg1;
- (void)setPersonPhoto:(id)arg1 atIndex:(long long)arg2 albumCollection:(id)arg3;
- (void)setSecondAvatar:(id)arg1;
- (void)setSharedAlbumCollection:(id)arg1;
- (void)setSharedAlbumCollection:(id)arg1 forceLayoutSubscriberAvatars:(bool)arg2;
- (void)setThirdAvatar:(id)arg1;
- (id)sharedAlbumCollection;
- (id)thirdAvatar;

@end

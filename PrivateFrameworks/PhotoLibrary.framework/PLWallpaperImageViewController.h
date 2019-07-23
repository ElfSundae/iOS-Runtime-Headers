/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLWallpaperImageViewController : PLUIEditImageViewController <SBFLegibilitySettingsProviderDelegate> {
    BOOL __statusBarHidden;
    int __statusBarStyle;
    unsigned int _didSetImageMode;
    BOOL _isWallpaperEdit;
    PLWallpaperNavigationItem *_navItem;
    NSArray *_navigationToolbarItems;
    int _previewType;
    int _previewVariant;
    BOOL _saveWallpaperData;
    int _wallpaperMode;
    SBSUIWallpaperPreviewViewController *_wallpaperPreviewViewController;
    NSString *_wallpaperTitle;
}

@property (setter=_setStatusBarHidden:, nonatomic) BOOL _statusBarHidden;
@property (setter=_setStatusBarStyle:, nonatomic) int _statusBarStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isWallpaperEdit;
@property (nonatomic) int previewType;
@property (nonatomic) int previewVariant;
@property (nonatomic) BOOL saveWallpaperData;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBSUIWallpaperPreviewViewController *wallpaperPreviewViewController;
@property (nonatomic, copy) NSString *wallpaperTitle;

- (void)_adjustScrollViewGeometry;
- (void)_backgroundCropWallpaper;
- (unsigned int)_contentAutoresizingMask;
- (void)_cropWallpaperFinished:(id)arg1;
- (void)_displayWallpaperOptionsSheet;
- (void)_savePhoto;
- (void)_setStatusBarHidden:(BOOL)arg1;
- (void)_setStatusBarStyle:(int)arg1;
- (BOOL)_statusBarHidden;
- (int)_statusBarStyle;
- (unsigned int)_tileAutoresizingMask;
- (void)_updatePreviewFrame:(id)arg1;
- (void)_updateTitles;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_viewFrame;
- (BOOL)clientIsWallpaper;
- (int)cropOverlayMode;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)dealloc;
- (int)desiredStatusBarAnimation;
- (int)imageFormat;
- (id)init;
- (id)initWithUIImage:(id)arg1;
- (id)initWithWallpaperVariant:(int)arg1;
- (BOOL)isWallpaperEdit;
- (void)loadView;
- (void)motionToggledManually:(BOOL)arg1;
- (id)navigationItem;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)photoTileViewControllerRequestsFullScreenImage:(id)arg1;
- (int)preferredStatusBarStyle;
- (int)preferredStatusBarUpdateAnimation;
- (void)prepareForBackground:(id)arg1;
- (void)prepareForForeground:(id)arg1;
- (int)previewType;
- (int)previewVariant;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (BOOL)saveWallpaperData;
- (void)setImageAsHomeScreenAndLockScreenClicked:(id)arg1;
- (void)setImageAsHomeScreenClicked:(id)arg1;
- (void)setImageAsLockScreenClicked:(id)arg1;
- (void)setIsWallpaperEdit:(BOOL)arg1;
- (void)setPreviewType:(int)arg1;
- (void)setPreviewVariant:(int)arg1;
- (void)setSaveWallpaperData:(BOOL)arg1;
- (void)setWallpaperFromArgs:(id)arg1;
- (void)setWallpaperPreviewViewController:(id)arg1;
- (void)setWallpaperSynchronouslyFromArgs:(id)arg1;
- (void)setWallpaperTitle:(id)arg1;
- (void)setupNavigationItem;
- (void)setupWallpaperPreview;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)uiipc_useTelephonyUI;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)wallpaperPreviewViewController;
- (id)wallpaperTitle;
- (BOOL)wantsStatusBarVisible;

@end

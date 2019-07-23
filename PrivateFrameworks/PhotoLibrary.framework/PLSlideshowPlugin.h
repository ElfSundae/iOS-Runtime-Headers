/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLSlideshowPlugin : NSObject {
    struct NSObject { Class x1; } *_album;
    NSArray *_albumAssets;
    <PLSlideshowPluginDelegate> *_delegate;
    double _secondsPerSlide;
    BOOL _shouldRepeat;
    BOOL _shuffleAlbum;
}

@property (nonatomic, retain) NSObject<PLAlbumProtocol> *album;
@property (nonatomic, retain) NSArray *albumAssets;
@property (nonatomic, readonly) PLManagedAsset *currentPhoto;
@property (nonatomic) <PLSlideshowPluginDelegate> *delegate;
@property (nonatomic, readonly) NSArray *displayedPhotos;
@property (nonatomic) double secondsPerSlide;
@property (nonatomic) BOOL shouldRepeat;
@property (nonatomic) BOOL shuffleAlbum;

- (struct NSObject { Class x1; }*)album;
- (id)albumAssets;
- (id)currentPhoto;
- (void)dealloc;
- (id)delegate;
- (id)displayedPhotos;
- (id)newSlideshowView;
- (void)pauseSlideshow;
- (void)resumeSlideshow;
- (double)secondsPerSlide;
- (void)setAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setAlbumAssets:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSecondsPerSlide:(double)arg1;
- (void)setShouldRepeat:(BOOL)arg1;
- (void)setShuffleAlbum:(BOOL)arg1;
- (BOOL)shouldRepeat;
- (BOOL)shuffleAlbum;
- (void)slideshowViewDidAppear;
- (void)slideshowViewDidDisappear;
- (void)slideshowViewWillAppear;
- (void)stopSlideshow;

@end
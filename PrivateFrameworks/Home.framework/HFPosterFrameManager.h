/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFPosterFrameManager : NSObject {
    NSMutableDictionary * _generationObservers;
    HFPosterFrameImageCache * _imageCache;
    NSMutableDictionary * _inProgressOperations;
    HFCameraPlaybackEngine * _playbackEngine;
    NSMutableDictionary * _posterFrameObservers;
    NSOperationQueue * _posterFrameQueue;
}

@property (nonatomic, retain) NSMutableDictionary *generationObservers;
@property (nonatomic, retain) HFPosterFrameImageCache *imageCache;
@property (nonatomic, retain) NSMutableDictionary *inProgressOperations;
@property (nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (nonatomic, retain) NSMutableDictionary *posterFrameObservers;
@property (nonatomic, retain) NSOperationQueue *posterFrameQueue;

+ (id)clipIdentifierStringFromDate:(id)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_addOperationForObserver:(id)arg1 clip:(id)arg2 posterFrame:(id)arg3;
- (void)_addPosterFrameImage:(id)arg1 forClip:(id)arg2 withOffset:(double)arg3;
- (id)_cachedPosterFrameImageForClip:(id)arg1 offset:(double)arg2;
- (void)_fetchPosterFrameImageForObserver:(id)arg1 forClip:(id)arg2 offset:(double)arg3;
- (void)_generateImagesUsingAsset:(id)arg1 clip:(id)arg2 observer:(id)arg3;
- (void)_generateMissingPosterFrameImagesForClip:(id)arg1 observer:(id)arg2;
- (id)_posterFrameForClip:(id)arg1 atOffset:(double)arg2;
- (id)_posterFrameObserversForKey:(id)arg1;
- (double)_timeScaleAdjustedOffset:(double)arg1;
- (void)addDemoPosterFrameImageObserver:(id)arg1 forClip:(id)arg2 atOffset:(double)arg3;
- (void)addOperationForObserver:(id)arg1 clip:(id)arg2 posterFrame:(id)arg3 withKey:(id)arg4;
- (void)addPosterFrameImageObserver:(id)arg1 forClip:(id)arg2 atOffset:(double)arg3;
- (void)cacheDemoPosterFramesForAsset:(id)arg1 forClip:(id)arg2;
- (id)cachedPosterFrameImageForClip:(id)arg1 offset:(double)arg2;
- (void)dealloc;
- (id)generationObservers;
- (id)imageCache;
- (id)inProgressOperations;
- (id)init;
- (id)keyForClip:(id)arg1;
- (id)keyForClip:(id)arg1 timeOffset:(double)arg2;
- (id)playbackEngine;
- (id)posterFrameObservers;
- (id)posterFrameQueue;
- (void)purgePosterFrames;
- (void)removePosterFrameImageObserver:(id)arg1 forClip:(id)arg2 atOffset:(double)arg3;
- (void)setGenerationObservers:(id)arg1;
- (void)setImageCache:(id)arg1;
- (void)setInProgressOperations:(id)arg1;
- (void)setPlaybackEngine:(id)arg1;
- (void)setPosterFrameObservers:(id)arg1;
- (void)setPosterFrameQueue:(id)arg1;

@end

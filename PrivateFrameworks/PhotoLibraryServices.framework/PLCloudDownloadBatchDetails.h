/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudDownloadBatchDetails : NSObject {
    BOOL  _hasResourceChanges;
    int  _numberOfPhotos;
    int  _numberOfVideos;
}

@property (nonatomic) BOOL hasResourceChanges;
@property (nonatomic) int numberOfPhotos;
@property (nonatomic) int numberOfVideos;

- (BOOL)hasResourceChanges;
- (int)numberOfPhotos;
- (int)numberOfVideos;
- (void)setHasResourceChanges:(BOOL)arg1;
- (void)setNumberOfPhotos:(int)arg1;
- (void)setNumberOfVideos:(int)arg1;
- (void)unionBatchDetails:(id)arg1;

@end

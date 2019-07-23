/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleDetailSettingsFaceCropDataSource : NSObject {
    PHFetchResult * _fetchResult;
    NSMutableDictionary * _images;
    NSObject<OS_dispatch_queue> * _imagesIsolationQueue;
}

@property (nonatomic, retain) PHFetchResult *fetchResult;
@property (nonatomic, retain) NSMutableDictionary *images;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *imagesIsolationQueue;

- (void).cxx_destruct;
- (id)fetchResult;
- (id)imageAtIndexPath:(id)arg1;
- (id)images;
- (id)imagesIsolationQueue;
- (id)init;
- (id)nameAtIndexPath:(id)arg1;
- (unsigned int)numberOfAssets;
- (void)setFetchResult:(id)arg1;
- (void)setImages:(id)arg1;
- (void)setImagesIsolationQueue:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNetworkObserver : NSObject {
    BOOL  _isMusicCellularDownloadingAllowed;
    int  _musicCellularNetworkingAllowedNotifyToken;
    int  _networkUsageCount;
    NSObject<OS_dispatch_queue> * _networkUsageQueue;
}

@property (nonatomic, readonly) BOOL isMusicCellularDownloadingAllowed;
@property (nonatomic, readonly) BOOL isMusicCellularStreamingAllowed;
@property (nonatomic, readonly) BOOL isStoreCellularNetworkingAllowed;
@property (nonatomic, readonly) BOOL isUsingNetwork;

+ (id)sharedNetworkObserver;

- (void).cxx_destruct;
- (void)_cellularNetworkAllowedDidChangeNotification:(id)arg1;
- (id)_init;
- (void)beginUsingNetwork;
- (void)dealloc;
- (void)endUsingNetwork;
- (id)init;
- (BOOL)isMusicCellularDownloadingAllowed;
- (BOOL)isMusicCellularDownloadsAllowed;
- (BOOL)isMusicCellularStreamingAllowed;
- (BOOL)isStoreCellularNetworkingAllowed;
- (BOOL)isUsingNetwork;

@end

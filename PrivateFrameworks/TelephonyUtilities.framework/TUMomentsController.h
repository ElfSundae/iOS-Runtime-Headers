/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUMomentsController : NSObject <TUMomentsControllerDataSourceDelegate> {
    NSMutableDictionary * _capabilitiesByVideoStreamToken;
    <TUMomentsControllerDataSource> * _dataSource;
    <TUMomentsControllerDelegate> * _delegate;
    NSMutableDictionary * _providerByVideoStreamToken;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSMutableDictionary *capabilitiesByVideoStreamToken;
@property (nonatomic, readonly) <TUMomentsControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <TUMomentsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *providerByVideoStreamToken;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id /* block */)faceTimePhotosEnabledDeterminer;
+ (bool)isFaceTimePhotosEnabled;
+ (bool)isFaceTimePhotosEnabledByDefault;
+ (bool)isFaceTimePhotosRestricted;
+ (void)setFaceTimePhotosEnabled:(bool)arg1;
+ (void)setFaceTimePhotosEnabledDeterminer:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)capabilitiesByVideoStreamToken;
- (id)capabilitiesForProvider:(id)arg1;
- (id)dataSource;
- (void)dataSource:(id)arg1 didReceiveLocallyRequestedMomentDescriptor:(id)arg2;
- (void)dataSource:(id)arg1 didUpdateCapabilities:(id)arg2 forVideoStreamToken:(long long)arg3;
- (void)dataSource:(id)arg1 willCaptureRemoteRequestFromRequesterID:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)endRequestWithTransactionID:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;
- (id)providerByVideoStreamToken;
- (id)queue;
- (void)registerProvider:(id)arg1 completion:(id /* block */)arg2;
- (void)serverDiedForDataSource:(id)arg1;
- (void)startRequestWithMediaType:(int)arg1 forProvider:(id)arg2 requesteeID:(id)arg3 completion:(id /* block */)arg4;
- (void)unregisterProvider:(id)arg1 completion:(id /* block */)arg2;

@end

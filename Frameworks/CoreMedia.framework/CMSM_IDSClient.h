/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMedia.framework/CoreMedia
 */

@interface CMSM_IDSClient : NSObject <IDSServiceDelegate> {
    NSString * _lastSentRemotePlayingInfoQueryGUID;
    NSObject<OS_dispatch_queue> * idsDispatchQueue;
    IDSService * pIdsService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)init;
- (bool)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)updateLastSentRemotePlayingInfoQueryGUID:(id)arg1;

@end

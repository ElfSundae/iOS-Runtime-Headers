/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCAssistantDiscovery : NSObject {
    void * _reconSession;
}

- (void)_discoverAirplayDevices:(id /* block */)arg1;
- (void)dealloc;
- (void)discoverAirplayDevicesMatchingGroupID:(id)arg1 completion:(id /* block */)arg2;
- (void)discoverAirplayDevicesMatchingUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)discoverRemoteControlEndpointsMatchingUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)stopDiscovery;

@end

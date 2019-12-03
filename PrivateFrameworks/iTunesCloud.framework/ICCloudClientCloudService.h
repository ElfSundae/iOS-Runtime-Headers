/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICCloudClientCloudService : NSObject {
    <ICCloudServerListenerEndpointProvider> * _listenerEndpointProvider;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) <ICCloudServerListenerEndpointProvider> *listenerEndpointProvider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)_xpcConnectionWithListenerEndpoint:(id)arg1;
- (id)initWithListenerEndpointProvider:(id)arg1;
- (id)listenerEndpointProvider;
- (id)serialQueue;
- (id)xpcConnection;

@end

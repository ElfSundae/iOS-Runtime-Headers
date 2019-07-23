/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCompanionLinkClient : NSObject <HMDCompanionLinkClient> {
    RPCompanionLinkClient * _client;
}

@property (nonatomic, retain) RPCompanionLinkClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ deviceChangedHandler;
@property (nonatomic, copy) id /* block */ deviceFoundHandler;
@property (nonatomic, copy) id /* block */ deviceLostHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)client;
- (void)dealloc;
- (id /* block */)deviceChangedHandler;
- (id /* block */)deviceFoundHandler;
- (id /* block */)deviceLostHandler;
- (void)setClient:(id)arg1;
- (void)setDeviceChangedHandler:(id /* block */)arg1;
- (void)setDeviceFoundHandler:(id /* block */)arg1;
- (void)setDeviceLostHandler:(id /* block */)arg1;
- (void)start;
- (void)stop;

@end

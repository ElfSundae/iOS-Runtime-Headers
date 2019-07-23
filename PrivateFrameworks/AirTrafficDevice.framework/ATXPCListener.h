/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATXPCListener : NSObject <NSXPCListenerDelegate> {
    NSMutableArray *_connections;
    NSMapTable *_proxyMap;
    NSXPCListener *_xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)connections;
- (void)dealloc;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)proxyForConnection:(id)arg1;
- (BOOL)run;
- (void)stop;

@end

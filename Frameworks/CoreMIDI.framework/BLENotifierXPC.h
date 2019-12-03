/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

@interface BLENotifierXPC : NSObject <NSXPCListenerDelegate> {
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleErrorMessage;
- (void)handleMessage;
- (id)init;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end

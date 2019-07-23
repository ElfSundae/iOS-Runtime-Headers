/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKPowerMonitor : NSObject {
    BOOL _awaken;
    unsigned int _handle;
    unsigned int _kernelPort;
    struct IONotificationPort { } *_portRef;
    NSObject<OS_dispatch_queue> *_queue;
}

@property BOOL awaken;
@property unsigned int kernelPort;

+ (id)defaultMonitor;

- (void).cxx_destruct;
- (BOOL)awaken;
- (id)init;
- (unsigned int)kernelPort;
- (void)setAwaken:(BOOL)arg1;
- (void)setKernelPort:(unsigned int)arg1;

@end

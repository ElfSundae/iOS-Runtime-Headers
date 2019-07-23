/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLServiceVendorHeartbeatRecord : NSObject {
    int  _ackCount;
    <CLIntersiloServiceProtocol> * _service;
    CLSilo * _silo;
    int  _synCount;
}

@property (nonatomic, readonly) int ackCount;
@property (nonatomic, readonly) <CLIntersiloServiceProtocol> *service;
@property (nonatomic, readonly) CLSilo *silo;
@property (nonatomic, readonly) int synCount;

- (void).cxx_destruct;
- (void)ack;
- (int)ackCount;
- (id)initTrackingService:(id)arg1;
- (id)service;
- (id)silo;
- (void)syn;
- (int)synCount;

@end

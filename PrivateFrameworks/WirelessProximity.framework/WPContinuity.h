/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPContinuity : NSObject <XPCClientDelegate> {
    int _btBandwidthState;
    XPCClient *_connection;
    <WPContinuityDelegate> *_delegate;
    int _state;
}

@property int btBandwidthState;
@property (nonatomic, retain) XPCClient *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WPContinuityDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property int state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)btBandwidthState;
- (void)connectToPeer:(id)arg1;
- (id)connection;
- (void)connectionDied;
- (void)connectionInterrupted;
- (void)dealloc;
- (id)delegate;
- (void)disconnectFromPeer:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)messageArrived:(id)arg1;
- (void)sendData:(id)arg1 toPeer:(id)arg2;
- (void)setBtBandwidthState:(int)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setState:(int)arg1;
- (void)startAdvertisingOfType:(int)arg1 withData:(id)arg2;
- (void)startScanningForType:(int)arg1 withData:(id)arg2;
- (void)startScanningForType:(int)arg1 withData:(id)arg2 peers:(id)arg3;
- (void)startTrackingPeer:(id)arg1 forType:(int)arg2;
- (int)state;
- (void)stopAdvertisingOfType:(int)arg1;
- (void)stopScanningForType:(int)arg1;
- (void)stopTrackingPeer:(id)arg1 forType:(int)arg2;
- (void)updateBluetoothBandwidthState:(int)arg1;
- (void)updateState:(int)arg1;

@end

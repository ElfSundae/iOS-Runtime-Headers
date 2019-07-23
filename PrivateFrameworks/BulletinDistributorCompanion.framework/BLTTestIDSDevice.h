/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTTestIDSDevice : NSObject <BLTAbstractIDSDevice> {
    BOOL _isConnected;
    BOOL _isDefaultPairedDevice;
    BOOL _isNearby;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isConnected;
@property (nonatomic) BOOL isDefaultPairedDevice;
@property (nonatomic) BOOL isNearby;
@property (readonly) Class superclass;

- (BOOL)isConnected;
- (BOOL)isDefaultPairedDevice;
- (BOOL)isNearby;
- (void)setIsConnected:(BOOL)arg1;
- (void)setIsDefaultPairedDevice:(BOOL)arg1;
- (void)setIsNearby:(BOOL)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentTransactionProcessor : NSObject <CLLocationManagerDelegate> {
    BOOL  _active;
    <PKPaymentTransactionProcessorDelegate> * _delegate;
    CLGeocoder * _geocoder;
    CLLocationManager * _locationManager;
    NSMutableSet * _locationUpdateItems;
    NSObject<OS_dispatch_source> * _locationUpdateTimeoutTimer;
    NSMutableSet * _merchantCleanupItems;
    PKUsageNotificationServer * _usageNotificationServer;
}

@property (getter=isActive, nonatomic, readonly) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentTransactionProcessorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic) PKUsageNotificationServer *usageNotificationServer;

- (void).cxx_destruct;
- (void)_abortUpdatingLocationForAllLocationUpdateItems;
- (void)_abortUpdatingLocationForLocationUpdateItem:(id)arg1;
- (void)_continueUpdatingLocationForTransactionUpdateItem:(id)arg1;
- (id)_pendingLocationUpdateItemForTransaction:(id)arg1;
- (id)_pendingMerchantCleanupItemForTransaction:(id)arg1;
- (void)_processItemForMerchantCleanup:(id)arg1;
- (void)_processPaymentTransactionForLocationUpdate:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3;
- (void)_processPaymentTransactionForMerchantCleanup:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3;
- (void)_startUpdatingLocationIfPossible;
- (void)_stopUpdatingLocationIfPossible;
- (void)_updateLocation:(id)arg1 forLocationUpdateItem:(id)arg2 andMarkAsProcessed:(BOOL)arg3;
- (id)delegate;
- (id)init;
- (BOOL)isActive;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)processPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setUsageNotificationServer:(id)arg1;
- (id)usageNotificationServer;

@end

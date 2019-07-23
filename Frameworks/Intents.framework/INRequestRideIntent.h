/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRequestRideIntent : INIntent <INRequestRideIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) CLPlacemark *dropOffLocation;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSNumber *partySize;
@property (nonatomic, readonly, copy) INPaymentMethod *paymentMethod;
@property (nonatomic, readonly, copy) CLPlacemark *pickupLocation;
@property (nonatomic, readonly, copy) INSpeakableString *rideOptionName;
@property (readonly) Class superclass;

- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned int)arg1;
- (id)_typedBackingStore;
- (id)dropOffLocation;
- (id)initWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 rideOptionName:(id)arg3 partySize:(id)arg4 paymentMethod:(id)arg5;
- (id)partySize;
- (id)paymentMethod;
- (id)pickupLocation;
- (id)rideOptionName;
- (void)setDropOffLocation:(id)arg1;
- (void)setPartySize:(id)arg1;
- (void)setPaymentMethod:(id)arg1;
- (void)setPickupLocation:(id)arg1;
- (void)setRideOptionName:(id)arg1;

@end

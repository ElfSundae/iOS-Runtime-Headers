/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFNullValueSource : NSObject <HFCharacteristicValueSource, HFMediaValueSource>

@property (nonatomic, readonly) NSError *cachedPlaybackStateWriteError;
@property (nonatomic, readonly) <HFCharacteristicOperationContextProviding> *contextProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPendingWrites;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (readonly) Class superclass;

+ (id)na_identity;

- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;
- (id)cachedPlaybackStateWriteError;
- (id)cachedValueForCharacteristic:(id)arg1;
- (void)commitTransactionWithReason:(id)arg1;
- (bool)hasPendingWrites;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)lastPlaybackStateForProfile;
- (id)mediaProfileContainer;
- (id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;
- (id)readValuesForCharacteristics:(id)arg1;
- (id)writePlaybackState:(long long)arg1;
- (id)writeValuesForCharacteristics:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKBinarySample : HKSample <HDCoding>

@property (readonly) _HKBinarySampleType *binaryType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) NSData *payload;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_binarySampleWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(double)arg4 binaryType:(id)arg5 startDate:(double)arg6 endDate:(double)arg7 payload:(id)arg8;

- (void)_setPayload:(id)arg1;
- (id)binaryType;
- (id)payload;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (BOOL)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

@end

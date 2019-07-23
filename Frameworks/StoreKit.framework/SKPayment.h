/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPayment : NSObject <NSCopying, NSMutableCopying> {
    id _internal;
}

@property (nonatomic, readonly, copy) NSString *applicationUsername;
@property (nonatomic, readonly, copy) NSString *partnerIdentifier;
@property (nonatomic, readonly, copy) NSString *partnerTransactionIdentifier;
@property (nonatomic, readonly, copy) NSString *productIdentifier;
@property (nonatomic, readonly) int quantity;
@property (nonatomic, readonly, copy) NSData *requestData;
@property (nonatomic, readonly, copy) NSDictionary *requestParameters;
@property (nonatomic, readonly) BOOL simulatesAskToBuyInSandbox;

+ (id)paymentWithProduct:(id)arg1;
+ (id)paymentWithProductIdentifier:(id)arg1;

- (id)applicationUsername;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)partnerIdentifier;
- (id)partnerTransactionIdentifier;
- (id)productIdentifier;
- (int)quantity;
- (id)requestData;
- (id)requestParameters;
- (BOOL)simulatesAskToBuyInSandbox;

@end
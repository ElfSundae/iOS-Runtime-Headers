/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSummaryItemValidator : NSObject <PKPaymentValidating> {
    PKPaymentSummaryItem *_item;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) PKPaymentSummaryItem *item;
@property (readonly) Class superclass;

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)arg1;

- (void)dealloc;
- (id)initWithPaymentSummaryItem:(id)arg1;
- (BOOL)isValidWithError:(id*)arg1;
- (id)item;

@end
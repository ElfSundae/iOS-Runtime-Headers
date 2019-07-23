/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKAggregateExpressionValidator : CKPredicateValidatorInstance {
    NSArray *_rangeValidators;
}

@property (nonatomic, retain) NSArray *rangeValidators;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)initWithValidators:(id)arg1;
- (id)rangeValidators;
- (void)setRangeValidators:(id)arg1;
- (BOOL)validate:(id)arg1 error:(id*)arg2;

@end

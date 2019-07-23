/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKNumericSuggestion : NSObject {
    NSString * _displayValue;
    BOOL  _usedMaximumSuggestion;
    NSDecimalNumber * _value;
}

@property (nonatomic, copy) NSString *displayValue;
@property (nonatomic) BOOL usedMaximumSuggestion;
@property (nonatomic, copy) NSDecimalNumber *value;

+ (id)suggestionWithValue:(id)arg1 currencyCode:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)displayValue;
- (unsigned int)hash;
- (id)initWithValue:(id)arg1 currencyCode:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)setDisplayValue:(id)arg1;
- (void)setUsedMaximumSuggestion:(BOOL)arg1;
- (void)setValue:(id)arg1;
- (BOOL)usedMaximumSuggestion;
- (id)value;

@end

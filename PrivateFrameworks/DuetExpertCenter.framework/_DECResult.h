/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECResult : NSObject <NSSecureCoding> {
    unsigned long long  _consumer;
    NSUUID * _identifier;
    long long  _reason;
    NSDictionary * _reasonMetadata;
    NSDictionary * _results;
}

@property (nonatomic, readonly) unsigned long long consumer;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic) long long reason;
@property (nonatomic, retain) NSDictionary *reasonMetadata;
@property (nonatomic, retain) NSDictionary *results;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)consumer;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithConsumer:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToResult:(id)arg1;
- (bool)isEquivalentToResult:(id)arg1 limit:(unsigned long long)arg2;
- (long long)reason;
- (id)reasonMetadata;
- (id)resultForCategory:(unsigned long long)arg1;
- (id)results;
- (void)setReason:(long long)arg1;
- (void)setReasonMetadata:(id)arg1;
- (void)setResults:(id)arg1;

@end

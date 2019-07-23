/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPhysicalCardOrder : NSObject <NSSecureCoding> {
    NSString * _artworkIdentifier;
    NSString * _nameOnCard;
    unsigned long long  _reason;
}

@property (nonatomic, copy) NSString *artworkIdentifier;
@property (nonatomic, copy) NSString *nameOnCard;
@property (nonatomic) unsigned long long reason;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artworkIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)nameOnCard;
- (unsigned long long)reason;
- (void)setArtworkIdentifier:(id)arg1;
- (void)setNameOnCard:(id)arg1;
- (void)setReason:(unsigned long long)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

@interface SPBeacon : NSObject <NSCopying, NSSecureCoding> {
    bool  _accepted;
    NSString * _correlationIdentifier;
    NSUUID * _identifier;
    SPLostModeInfo * _lostModeInfo;
    NSString * _model;
    NSString * _name;
    SPHandle * _owner;
    NSDate * _pairingDate;
    SPBeaconRole * _role;
    NSSet * _shares;
    NSString * _stableIdentifier;
    NSDictionary * _taskInformation;
}

@property (nonatomic) bool accepted;
@property (nonatomic, copy) NSString *correlationIdentifier;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) SPLostModeInfo *lostModeInfo;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) SPHandle *owner;
@property (nonatomic, copy) NSDate *pairingDate;
@property (nonatomic, copy) SPBeaconRole *role;
@property (nonatomic, copy) NSSet *shares;
@property (nonatomic, copy) NSString *stableIdentifier;
@property (nonatomic, copy) NSDictionary *taskInformation;

+ (id)SPOwner;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)accepted;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correlationIdentifier;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lostModeInfo;
- (id)model;
- (id)name;
- (id)owner;
- (id)pairingDate;
- (id)role;
- (void)setAccepted:(bool)arg1;
- (void)setCorrelationIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLostModeInfo:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setPairingDate:(id)arg1;
- (void)setRole:(id)arg1;
- (void)setShares:(id)arg1;
- (void)setStableIdentifier:(id)arg1;
- (void)setTaskInformation:(id)arg1;
- (id)shares;
- (id)stableIdentifier;
- (id)taskInformation;

@end

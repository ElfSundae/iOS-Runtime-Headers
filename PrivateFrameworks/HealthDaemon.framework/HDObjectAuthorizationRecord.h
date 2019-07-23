/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDObjectAuthorizationRecord : NSObject <NSSecureCoding> {
    double  _modificationDate;
    NSUUID * _objectID;
    NSUUID * _sourceID;
    int  _status;
}

@property (nonatomic) double modificationDate;
@property (nonatomic, copy) NSUUID *objectID;
@property (nonatomic, copy) NSUUID *sourceID;
@property (nonatomic) int status;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (double)modificationDate;
- (id)objectID;
- (void)setModificationDate:(double)arg1;
- (void)setObjectID:(id)arg1;
- (void)setSourceID:(id)arg1;
- (void)setStatus:(int)arg1;
- (id)sourceID;
- (int)status;

@end

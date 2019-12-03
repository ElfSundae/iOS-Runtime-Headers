/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTimepoint : NSObject <MNJSONOutput, NSCopying, NSSecureCoding> {
    NSDate * _date;
    long long  _type;
}

@property (nonatomic, readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (id)arriveBy:(id)arg1;
+ (id)leaveBy:(id)arg1;
+ (id)leaveNow;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 date:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (long long)type;

@end

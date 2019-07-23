/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreIRButton : NSObject <NSCopying, NSSecureCoding> {
    unsigned long _usageID;
    unsigned long _usagePage;
}

@property (nonatomic, readonly) unsigned long usageID;
@property (nonatomic, readonly) unsigned long usagePage;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsagePage:(unsigned long)arg1 usageID:(unsigned long)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long)usageID;
- (unsigned long)usagePage;

@end
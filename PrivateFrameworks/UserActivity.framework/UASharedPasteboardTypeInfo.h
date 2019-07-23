/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

@interface UASharedPasteboardTypeInfo : NSObject <NSCopying, NSSecureCoding> {
    NSFileHandle * _dataFile;
    NSNumber * _index;
    NSNumber * _offset;
    long long  _size;
    NSString * _type;
    NSUUID * _uuid;
}

@property (retain) NSFileHandle *dataFile;
@property (copy) NSNumber *index;
@property (copy) NSNumber *offset;
@property long long size;
@property (copy) NSString *type;
@property (copy) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataFile;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)index;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)offset;
- (void)setDataFile:(id)arg1;
- (void)setIndex:(id)arg1;
- (void)setOffset:(id)arg1;
- (void)setSize:(long long)arg1;
- (void)setType:(id)arg1;
- (void)setUuid:(id)arg1;
- (long long)size;
- (id)type;
- (id)uuid;

@end

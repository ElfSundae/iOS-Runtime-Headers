/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUUserActivityContext : NSObject <NSCopying, NSMutableCopying> {
    NSArray * _containerItems;
    int  _originatorType;
    int  _originatorVersion;
}

@property (nonatomic, readonly, copy) NSArray *containerItems;
@property (nonatomic, readonly, copy) NSData *dataRepresentation;
@property (nonatomic, readonly) int originatorType;
@property (nonatomic, readonly) int originatorVersion;

- (void).cxx_destruct;
- (id)containerItemFollowingContainerItem:(id)arg1;
- (id)containerItems;
- (id)contextByInsertingContainerItem:(id)arg1 afterContainerItem:(id)arg2;
- (id)contextByRemovingContainerItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (id)description;
- (unsigned int)hash;
- (id)initWithDataRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (int)originatorType;
- (int)originatorVersion;

@end

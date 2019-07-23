/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVDateRangeMetadataGroup : AVMetadataGroup <NSCopying, NSMutableCopying> {
    AVDateRangeMetadataGroupInternal *_priv;
}

@property (getter=_dateRangeMetadataGroupInternal, nonatomic, readonly) AVDateRangeMetadataGroupInternal *dateRangeMetadataGroupInternal;
@property (nonatomic, readonly) NSDate *discoveryTimestamp;
@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly) NSDate *modificationTimestamp;
@property (nonatomic, readonly, copy) NSDate *startDate;

+ (id)_figMetadataArrayForMetadataItems:(id)arg1;
+ (id)_metadataItemsForFigMetadataArray:(id)arg1;

- (id)_dateRangeMetadataGroupInternal;
- (void)_extractPropertiesFromTaggedRangeMetadataDictionary:(id)arg1;
- (id)_initWithTaggedRangeMetadataDictionary:(id)arg1 items:(id)arg2;
- (id)_taggedRangeMetadataDictionary;
- (id)classifyingLabel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)discoveryTimestamp;
- (id)endDate;
- (void)finalize;
- (unsigned int)hash;
- (id)init;
- (id)initWithItems:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)initWithPropertyList:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)items;
- (id)modificationTimestamp;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)propertyList;
- (id)startDate;
- (id)uniqueID;

@end

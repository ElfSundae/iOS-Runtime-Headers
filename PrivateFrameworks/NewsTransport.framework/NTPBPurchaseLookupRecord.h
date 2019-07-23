/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPurchaseLookupRecord : PBCodable <NSCopying> {
    NSString * _appAdamID;
    NTPBRecordBase * _base;
    NSMutableArray * _bundleChannelTagIDs;
    NSMutableArray * _channelTagIDs;
}

@property (nonatomic, retain) NSString *appAdamID;
@property (nonatomic, retain) NTPBRecordBase *base;
@property (nonatomic, retain) NSMutableArray *bundleChannelTagIDs;
@property (nonatomic, retain) NSMutableArray *channelTagIDs;
@property (nonatomic, readonly) bool hasAppAdamID;
@property (nonatomic, readonly) bool hasBase;

+ (Class)bundleChannelTagIDsType;
+ (Class)channelTagIDsType;

- (void)addBundleChannelTagIDs:(id)arg1;
- (void)addChannelTagIDs:(id)arg1;
- (id)appAdamID;
- (id)base;
- (id)bundleChannelTagIDs;
- (id)bundleChannelTagIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)bundleChannelTagIDsCount;
- (id)channelTagIDs;
- (id)channelTagIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)channelTagIDsCount;
- (void)clearBundleChannelTagIDs;
- (void)clearChannelTagIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppAdamID;
- (bool)hasBase;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppAdamID:(id)arg1;
- (void)setBase:(id)arg1;
- (void)setBundleChannelTagIDs:(id)arg1;
- (void)setChannelTagIDs:(id)arg1;
- (void)writeTo:(id)arg1;

@end

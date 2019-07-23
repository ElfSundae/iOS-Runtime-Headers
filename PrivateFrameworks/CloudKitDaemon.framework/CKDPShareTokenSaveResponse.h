/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareTokenSaveResponse : PBCodable <NSCopying> {
    NSString * _routingKey;
    NSString * _shareEtag;
}

@property (nonatomic, readonly) bool hasRoutingKey;
@property (nonatomic, readonly) bool hasShareEtag;
@property (nonatomic, retain) NSString *routingKey;
@property (nonatomic, retain) NSString *shareEtag;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRoutingKey;
- (bool)hasShareEtag;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)routingKey;
- (void)setRoutingKey:(id)arg1;
- (void)setShareEtag:(id)arg1;
- (id)shareEtag;
- (void)writeTo:(id)arg1;

@end

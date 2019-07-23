/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPLikeRequest : PBRequest <NSCopying> {
    CKDPLikedId *_identifier;
}

@property (nonatomic, readonly) BOOL hasIdentifier;
@property (nonatomic, retain) CKDPLikedId *identifier;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIdentifier;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end

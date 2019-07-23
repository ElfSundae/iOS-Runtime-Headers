/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordChainParent : PBCodable <NSCopying> {
    NSData * _publicKeyID;
    CKDPRecordReference * _reference;
}

@property (nonatomic, readonly) BOOL hasPublicKeyID;
@property (nonatomic, readonly) BOOL hasReference;
@property (nonatomic, retain) NSData *publicKeyID;
@property (nonatomic, retain) CKDPRecordReference *reference;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPublicKeyID;
- (BOOL)hasReference;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)publicKeyID;
- (BOOL)readFrom:(id)arg1;
- (id)reference;
- (void)setPublicKeyID:(id)arg1;
- (void)setReference:(id)arg1;
- (void)writeTo:(id)arg1;

@end

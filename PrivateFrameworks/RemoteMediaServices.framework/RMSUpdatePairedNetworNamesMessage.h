/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSUpdatePairedNetworNamesMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int sessionIdentifier : 1; 
    } _has;
    NSMutableArray *_pairedNetworkNames;
    int _sessionIdentifier;
}

@property (nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic, retain) NSMutableArray *pairedNetworkNames;
@property (nonatomic) int sessionIdentifier;

- (void).cxx_destruct;
- (void)addPairedNetworkNames:(id)arg1;
- (void)clearPairedNetworkNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSessionIdentifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pairedNetworkNames;
- (id)pairedNetworkNamesAtIndex:(unsigned int)arg1;
- (unsigned int)pairedNetworkNamesCount;
- (BOOL)readFrom:(id)arg1;
- (int)sessionIdentifier;
- (void)setHasSessionIdentifier:(BOOL)arg1;
- (void)setPairedNetworkNames:(id)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)writeTo:(id)arg1;

@end

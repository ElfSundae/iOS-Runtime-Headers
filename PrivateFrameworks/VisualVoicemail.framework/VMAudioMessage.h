/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMAudioMessage : PBCodable <NSCopying> {
    NSData * _audioData;
    struct { 
        unsigned int protocolVersion : 1; 
    }  _has;
    unsigned int  _protocolVersion;
}

@property (nonatomic, retain) NSData *audioData;
@property (nonatomic, readonly) bool hasAudioData;
@property (nonatomic) bool hasProtocolVersion;
@property (nonatomic) unsigned int protocolVersion;

- (void).cxx_destruct;
- (id)audioData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAudioData;
- (bool)hasProtocolVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)protocolVersion;
- (bool)readFrom:(id)arg1;
- (void)setAudioData:(id)arg1;
- (void)setHasProtocolVersion:(bool)arg1;
- (void)setProtocolVersion:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end

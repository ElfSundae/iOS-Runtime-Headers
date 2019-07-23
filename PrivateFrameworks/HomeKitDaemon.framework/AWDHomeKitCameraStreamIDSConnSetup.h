/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitCameraStreamIDSConnSetup : PBCodable <NSCopying> {
    AWDHomeKitCameraStreamIDSConnSetupParameters * _audioConnection;
    AWDHomeKitCameraStreamIDSConnSetupParameters * _keepaliveConnection;
    AWDHomeKitCameraStreamIDSConnSetupParameters * _videoConnection;
}

@property (nonatomic, retain) AWDHomeKitCameraStreamIDSConnSetupParameters *audioConnection;
@property (nonatomic, readonly) BOOL hasAudioConnection;
@property (nonatomic, readonly) BOOL hasKeepaliveConnection;
@property (nonatomic, readonly) BOOL hasVideoConnection;
@property (nonatomic, retain) AWDHomeKitCameraStreamIDSConnSetupParameters *keepaliveConnection;
@property (nonatomic, retain) AWDHomeKitCameraStreamIDSConnSetupParameters *videoConnection;

- (void).cxx_destruct;
- (id)audioConnection;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAudioConnection;
- (BOOL)hasKeepaliveConnection;
- (BOOL)hasVideoConnection;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)keepaliveConnection;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAudioConnection:(id)arg1;
- (void)setKeepaliveConnection:(id)arg1;
- (void)setVideoConnection:(id)arg1;
- (id)videoConnection;
- (void)writeTo:(id)arg1;

@end

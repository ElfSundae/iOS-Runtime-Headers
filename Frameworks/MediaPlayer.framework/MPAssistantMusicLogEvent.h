/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAssistantMusicLogEvent : NSObject <MPAssistantLogEvent> {
    unsigned int  _sessionID;
    NSString * _siriSessionIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long eventCode;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) NSMutableDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int sessionID;
@property (nonatomic, copy) NSString *siriSessionIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)eventCode;
- (id)eventName;
- (id)eventPayload;
- (unsigned int)sessionID;
- (void)setSessionID:(unsigned int)arg1;
- (void)setSiriSessionIdentifier:(id)arg1;
- (id)siriSessionIdentifier;

@end

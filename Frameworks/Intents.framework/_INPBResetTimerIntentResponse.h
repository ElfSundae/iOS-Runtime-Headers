/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBResetTimerIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBResetTimerIntentResponse> {
    struct { }  _has;
    NSArray * _resetTimers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *resetTimers;
@property (nonatomic, readonly) unsigned long long resetTimersCount;
@property (readonly) Class superclass;

+ (Class)resetTimersType;

- (void).cxx_destruct;
- (void)addResetTimers:(id)arg1;
- (void)clearResetTimers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)resetTimers;
- (id)resetTimersAtIndex:(unsigned long long)arg1;
- (unsigned long long)resetTimersCount;
- (void)setResetTimers:(id)arg1;
- (void)writeTo:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKTournamentParticipant : NSObject <NSSecureCoding> {
    GKTournamentParticipantInternal * _internal;
    GKPlayer * _player;
}

@property (nonatomic, readonly) bool cheatingIndicator;
@property (retain) GKTournamentParticipantInternal *internal;
@property (nonatomic, readonly) long long participantState;
@property (nonatomic, retain) GKPlayer *player;
@property (nonatomic, readonly) long long playerGroup;
@property (nonatomic, readonly) long long replayCount;
@property (nonatomic, readonly) long long score;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (id)player;
- (void)setInternal:(id)arg1;
- (void)setPlayer:(id)arg1;

@end

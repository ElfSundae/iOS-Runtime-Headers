/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFRequestInfo : NSObject <NSSecureCoding> {
    long long  _activationEvent;
    NSNumber * _combinedRank;
    NSNumber * _combinedScore;
    NSString * _correctedSpeech;
    NSDictionary * _correctedSpeechContext;
    NSString * _directAction;
    NSString * _handoffNotification;
    NSString * _handoffOriginDeviceName;
    NSData * _handoffRequestData;
    bool  _handoffRequiresUserInteraction;
    NSString * _handoffURLString;
    NSString * _interactionId;
    NSNumber * _notifyState;
    NSNumber * _onDeviceUtterancesPresent;
    NSNumber * _originalRank;
    NSNumber * _originalScore;
    NSString * _previousUtterance;
    NSString * _sessionId;
    SAStartLocalRequest * _startLocalRequest;
    SAStartRequest * _startRequest;
    bool  _suppressAlert;
    NSString * _text;
    NSString * _utteranceSource;
}

@property (nonatomic) long long activationEvent;
@property (nonatomic, copy) NSNumber *combinedRank;
@property (nonatomic, copy) NSNumber *combinedScore;
@property (nonatomic, copy) NSString *correctedSpeech;
@property (nonatomic, copy) NSDictionary *correctedSpeechContext;
@property (nonatomic, copy) NSString *directAction;
@property (nonatomic, copy) NSString *handoffNotification;
@property (nonatomic, copy) NSString *handoffOriginDeviceName;
@property (nonatomic, copy) NSData *handoffRequestData;
@property (nonatomic) bool handoffRequiresUserInteraction;
@property (nonatomic, copy) NSString *handoffURLString;
@property (nonatomic, copy) NSString *interactionId;
@property (nonatomic, copy) NSNumber *notifyState;
@property (nonatomic, copy) NSNumber *onDeviceUtterancesPresent;
@property (nonatomic, copy) NSNumber *originalRank;
@property (nonatomic, copy) NSNumber *originalScore;
@property (nonatomic, copy) NSString *previousUtterance;
@property (nonatomic, copy) NSString *sessionId;
@property (nonatomic, copy) SAStartLocalRequest *startLocalRequest;
@property (nonatomic, copy) SAStartRequest *startRequest;
@property (nonatomic) bool suppressAlert;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *utteranceSource;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)activationEvent;
- (id)combinedRank;
- (id)combinedScore;
- (id)correctedSpeech;
- (id)correctedSpeechContext;
- (id)description;
- (id)directAction;
- (void)encodeWithCoder:(id)arg1;
- (id)handoffNotification;
- (id)handoffOriginDeviceName;
- (id)handoffRequestData;
- (bool)handoffRequiresUserInteraction;
- (id)handoffURLString;
- (id)initWithCoder:(id)arg1;
- (id)interactionId;
- (id)notifyState;
- (id)onDeviceUtterancesPresent;
- (id)originalRank;
- (id)originalScore;
- (id)previousUtterance;
- (bool)requiresUserInteraction;
- (id)sessionId;
- (void)setActivationEvent:(long long)arg1;
- (void)setCombinedRank:(id)arg1;
- (void)setCombinedScore:(id)arg1;
- (void)setCorrectedSpeech:(id)arg1;
- (void)setCorrectedSpeechContext:(id)arg1;
- (void)setDirectAction:(id)arg1;
- (void)setHandoffNotification:(id)arg1;
- (void)setHandoffOriginDeviceName:(id)arg1;
- (void)setHandoffRequestData:(id)arg1;
- (void)setHandoffRequiresUserInteraction:(bool)arg1;
- (void)setHandoffURLString:(id)arg1;
- (void)setInteractionId:(id)arg1;
- (void)setNotifyState:(id)arg1;
- (void)setOnDeviceUtterancesPresent:(id)arg1;
- (void)setOriginalRank:(id)arg1;
- (void)setOriginalScore:(id)arg1;
- (void)setPreviousUtterance:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setStartLocalRequest:(id)arg1;
- (void)setStartRequest:(id)arg1;
- (void)setSuppressAlert:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setUtteranceSource:(id)arg1;
- (id)startLocalRequest;
- (id)startRequest;
- (bool)suppressAlert;
- (id)text;
- (id)utteranceSource;

@end

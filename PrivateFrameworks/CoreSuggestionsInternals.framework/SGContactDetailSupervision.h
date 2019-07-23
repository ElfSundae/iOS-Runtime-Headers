/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGContactDetailSupervision : NSObject {
    unsigned long long  _ignoreAfter;
    bool  _isFirstPerson;
    bool  _isThirdPerson;
    bool  _isUnlikelyPhone;
    NSDate * _matchDate;
    bool  _regexBelongsToSender;
    bool  _regexDoesNotBelongToSender;
    NSString * _senderDisplayName;
}

@property (nonatomic) unsigned long long ignoreAfter;
@property (nonatomic) bool isFirstPerson;
@property (nonatomic) bool isThirdPerson;
@property (nonatomic) bool isUnlikelyPhone;
@property (nonatomic) NSDate *matchDate;
@property (nonatomic) bool regexBelongsToSender;
@property (nonatomic) bool regexDoesNotBelongToSender;
@property (nonatomic) NSString *senderDisplayName;

- (void).cxx_destruct;
- (unsigned long long)ignoreAfter;
- (id)initWithEntity:(id)arg1 ddMatch:(id)arg2 isUnlikelyPhone:(bool)arg3;
- (bool)isFirstPerson;
- (bool)isThirdPerson;
- (bool)isUnlikelyPhone;
- (id)matchDate;
- (struct SGMContactDetailFoundIn_ { unsigned long long x1; })metricsContactDetailFoundIn;
- (struct SGMContactDetailOwner_ { unsigned long long x1; })metricsContactDetailOwner;
- (bool)regexBelongsToSender;
- (bool)regexDoesNotBelongToSender;
- (id)senderDisplayName;
- (void)setIgnoreAfter:(unsigned long long)arg1;
- (void)setIsFirstPerson:(bool)arg1;
- (void)setIsThirdPerson:(bool)arg1;
- (void)setIsUnlikelyPhone:(bool)arg1;
- (void)setMatchDate:(id)arg1;
- (void)setRegexBelongsToSender:(bool)arg1;
- (void)setRegexDoesNotBelongToSender:(bool)arg1;
- (void)setSenderDisplayName:(id)arg1;

@end

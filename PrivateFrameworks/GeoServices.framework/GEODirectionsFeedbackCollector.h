/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsFeedbackCollector : NSObject {
    GEODirectionsFeedback * _currentDirectionsFeedback;
    double  _currentDirectionsModeStartTime;
    GEODirectionsFeedbackLogMessage * _currentFeedbackLogMessage;
    bool  _hasEnteredPreArrivalMode;
    NSMutableArray * _navigationModes;
    double  _originalExpectedTime;
}

@property (nonatomic, retain) GEODirectionsFeedback *currentDirectionsFeedback;
@property (nonatomic, retain) GEODirectionsFeedbackLogMessage *currentFeedbackLogMessage;

- (void).cxx_destruct;
- (void)_updateFeedbackSessionWithResponseID:(id)arg1;
- (void)addAlightNotificationFeedback:(id)arg1;
- (void)addGuidanceEventFeedback:(id)arg1;
- (void)addRouteID:(id)arg1 routeIndex:(unsigned int)arg2 stepID:(unsigned int)arg3 completeStep:(bool)arg4;
- (void)addStepFeedback:(id)arg1;
- (void)addTrafficRerouteFeedback:(id)arg1;
- (void)changeNavigationType:(int)arg1;
- (id)currentDirectionsFeedback;
- (id)currentFeedbackLogMessage;
- (void)dealloc;
- (id)description;
- (void)endFeedbackSessionWithTracePath:(id)arg1;
- (void)reset;
- (void)setAudioFeedback:(struct GEONavigationAudioFeedback { bool x1; bool x2; bool x3; int x4; bool x5; bool x6; bool x7; bool x8; bool x9; unsigned int x10; unsigned int x11; unsigned int x12; bool x13; unsigned int x14; bool x15; bool x16; bool x17; bool x18; struct { unsigned int x_19_1_1 : 1; unsigned int x_19_1_2 : 1; unsigned int x_19_1_3 : 1; unsigned int x_19_1_4 : 1; unsigned int x_19_1_5 : 1; unsigned int x_19_1_6 : 1; unsigned int x_19_1_7 : 1; unsigned int x_19_1_8 : 1; unsigned int x_19_1_9 : 1; unsigned int x_19_1_10 : 1; unsigned int x_19_1_11 : 1; unsigned int x_19_1_12 : 1; unsigned int x_19_1_13 : 1; unsigned int x_19_1_14 : 1; unsigned int x_19_1_15 : 1; unsigned int x_19_1_16 : 1; unsigned int x_19_1_17 : 1; unsigned int x_19_1_18 : 1; } x19; }*)arg1;
- (void)setCurrentDirectionsFeedback:(id)arg1;
- (void)setCurrentFeedbackLogMessage:(id)arg1;
- (void)setFinalLocation:(id)arg1 asArrival:(bool)arg2;
- (void)setHasEnteredPreArrivalMode:(bool)arg1;
- (void)setModalities:(id)arg1;
- (void)setOriginalExpectedTime:(double)arg1;
- (void)setupFeedbackSessionWithResponseID:(id)arg1;
- (void)startFeedbackSessionForResponseID:(id)arg1 withNavigationType:(int)arg2;

@end

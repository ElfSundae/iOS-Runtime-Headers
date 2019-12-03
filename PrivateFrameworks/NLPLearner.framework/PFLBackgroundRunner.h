/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NLPLearner.framework/NLPLearner
 */

@interface PFLBackgroundRunner : NSObject <_DASExtensionRunner> {
    _DASActivity * _activity;
    BKSProcessAssertion * _assertion;
    QuickTypePFLBackgroundTask * _task;
}

@property (nonatomic, readonly) _DASActivity *activity;
@property (nonatomic, retain) BKSProcessAssertion *assertion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) QuickTypePFLBackgroundTask *task;

+ (void)initialize;

- (void).cxx_destruct;
- (id)activity;
- (id)assertion;
- (void)cleanup;
- (id)init;
- (bool)prepareForActivity:(id)arg1;
- (void)setAssertion:(id)arg1;
- (void)setTask:(id)arg1;
- (unsigned char)start;
- (void)stop;
- (id)task;

@end

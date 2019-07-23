/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSMessagePortFeature : NSObject <IKDOMFeature, VSJSMessagePortDelegate> {
    IKAppContext * _appContext;
    <VSMessagePortFeatureDelegate> * _delegate;
    NSString * _featureName;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSMessagePortFeatureDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)makeFeatureJSObjectForFeature:(id)arg1;

- (void).cxx_destruct;
- (id)appContext;
- (id)delegate;
- (id)featureName;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;
- (void)messagePort:(id)arg1 didReceiveMessage:(id)arg2;
- (void)setDelegate:(id)arg1;

@end

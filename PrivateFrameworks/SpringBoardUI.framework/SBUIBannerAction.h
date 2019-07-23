/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIBannerAction : NSObject {
    id /* block */ _actionBlock;
    unsigned int _activationMode;
    unsigned int _behavior;
    NSString *_identifier;
    NSDictionary *_parameters;
    NSString *_remoteServiceBundleIdentifier;
    NSString *_remoteViewControllerClassName;
}

@property (nonatomic, copy) id /* block */ actionBlock;
@property (nonatomic, readonly) unsigned int activationMode;
@property (nonatomic) unsigned int behavior;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDictionary *parameters;
@property (nonatomic, copy) NSString *remoteServiceBundleIdentifier;
@property (nonatomic, copy) NSString *remoteViewControllerClassName;

+ (id)actionWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id /* block */)actionBlock;
- (unsigned int)activationMode;
- (unsigned int)behavior;
- (id)identifier;
- (id)initWithActionBlock:(id /* block */)arg1 remoteViewControllerClassName:(id)arg2 remoteServiceBundleIdentifier:(id)arg3 actionIdentifier:(id)arg4 activationMode:(unsigned int)arg5 behavior:(unsigned int)arg6 parameters:(id)arg7;
- (id)parameters;
- (id)remoteServiceBundleIdentifier;
- (id)remoteViewControllerClassName;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setBehavior:(unsigned int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setRemoteServiceBundleIdentifier:(id)arg1;
- (void)setRemoteViewControllerClassName:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

@interface AudioComponentPrefRegConnection : NSObject <AudioComponentPreferenceProtocol> {
    struct ConnectionInfo { 
        NSXPCConnection *mConnection; 
        int mExtUsePermission; 
        int mSDKLinkVersion; 
    }  mConnInfo;
    struct AudioComponentRegistrarImpl { bool x1; bool x2; bool x3; bool x4; id x5; struct function<void (const AudioComponentVector &, AudioComponentVector &)>={__value_func<void (const AudioComponentVector &, AudioComponentVector &)>={type=[24C] {} x6; struct __base<void (const AudioComponentVector &, AudioComponentVector &)> {} *x7; } * mImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)getComponentUserTags:(id)arg1 reply:(id /* block */)arg2;
- (void)getExtensionComponentList:(id)arg1 linkedSDKVersion:(int)arg2 reply:(id /* block */)arg3;
- (void)getExtensionIcon:(id)arg1 reply:(id /* block */)arg2;
- (void)getInterAppIcon:(id)arg1 reply:(id /* block */)arg2;
- (id)initWithRegistrar:(struct AudioComponentRegistrarImpl { bool x1; bool x2; bool x3; bool x4; id x5; struct function<void (const AudioComponentVector &, AudioComponentVector &)>={__value_func<void (const AudioComponentVector &, AudioComponentVector &)>={type=[24C] {} x6; struct __base<void (const AudioComponentVector &, AudioComponentVector &)> {} *x7; }*)arg1 connection:(id)arg2;
- (void)setComponentUserTags:(id)arg1 tags:(id)arg2;
- (void)setExtensionComponentList:(id)arg1 linkedSDKVersion:(int)arg2 components:(id)arg3 reply:(id /* block */)arg4;

@end

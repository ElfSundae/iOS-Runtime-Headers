/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPTemplateApplicationScene : UIScene <CPWindowProviding, UICoordinateSpace, _UIContextBinderContextCreationPolicyHolding, _UISceneUIWindowHosting> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    CPWindow * _carWindow;
    _UIContextBinder * _contextBinder;
    <NSObject> * _didFinishLaunchingObserver;
    CPInterfaceController * _interfaceController;
    bool  _sceneWillConnect;
    <NSObject> * _sceneWillConnectObserver;
    UIScreen * _screen;
    long long  _screenRequestedOverscanCompensation;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, readonly) <UICoordinateSpace> *_coordinateSpace;
@property (nonatomic, readonly) long long _interfaceOrientation;
@property (nonatomic, readonly) UIScreen *_screen;
@property (nonatomic, readonly) UITraitCollection *_traitCollection;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, retain) CPWindow *carWindow;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <CPTemplateApplicationSceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPInterfaceController *interfaceController;
@property (readonly) Class superclass;

+ (bool)_hostsWindows;
+ (id)activeTemplateScene;

- (void).cxx_destruct;
- (id)_allWindowsIncludingInternalWindows:(bool)arg1 onlyVisibleWindows:(bool)arg2;
- (void)_attachWindow:(id)arg1;
- (id)_componentForKey:(id)arg1;
- (id)_coordinateSpace;
- (id)_definition;
- (void)_deliverInterfaceControllerToDelegate;
- (void)_detachWindow:(id)arg1;
- (id)_fbsSceneLayerForWindow:(id)arg1;
- (long long)_interfaceOrientation;
- (void)_invalidate;
- (bool)_permitContextCreationForBindingDescription:(struct { id x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; })arg1;
- (void)_readySceneForConnection;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_safeAreaInsetsForInterfaceOrientation:(long long)arg1;
- (id)_screen;
- (id)_traitCollection;
- (void)_updateVisibleWindowOrderWithTest:(id /* block */)arg1;
- (void)_windowUpdatedProperties:(id)arg1;
- (void)_windowUpdatedVisibility:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)carWindow;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toCoordinateSpace:(id)arg2;
- (id)initWithSession:(id)arg1 connectionOptions:(id)arg2;
- (id)interfaceController;
- (void)setCarWindow:(id)arg1;
- (void)updateLayoutGuideWithInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end

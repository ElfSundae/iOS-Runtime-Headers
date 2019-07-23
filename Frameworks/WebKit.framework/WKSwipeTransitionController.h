/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKSwipeTransitionController : NSObject <_UINavigationInteractiveTransitionBaseDelegate> {
    struct RetainPtr<_UINavigationInteractiveTransitionBase> { 
        void *m_ptr; 
    }  _backTransitionController;
    struct RetainPtr<_UINavigationInteractiveTransitionBase> { 
        void *m_ptr; 
    }  _forwardTransitionController;
    struct ViewGestureController { int (**x1)(); struct WebPageProxy {} *x2; int x3; struct Timer<WebKit::ViewGestureController> { int (**x_4_1_1)(); struct RunLoop {} *x_4_1_2; struct RetainPtr<__CFRunLoopTimer *> { void *x_3_2_1; } x_4_1_3; struct ViewGestureController {} *x_4_1_4; } x4; struct Color { unsigned int x_5_1_1; bool x_5_1_2; } x5; id x6; /* Warning: Unrecognized filer type: 'R' using 'void*' */ void*x7; void*x8; void*x9; void*x10; int x11; in void*x12; void*x13; const void*x14; void*x15; unsigned int x16; oneway int x17; void*x18; void*x19; void*x20; void*x21; void *x22; } * _gestureController;
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<UIView>="m_weakReference"@}' */ struct WeakObjCPtr<UIView> { 
        id m_weakReference; 
    }  _gestureRecognizerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)directionForTransition:(id)arg1;
- (id)gestureRecognizerForInteractiveTransition:(id)arg1 WithTarget:(id)arg2 action:(SEL)arg3;
- (id)initWithViewGestureController:(struct ViewGestureController { int (**x1)(); struct WebPageProxy {} *x2; int x3; struct Timer<WebKit::ViewGestureController> { int (**x_4_1_1)(); struct RunLoop {} *x_4_1_2; struct RetainPtr<__CFRunLoopTimer *> { void *x_3_2_1; } x_4_1_3; struct ViewGestureController {} *x_4_1_4; } x4; struct Color { unsigned int x_5_1_1; bool x_5_1_2; } x5; id x6; /* Warning: Unrecognized filer type: 'R' using 'void*' */ void*x7; void*x8; void*x9; void*x10; int x11; in void*x12; void*x13; const void*x14; void*x15; unsigned int x16; oneway int x17; void*x18; void*x19; void*x20; void*x21; void *x22; }*)arg1 gestureRecognizerView:(id)arg2;
- (BOOL)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (BOOL)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg3;
- (void)invalidate;
- (BOOL)shouldBeginInteractiveTransition:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;

@end

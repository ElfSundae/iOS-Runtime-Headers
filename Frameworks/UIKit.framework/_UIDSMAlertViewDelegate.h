/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDSMAlertViewDelegate : NSObject <UIAlertViewDelegate> {
    id /* block */ _completionHandler;
}

@property (copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)willPresentAlertView:(id)arg1;

@end
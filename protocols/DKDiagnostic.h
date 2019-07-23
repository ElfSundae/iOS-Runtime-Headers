/* Generated by RuntimeBrowser.
 */

@protocol DKDiagnostic <NSObject>

@required

- (BOOL)isCancelled;
- (BOOL)isFinished;
- (DKMutableResult *)result;
- (void)setFinished:(BOOL)arg1;
- (void)setResult:(DKMutableResult *)arg1;
- (void)start;

@optional

- (void)cancel;
- (void)setupWithInputs:(id <DKDiagnosticInputs>)arg1 responder:(id <DKResponder>)arg2;
- (void)teardown;

@end

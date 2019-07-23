/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCEditorialCatchUpOperation : FCOperation {
    id /* block */  _catchUpCompletionHandler;
    FCCloudContext * _context;
    NSDate * _date;
    NSError * _error;
    NSArray * _sectionGroups;
}

@property (copy) id /* block */ catchUpCompletionHandler;
@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, retain) NSDate *date;
@property (retain) NSError *error;
@property (copy) NSArray *sectionGroups;

- (void).cxx_destruct;
- (void)_checkShouldShowEditorialWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)catchUpCompletionHandler;
- (id)context;
- (id)date;
- (void)enumerateEditorialSectionsByRecencyWithBlock:(id /* block */)arg1;
- (id)error;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)sectionGroups;
- (void)setCatchUpCompletionHandler:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setSectionGroups:(id)arg1;
- (BOOL)validateOperation;

@end

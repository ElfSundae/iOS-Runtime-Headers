/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
 */

@interface SPUITestingHelper : NSObject {
    bool  _finishedKeyboardLaunch;
    bool  _finishedTableUpdate;
    SPUISearchViewController * _searchViewController;
    SPUIPPTTypingHelper * _typingHelper;
}

@property (readonly) UIApplication *activeApp;
@property bool finishedKeyboardLaunch;
@property bool finishedTableUpdate;
@property (retain) SPUISearchViewController *searchViewController;
@property (retain) SPUIPPTTypingHelper *typingHelper;

- (void).cxx_destruct;
- (id)activeApp;
- (bool)canPerformTest:(id)arg1;
- (void)finishLaunchTestIfNeeded;
- (bool)finishedKeyboardLaunch;
- (bool)finishedTableUpdate;
- (id)initWithSearchViewController:(id)arg1;
- (void)performCardScrollTest:(id)arg1 completion:(id /* block */)arg2;
- (void)performTest:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)scrollForSectionHeader:(id)arg1 forSearchString:(id)arg2 testName:(id)arg3 completion:(id /* block */)arg4;
- (void)scrollMainResultsForTest:(id)arg1 forQuery:(id)arg2 completion:(id /* block */)arg3;
- (void)searchForString:(id)arg1 testName:(id)arg2 event:(unsigned long long)arg3 sourcePreference:(long long)arg4 completion:(id /* block */)arg5;
- (void)searchManyStringsForTestName:(id)arg1 options:(id)arg2 event:(unsigned long long)arg3 sourcePreference:(long long)arg4 completion:(id /* block */)arg5;
- (id)searchViewController;
- (void)setDefaultsForSearchVC;
- (void)setFinishedKeyboardLaunch:(bool)arg1;
- (void)setFinishedTableUpdate:(bool)arg1;
- (void)setSearchViewController:(id)arg1;
- (void)setTypingHelper:(id)arg1;
- (id)typingHelper;

@end
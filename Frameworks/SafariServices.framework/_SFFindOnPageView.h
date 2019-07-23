/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFFindOnPageView : UIView <UIKeyInput, _SFFindOnPageToolbarDelegate, _WKFindDelegate> {
    <_SFFindOnPageViewDelegate> * _delegate;
    NSString * _findString;
    long long  _highlightedMatchIndex;
    bool  _isShowing;
    unsigned long long  _numberOfFindMatches;
    bool  _requiresKeyboard;
    bool  _shouldFocusTextField;
    _SFFindOnPageToolbar * _toolbar;
    bool  _usesNarrowLayout;
    WKWebView * _webView;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <_SFFindOnPageViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, copy) NSString *findString;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long highlightedMatchIndex;
@property (nonatomic, readonly) bool isFocused;
@property (nonatomic, readonly) bool isShowing;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic) unsigned long long numberOfFindMatches;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) bool shouldFocusTextField;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic) bool usesNarrowLayout;
@property (nonatomic) WKWebView *webView;

+ (unsigned long long)_maximumNumberOfMatches;
+ (long long)_undefinedMatchIndex;
+ (unsigned long long)_undefinedNumberOfMatches;

- (void).cxx_destruct;
- (void)_advance:(id)arg1;
- (void)_dismiss:(id)arg1;
- (bool)_requiresKeyboardWhenFirstResponder;
- (void)_setFindingInWebViewIfNeeded;
- (void)_webView:(id)arg1 didCountMatches:(unsigned long long)arg2 forString:(id)arg3;
- (void)_webView:(id)arg1 didFailToFindString:(id)arg2;
- (void)_webView:(id)arg1 didFindMatches:(unsigned long long)arg2 forString:(id)arg3 withMatchIndex:(long long)arg4;
- (bool)canBecomeFirstResponder;
- (id)delegate;
- (void)deleteBackward;
- (void)didMoveToSuperview;
- (void)dismissFindOnPage;
- (void)done;
- (id)findString;
- (id)findTextField;
- (void)getShortMatchLabelText:(id*)arg1 longMatchLabelText:(id*)arg2;
- (bool)hasMatches;
- (bool)hasText;
- (void)hideFindOnPage;
- (long long)highlightedMatchIndex;
- (id)initWithDelegate:(id)arg1;
- (id)inputAccessoryView;
- (void)insertText:(id)arg1;
- (bool)isFocused;
- (bool)isShowing;
- (id)keyCommands;
- (id)matchLabelText;
- (void)next;
- (unsigned long long)numberOfFindMatches;
- (void)prepareFindOnPageWithString:(id)arg1;
- (void)previous;
- (void)selectFindOnPageText;
- (void)setFindString:(id)arg1;
- (void)setHighlightedMatchIndex:(long long)arg1;
- (void)setNumberOfFindMatches:(unsigned long long)arg1;
- (void)setShouldFocusTextField:(bool)arg1;
- (void)setUsesNarrowLayout:(bool)arg1;
- (void)setWebView:(id)arg1;
- (bool)shouldFocusTextField;
- (void)showFindOnPage;
- (id)textForToolbarLabel;
- (id)toolbar;
- (void)updateSearchText:(id)arg1;
- (void)updateUI;
- (bool)usesNarrowLayout;
- (id)webView;

@end

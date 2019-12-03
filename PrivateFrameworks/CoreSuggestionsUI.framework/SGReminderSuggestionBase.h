/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

@interface SGReminderSuggestionBase : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions> {
    SGReminder * _reminder;
    <SGSuggestionDelegate> * _suggestionDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SGSuggestionDelegate> *suggestionDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithRealtimeReminder:(id)arg1;
- (id)primaryActionTitle;
- (id)realtimeSuggestion;
- (void)setSuggestionDelegate:(id)arg1;
- (id)suggestionAttributedSubtitle;
- (id)suggestionCategory;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryLocalizedCountOfItems:(id)arg1;
- (id)suggestionCategorySubtitleForItems:(id)arg1;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryTitleForItems:(id)arg1;
- (id)suggestionDelegate;
- (id)suggestionDismissAction;
- (id)suggestionPrimaryAction;
- (id)suggestionSubtitle;
- (id)suggestionTitle;
- (id)suggestionsSecondTitle;

@end

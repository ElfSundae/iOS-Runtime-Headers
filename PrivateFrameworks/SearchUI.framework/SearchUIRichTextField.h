/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIRichTextField : UIView {
    UIView *_contentAdvisoryView;
    BOOL _hasIcons;
    NSArray *_orderedLayoutItems;
    SearchUIRichTextData *_richTextData;
    UIView *_starRatingView;
    unsigned int _style;
    UILabel *_textLabel;
}

@property (retain) UIView *contentAdvisoryView;
@property BOOL hasIcons;
@property (retain) NSArray *orderedLayoutItems;
@property (retain) SearchUIRichTextData *richTextData;
@property (retain) UIView *starRatingView;
@property unsigned int style;
@property (retain) UILabel *textLabel;

+ (BOOL)richTextIsSingleTextField:(id)arg1;
+ (BOOL)richTextNeedsFancyVibrancy:(id)arg1;

- (void).cxx_destruct;
- (id)contentAdvisoryView;
- (BOOL)hasIcons;
- (id)initWithRichText:(id)arg1 font:(id)arg2 style:(unsigned int)arg3;
- (void)layoutViewsHorizontally;
- (id)orderedLayoutItems;
- (id)richTextData;
- (void)setContentAdvisoryView:(id)arg1;
- (void)setHasIcons:(BOOL)arg1;
- (void)setOrderedLayoutItems:(id)arg1;
- (void)setPreferredMaxLayoutWidth:(float)arg1;
- (void)setRichTextData:(id)arg1;
- (void)setStarRatingView:(id)arg1;
- (void)setStyle:(unsigned int)arg1;
- (void)setTextLabel:(id)arg1;
- (id)starRatingView;
- (unsigned int)style;
- (id)textLabel;
- (BOOL)updateWithRichText:(id)arg1;
- (id)viewForLastBaselineLayout;

@end

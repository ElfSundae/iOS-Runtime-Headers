/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartCategoryAxisLayoutItem : TSCHChartAxisLayoutItem {
    TSCHChartCategoryAxisLabelsLayoutItem *mCategoryLabels;
    TSCHChartAxisSeriesLabelsLayoutItem *mSeriesLabels;
}

@property (nonatomic, readonly) TSCHChartCategoryAxisLabelsLayoutItem *axisCategoryLabelsLayoutItem;
@property (nonatomic, readonly) TSCHChartAxisSeriesLabelsLayoutItem *axisSeriesLabelsLayoutItem;

- (id)axisCategoryLabelsLayoutItem;
- (id)axisSeriesLabelsLayoutItem;
- (void)buildSubTree;
- (void)dealloc;
- (void)p_layoutLabelsNow;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })protected_layoutSpaceRectForAllLabels;
- (id)renderersWithRep:(id)arg1;

@end

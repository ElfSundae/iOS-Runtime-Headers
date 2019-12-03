/* Generated by RuntimeBrowser.
 */

@protocol _DASBudgetPersisting <NSObject>

@required

- (NSDate *)lastModulationDate;
- (NSArray *)loadBudgetsWithExpectedNames:(NSSet *)arg1;
- (void)saveBudgets:(NSArray *)arg1;
- (void)saveModulationDate:(NSDate *)arg1;
- (void)updateBudget:(_DASBudget *)arg1;

@end

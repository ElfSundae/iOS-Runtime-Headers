/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphDateNode : PGGraphNode {
    PGGraphSeasonNode * _seasonNode;
}

@property (readonly) long long day;
@property (readonly) long long month;
@property (nonatomic, readonly) PGGraphSeasonNode *seasonNode;
@property (readonly) long long year;

+ (id)dateNodeForDayNode:(id)arg1 monthNode:(id)arg2 yearNode:(id)arg3;

- (void).cxx_destruct;
- (id)associatedNodesForRemoval;
- (long long)day;
- (void)enumerateHolidayNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateMomentNodesUsingBlock:(id /* block */)arg1;
- (id)lastWeekDateNodes;
- (id)localDate;
- (long long)month;
- (id)sameWeekDateNodes;
- (id)seasonNode;
- (long long)year;

@end

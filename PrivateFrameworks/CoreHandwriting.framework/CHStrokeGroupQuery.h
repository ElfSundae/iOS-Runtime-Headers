/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHStrokeGroupQuery : CHQuery {
    NSArray * _strokeGroupItems;
    NSDictionary * _strokeGroupItemsByID;
}

@property (setter=_setStrokeGroupItems:, nonatomic, copy) NSArray *strokeGroupItems;
@property (setter=_setStrokeGroupItemsByID:, nonatomic, copy) NSDictionary *strokeGroupItemsByID;

- (void)_setStrokeGroupItems:(id)arg1;
- (void)_setStrokeGroupItemsByID:(id)arg1;
- (void)dealloc;
- (id)debugName;
- (long long)q_itemTypeForStrokeGroup:(id)arg1 recognitionResult:(id)arg2;
- (id)q_strokeGroupItemsFromSessionResult:(id)arg1;
- (void)q_updateQueryResult;
- (id)strokeGroupItems;
- (id)strokeGroupItemsByID;

@end

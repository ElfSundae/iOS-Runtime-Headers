/* Generated by RuntimeBrowser.
 */

@protocol HFCameraClipQueueing <NSObject>

@required

- (<HFCameraClipQueuableItem> *)createQueueableItemForClipManager:(HMCameraClipManager *)arg1 clip:(HMCameraClip *)arg2;
- (void)insertQueueableItem:(id <HFCameraClipQueuableItem>)arg1 afterItem:(id <HFCameraClipQueuableItem>)arg2;
- (NSArray *)queuableItems;
- (void)removeQueueableItem:(id <HFCameraClipQueuableItem>)arg1;
- (void)seekToOffset:(double)arg1 inItem:(id <HFCameraClipQueuableItem>)arg2;

@end

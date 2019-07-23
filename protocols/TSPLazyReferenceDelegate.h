/* Generated by RuntimeBrowser.
 */

@protocol TSPLazyReferenceDelegate <NSObject>

@required

- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(TSPLazyReference *)arg3;
- (TSPObject *)objectForIdentifier:(long long)arg1;
- (BOOL)readLazyReference:(TSPLazyReference *)arg1 object:(id*)arg2 error:(id*)arg3;

@optional

- (void)lazyReference:(TSPLazyReference *)arg1 didCreateCopy:(TSPLazyReference *)arg2;

@end

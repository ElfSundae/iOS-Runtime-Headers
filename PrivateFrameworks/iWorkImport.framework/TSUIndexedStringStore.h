/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUIndexedStringStore : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _indexByString;
    NSMutableArray * _stringByIndex;
}

- (unsigned int)count;
- (void)dealloc;
- (unsigned int)indexForString:(id)arg1;
- (id)init;
- (id)stringForIndex:(unsigned int)arg1;

@end

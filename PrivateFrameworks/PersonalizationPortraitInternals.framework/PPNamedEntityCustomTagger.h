/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPNamedEntityCustomTagger : NSObject {
    NSDictionary * _categoryMapping;
    _PASLock * _lock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (void)enumerateNamedEntitiesInText:(id)arg1 addNamedEntity:(id /* block */)arg2;
- (void)enumerateNamedEntitiesInText:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 addNamedEntity:(id /* block */)arg3;
- (id)init;

@end

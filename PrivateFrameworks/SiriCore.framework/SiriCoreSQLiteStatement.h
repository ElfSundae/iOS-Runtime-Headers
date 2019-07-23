/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreSQLiteStatement : NSObject {
    BOOL  _finalizeWhenDone;
    struct sqlite3_stmt { } * _impl;
}

- (void)clearBindings;
- (void)dealloc;
- (struct sqlite3_stmt { }*)impl;
- (id)initWithImpl:(struct sqlite3_stmt { }*)arg1 finalizeWhenDone:(BOOL)arg2;
- (void)reset;

@end

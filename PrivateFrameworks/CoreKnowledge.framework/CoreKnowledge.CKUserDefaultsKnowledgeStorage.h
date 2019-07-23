/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CoreKnowledge.CKUserDefaultsKnowledgeStorage : CKAbstractKnowledgeStorage {
    void kv;
}

@property (nonatomic, readonly) BOOL closed;
@property (nonatomic, readonly) NSArray *keys;
@property (nonatomic, retain) NSUserDefaults *kv;
@property (nonatomic, readonly) _TtC13CoreKnowledge15CKSQLConnection *sql;
@property (nonatomic, readonly) NSArray *values;

- (id /* block */).cxx_destruct;
- (/* Warning: Unrecognized filer type: '
' using 'void*' */ void*)closed;
- (id)init;
- (id)keys;
- (id)kv;
/* MISSING HEADER DESCRIPTION FOR METHOD objectForKeyedSubscript: */
- (BOOL)removeObjectForKey:(id)arg1 error:(id*)arg2;
- (BOOL)removeObjectsMatching:(id)arg1 error:(id*)arg2;
- (void)setKv:(id)arg1;
- (id)sql;
- (void)synchronize;
- (id)tripleComponentsMatching:(id)arg1 error:(id*)arg2;
- (id)values;
- (BOOL)wipeAndReturnError:(id*)arg1;
- (id)writeBatch;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

@interface NFContainer : NSObject <NFDefinitionContainer, NFRegistrationContainer> {
    NFCallbackStore * _callbackStore;
    NSMutableDictionary * _definitions;
    NFContainerPool * _pool;
    NSMutableDictionary * _privateContainers;
}

@property (nonatomic, retain) NFCallbackStore *callbackStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableDictionary *definitions;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NFContainerPool *pool;
@property (nonatomic, retain) NSMutableDictionary *privateContainers;
@property (nonatomic, readonly) NFProxyResolver *proxyResolver;
@property (nonatomic, readonly) <NFResolver> *resolver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)callbackStore;
- (id)debugDescription;
- (id)definitionForKey:(id)arg1;
- (id)definitions;
- (id)init;
- (id)initAsPrivateContainer;
- (id)initWithAssemblies:(id)arg1;
- (id)initWithBundleAssemblies:(id)arg1;
- (id)initWithBundleAssemblies:(id)arg1 assemblies:(id)arg2;
- (id)initWithFrameworkAssemblies:(id)arg1;
- (id)initWithFrameworkAssemblies:(id)arg1 assemblies:(id)arg2;
- (id)pool;
- (id)privateContainers;
- (id)proxyResolver;
- (id)register:(id)arg1 createDefinitionBlock:(id /* block */)arg2;
- (id)registerClass:(Class)arg1 factory:(id /* block */)arg2;
- (id)registerClass:(Class)arg1 name:(id)arg2 factory:(id /* block */)arg3;
- (id)registerKey:(id)arg1 factory:(id /* block */)arg2;
- (id)registerProtocol:(id)arg1 factory:(id /* block */)arg2;
- (id)registerProtocol:(id)arg1 name:(id)arg2 factory:(id /* block */)arg3;
- (id)resolver;
- (void)setCallbackStore:(id)arg1;
- (void)setDefinitions:(id)arg1;
- (void)setPool:(id)arg1;
- (void)setPrivateContainers:(id)arg1;
- (id)unsafeRegisterForKey:(id)arg1 name:(id)arg2 factory:(id /* block */)arg3;
- (void)validateDefinitionsWithProxyResolver:(id)arg1;

@end

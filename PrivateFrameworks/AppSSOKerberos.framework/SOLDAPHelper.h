/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

@interface SOLDAPHelper : NSObject {
    bool  _isConnected;
    NSObject<OS_ldap_connection> * _ldap;
}

@property (nonatomic) bool isConnected;
@property (nonatomic, retain) NSObject<OS_ldap_connection> *ldap;

- (void).cxx_destruct;
- (void)connectToLDAPServer:(id)arg1 andPort:(unsigned short)arg2 andBundleIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)connectToLDAPWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)disconnect;
- (id)init;
- (bool)isConnected;
- (id)ldap;
- (void)queryforBaseDN:(id)arg1 andScope:(int)arg2 andAttributes:(id)arg3 withFilter:(id)arg4 completion:(id /* block */)arg5;
- (void)setIsConnected:(bool)arg1;
- (void)setLdap:(id)arg1;
- (void)setupLDAPconnection:(id)arg1 andPort:(unsigned short)arg2 andBundleIdentifier:(id)arg3;
- (void)useDigestMD5Auth:(id)arg1 andPassword:(id)arg2;
- (void)useKerberosAuth:(struct gss_cred_id_t_desc_struct { }*)arg1 forSPN:(id)arg2;

@end

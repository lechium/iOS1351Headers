/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SFCredentialProviderExtensionHelperProtocol.h>

@class NSXPCConnection;

@interface SFCredentialProviderExtensionHelperProxy : NSObject <SFCredentialProviderExtensionHelperProtocol> {

	NSXPCConnection* _connection;

}
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)_proxyObject;
-(void)fetchCredentialIdentitiesMatchingDomains:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getCredentialProviderExtensionStateWithCompletion:(/*^block*/id)arg1 ;
-(void)saveCredentialIdentities:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeCredentialIdentities:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAllCredentialIdentitiesWithCompletion:(/*^block*/id)arg1 ;
-(void)replaceCredentialIdentitiesWithIdentities:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeCredentialIdentityStoreForApplication:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

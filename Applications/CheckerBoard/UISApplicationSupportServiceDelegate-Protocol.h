//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BSAuditToken, BSProcessHandle, NSArray, UISApplicationInitializationContext, UISApplicationSupportService;

@protocol UISApplicationSupportServiceDelegate <NSObject>

@optional
- (UISApplicationInitializationContext *)applicationInitializationContextForClient:(BSAuditToken *)arg1;
- (void)destroyScenesWithPersistentIdentifiers:(NSArray *)arg1 animationType:(unsigned long long)arg2 destroySessions:(_Bool)arg3 forClient:(BSAuditToken *)arg4 completion:(void (^)(_Bool, NSError *))arg5;
- (void)requestPasscodeUnlockUIForClient:(BSAuditToken *)arg1 withCompletion:(void (^)(_Bool))arg2;
- (void)service:(UISApplicationSupportService *)arg1 initializeClient:(BSProcessHandle *)arg2 withCompletion:(void (^)(UISApplicationInitializationContext *))arg3;
- (UISApplicationInitializationContext *)service:(UISApplicationSupportService *)arg1 initializeClient:(BSProcessHandle *)arg2;
- (_Bool)service:(UISApplicationSupportService *)arg1 overrideClientInitialization:(BSProcessHandle *)arg2;
@end


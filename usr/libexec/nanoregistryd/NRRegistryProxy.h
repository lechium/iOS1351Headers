//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoRegistry/NRXPCProxy.h>

#import "NRXPCRegistryDelegate-Protocol.h"

@interface NRRegistryProxy : NRXPCProxy <NRXPCRegistryDelegate>
{
}

+ (_Bool)requireAnEntitlement;	// IMP=0x00000001000b2e70
+ (id)entitlements;	// IMP=0x00000001000b2d5c
+ (id)clientRemoteObjectInterface;	// IMP=0x00000001000b2b44
+ (id)serverExportedInterface;	// IMP=0x00000001000b29d4
+ (id)machServiceName;	// IMP=0x00000001000b29c8
- (void)logCaller:(SEL)arg1 args:(id)arg2;	// IMP=0x00000001000b42ec
- (void)xpcSetMigrationConsented:(_Bool)arg1 forDeviceID:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b40b8
- (void)xpcApplyDiff:(id)arg1 withSecureProperties:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b3d54
- (void)xpcGetChangeHistoryWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b3b18
- (void)xpcClientInfo:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b3954
- (void)xpcDeviceIDAtSwitchIndex:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b3778
- (void)xpcSwitchIndex:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b35f8
- (void)xpcRetrieveSecureProperties:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b3418
- (void)xpcGetDiffSinceTokenValue:(unsigned long long)arg1 getSecureProperties:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b31fc
- (void)xpcGetDeviceCollectionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b2fe4
- (_Bool)_hasInternalEntitlement;	// IMP=0x00000001000b2f44
- (_Bool)loudHasEntitlement:(id)arg1;	// IMP=0x00000001000b2e84
- (id)registryDelegate;	// IMP=0x00000001000b2e78

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDTaskOperation.h"

@interface DMDInstallConfigurationOperation : DMDTaskOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100057008
+ (id)requiredEntitlements;	// IMP=0x0000000100056f94
+ (id)whitelistedClassesForRequest;	// IMP=0x0000000100056f58
+ (id)_intersectionAliasToFeatures;	// IMP=0x0000000100058ed0
- (unsigned long long)queueGroup;	// IMP=0x0000000100057000
- (id)_intersectionFeatureForPayloadRestrictionKey:(id)arg1;	// IMP=0x0000000100058fac
- (id)_applyHeuristicsToRestrictions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100058d54
- (id)_mapMCRestrictionsFromPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100058028
- (_Bool)_installRestrictionsPayload:(id)arg1 withRequest:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100057d1c
- (void)_rollbackProfile:(id)arg1 withRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100057a90
- (_Bool)_installProfile:(id)arg1 withRequest:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000576bc
- (void)runWithRequest:(id)arg1;	// IMP=0x0000000100057140

@end


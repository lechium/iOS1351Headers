//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelStatusReason.h>

@interface RMModelStatusReason (Error)
+ (id)assetIsNotReferencedByConfiguration:(id)arg1;	// IMP=0x000000010004a974
+ (id)configurationIsNotReferencedByAnActivation:(id)arg1;	// IMP=0x000000010004a780
+ (id)missingStateForDeclaration:(id)arg1;	// IMP=0x000000010004a454
+ (id)invalidPayloadForDeclaration:(id)arg1;	// IMP=0x000000010004a128
+ (id)missingConfigurationIdentifiers:(id)arg1 forActivation:(id)arg2;	// IMP=0x0000000100049e88
+ (id)missingAssetIdentifiers:(id)arg1 forConfiguration:(id)arg2;	// IMP=0x0000000100049be8
+ (id)predicateEvaluationFailedWithError:(id)arg1 forActivation:(id)arg2;	// IMP=0x0000000100049568
+ (id)predicateEvaluatedToFalseForActivation:(id)arg1;	// IMP=0x00000001000492bc
+ (id)failedWithUnknownPayloadKeys:(id)arg1;	// IMP=0x000000010004919c
+ (id)reasonWithError:(id)arg1;	// IMP=0x0000000100048e88
@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NEPolicyCondition;

@interface CCNEPolicyCondition : NSObject
{
    NEPolicyCondition *condition;	// 8 = 0x8
}

+ (id)clientProhibitsConstrained;	// IMP=0x00000001004046f0
+ (id)requiredAgentDomain:(id)arg1 agentType:(id)arg2;	// IMP=0x0000000100404638
+ (id)allInterfaces;	// IMP=0x00000001004045d4
+ (id)accountIdentifier:(id)arg1;	// IMP=0x0000000100404540
- (void).cxx_destruct;	// IMP=0x0000000100404780
- (_Bool)isNegative;	// IMP=0x0000000100404770
- (void)setNegative:(_Bool)arg1;	// IMP=0x0000000100404758
- (id)init;	// IMP=0x000000010040450c

@end

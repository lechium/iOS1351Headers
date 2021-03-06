//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFExperimentContext, NSDictionary;
@protocol OS_dispatch_queue;

@interface ADExperimentManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSDictionary *_configurationsByIdentifier;	// 16 = 0x10
    AFExperimentContext *_currentContext;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x000000010004fc9c
+ (id)configurationForSiriVOXSounds;	// IMP=0x00000001000a7f44
+ (id)configurationForInvocationFeedback;	// IMP=0x00000001000adf04
+ (id)configurationForSiriVOXTapToSiriBehavior;	// IMP=0x00000001001fb028
- (void).cxx_destruct;	// IMP=0x0000000100050e34
- (id)_buildContext;	// IMP=0x000000010005052c
- (id)_getContext;	// IMP=0x00000001000504dc
- (id)_buildConfigurationsByIdentifier;	// IMP=0x0000000100050178
- (id)_getConfigurationsByIdentifier;	// IMP=0x0000000100050128
- (void)getContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010005004c
- (id)context;	// IMP=0x000000010004ff48
- (void)getConfigurationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004fe44
- (id)configurations;	// IMP=0x000000010004fd08
- (id)init;	// IMP=0x000000010004fb70

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MIBundleContainer, MIDataContainer, MIExecutableBundle, NSString, NSURL;

@interface MIInstalledInfoGatherer : NSObject
{
    MIExecutableBundle *_bundle;	// 8 = 0x8
    MIExecutableBundle *_builtInAppParallelPlaceholderBundle;	// 16 = 0x10
    MIBundleContainer *_bundleContainer;	// 24 = 0x18
    MIDataContainer *_dataContainer;	// 32 = 0x20
    NSString *_owningBundleIdentifier;	// 40 = 0x28
    NSURL *_parentBundleURL;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010001b380
@property(readonly, nonatomic) NSURL *parentBundleURL; // @synthesize parentBundleURL=_parentBundleURL;
@property(readonly, nonatomic) NSString *owningBundleIdentifier; // @synthesize owningBundleIdentifier=_owningBundleIdentifier;
@property(readonly, nonatomic) MIDataContainer *dataContainer; // @synthesize dataContainer=_dataContainer;
@property(readonly, nonatomic) MIBundleContainer *bundleContainer; // @synthesize bundleContainer=_bundleContainer;
@property(readonly, nonatomic) MIExecutableBundle *builtInAppParallelPlaceholderBundle; // @synthesize builtInAppParallelPlaceholderBundle=_builtInAppParallelPlaceholderBundle;
@property(readonly, nonatomic) MIExecutableBundle *bundle; // @synthesize bundle=_bundle;
- (id)launchServicesDictionaryWithError:(id *)arg1;	// IMP=0x0000000100017e40
- (id)_staticDiskUsage;	// IMP=0x0000000100017b14
- (id)_groupContainersDictionary;	// IMP=0x00000001000178cc
- (id)_sandboxEnvironment;	// IMP=0x00000001000176dc
- (id)_determineApplicationType;	// IMP=0x0000000100017604
- (id)initWithWatchKitAppBundle:(id)arg1 inBundle:(id)arg2;	// IMP=0x0000000100017524
- (id)initWithPluginBundle:(id)arg1 inBundleIdentifier:(id)arg2 dataContainer:(id)arg3;	// IMP=0x0000000100017454
- (id)initWithBundleContainer:(id)arg1 dataContainer:(id)arg2;	// IMP=0x0000000100017378
- (id)initWithBundleContainer:(id)arg1;	// IMP=0x0000000100017368
- (id)initWithBundle:(id)arg1 dataContainer:(id)arg2;	// IMP=0x00000001000172b4
- (void)_fixUpForBuiltInAppParallelPlaceholder;	// IMP=0x0000000100016900

@end

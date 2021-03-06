//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface SRSiriPresentationPluginHost : NSObject
{
    _Bool _loaded;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    NSMutableDictionary *_bundleURLsByBundleIdentifier;	// 24 = 0x18
}

+ (id)sharedSiriPresentationPluginHost;	// IMP=0x000000010006adc0
+ (id)_defaultURL;	// IMP=0x000000010006ad04
- (void).cxx_destruct;	// IMP=0x000000010006c290
@property(readonly, nonatomic, getter=_bundleURLsByBundleIdentifier) NSMutableDictionary *bundleURLsByBundleIdentifier; // @synthesize bundleURLsByBundleIdentifier=_bundleURLsByBundleIdentifier;
@property(nonatomic, getter=_isLoaded, setter=_setLoaded:) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic, getter=_URL) NSURL *URL; // @synthesize URL=_URL;
- (void)_save;	// IMP=0x000000010006c070
- (void)_load;	// IMP=0x000000010006be50
- (void)_loadFromPropertyListRepresentation:(id)arg1;	// IMP=0x000000010006bc20
- (id)_propertyListRepresentation;	// IMP=0x000000010006baa8
- (id)presentationWithIdentifier:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;	// IMP=0x000000010006b984
- (void)preloadPluginBundles;	// IMP=0x000000010006b8ac
- (void)preloadPresentationBundleWithIdentifier:(id)arg1;	// IMP=0x000000010006b780
- (id)_siriPresentationPluginBundleWithIdentifier:(id)arg1;	// IMP=0x000000010006b67c
- (id)_cachedURLForBundleWithIdentifier:(id)arg1;	// IMP=0x000000010006b5ec
- (void)_rescanBundles;	// IMP=0x000000010006b248
- (id)_builtInPresentationWithIdentifier:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;	// IMP=0x000000010006b118
- (id)_classNameForBuiltInPresentationWithIdentifier:(id)arg1;	// IMP=0x000000010006afb4
- (id)init;	// IMP=0x000000010006af58
- (id)initWithURL:(id)arg1;	// IMP=0x000000010006aeac

@end


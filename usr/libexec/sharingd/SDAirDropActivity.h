//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivity.h>

#import "UIActivityExtensionItemDataReceiving-Protocol.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SDAirDropActivity : UIActivity <UIActivityExtensionItemDataReceiving>
{
    NSString *_sendingAppBundleID;	// 8 = 0x8
    NSMutableArray *_activeSecurityContexts;	// 16 = 0x10
}

+ (long long)activityCategory;	// IMP=0x000000010010e448
- (void).cxx_destruct;	// IMP=0x000000010010e974
@property(retain, nonatomic) NSMutableArray *activeSecurityContexts; // @synthesize activeSecurityContexts=_activeSecurityContexts;
@property(retain, nonatomic) NSString *sendingAppBundleID; // @synthesize sendingAppBundleID=_sendingAppBundleID;
- (void)dealloc;	// IMP=0x000000010010e8e0
- (void)stopAccessingSecurityScopedResources;	// IMP=0x000000010010e7ac
- (void)startAccessingSecurityScopedResourcesInContext:(id)arg1;	// IMP=0x000000010010e744
- (void)prepareWithActivityItemData:(id)arg1;	// IMP=0x000000010010e614
- (struct CGSize)_thumbnailSize;	// IMP=0x000000010010e450
- (id)activityType;	// IMP=0x000000010010e438
- (_Bool)ss_shouldDismissHostsPresentationBeforePerforming;	// IMP=0x000000010010e430
- (_Bool)ss_shouldExecuteInShareSheet;	// IMP=0x000000010010e428
- (id)init;	// IMP=0x000000010010e3ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

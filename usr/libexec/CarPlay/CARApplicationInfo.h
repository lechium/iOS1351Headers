//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBSApplicationInfo.h>

@class CRCarPlayAppDeclaration;

@interface CARApplicationInfo : FBSApplicationInfo
{
    _Bool _linkedOnOrAfterYukon;	// 8 = 0x8
    _Bool _presentsFullScreen;	// 9 = 0x9
    _Bool _supportsDashboardNavigation;	// 10 = 0xa
    _Bool _requiresBackgroundURLDelivery;	// 11 = 0xb
    CRCarPlayAppDeclaration *_carPlayDeclaration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000aa64
@property(readonly, nonatomic) _Bool requiresBackgroundURLDelivery; // @synthesize requiresBackgroundURLDelivery=_requiresBackgroundURLDelivery;
@property(readonly, nonatomic) _Bool supportsDashboardNavigation; // @synthesize supportsDashboardNavigation=_supportsDashboardNavigation;
@property(readonly, nonatomic) _Bool presentsFullScreen; // @synthesize presentsFullScreen=_presentsFullScreen;
@property(readonly, nonatomic, getter=isLinkedOnOrAfterYukon) _Bool linkedOnOrAfterYukon; // @synthesize linkedOnOrAfterYukon=_linkedOnOrAfterYukon;
@property(readonly, nonatomic) CRCarPlayAppDeclaration *carPlayDeclaration; // @synthesize carPlayDeclaration=_carPlayDeclaration;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000a954
- (unsigned long long)hash;	// IMP=0x000000010000a908
- (void)_loadFromProxy:(id)arg1;	// IMP=0x000000010000a530

@end

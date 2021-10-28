//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

@protocol HNDWindowDelegateProtocol;

@interface HNDWindow : UIWindow
{
    id <HNDWindowDelegateProtocol> _hitTestDelegate;	// 8 = 0x8
}

+ (_Bool)_isSecure;	// IMP=0x00000001000137c0
- (void).cxx_destruct;	// IMP=0x00000001000137fc
@property(nonatomic) __weak id <HNDWindowDelegateProtocol> hitTestDelegate; // @synthesize hitTestDelegate=_hitTestDelegate;
- (_Bool)_alwaysGetsContexts;	// IMP=0x00000001000137b8
- (_Bool)keepContextInBackground;	// IMP=0x00000001000137b0
- (_Bool)_isWindowServerHostingManaged;	// IMP=0x00000001000137a8
- (_Bool)_wantsSceneAssociation;	// IMP=0x00000001000137a0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010001376c

@end

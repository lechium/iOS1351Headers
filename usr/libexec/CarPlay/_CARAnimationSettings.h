//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CARAppDockViewController, NSString, UIView;

@interface _CARAnimationSettings : NSObject
{
    UIView *_toView;	// 8 = 0x8
    UIView *_toTransitionContainerView;	// 16 = 0x10
    UIView *_fromView;	// 24 = 0x18
    UIView *_fromTransitionContainerView;	// 32 = 0x20
    CARAppDockViewController *_appDockViewController;	// 40 = 0x28
    NSString *_toIdentifier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010007b5c4
@property(copy, nonatomic) NSString *toIdentifier; // @synthesize toIdentifier=_toIdentifier;
@property(retain, nonatomic) CARAppDockViewController *appDockViewController; // @synthesize appDockViewController=_appDockViewController;
@property(retain, nonatomic) UIView *fromTransitionContainerView; // @synthesize fromTransitionContainerView=_fromTransitionContainerView;
@property(retain, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
@property(retain, nonatomic) UIView *toTransitionContainerView; // @synthesize toTransitionContainerView=_toTransitionContainerView;
@property(retain, nonatomic) UIView *toView; // @synthesize toView=_toView;

@end


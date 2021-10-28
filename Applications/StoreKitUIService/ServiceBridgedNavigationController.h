//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUNavigationController.h>

@class NSMutableArray, ServiceBridgedNavigationItem;
@protocol ServiceBridgedNavigationControllerProxy;

@interface ServiceBridgedNavigationController : SUNavigationController
{
    id <ServiceBridgedNavigationControllerProxy> _proxyHandler;	// 8 = 0x8
    ServiceBridgedNavigationItem *_bridgedNavigationItem;	// 16 = 0x10
    NSMutableArray *_containerViewControllers;	// 24 = 0x18
}

+ (id)sharedController;	// IMP=0x000000010001e300
- (void).cxx_destruct;	// IMP=0x000000010001e930
@property(retain, nonatomic) NSMutableArray *containerViewControllers; // @synthesize containerViewControllers=_containerViewControllers;
@property(readonly, nonatomic) ServiceBridgedNavigationItem *bridgedNavigationItem; // @synthesize bridgedNavigationItem=_bridgedNavigationItem;
@property(nonatomic) __weak id <ServiceBridgedNavigationControllerProxy> proxyHandler; // @synthesize proxyHandler=_proxyHandler;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010001e77c
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010001e6bc
- (id)topViewController;	// IMP=0x000000010001e668
- (id)viewControllers;	// IMP=0x000000010001e65c
- (void)removeAllContainerViewControllers;	// IMP=0x000000010001e61c
- (void)synchonrizeContinainerViewControllers;	// IMP=0x000000010001e478
- (void)setupWithContainerViewController:(id)arg1;	// IMP=0x000000010001e3fc
- (id)init;	// IMP=0x000000010001e36c

@end

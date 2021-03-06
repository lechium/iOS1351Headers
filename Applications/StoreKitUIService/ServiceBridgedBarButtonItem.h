//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUBarButtonItem.h>

@class UIBarButtonItem;
@protocol ServiceBridgedNavigationItemProxy;

@interface ServiceBridgedBarButtonItem : SUBarButtonItem
{
    UIBarButtonItem *_underlyingBarButtonItem;	// 8 = 0x8
    id <ServiceBridgedNavigationItemProxy> _proxyHandler;	// 16 = 0x10
}

+ (id)itemFromItem:(id)arg1;	// IMP=0x000000010001e980
- (void).cxx_destruct;	// IMP=0x000000010001eb68
@property(nonatomic) __weak id <ServiceBridgedNavigationItemProxy> proxyHandler; // @synthesize proxyHandler=_proxyHandler;
- (void)setTitle:(id)arg1;	// IMP=0x000000010001ead4
- (void)setTarget:(id)arg1;	// IMP=0x000000010001eabc
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000010001ea5c
- (void)setAction:(SEL)arg1;	// IMP=0x000000010001ea44
- (id)title;	// IMP=0x000000010001ea2c
- (id)target;	// IMP=0x000000010001ea14
- (_Bool)isEnabled;	// IMP=0x000000010001e9fc
- (SEL)action;	// IMP=0x000000010001e9e4

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface MFBridgeSettingsMailboxSelection : NSObject
{
    unsigned long long _inboxesFilterTypes;	// 8 = 0x8
    NSSet *_selectedMailboxes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000b25b0
@property(retain, nonatomic) NSSet *selectedMailboxes; // @synthesize selectedMailboxes=_selectedMailboxes;
@property(nonatomic) unsigned long long inboxesFilterTypes; // @synthesize inboxesFilterTypes=_inboxesFilterTypes;
- (id)description;	// IMP=0x00000001000b2438

@end


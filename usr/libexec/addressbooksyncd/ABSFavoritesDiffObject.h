//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABSDiffableObject-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ABSFavoritesDiffObject : NSObject <ABSDiffableObject>
{
}

- (id)createProtobufWithOptions:(id)arg1;	// IMP=0x000000010002f0a4
@property(readonly, nonatomic) long long changeType;
- (void)setChangeType:(long long)arg1;	// IMP=0x000000010002f098
@property(readonly, nonatomic) NSString *sequencer;
@property(readonly, nonatomic) NSString *objectIdentifier;
- (_Bool)matches:(id)arg1;	// IMP=0x000000010002f07c
- (id)init;	// IMP=0x000000010002f048

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

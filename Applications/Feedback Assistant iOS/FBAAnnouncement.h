//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBAManagedFeedbackObject.h"

#import "FBASearchableDocument-Protocol.h"

@class FBAContentItem, NSDate, NSString;

@interface FBAAnnouncement : FBAManagedFeedbackObject <FBASearchableDocument>
{
    NSString *cachedFullHTMLContent;	// 8 = 0x8
}

+ (id)entityName;	// IMP=0x00000001000a38e4
- (void).cxx_destruct;	// IMP=0x00000001000a4574
@property(retain) NSString *cachedFullHTMLContent; // @synthesize cachedFullHTMLContent;
- (id)generateSearchText;	// IMP=0x00000001000a4020
- (id)fullHTMLContent;	// IMP=0x00000001000a3d10
- (void)setPropertiesFromJSONObject:(id)arg1;	// IMP=0x00000001000a38f0

// Remaining properties
@property(retain) NSString *body; // @dynamic body;
@property(retain) FBAContentItem *contentItem; // @dynamic contentItem;
@property(retain) NSDate *createdAt; // @dynamic createdAt;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property _Bool isStub; // @dynamic isStub;
@property(retain) NSString *searchText; // @dynamic searchText;
@property(readonly) Class superclass;
@property(retain) NSString *title; // @dynamic title;
@property(retain) NSString *type; // @dynamic type;
@property _Bool unread; // @dynamic unread;
@property(retain) NSDate *updatedAt; // @dynamic updatedAt;

@end

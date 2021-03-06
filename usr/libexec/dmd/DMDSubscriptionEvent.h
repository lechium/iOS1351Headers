//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class DMDConfigurationOrganization, NSDate, NSDictionary, NSString;

@interface DMDSubscriptionEvent : NSManagedObject
{
}

+ (id)fetchRequestMatchingEventsFromOrganizationWithIdentifier:(id)arg1;	// IMP=0x000000010007c1ec
- (id)dictionaryRepresentation;	// IMP=0x000000010007c018

// Remaining properties
@property(copy, nonatomic) NSDate *date; // @dynamic date;
@property(copy, nonatomic) NSDictionary *details; // @dynamic details;
@property(copy, nonatomic) NSString *eventType; // @dynamic eventType;
@property(retain, nonatomic) DMDConfigurationOrganization *organization; // @dynamic organization;
@property(copy, nonatomic) NSString *payloadIdentifier; // @dynamic payloadIdentifier;

@end


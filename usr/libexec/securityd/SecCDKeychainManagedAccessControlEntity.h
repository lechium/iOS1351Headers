//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface SecCDKeychainManagedAccessControlEntity : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x000000010018e338

// Remaining properties
@property(retain, nonatomic) NSSet *accessedItems; // @dynamic accessedItems;
@property(retain, nonatomic) NSSet *ownedItems; // @dynamic ownedItems;
@property(copy, nonatomic) NSString *stringRepresentation; // @dynamic stringRepresentation;
@property(nonatomic) int type; // @dynamic type;

@end


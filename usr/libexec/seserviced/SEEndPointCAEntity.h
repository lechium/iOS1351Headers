//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class AirInstanceEntity, NSData, NSSet, NSString;

@interface SEEndPointCAEntity : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x0000000100036268

// Remaining properties
@property(copy, nonatomic) NSString *clientName; // @dynamic clientName;
@property(retain, nonatomic) NSData *endPointCAData; // @dynamic endPointCAData;
@property(retain, nonatomic) NSSet *endPoints; // @dynamic endPoints;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) AirInstanceEntity *instance; // @dynamic instance;
@property(nonatomic) short state; // @dynamic state;

@end


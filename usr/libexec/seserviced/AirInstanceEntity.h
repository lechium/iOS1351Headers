//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface AirInstanceEntity : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x0000000100036188

// Remaining properties
@property(retain, nonatomic) NSSet *certificateAuthorities; // @dynamic certificateAuthorities;
@property(retain, nonatomic) NSSet *endPoints; // @dynamic endPoints;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(nonatomic) short numCertificateAuthorityIdentifier; // @dynamic numCertificateAuthorityIdentifier;
@property(nonatomic) short numEndPointIdentifier; // @dynamic numEndPointIdentifier;

@end


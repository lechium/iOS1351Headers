//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber;

@interface FBAManagedFeedbackObject : NSManagedObject
{
}

+ (id)entityName;	// IMP=0x00000001000ca0e0
+ (id)importFromJSONArray:(id)arg1 intoContext:(id)arg2;	// IMP=0x00000001000c9ea8
+ (id)importFromJSONObject:(id)arg1 intoContext:(id)arg2;	// IMP=0x00000001000c9d80
- (_Bool)isEqualToFBAObject:(id)arg1;	// IMP=0x00000001000ca23c
@property(retain) NSNumber *ID;
- (void)setPropertiesFromJSONObject:(id)arg1;	// IMP=0x00000001000ca15c
- (id)entityName;	// IMP=0x00000001000ca140

// Remaining properties
@property(retain) NSNumber *remoteID; // @dynamic remoteID;

@end


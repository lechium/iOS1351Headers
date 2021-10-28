//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBAManagedFeedbackObject.h"

@class FBABugForm, FBAUser, NSArray, NSNumber, NSSet, NSString;

@interface FBABugFormStub : FBAManagedFeedbackObject
{
}

+ (id)entityName;	// IMP=0x0000000100041188
+ (id)sortDescriptor;	// IMP=0x000000010004102c
+ (id)bugFormStubsMatchingBuild:(id)arg1 withStubs:(id)arg2;	// IMP=0x0000000100040fc4
+ (id)bugFormStubsMatchingBuild:(id)arg1 forPlatform:(id)arg2 withStubs:(id)arg3;	// IMP=0x0000000100040b1c
+ (id)fetchRequest;	// IMP=0x00000001000d8c3c
- (id)signatureDescription;	// IMP=0x0000000100041720
- (void)setPropertiesFromJSONObject:(id)arg1;	// IMP=0x0000000100041194

// Remaining properties
@property(retain, nonatomic) FBABugForm *bugForm; // @dynamic bugForm;
@property(copy, nonatomic) NSString *buildPrefix; // @dynamic buildPrefix;
@property(nonatomic) _Bool forcePicker; // @dynamic forcePicker;
@property(copy, nonatomic) NSString *formDescription; // @dynamic formDescription;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *platform; // @dynamic platform;
@property(retain, nonatomic) NSArray *pluginIDs; // @dynamic pluginIDs;
@property(copy, nonatomic) NSNumber *priority; // @dynamic priority;
@property(retain, nonatomic) NSSet *programs; // @dynamic programs;
@property(copy, nonatomic) NSNumber *remoteID; // @dynamic remoteID;
@property(copy, nonatomic) NSString *signature; // @dynamic signature;
@property(retain, nonatomic) FBAUser *user; // @dynamic user;

@end

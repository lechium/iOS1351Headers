//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBAManagedFeedbackObject.h"

#import "FBADownloadableFilePromise-Protocol.h"

@class FBAFeedbackFollowup, FBAFormResponse, NSDate, NSNumber, NSString;

@interface FBAFilePromise : FBAManagedFeedbackObject <FBADownloadableFilePromise>
{
    long long state;	// 8 = 0x8
}

+ (unsigned long long)downloadStateWithUUID:(id)arg1 state:(long long)arg2 creationDate:(id)arg3;	// IMP=0x0000000100058ca0
+ (id)entityName;	// IMP=0x0000000100058854
@property(nonatomic) long long state; // @synthesize state;
@property(readonly, nonatomic) NSString *localizedDownloadErrorString;
- (_Bool)canDownload;	// IMP=0x0000000100058d74
- (unsigned long long)downloadState;	// IMP=0x0000000100058bf4
@property(readonly, nonatomic) NSString *UUID;
- (void)setPropertiesFromJSONObject:(id)arg1;	// IMP=0x00000001000588e8

// Remaining properties
@property(retain, nonatomic) NSDate *createdAt; // @dynamic createdAt;
@property(retain, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(retain) FBAFeedbackFollowup *feedbackFollowup; // @dynamic feedbackFollowup;
@property(retain) FBAFormResponse *formResponse; // @dynamic formResponse;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) long long size; // @dynamic size;
@property(retain, nonatomic) NSNumber *statusEnum; // @dynamic statusEnum;
@property(retain, nonatomic) NSDate *updatedAt; // @dynamic updatedAt;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end


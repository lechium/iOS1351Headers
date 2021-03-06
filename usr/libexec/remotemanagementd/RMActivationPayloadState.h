//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import "RMDeclarationPayloadActivatableState-Protocol.h"
#import "RMReportDetails-Protocol.h"

@class NSArray, NSData, NSString, RMActivationPayload;

@interface RMActivationPayloadState : NSManagedObject <RMDeclarationPayloadActivatableState, RMReportDetails>
{
}

- (id)reportDetails;	// IMP=0x000000010000936c
@property(copy, nonatomic) NSArray *inactiveReasons;

// Remaining properties
@property(retain, nonatomic) RMActivationPayload *activation; // @dynamic activation;
@property(nonatomic) _Bool active; // @dynamic active;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSData *inactiveReasons_; // @dynamic inactiveReasons_;
@property(readonly) Class superclass;

@end


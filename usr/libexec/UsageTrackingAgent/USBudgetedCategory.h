//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString, USRegisteredBudget;

@interface USBudgetedCategory : NSManagedObject
{
}

- (_Bool)validateBudget:(inout id *)arg1 error:(out id *)arg2;	// IMP=0x00000001000029b8

// Remaining properties
@property(retain, nonatomic) USRegisteredBudget *budget; // @dynamic budget;
@property(copy, nonatomic) NSString *categoryIdentifier; // @dynamic categoryIdentifier;

@end

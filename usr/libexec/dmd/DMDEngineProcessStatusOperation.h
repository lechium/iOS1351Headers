//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDEngineDatabaseOperation.h"

@class NSString;

@interface DMDEngineProcessStatusOperation : DMDEngineDatabaseOperation
{
    NSString *_organizationIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010004b860
@property(retain, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
- (void)performDatabaseModificationOperationWithManagedObjectContext:(id)arg1;	// IMP=0x000000010004b798

@end

//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDEngineDatabaseOperation.h"

@class DMFCreateConfigurationOrganizationRequest;

@interface DMDEngineCreateConfigurationOrganizationOperation : DMDEngineDatabaseOperation
{
    DMFCreateConfigurationOrganizationRequest *_request;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100042f8c
@property(retain, nonatomic) DMFCreateConfigurationOrganizationRequest *request; // @synthesize request=_request;
- (void)performDatabaseModificationOperationWithManagedObjectContext:(id)arg1;	// IMP=0x0000000100042a10

@end

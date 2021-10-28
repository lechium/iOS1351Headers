//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOServer.h>

@interface GEOExperimentServer : GEOServer
{
}

+ (_Bool)shouldStartImmediately;	// IMP=0x000000010000fe6c
+ (id)identifier;	// IMP=0x000000010000fdec
- (void)fetchAssignUUIDSyncWithMessage:(id)arg1;	// IMP=0x000000010001089c
- (void)fetchAssignUUIDWithMessage:(id)arg1;	// IMP=0x000000010001064c
- (void)fetchAllExperimentsWithMessage:(id)arg1;	// IMP=0x0000000100010344
- (void)setBucketIdWithMessage:(id)arg1;	// IMP=0x00000001000102ac
- (void)setActiveBranchWithMessage:(id)arg1;	// IMP=0x0000000100010178
- (void)setQuerySubstringWithMessage:(id)arg1;	// IMP=0x000000010000ff84
- (void)refreshDatasetWithMessage:(id)arg1;	// IMP=0x000000010000febc
- (void)updateWithMessage:(id)arg1;	// IMP=0x000000010000fe74
- (id)init;	// IMP=0x000000010000fdf8

@end

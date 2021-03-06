//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLCloudKitOperationContext.h"

@class NSMapTable;

@interface CPLDownloadResourcesOperationContext : CPLCloudKitOperationContext
{
    NSMapTable *_resourceToProgressMap;	// 72 = 0x48
    unsigned long long _resourceType;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010007f5c8
@property(readonly, nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
- (id)extendedStatusDescriptionStrings;	// IMP=0x000000010007f0ac
- (id)operationDescription;	// IMP=0x000000010007f034
- (void)recordCompletionForResource:(id)arg1 withError:(id)arg2;	// IMP=0x000000010007efa4
- (void)updateProgress:(double)arg1 forResource:(id)arg2;	// IMP=0x000000010007ef04
- (void)addResource:(id)arg1;	// IMP=0x000000010007ee44
- (id)initWithResourceType:(unsigned long long)arg1;	// IMP=0x000000010007edf4

@end


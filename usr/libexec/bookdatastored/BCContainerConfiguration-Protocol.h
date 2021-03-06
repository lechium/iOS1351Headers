//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol BCCloudData, BCContainerConfiguration;

@protocol BCContainerConfiguration <NSObject>
+ (id <BCContainerConfiguration>)configuration;
@property(readonly, nonatomic) _Bool requiresDeviceToDeviceEncryption;
@property(readonly, nonatomic) NSString *appBundleIdentifier;
@property(readonly, nonatomic) NSString *dbSubscriptionID;
@property(readonly, nonatomic) NSString *dbArchiveFilename;
@property(readonly, nonatomic) NSString *dbArchiveExtension;
@property(readonly, nonatomic) NSString *dbArchiveFolderName;
@property(readonly, nonatomic) NSArray *serviceZones;
@property(readonly, nonatomic) NSArray *appZones;
@property(readonly, nonatomic) NSString *containerIdentifier;
@property(readonly, nonatomic) NSString *queueIdentifier;
- (_Bool)shouldPerformDatabaseSubscriptionForServiceMode:(_Bool)arg1;
- (_Bool)shouldArchiveData:(id <BCCloudData>)arg1;
@end


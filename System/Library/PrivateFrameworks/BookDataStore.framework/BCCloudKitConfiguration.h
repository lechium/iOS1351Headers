/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BCContainerConfiguration.h>

@class NSString, NSArray;

@interface BCCloudKitConfiguration : NSObject <BCContainerConfiguration> {

	BOOL _requiresDeviceToDeviceEncryption;
	NSString* _queueIdentifier;
	NSString* _containerIdentifier;
	NSArray* _appZones;
	NSArray* _serviceZones;
	NSString* _dbArchiveFolderName;
	NSString* _dbArchiveExtension;
	NSString* _dbArchiveFilename;
	NSString* _dbSubscriptionID;
	NSString* _appBundleIdentifier;

}

@property (nonatomic,retain) NSString * queueIdentifier;                         //@synthesize queueIdentifier=_queueIdentifier - In the implementation block
@property (nonatomic,retain) NSString * containerIdentifier;                     //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * appZones;                                 //@synthesize appZones=_appZones - In the implementation block
@property (nonatomic,retain) NSArray * serviceZones;                             //@synthesize serviceZones=_serviceZones - In the implementation block
@property (nonatomic,retain) NSString * dbArchiveFolderName;                     //@synthesize dbArchiveFolderName=_dbArchiveFolderName - In the implementation block
@property (nonatomic,retain) NSString * dbArchiveExtension;                      //@synthesize dbArchiveExtension=_dbArchiveExtension - In the implementation block
@property (nonatomic,retain) NSString * dbArchiveFilename;                       //@synthesize dbArchiveFilename=_dbArchiveFilename - In the implementation block
@property (nonatomic,retain) NSString * dbSubscriptionID;                        //@synthesize dbSubscriptionID=_dbSubscriptionID - In the implementation block
@property (nonatomic,retain) NSString * appBundleIdentifier;                     //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL requiresDeviceToDeviceEncryption;              //@synthesize requiresDeviceToDeviceEncryption=_requiresDeviceToDeviceEncryption - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configuration;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)queueIdentifier;
-(void)setQueueIdentifier:(NSString *)arg1 ;
-(BOOL)requiresDeviceToDeviceEncryption;
-(void)setAppZones:(NSArray *)arg1 ;
-(void)setServiceZones:(NSArray *)arg1 ;
-(void)setDbArchiveFolderName:(NSString *)arg1 ;
-(void)setDbArchiveExtension:(NSString *)arg1 ;
-(void)setDbArchiveFilename:(NSString *)arg1 ;
-(void)setDbSubscriptionID:(NSString *)arg1 ;
-(void)setRequiresDeviceToDeviceEncryption:(BOOL)arg1 ;
-(BOOL)shouldArchiveData:(id)arg1 ;
-(BOOL)shouldPerformDatabaseSubscriptionForServiceMode:(BOOL)arg1 ;
-(NSArray *)appZones;
-(NSArray *)serviceZones;
-(NSString *)dbArchiveFolderName;
-(NSString *)dbArchiveExtension;
-(NSString *)dbArchiveFilename;
-(NSString *)dbSubscriptionID;
@end


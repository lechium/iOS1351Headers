/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <HealthRecordsPlugin/HDClinicalIngestionRetryPolicy.h>

@class NSArray, NSError;

@interface HDClinicalIngestionMutableRetryPolicy : HDClinicalIngestionRetryPolicy {

	BOOL requiresNetwork;
	NSArray* accountIdentifiers;
	NSError* underlyingError;
	long long retryInterval;

}

@property (nonatomic,copy) NSArray * accountIdentifiers; 
@property (nonatomic,copy) NSError * underlyingError; 
@property (assign,nonatomic) BOOL requiresNetwork; 
@property (assign,nonatomic) long long retryInterval; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRequiresNetwork:(BOOL)arg1 ;
-(void)setUnderlyingError:(NSError *)arg1 ;
-(NSError *)underlyingError;
-(BOOL)requiresNetwork;
-(NSArray *)accountIdentifiers;
-(long long)retryInterval;
-(void)setRetryInterval:(long long)arg1 ;
-(void)setAccountIdentifiers:(NSArray *)arg1 ;
@end


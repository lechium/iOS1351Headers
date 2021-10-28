/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface HDClinicalRecordsBatch : NSObject {

	NSArray* _clinicalRecords;
	NSArray* _obsoleteResourceIdentifiers;

}

@property (nonatomic,copy,readonly) NSArray * clinicalRecords;                          //@synthesize clinicalRecords=_clinicalRecords - In the implementation block
@property (nonatomic,copy,readonly) NSArray * obsoleteResourceIdentifiers;              //@synthesize obsoleteResourceIdentifiers=_obsoleteResourceIdentifiers - In the implementation block
-(NSArray *)clinicalRecords;
-(id)initWithClinicalRecords:(id)arg1 obsoleteResourceIdentifiers:(id)arg2 ;
-(NSArray *)obsoleteResourceIdentifiers;
@end

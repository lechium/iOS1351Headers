/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/PFCloudKitImporterWorkItem.h>

@class CKRecordZoneID;

@interface PFCloudKitImporterZonePurgedWorkItem : PFCloudKitImporterWorkItem {

	CKRecordZoneID* _purgedRecordZoneID;

}

@property (nonatomic,readonly) CKRecordZoneID * purgedRecordZoneID;              //@synthesize purgedRecordZoneID=_purgedRecordZoneID - In the implementation block
-(void)dealloc;
-(id)description;
-(void)doWorkWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithPurgedRecordZoneID:(id)arg1 options:(id)arg2 request:(id)arg3 ;
-(BOOL)wipeAllCloudDataAndPurgeHistoryToken:(BOOL)arg1 error:(id*)arg2 ;
-(CKRecordZoneID *)purgedRecordZoneID;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CKRecordID, CKRecord;

@interface BRCShareDeleteInfo : NSObject {

	CKRecordID* _shareID;
	CKRecord* _emptyRecord;

}

@property (nonatomic,readonly) CKRecordID * shareID;                //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,readonly) CKRecord * emptyRecord;              //@synthesize emptyRecord=_emptyRecord - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CKRecordID *)shareID;
-(CKRecord *)emptyRecord;
-(id)initWithShareID:(id)arg1 emptyRecord:(id)arg2 ;
@end


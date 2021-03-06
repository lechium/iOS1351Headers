/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthRecordsPlugin/HDClinicalIngestionPerAccountOperation.h>

@class NSData, NSError;

@interface HDClinicalIngestionFileImportOperation : HDClinicalIngestionPerAccountOperation {

	NSData* _documentData;
	NSError* _ingestionError;

}

@property (nonatomic,copy) NSData * documentData;                 //@synthesize documentData=_documentData - In the implementation block
@property (nonatomic,copy) NSError * ingestionError;              //@synthesize ingestionError=_ingestionError - In the implementation block
-(void)main;
-(void)_cancelWithError:(id)arg1 ;
-(NSData *)documentData;
-(void)setDocumentData:(NSData *)arg1 ;
-(void)setIngestionError:(NSError *)arg1 ;
-(NSError *)ingestionError;
@end


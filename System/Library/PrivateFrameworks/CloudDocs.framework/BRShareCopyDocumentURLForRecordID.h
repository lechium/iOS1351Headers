/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocs/BROperation.h>

@class CKRecordID;

@interface BRShareCopyDocumentURLForRecordID : BROperation {

	CKRecordID* _recordID;
	BOOL _withServerLookup;
	/*^block*/id _copyDocumentURLCompletionBlock;

}

@property (copy) id copyDocumentURLCompletionBlock;              //@synthesize copyDocumentURLCompletionBlock=_copyDocumentURLCompletionBlock - In the implementation block
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)copyDocumentURLCompletionBlock;
-(void)setCopyDocumentURLCompletionBlock:(id)arg1 ;
-(id)initWithRecordID:(id)arg1 withServerLookup:(BOOL)arg2 ;
@end

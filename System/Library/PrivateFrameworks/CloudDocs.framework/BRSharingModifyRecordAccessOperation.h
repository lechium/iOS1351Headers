/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharingModifyRecordAccessOperation : BROperation {

	NSURL* _fileURL;
	BOOL _allowAccess;
	/*^block*/id _allowAccessCompletionBlock;
	/*^block*/id _accessAllowedCompletionBlock;

}

@property (copy) id allowAccessCompletionBlock;                //@synthesize allowAccessCompletionBlock=_allowAccessCompletionBlock - In the implementation block
@property (copy) id accessAllowedCompletionBlock;              //@synthesize accessAllowedCompletionBlock=_accessAllowedCompletionBlock - In the implementation block
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)allowAccessCompletionBlock;
-(void)setAllowAccessCompletionBlock:(id)arg1 ;
-(id)accessAllowedCompletionBlock;
-(void)setAccessAllowedCompletionBlock:(id)arg1 ;
-(id)initWithURL:(id)arg1 allowAccess:(BOOL)arg2 ;
@end


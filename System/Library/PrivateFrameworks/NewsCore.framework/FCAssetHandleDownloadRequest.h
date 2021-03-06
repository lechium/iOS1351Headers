/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCOperationCanceling.h>
#import <libobjc.A.dylib/FCOperationPrioritizing.h>

@class NSString;

@interface FCAssetHandleDownloadRequest : NSObject <FCOperationCanceling, FCOperationPrioritizing> {

	long long _relativePriority;
	/*^block*/id _cancelHandler;
	/*^block*/id _priorityHandler;

}

@property (nonatomic,copy) id cancelHandler;                          //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (nonatomic,copy) id priorityHandler;                        //@synthesize priorityHandler=_priorityHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long relativePriority;              //@synthesize relativePriority=_relativePriority - In the implementation block
-(void)cancel;
-(id)cancelHandler;
-(void)setCancelHandler:(id)arg1 ;
-(long long)relativePriority;
-(void)setRelativePriority:(long long)arg1 ;
-(void)setPriorityHandler:(id)arg1 ;
-(id)priorityHandler;
@end


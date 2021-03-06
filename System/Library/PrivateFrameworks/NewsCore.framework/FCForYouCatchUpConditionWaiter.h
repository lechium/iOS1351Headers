/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCOperationCanceling.h>

@protocol OS_dispatch_group;
@class NFUnfairLock, NSObject, NSError, FCForYouCatchUpCondition, NSString;

@interface FCForYouCatchUpConditionWaiter : NSObject <FCOperationCanceling> {

	NFUnfairLock* _lock;
	NSObject*<OS_dispatch_group> _group;
	BOOL _finished;
	NSError* _error;
	FCForYouCatchUpCondition* _condition;

}

@property (nonatomic,retain) FCForYouCatchUpCondition * condition;              //@synthesize condition=_condition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cancel;
-(FCForYouCatchUpCondition *)condition;
-(void)setCondition:(FCForYouCatchUpCondition *)arg1 ;
-(void)notifyWithCompletion:(/*^block*/id)arg1 ;
-(void)signalWithError:(id)arg1 ;
-(void)_possiblyFinishWithError:(id)arg1 ;
@end


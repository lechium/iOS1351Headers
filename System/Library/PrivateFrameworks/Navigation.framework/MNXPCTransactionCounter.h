/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_transaction;
@class NSObject, NSLock;

@interface MNXPCTransactionCounter : NSObject {

	NSObject*<OS_os_transaction> _osTransaction;
	NSLock* _countLock;
	unsigned long long _count;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)decrement;
-(void)increment:(id)arg1 ;
@end


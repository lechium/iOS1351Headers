/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_transaction;
@class NSObject;

@interface BDSOSTransaction : NSObject {

	NSObject*<OS_os_transaction> _osTransaction;

}

@property (nonatomic,retain) NSObject*<OS_os_transaction> osTransaction;              //@synthesize osTransaction=_osTransaction - In the implementation block
-(void)dealloc;
-(void)endTransaction;
-(void)setOsTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(NSObject*<OS_os_transaction>)osTransaction;
-(id)initWithTransactionName:(const char*)arg1 ;
@end


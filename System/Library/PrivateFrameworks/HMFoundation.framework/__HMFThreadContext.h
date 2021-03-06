/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@protocol OS_voucher;
@class NSThread, NSObject;

@interface __HMFThreadContext : HMFObject {

	BOOL _shouldRestoreVoucher;
	NSThread* _thread;
	unsigned long long _count;
	NSObject*<OS_voucher> _voucher;

}

@property (readonly) NSThread * thread;                                  //@synthesize thread=_thread - In the implementation block
@property (assign,nonatomic) unsigned long long count;                   //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSObject*<OS_voucher> voucher;              //@synthesize voucher=_voucher - In the implementation block
@property (assign,nonatomic) BOOL shouldRestoreVoucher;                  //@synthesize shouldRestoreVoucher=_shouldRestoreVoucher - In the implementation block
+(id)currentContext;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(NSObject*<OS_voucher>)voucher;
-(void)setVoucher:(NSObject*<OS_voucher>)arg1 ;
-(NSThread *)thread;
-(id)__init;
-(BOOL)shouldRestoreVoucher;
-(void)setShouldRestoreVoucher:(BOOL)arg1 ;
@end


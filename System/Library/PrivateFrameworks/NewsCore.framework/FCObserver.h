/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCDisposable.h>

@class NSString;

@interface FCObserver : NSObject <FCDisposable> {

	unsigned long long _token;
	id _keepAliveObject;
	/*^block*/id _observerBlock;

}

@property (assign,nonatomic) unsigned long long token;               //@synthesize token=_token - In the implementation block
@property (assign,nonatomic,__weak) id keepAliveObject;              //@synthesize keepAliveObject=_keepAliveObject - In the implementation block
@property (nonatomic,copy) id observerBlock;                         //@synthesize observerBlock=_observerBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)token;
-(id)initWithToken:(unsigned long long)arg1 ;
-(void)setToken:(unsigned long long)arg1 ;
-(void)dispose;
-(id)observerBlock;
-(void)setKeepAliveObject:(id)arg1 ;
-(void)disposeOn:(id)arg1 ;
-(id)keepAliveObject;
-(void)setObserverBlock:(id)arg1 ;
@end


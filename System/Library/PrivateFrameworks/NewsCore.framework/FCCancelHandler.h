/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:37 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCOperationCanceling.h>

@class NSString;

@interface FCCancelHandler : NSObject <FCOperationCanceling> {

	/*^block*/id _cancelBlock;
	id _weakTarget;
	id _strongTarget;
	SEL _selector;

}

@property (nonatomic,copy) id cancelBlock;                          //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (assign,nonatomic,__weak) id weakTarget;                  //@synthesize weakTarget=_weakTarget - In the implementation block
@property (nonatomic,retain) id strongTarget;                       //@synthesize strongTarget=_strongTarget - In the implementation block
@property (assign,nonatomic) SEL selector;                          //@synthesize selector=_selector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cancelHandlerWithBlock:(/*^block*/id)arg1 ;
+(id)cancelHandlerWithWeakTarget:(id)arg1 selector:(SEL)arg2 ;
+(id)cancelHandlerWithStrongTarget:(id)arg1 selector:(SEL)arg2 ;
-(SEL)selector;
-(void)setSelector:(SEL)arg1 ;
-(void)cancel;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)setCancelBlock:(id)arg1 ;
-(id)cancelBlock;
-(id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2 ;
-(id)initWithStrongTarget:(id)arg1 selector:(SEL)arg2 ;
-(id)strongTarget;
-(id)weakTarget;
-(void)setWeakTarget:(id)arg1 ;
-(void)setStrongTarget:(id)arg1 ;
@end


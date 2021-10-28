/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:46 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IKRunLoopSourceRecord : NSObject {

	/*^block*/id _evaluateBlock;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id evaluateBlock;                //@synthesize evaluateBlock=_evaluateBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)initWithEvaluateBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)evaluateBlock;
-(void)setEvaluateBlock:(id)arg1 ;
@end

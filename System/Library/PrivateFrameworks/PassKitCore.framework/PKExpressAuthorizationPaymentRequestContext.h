/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:43 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PKPaymentPass, LAContext, NSSet;

@interface PKExpressAuthorizationPaymentRequestContext : NSObject {

	PKPaymentPass* _pass;
	LAContext* _context;
	NSSet* _result;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) PKPaymentPass * pass;                    //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic,__weak) LAContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSSet * result;                          //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) id completionHandler;                      //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)dealloc;
-(NSSet *)result;
-(LAContext *)context;
-(void)setResult:(NSSet *)arg1 ;
-(void)setContext:(LAContext *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(void)invokeCompletion;
@end


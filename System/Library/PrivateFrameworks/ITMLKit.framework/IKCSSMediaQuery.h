/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:46 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IKCSSMediaQueryList;

@interface IKCSSMediaQuery : NSObject {

	BOOL _evaluated;
	BOOL _evaluationResult;
	IKCSSMediaQueryList* _queryList;

}

@property (nonatomic,readonly) IKCSSMediaQueryList * queryList;              //@synthesize queryList=_queryList - In the implementation block
@property (readonly) BOOL evaluated;                                         //@synthesize evaluated=_evaluated - In the implementation block
@property (readonly) BOOL evaluationResult;                                  //@synthesize evaluationResult=_evaluationResult - In the implementation block
+(id)buildMediaQueryList:(id)arg1 offset:(unsigned long long)arg2 consumed:(unsigned long long*)arg3 ;
+(id)buildMediaQuery:(id)arg1 offset:(unsigned long long)arg2 consumed:(unsigned long long*)arg3 ;
+(id)buildMediaQueryExpression:(id)arg1 ;
+(id)mediaQueryFromTokenList:(id)arg1 ;
-(id)description;
-(BOOL)evaluate;
-(IKCSSMediaQueryList *)queryList;
-(id)initWithQueryList:(id)arg1 ;
-(id)queryExpression;
-(void)setNeedsReEvaluation;
-(BOOL)evaluated;
-(BOOL)evaluationResult;
@end


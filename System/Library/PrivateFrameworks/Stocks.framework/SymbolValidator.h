/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Stocks/YQLRequest.h>

@class NSArray;

@interface SymbolValidator : YQLRequest {

	NSArray* _symbols;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)parseData:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)didParseData;
-(id)aggregateDictionaryDomain;
-(void)validateSymbol:(id)arg1 withMaxResults:(int)arg2 ;
@end


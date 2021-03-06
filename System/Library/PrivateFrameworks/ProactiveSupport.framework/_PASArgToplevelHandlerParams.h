/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _PASArgParser, NSDictionary, NSArray;

@interface _PASArgToplevelHandlerParams : NSObject {

	_PASArgParser* _parser;
	NSDictionary* _options;
	NSArray* _positionalArguments;

}

@property (nonatomic,readonly) _PASArgParser * parser;                     //@synthesize parser=_parser - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;                     //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSArray * positionalArguments;              //@synthesize positionalArguments=_positionalArguments - In the implementation block
-(NSDictionary *)options;
-(_PASArgParser *)parser;
-(NSArray *)positionalArguments;
-(id)initWithParser:(id)arg1 options:(id)arg2 positionalArguments:(id)arg3 ;
@end


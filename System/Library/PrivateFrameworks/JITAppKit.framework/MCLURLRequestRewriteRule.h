/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSRegularExpression;

@interface MCLURLRequestRewriteRule : NSObject {

	/*^block*/id _block;
	float _priority;
	NSString* _name;
	NSRegularExpression* _matchPattern;

}

@property (nonatomic,copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) float priority;                                    //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) NSRegularExpression * matchPattern;              //@synthesize matchPattern=_matchPattern - In the implementation block
+(id)urlRequestRewriteRuleWithMatchPattern:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(float)priority;
-(void)setPriority:(float)arg1 ;
-(id)initWithMatchExpression:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)rewriteURLRequest:(id)arg1 ;
-(NSRegularExpression *)matchPattern;
@end


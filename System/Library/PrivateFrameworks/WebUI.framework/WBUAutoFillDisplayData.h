/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface WBUAutoFillDisplayData : NSObject {

	NSString* _label;
	NSArray* _fillMatches;

}

@property (nonatomic,retain) NSString * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * valueString; 
@property (nonatomic,readonly) NSString * property; 
@property (nonatomic,copy,readonly) NSArray * fillMatches;              //@synthesize fillMatches=_fillMatches - In the implementation block
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)valueString;
-(NSString *)property;
-(NSArray *)fillMatches;
-(id)addressStringForLabel:(id)arg1 ;
-(id)initWithLabel:(id)arg1 fillMatches:(id)arg2 ;
@end

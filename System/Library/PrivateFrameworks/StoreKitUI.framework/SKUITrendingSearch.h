/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:50 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SKUITrendingSearch : NSObject {

	NSString* _term;
	NSString* _URLString;

}

@property (nonatomic,retain) NSString * term;                   //@synthesize term=_term - In the implementation block
@property (nonatomic,retain) NSString * URLString;              //@synthesize URLString=_URLString - In the implementation block
-(NSString *)URLString;
-(void)setURLString:(NSString *)arg1 ;
-(NSString *)term;
-(void)setTerm:(NSString *)arg1 ;
@end


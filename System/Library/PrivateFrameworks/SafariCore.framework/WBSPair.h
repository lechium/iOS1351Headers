/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:35 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WBSPair : NSObject {

	id _first;
	id _second;

}

@property (nonatomic,readonly) id first;               //@synthesize first=_first - In the implementation block
@property (nonatomic,readonly) id second;              //@synthesize second=_second - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)second;
-(id)first;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
-(void)getFirst:(id*)arg1 second:(id*)arg2 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Celestial/Celestial-Structs.h>
@interface BWStillImageCaptureDelegateCallbackInfo : NSObject {

	unsigned _flag;
	SCD_Struct_BW2 _pts;
	BOOL _isPreBracketFrame;

}

@property (nonatomic,readonly) unsigned flag;                       //@synthesize flag=_flag - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW2 pts;                  //@synthesize pts=_pts - In the implementation block
@property (nonatomic,readonly) BOOL isPreBracketFrame;              //@synthesize isPreBracketFrame=_isPreBracketFrame - In the implementation block
-(id)initWithFlag:(unsigned)arg1 ;
-(unsigned)flag;
-(id)initWithFlag:(unsigned)arg1 pts:(SCD_Struct_BW2)arg2 isPreBracketFrame:(BOOL)arg3 ;
-(SCD_Struct_BW2)pts;
-(BOOL)isPreBracketFrame;
@end


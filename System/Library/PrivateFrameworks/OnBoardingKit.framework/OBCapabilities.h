/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:54 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface OBCapabilities : NSObject {

	BOOL _preventURLDataDetection;
	BOOL _preventOpeningSafari;

}

@property (assign,nonatomic) BOOL preventURLDataDetection;              //@synthesize preventURLDataDetection=_preventURLDataDetection - In the implementation block
@property (assign,nonatomic) BOOL preventOpeningSafari;                 //@synthesize preventOpeningSafari=_preventOpeningSafari - In the implementation block
+(id)sharedCapabilities;
-(BOOL)preventOpeningSafari;
-(BOOL)preventURLDataDetection;
-(BOOL)isWAPI;
-(void)setPreventURLDataDetection:(BOOL)arg1 ;
-(void)setPreventOpeningSafari:(BOOL)arg1 ;
@end

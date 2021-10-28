/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ARUICelebration : NSObject {

	float _time;
	 _topColor;
	 _bottomColor;
	 _contrastColor;

}

@property (nonatomic,readonly) float time; 
-(unsigned long long)type;
-(id)_init;
-(float)time;
-(void)endWithCompletion:(/*^block*/id)arg1 ;
-(void)update:(double)arg1 ;
-(void)setTopColor:;
-(void)storeCelebration:(id)arg1 withRing:(id)arg2 ;
-(void)setBottomColor:;
-(void)setContrastColor:;
-(void*)timeBytes;
@end

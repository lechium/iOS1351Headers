/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:29 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class LPSize;

@interface LPVideoPlayButtonStyle : NSObject {

	LPSize* _size;
	LPSize* _backgroundSize;
	double _disabledOpacity;

}

@property (nonatomic,retain) LPSize * size;                        //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) LPSize * backgroundSize;              //@synthesize backgroundSize=_backgroundSize - In the implementation block
@property (assign,nonatomic) double disabledOpacity;               //@synthesize disabledOpacity=_disabledOpacity - In the implementation block
-(id)init;
-(LPSize *)size;
-(void)setSize:(LPSize *)arg1 ;
-(LPSize *)backgroundSize;
-(double)disabledOpacity;
-(void)setBackgroundSize:(LPSize *)arg1 ;
-(void)setDisabledOpacity:(double)arg1 ;
@end

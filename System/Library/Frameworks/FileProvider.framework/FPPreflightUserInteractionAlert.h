/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FPStringFormat;

@interface FPPreflightUserInteractionAlert : NSObject {

	BOOL _enableContinue;
	FPStringFormat* _titleFormat;
	FPStringFormat* _subtitleFormat;
	FPStringFormat* _continueCaptionFormat;
	FPStringFormat* _cancelCaptionFormat;

}

@property (nonatomic,retain) FPStringFormat * titleFormat;                        //@synthesize titleFormat=_titleFormat - In the implementation block
@property (nonatomic,retain) FPStringFormat * subtitleFormat;                     //@synthesize subtitleFormat=_subtitleFormat - In the implementation block
@property (nonatomic,retain) FPStringFormat * continueCaptionFormat;              //@synthesize continueCaptionFormat=_continueCaptionFormat - In the implementation block
@property (nonatomic,retain) FPStringFormat * cancelCaptionFormat;                //@synthesize cancelCaptionFormat=_cancelCaptionFormat - In the implementation block
@property (assign,nonatomic) BOOL enableContinue;                                 //@synthesize enableContinue=_enableContinue - In the implementation block
+(id)alertFromDictionary:(id)arg1 localizationLookup:(id)arg2 ;
-(void)setTitleFormat:(FPStringFormat *)arg1 ;
-(void)setSubtitleFormat:(FPStringFormat *)arg1 ;
-(FPStringFormat *)titleFormat;
-(void)setContinueCaptionFormat:(FPStringFormat *)arg1 ;
-(void)setCancelCaptionFormat:(FPStringFormat *)arg1 ;
-(void)setEnableContinue:(BOOL)arg1 ;
-(FPStringFormat *)subtitleFormat;
-(FPStringFormat *)continueCaptionFormat;
-(FPStringFormat *)cancelCaptionFormat;
-(BOOL)enableContinue;
@end


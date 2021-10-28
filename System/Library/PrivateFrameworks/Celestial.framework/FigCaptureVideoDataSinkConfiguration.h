/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSinkConfiguration.h>

@interface FigCaptureVideoDataSinkConfiguration : FigCaptureSinkConfiguration {

	BOOL _discardsLateVideoFrames;
	BOOL _derivedFromPreview;

}

@property (assign,nonatomic) BOOL discardsLateVideoFrames;              //@synthesize discardsLateVideoFrames=_discardsLateVideoFrames - In the implementation block
@property (assign,nonatomic) BOOL derivedFromPreview;                   //@synthesize derivedFromPreview=_derivedFromPreview - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDiscardsLateVideoFrames:(BOOL)arg1 ;
-(void)setDerivedFromPreview:(BOOL)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)sinkType;
-(BOOL)derivedFromPreview;
-(BOOL)discardsLateVideoFrames;
@end

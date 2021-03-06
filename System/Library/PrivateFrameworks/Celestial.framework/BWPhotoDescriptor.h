/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Celestial/Celestial-Structs.h>
@class NSString, NSDate, NSTimeZone;

@interface BWPhotoDescriptor : NSObject {

	NSString* _photoIdentifier;
	unsigned _processingFlags;
	NSDate* _time;
	BOOL _timeHasBeenSet;
	NSTimeZone* _timeZone;
	BOOL _timeZoneHasBeenSet;
	SCD_Struct_BW2 _presentationTimeStamp;
	BOOL _presentationTimeStampHasBeenSet;

}

@property (nonatomic,readonly) NSString * photoIdentifier;                      //@synthesize photoIdentifier=_photoIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned processingFlags;                        //@synthesize processingFlags=_processingFlags - In the implementation block
@property (nonatomic,retain) NSDate * time; 
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (assign,nonatomic) SCD_Struct_BW2 presentationTimeStamp; 
-(void)dealloc;
-(id)description;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSDate *)time;
-(void)setTime:(NSDate *)arg1 ;
-(unsigned)processingFlags;
-(NSString *)photoIdentifier;
-(void)setPresentationTimeStamp:(SCD_Struct_BW2)arg1 ;
-(id)initWithPhotoIdentifier:(id)arg1 processingFlags:(unsigned)arg2 ;
-(SCD_Struct_BW2)presentationTimeStamp;
-(id)initWithPhotoIdentifier:(id)arg1 processingFlags:(unsigned)arg2 time:(id)arg3 timeZone:(id)arg4 presentationTimeStamp:(SCD_Struct_BW2)arg5 ;
@end


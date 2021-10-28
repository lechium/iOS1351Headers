/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Celestial/Celestial-Structs.h>
@class NSArray;

@interface BWCaptureDevice : NSObject

@property (nonatomic,readonly) int position; 
@property (nonatomic,readonly) OpaqueCMClockRef clock; 
@property (nonatomic,readonly) NSArray * supportedFormats; 
@property (assign,nonatomic) float maximumFrameRate; 
@property (assign,nonatomic) float minimumFrameRate; 
-(int)position;
-(OpaqueCMClockRef)clock;
-(NSArray *)supportedFormats;
-(float)maximumFrameRate;
-(void)setMaximumFrameRate:(float)arg1 ;
-(int)captureStillImageNowWithSettings:(id)arg1 ;
-(float)minimumFrameRate;
-(void)setActiveFormatIndex:(long long)arg1 ;
-(long long)activeFormatIndex;
-(void)setMinimumFrameRate:(float)arg1 ;
-(id)copyCurrentFrameStatistics;
-(id)stillImageCaptureSettingsWithID:(long long)arg1 captureType:(int)arg2 deliverProcessedImage:(BOOL)arg3 deliverOriginalImage:(BOOL)arg4 deliverSushiRaw:(BOOL)arg5 bravoConstituentImageDeliveryDeviceTypes:(id)arg6 includePreBracketedEV0ForProcessing:(BOOL)arg7 clientBracketSettings:(id)arg8 captureFlags:(unsigned long long)arg9 userInitiatedRequestPTS:(SCD_Struct_BW2)arg10 frameStatisticsByPortType:(id)arg11 ;
@end

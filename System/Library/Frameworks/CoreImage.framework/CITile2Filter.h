/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CITileFilter.h>

@class NSNumber;

@interface CITile2Filter : CITileFilter {

	NSNumber* inputAcuteAngle;

}

@property (nonatomic,retain) NSNumber * inputAcuteAngle; 
+(id)customAttributes;
-(id)outputImage;
-(NSNumber *)inputAcuteAngle;
-(double)_roiArea;
-(vec2)_roiCenter;
-(id)_singlePixelImage;
-(CGRect)_roiRect;
-(void)setInputAcuteAngle:(NSNumber *)arg1 ;
@end


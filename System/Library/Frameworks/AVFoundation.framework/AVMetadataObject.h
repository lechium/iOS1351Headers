/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFoundation/AVFoundation-Structs.h>
@class AVMetadataObjectInternal, NSString;

@interface AVMetadataObject : NSObject {

	AVMetadataObjectInternal* _objectInternal;

}

@property (readonly) SCD_Struct_AV7 time; 
@property (readonly) SCD_Struct_AV7 duration; 
@property (readonly) CGRect bounds; 
@property (readonly) NSString * type; 
+(id)derivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 ;
-(id)init;
-(void)dealloc;
-(NSString *)type;
-(SCD_Struct_AV7)duration;
-(id)input;
-(SCD_Struct_AV7)time;
-(CGRect)bounds;
-(id)originalMetadataObject;
-(id)initWithType:(id)arg1 time:(SCD_Struct_AV7)arg2 duration:(SCD_Struct_AV7)arg3 bounds:(CGRect)arg4 originalMetadataObject:(id)arg5 sourceCaptureInput:(id)arg6 ;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 ;
@end


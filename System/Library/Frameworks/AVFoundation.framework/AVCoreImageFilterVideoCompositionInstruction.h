/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVVideoCompositionInstruction.h>

@class NSArray, NSString;

@interface AVCoreImageFilterVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction> {

	SCD_Struct_AV8 _timeRange;
	NSArray* _requiredSourceTrackIDs;
	/*^block*/id _handler;
	CGAffineTransform _sourceTrackPreferredTransform;

}

@property (nonatomic,readonly) id handler;                                                 //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) CGAffineTransform sourceTrackPreferredTransform;              //@synthesize sourceTrackPreferredTransform=_sourceTrackPreferredTransform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_AV8 timeRange;                                   //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,readonly) BOOL enablePostProcessing; 
@property (nonatomic,readonly) BOOL containsTweening; 
@property (nonatomic,readonly) NSArray * requiredSourceTrackIDs;                           //@synthesize requiredSourceTrackIDs=_requiredSourceTrackIDs - In the implementation block
@property (nonatomic,readonly) int passthroughTrackID; 
-(id)init;
-(void)dealloc;
-(id)handler;
-(SCD_Struct_AV8)timeRange;
-(BOOL)enablePostProcessing;
-(BOOL)containsTweening;
-(NSArray *)requiredSourceTrackIDs;
-(int)passthroughTrackID;
-(id)initWithTimeRange:(SCD_Struct_AV8)arg1 sourceTrackIDs:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setSourceTrackPreferredTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)sourceTrackPreferredTransform;
@end

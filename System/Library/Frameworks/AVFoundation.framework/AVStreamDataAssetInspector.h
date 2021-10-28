/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetInspector.h>

@class NSArray;

@interface AVStreamDataAssetInspector : AVAssetInspector {

	NSArray* _trackIDs;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(SCD_Struct_AV7)duration;
-(BOOL)providesPreciseDurationAndTiming;
-(id)trackIDs;
-(long long)trackCount;
-(id)initWithTrackIDs:(id)arg1 ;
@end

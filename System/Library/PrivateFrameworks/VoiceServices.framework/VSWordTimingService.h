/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface VSWordTimingService : NSObject {

	NSDictionary* _wordTimings;

}

@property (nonatomic,retain) NSDictionary * wordTimings;              //@synthesize wordTimings=_wordTimings - In the implementation block
-(void)setWordTimings:(NSDictionary *)arg1 ;
-(NSDictionary *)wordTimings;
-(id)timingPlistForLanguage:(id)arg1 ;
-(id)timingInfosFrom:(id)arg1 withText:(id)arg2 ;
-(id)estimatedTTSWordTimingForText:(id)arg1 withLanguage:(id)arg2 withGender:(long long)arg3 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:29 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LPFetcherResponse.h>

@class LPAudio;

@interface LPFetcherAudioResponse : LPFetcherResponse {

	LPAudio* _audio;

}

@property (nonatomic,retain,readonly) LPAudio * audio;              //@synthesize audio=_audio - In the implementation block
+(id)audioPropertiesForFetcher:(id)arg1 ;
-(id)initWithAudio:(id)arg1 fetcher:(id)arg2 ;
-(LPAudio *)audio;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:06 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libvoiced_tts.dylib/OPTTSTextToSpeechRouterStreamingStreamingRequest.h>

@class OPTTSStartTextToSpeechStreamingRequest;

@interface OPTTSMutableTextToSpeechRouterStreamingStreamingRequest : OPTTSTextToSpeechRouterStreamingStreamingRequest

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) OPTTSStartTextToSpeechStreamingRequest * contentAsOPTTSStartTextToSpeechStreamingRequest; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)content_type;
-(OPTTSStartTextToSpeechStreamingRequest *)contentAsOPTTSStartTextToSpeechStreamingRequest;
-(void)setContent_type:(long long)arg1 ;
-(void)setContentAsOPTTSStartTextToSpeechStreamingRequest:(OPTTSStartTextToSpeechStreamingRequest *)arg1 ;
@end


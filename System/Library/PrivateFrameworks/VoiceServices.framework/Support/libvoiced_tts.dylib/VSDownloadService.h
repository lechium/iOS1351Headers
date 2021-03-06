/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:06 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VSDownloadService : NSObject {

	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)inProgressDownloadVoiceKeys;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(void)cancelDownloadForAssets:(id)arg1 ;
-(void)updateVoicesAndVoiceResources;
-(void)updateVoiceIfNeeded:(id)arg1 ;
-(void)updateVoiceResourcesIfNeeded:(id)arg1 ;
@end


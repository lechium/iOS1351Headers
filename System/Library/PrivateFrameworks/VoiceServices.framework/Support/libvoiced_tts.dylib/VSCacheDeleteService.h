/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:06 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VSCacheDeleteService : NSObject
+(id)sharedService;
-(BOOL)registerCacheDelete;
-(long long)totalSizeOfAssets:(id)arg1 ;
-(id)purgeableVoiceAssetsWithInfo:(id)arg1 urgency:(int)arg2 ;
-(id)purgeImpl:(id)arg1 urgency:(int)arg2 ;
-(id)purgeable:(id)arg1 urgency:(int)arg2 ;
-(id)purge:(id)arg1 urgency:(int)arg2 ;
-(id)periodic:(id)arg1 urgency:(int)arg2 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HapticDictionaryReader : NSObject {

	unsigned long long _urlIndex;

}
-(id)parseEvent:(id)arg1 ;
-(id)parseParam:(id)arg1 ;
-(id)parseParamCurve:(id)arg1 ;
-(id)parseEventParams:(id)arg1 ;
-(id)parseParamCurveControlPoints:(id)arg1 ;
-(BOOL)verifyVersion:(id)arg1 ;
-(id)scanForEmbeddedURLs:(id)arg1 ;
-(BOOL)parseEventsAndParameters:(id)arg1 reply:(/*^block*/id)arg2 ;
@end


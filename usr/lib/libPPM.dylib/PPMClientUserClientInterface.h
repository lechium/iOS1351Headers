/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libPPM.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <libPPM.dylib/libPPM.dylib-Structs.h>
@interface PPMClientUserClientInterface : NSObject {

	BOOL _attribute;
	unsigned _connect;

}

@property (readonly) BOOL attribute;                //@synthesize attribute=_attribute - In the implementation block
@property (readonly) unsigned connect;              //@synthesize connect=_connect - In the implementation block
-(BOOL)attribute;
-(unsigned)connect;
-(int)openPPMUserClient:(unsigned)arg1 clientNumber:(int)arg2 ;
-(int)admissionCheckOfValuePPM:(unsigned)arg1 clientNumber:(unsigned)arg2 level:(int)arg3 result:(unsigned*)arg4 ;
-(int)stopActivity:(unsigned)arg1 clientNumber:(unsigned)arg2 level:(int)arg3 ;
-(int)startActivity:(unsigned)arg1 clientNumber:(unsigned)arg2 level:(int)arg3 ;
-(int)pushTelemetry:(unsigned)arg1 userDictRef:(UserClientTelemetryDict*)arg2 ;
-(int)setBudget:(unsigned)arg1 clientNumber:(unsigned)arg2 value:(unsigned)arg3 ;
-(int)setDebugFlag:(unsigned)arg1 value:(unsigned)arg2 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AACCore.framework/AACCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AEOSGestalt;

@interface AEPreferencesProvider : NSObject {

	AEOSGestalt* _OSGestalt;

}

@property (nonatomic,readonly) AEOSGestalt * OSGestalt;              //@synthesize OSGestalt=_OSGestalt - In the implementation block
-(id)init;
-(id)makePreferences;
-(AEOSGestalt *)OSGestalt;
@end

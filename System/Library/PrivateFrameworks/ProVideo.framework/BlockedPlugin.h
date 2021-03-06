/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface BlockedPlugin : NSObject {

	NSString* _bundleName;
	NSString* _plugName;
	NSString* _plugVersion;

}

@property (readonly) NSString * bundleName;               //@synthesize bundleName=_bundleName - In the implementation block
@property (readonly) NSString * plugName;                 //@synthesize plugName=_plugName - In the implementation block
@property (readonly) NSString * plugVersion;              //@synthesize plugVersion=_plugVersion - In the implementation block
-(void)dealloc;
-(NSString *)bundleName;
-(id)init:(id)arg1 plugName:(id)arg2 plugVersion:(id)arg3 ;
-(NSString *)plugName;
-(NSString *)plugVersion;
@end


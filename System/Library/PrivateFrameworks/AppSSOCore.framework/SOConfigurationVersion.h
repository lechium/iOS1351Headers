/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SOConfigurationVersion : NSObject {

	long long _mode;
	int _token;
	unsigned long long _version;

}

@property (nonatomic,readonly) long long version; 
+(void)reset;
-(void)dealloc;
-(unsigned long long)_state;
-(long long)version;
-(id)initWithMode:(long long)arg1 ;
-(void)increaseVersionWithMessage:(id)arg1 ;
-(void)setAppSSOUnavailable;
-(long long)checkVersion;
-(void)_setStateAndNotify:(unsigned long long)arg1 ;
@end

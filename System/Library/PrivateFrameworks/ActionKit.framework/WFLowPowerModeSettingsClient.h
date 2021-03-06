/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/WFSettingsClient.h>
#import <libobjc.A.dylib/WFBooleanStateSetting.h>

@class _CDBatterySaver, NSString;

@interface WFLowPowerModeSettingsClient : WFSettingsClient <WFBooleanStateSetting> {

	_CDBatterySaver* _batterySaver;

}

@property (nonatomic,readonly) _CDBatterySaver * batterySaver;              //@synthesize batterySaver=_batterySaver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)createClientWithCompletionHandler:(/*^block*/id)arg1 ;
-(_CDBatterySaver *)batterySaver;
-(void)getStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setState:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithBatterySaver:(id)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SIMToolkitUI/STKTextSessionData.h>

@interface STKNotifySessionData : STKTextSessionData {

	long long _notifyType;

}

@property (nonatomic,readonly) long long notifyType;              //@synthesize notifyType=_notifyType - In the implementation block
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(long long)notifyType;
-(id)initWithText:(id)arg1 notifyType:(long long)arg2 ;
@end


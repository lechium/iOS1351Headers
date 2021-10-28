/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:45 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LocationSupport/CLSettingsManagerInternal.h>
#import <libobjc.A.dylib/CLSettingsManagerProtocol.h>

@class NSString;

@interface CLSettingsManager : CLSettingsManagerInternal <CLSettingsManagerProtocol> {

	id _notificationObserver;

}

@property (nonatomic,retain) id notificationObserver;               //@synthesize notificationObserver=_notificationObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
-(id)init;
-(void)refresh;
-(id)syncgetSetValue:(id)arg1 forKey:(id)arg2 withoutNotifying:(R)arg3 :(id)arg4 ;
-(void)beginService;
-(void)endService;
-(void)setNotificationObserver:(id)arg1 ;
-(id)notificationObserver;
@end

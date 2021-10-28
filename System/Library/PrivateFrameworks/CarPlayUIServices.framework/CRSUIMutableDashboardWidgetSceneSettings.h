/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <UIKitCore/UIMutableApplicationSceneSettings.h>
#import <libobjc.A.dylib/CRSUIDashboardWidgetSceneSettings.h>

@class NSString;

@interface CRSUIMutableDashboardWidgetSceneSettings : UIMutableApplicationSceneSettings <CRSUIDashboardWidgetSceneSettings>

@property (assign,nonatomic) unsigned long long widgetStyle; 
@property (nonatomic,copy) NSObject*<OS_xpc_object> endpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<OS_xpc_object>)endpoint;
-(void)setEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(unsigned long long)widgetStyle;
-(void)setWidgetStyle:(unsigned long long)arg1 ;
@end

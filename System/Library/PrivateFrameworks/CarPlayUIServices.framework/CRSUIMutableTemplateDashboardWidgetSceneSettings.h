/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <CarPlayUIServices/CRSUIMutableDashboardWidgetSceneSettings.h>
#import <libobjc.A.dylib/CRSUITemplateDashboardWidgetSceneSettings.h>

@class NSString;

@interface CRSUIMutableTemplateDashboardWidgetSceneSettings : CRSUIMutableDashboardWidgetSceneSettings <CRSUITemplateDashboardWidgetSceneSettings>

@property (nonatomic,copy) NSObject*<OS_xpc_object> templateEndpoint; 
@property (nonatomic,copy) NSString * proxiedApplicationBundleIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long widgetStyle; 
@property (nonatomic,copy,readonly) NSObject*<OS_xpc_object> endpoint; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<OS_xpc_object>)templateEndpoint;
-(NSString *)proxiedApplicationBundleIdentifier;
-(void)setProxiedApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setTemplateEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
@end

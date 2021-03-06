/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXRenderingConfigurationProvider.h>

@protocol FCNewsAppConfigurationManager;
@class SXRenderingConfiguration, NSString;

@interface NUANFRenderingConfigurationProvider : NSObject <SXRenderingConfigurationProvider> {

	SXRenderingConfiguration* _configuration;
	id<FCNewsAppConfigurationManager> _appConfigurationManager;

}

@property (nonatomic,readonly) id<FCNewsAppConfigurationManager> appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXRenderingConfiguration * configuration;                               //@synthesize configuration=_configuration - In the implementation block
-(SXRenderingConfiguration *)configuration;
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(id)initWithAppConfigurationManager:(id)arg1 ;
@end


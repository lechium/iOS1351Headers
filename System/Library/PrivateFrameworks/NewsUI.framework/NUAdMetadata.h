/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXPrerollAdMetadata.h>

@class NSString;

@interface NUAdMetadata : NSObject <SXPrerollAdMetadata> {

	NSString* _adImpressionIdentifier;
	NSString* _adCampaignId;
	NSString* _adLineId;
	NSString* _adCreativeId;

}

@property (nonatomic,readonly) NSString * adImpressionIdentifier;              //@synthesize adImpressionIdentifier=_adImpressionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * adCampaignId;                        //@synthesize adCampaignId=_adCampaignId - In the implementation block
@property (nonatomic,readonly) NSString * adLineId;                            //@synthesize adLineId=_adLineId - In the implementation block
@property (nonatomic,readonly) NSString * adCreativeId;                        //@synthesize adCreativeId=_adCreativeId - In the implementation block
-(NSString *)adCreativeId;
-(NSString *)adImpressionIdentifier;
-(NSString *)adCampaignId;
-(NSString *)adLineId;
-(id)initWithAdImpressionIdentifier:(id)arg1 adCampaignId:(id)arg2 adLineId:(id)arg3 adCreativeId:(id)arg4 ;
@end


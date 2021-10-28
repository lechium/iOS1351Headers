/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface LPTestingOverrides : NSObject
+(void)reset;
+(id)customLoader;
+(unsigned long long)forceImageLoadingScaleFactor;
+(id)forceContentSizeCategory;
+(BOOL)forceRTL;
+(id)forceSubsampleImagesToScreenSize;
+(void)setForceRTL:(BOOL)arg1 ;
+(void)setForceImageLoadingScaleFactor:(unsigned long long)arg1 ;
+(void)setForceSubsampleImagesToScreenSize:(id)arg1 ;
+(void)setForceContentSizeCategory:(id)arg1 ;
+(void)setForceAllowPreviewingFilesOutsideApplicationContainer:(BOOL)arg1 ;
+(BOOL)forceAllowPreviewingFilesOutsideApplicationContainer;
+(void)setCustomLoader:(id)arg1 ;
@end

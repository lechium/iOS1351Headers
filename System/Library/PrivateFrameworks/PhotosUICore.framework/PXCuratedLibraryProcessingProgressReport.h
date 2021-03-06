/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXCuratedLibraryProcessingProgressReport : NSObject
+(id)colorForNotEnriched;
+(id)colorForDefault;
+(id)colorForPartial;
+(id)colorForSceneComplete;
+(id)colorForComplete;
+(void)computeProgressWithResultBlock:(/*^block*/id)arg1 ;
+(void)computeBriefDescriptionWithResultBlock:(/*^block*/id)arg1 ;
+(void)computeFullDescriptionWithResultBlock:(/*^block*/id)arg1 ;
+(void)getLibraryProcessingProgressWithResult:(/*^block*/id)arg1 ;
+(void)getHighlightEnrichmentProgressWithResult:(/*^block*/id)arg1 ;
+(id)highlightEnrichmentProgressImageWithProgressReport:(SCD_Struct_PX31)arg1 ;
@end


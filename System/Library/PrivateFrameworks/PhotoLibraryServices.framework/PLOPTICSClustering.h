/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:59 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLDataDensityClustering.h>

@class NSProgress;

@interface PLOPTICSClustering : PLDataDensityClustering {

	NSProgress* _progress;

}
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)extractRootClusters:(id)arg1 inOriginalDataset:(id)arg2 inProgressBlock:(/*^block*/id)arg3 ;
-(id)extractSubClusters:(id)arg1 inDataset:(id)arg2 parentIndex:(long long)arg3 inProgressBlock:(/*^block*/id)arg4 ;
-(id)preprocessData:(id)arg1 ;
-(id)orderedDatasetByReachabilityDistance:(id)arg1 ;
-(id)prepareOrderedDatasetIndexRange:(NSRange)arg1 inDataset:(id)arg2 ;
-(void)updateNeighbors:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(long long)updateReachibilityDistance:(id)arg1 forIndex:(unsigned long long)arg2 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface KnowledgeGraphKit.MALearningStreamUtils : NSObject {

	 momentClassifier;
	 assetClassifier;

}
+(id)extractFeaturesForMomentNodes:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
+(id)extractFeaturesWithGraph:(id)arg1 mappedAssetFeatures:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)init;
-(id)initWithClasses:(id)arg1 momentFeatureVectors:(id)arg2 assetFeatureVectors:(id)arg3 ;
-(id)classifyMomentsWithInputFeatureVectors:(id)arg1 ;
-(id)classifyAssetsWithInputFeatureVectors:(id)arg1 ;
@end


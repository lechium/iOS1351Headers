/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PVUserDefaults : NSObject
+(unsigned)faceAlgorithmUmbrellaVersion;
+(unsigned)sceneAlgorithmUmbrellaVersion;
+(BOOL)personBuilderMergeCandidatesDisabled;
+(BOOL)personBuildingDisabled;
+(BOOL)quarantineTwinsOnAssetEnabled;
+(unsigned long long)minimumFaceGroupSizeForCreatingMergeCandidates;
+(BOOL)faceIDModelAlwaysRebuild;
+(unsigned long long)minimumSuggestionSize;
+(unsigned long long)faceIDModelRebuildPeriod;
+(BOOL)suggestionsLogEnabled;
+(int)_intValueForKey:(id)arg1 defaultValue:(int)arg2 ;
+(float)faceClusteringThreshold;
+(float)faceClusteringJunkThreshold;
+(float)faceClusteringAgeThreshold;
+(float)faceMergeFaceprintDistanceThreshold;
+(float)facePrimarySuggestionsThreshold;
+(unsigned long long)minFaceCountToTriggerClustering;
+(unsigned long long)maxFaceCountForClustering;
+(BOOL)faceClusteringDisabled;
+(BOOL)_boolValueForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
+(float)_floatValueForKey:(id)arg1 defaultValue:(float)arg2 ;
+(double)_doubleValueForKey:(id)arg1 defaultValue:(double)arg2 ;
+(BOOL)isBlacklistDisabled;
+(unsigned long long)advancedStatusMergeCandidateLimit;
+(unsigned long long)advancedStatusVerifiedPersonLimit;
@end

